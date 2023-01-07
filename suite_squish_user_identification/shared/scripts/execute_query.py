import codecs
import os
import sys

try:
    import sqlite3
except:
    pass

import squishpyutil

def execute_query( db_name, query, test_mode=False ):
    connection = None
    cursor = None
    if test_mode:
        connection = sqlite3.connect( ":memory:" )
        cursor = connection.cursor()
        cursor.execute( "create table characters(idx, ch)" )
        cursor.executemany("insert into characters(Idx, ch) values (?, ?)", [
            ("1", "A first test"),
            ("2", "A second, but short, test"),
            ])
    else:
        connection = sqlite3.connect( db_name )
        cursor = connection.cursor()

    result = cursor.execute( query ).fetchall()
    connection.close()
    return result

def write_file_lines_utf8( file_name, content_lines ):
    f = codecs.open( file_name, "w", "utf8" )
    f.writelines( content_lines )
    f.close()

def read_file_utf8( file_name ):
    f = codecs.open( file_name, "r", "utf8" )
    res = f.read()
    f.close()
    return res

def escaped_csv_string( s ):
    if "," not in s:
        return s
    s = s.replace( '"', '""' )
    return '"' + s + '"'

def result_to_csv_lines( result ):
    header_line = ""
    for i in range( len( result[ 0 ] ) ):
        header_line += ",Column%s" % (i+1)
    header_line = header_line[ 1: ] + "\n"

    csv_lines = [ header_line ]
    for row in result:
        csv_line = ""
        for column_value in row:
            csv_line += ",%s" % escaped_csv_string( column_value )
        csv_line = csv_line[ 1: ] + "\n"
        csv_lines.append( csv_line )
    return csv_lines

if __name__ == "__main__":
    argv = sys.argv

    test_mode = False
    if len( argv ) == 5 and argv[ 4 ] == "--testmode":
        test_mode = True
        argv = argv[:4]

    if "SQUISH_PREFIX" in os.environ:
        squishpyutil.remove_squish_paths_and_run_again( os.environ[ "SQUISH_PREFIX" ] )
    elif len( argv ) == 4:
        query = read_file_utf8( argv[ 2 ] )
        result = execute_query( argv[ 1 ], query, test_mode )
        result_csv_lines = result_to_csv_lines( result )
        write_file_lines_utf8( argv[ 3 ], result_csv_lines )
    else:
        print "USAGE: python %s db_name input_file_name_utf8 output_file_name_utf8 [--testmode]" % sys.argv[ 0 ]
