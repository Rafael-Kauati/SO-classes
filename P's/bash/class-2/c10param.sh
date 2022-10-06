#!/bin/bash
range=$(seq 0 9)
name=$1
#To check the range used:
#echo $range
for index in $range
do
touch "${name}0${index}.dat"
done
