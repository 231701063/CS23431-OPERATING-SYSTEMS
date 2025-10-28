#!/bin/bash
# Arithmetic Operations using expr

echo "Enter first number: "
read a
echo "Enter second number: "
read b

sum=`expr $a + $b`
diff=`expr $a - $b`
prod=`expr $a \* $b`
quot=`expr $a / $b`

echo "Sum: $sum"
echo "Difference: $diff"
echo "Product: $prod"
echo "Quotient: $quot"
