<<question
shell script which will generate the O/P as follows

*
**
***
****
question

#!/bin/bash

for (( i=1;i<=4;i++ )) # rows
do 
    for (( j=1;j<=i;j++ )) # columns
    do
        echo -n "*" # '-n' for printing in the same line
    done
    echo # for next line
done
