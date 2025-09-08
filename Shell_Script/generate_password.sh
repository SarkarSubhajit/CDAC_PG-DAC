# Write a shell script named `generate_password.sh` that takes a length as input and generates a random password of that length.

#!/bin/bash

read -p "Enter Password Length : " len

# regex validation for integer and non negative input
if ! [[ "$len" =~ ^[0-9]+$ ]] || [ $len -le 0 ]; then
    echo "Input has to be Positive Integer"
    exit 1
fi

# code to generate password
# tr = translate, -d = delete, -dc = delete except
# tr -dc means delete every characters except the ones specified
# /dev/urandom has all charcters in '0-255' range so we need to filter them
password=$(tr -dc 'A-Za-z0-9' < /dev/urandom | head -c $len)

echo "Password : $password"
