#!/bin/sh
# delete.sh - test executing executable with parameters

echo "Here we go..."
name="main"
g++ python1.cpp -o $name
./$name Hello world and every day this is really long because it needs to be
result=$?
echo "The output is: $result"
echo
comd="python pytho.py "

count=0
while [ $count -lt $result ]
do
  comd="$comd arg"
  count=`echo "$count + 1" | bc`
done

$comd

echo "Done"
#------------------------------------------------
