#!/bin/bash

#variables

numbersfile=numbers.txt
declare -A nums
index=0
source sortnumbers.sh

#Store values of the numbers.txt in the array : 

while read num
do
#echo $num
nums[$index]=$num
index=$((index+1))
done < $numbersfile

echo -e "\n------"
#check the values stored : 
#echo ${nums[@]}

declare -a sortednums 
sortednums=$(sortnumbers "$nums")
#echo ${sortednums[@]}
