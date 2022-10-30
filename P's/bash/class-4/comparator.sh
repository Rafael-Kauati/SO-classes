#!/bin/bash
comparator(){
gnumber=$1

if [[ $2 -gt $1 ]] ; then
    gnumber=$2
fi

echo $gnumber
return $gnumber

}

export -f comparator
./chmod_auto.sh comparator.sh 
./comparator.sh