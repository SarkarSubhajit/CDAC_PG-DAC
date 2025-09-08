# Write a script that takes a command line argument and reports on its file type (regular file,directory file, etc.). For more than one# argument generate error message.

#!/bin/bash

# validation
if [ "$#" -ne 1 ]; then
    echo "Please provide only one argument"
    exit 1
fi

# checklist
if [ -f "$1" ]; then
    echo "$1 is a regular file"
elif [ -d "$1" ]; then
    echo "$1 is a directory"
else
    echo "File type is unknown"
fi
