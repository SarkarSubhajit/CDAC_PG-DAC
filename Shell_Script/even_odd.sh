: <<'question'
Write a shell script named `even_odd.sh` that takes a number as input and prints whether it is even or odd.
question

#!/bin/bash

# takes input from user
read -p "Enter a Number: " num

# checks even or odd using modulus
if [ $((num%2)) -eq 0 ]; then
    echo "$num is even"
else
    echo "$num is odd"
fi
