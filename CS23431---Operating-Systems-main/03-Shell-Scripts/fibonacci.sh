 #!/bin/bash
# Fibonacci series using for loop

echo "Enter number of terms: "
read n

a=0
b=1

echo -n "Fibonacci: "
for (( i=0; i<n; i++ ))
do
    echo -n "$a "
    fn=$((a + b))
    a=$b
    b=$fn
done
echo
