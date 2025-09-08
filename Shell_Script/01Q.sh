# Accept the first name, middle name, and last name of a person in variables fname, mname and # lname respectively. Greet the person (take his full name) using appropriate message.
#
#!/bin/bash

read -p "Enter First Name : " fname
read -p "Enter Middle Name : " mname
read -p "Enter Last Name : " lname

echo "Hello $fname $mname $lname, welcome!!."
