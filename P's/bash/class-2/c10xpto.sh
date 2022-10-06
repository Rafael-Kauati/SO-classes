#!/bin/bash
range=$(seq 0 9)
#To check the range used: 
#echo $range
for index in $range
do
touch "xpto0${index}.dat"
done
