# Write a shell script named `count_words.sh` that takes a filename as input and counts the number of words in that file.

#!/bin/bash

# if file doesn't exist in current directory
if [ $# -eq 0 ]; then
    echo "Use Filename as argument"
    exit 1;
fi

# checking count for each file
for i in $@; do
    if [ ! -f "$i" ]; then
        echo "File not found"
        exit 1
    fi
    
    # using '<' so that the filename doesnt show at the end
    count=$(wc -w < "$i")
    echo "Word count of "$i" is : $count"
done
