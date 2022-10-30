#!/bin/bash

sortnumbers()
{
    local -a arr
    local b=1
    arr=("$@")
    size=${#arr[@]}
    #echo $size

   
flag=1;
for (( index = 0; i < $size-1; index++ ))
do
    flag=0;
    for ((j = 0; j < $size-1-$index; j++ ))
    do
        if [[ ${arr[$j]} -gt ${arr[$j+1]} ]]
        then
            temp=${arr[$j]};
            arr[$j]=${arr[$j+1]};
            arr[$j+1]=$temp;
            flag=1;
        fi
    done
    if [[ $flag -eq 0 ]]; then
          break;
    fi
done    

    echo ${arr[@]}    
}

declare -a arr
array=(100 20 57 61)

sortnumbers "${array[@]}"

echo $b
echo ${arr[@]}

#declare -a sortedarr
#sortedarr=$(sortnumbers "${arr[@]}")
#echo ${sortedarr[@]}