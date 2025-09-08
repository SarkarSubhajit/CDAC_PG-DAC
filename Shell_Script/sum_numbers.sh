:<<'question4'
Write a shell script named `sum_numbers.sh` that takes a number as input and calculates the sum of all numbers from 1 to that number.
question4

#!/bin/bash

# Set sum to 0, Takes input and stores it in num variable
sum=0
read -p "Enter a Number: " num

# loop to add adding numbers in sequence upto input
for (( i=1; i<=num; i++ )); do
    sum=$(( sum + i ))
done

# another way to do it : sum=$(( num * (num+1) / 2 ))

echo "Sum upto $num from 1 is : $sum"
