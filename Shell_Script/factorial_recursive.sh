:<<'question5'
Write a shell script named `factorial_recursive.sh` that takes a number as input and calculates its factorial using recursion.
question5

#!/bin/bash

# Take input
read -p "Enter a Number : " num

# recursive function
factorial(){
    if [ $1 -le 1 ]; then
        echo 1
    else
        recr=$(factorial $(( $1 - 1 )))
        echo $(echo "$recr * $1" | bc) # return statement
    fi
}

if [ $num -lt 0 ]; then
    echo "Factorial not defined for negative numbers."
    exit 1
fi

# function call
fact=$(factorial $num)

echo "Factorial of $num is : $fact"
