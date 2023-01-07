import os
import sys
import subprocess

def remove_squish_paths_and_run_again( squish_prefix ):
    """Squish's Python may not have Tkinter, so remove Squish's
    path entries from the PATH environment variable, and then run
    this complete command again as another process. That way any
    other Python installation (if any) should be used to run this
    script. (And "proper" Python installations typically have
    Tkinter.)

    Required modules:
        import os
        import subprocess
        import sys
    """

    # Get and unset SQUISH_PREFIX
    squish_prefix = os.environ[ "SQUISH_PREFIX" ]
    os.unsetenv( "SQUISH_PREFIX" )
    # Get PATH
    path_env = os.environ[ "PATH" ]
    # Split PATH to get paths
    paths = path_env.split( os.pathsep )
    # Loop over paths and concatenate the ones that do not start with SQUISH_PREFIX
    new_path = ""
    for p in paths:
        if p.startswith( squish_prefix ):
            print "Dropping Squish path from PATH:", p
        else:
            new_path += os.pathsep + p
    # Remove os.path.separator prefix
    new_path = new_path[ len( os.pathsep ): ]
    # Put PATH
    os.putenv( "PATH", new_path )

    # Execute original command
    args = sys.argv
    args.insert( 0, "python" )
    proc = subprocess.Popen( args=args, shell=True )
    proc.communicate()
    sys.exit( proc.returncode )

