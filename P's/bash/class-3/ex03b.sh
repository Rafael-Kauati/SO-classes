#!/bin/bash
echo "Checking..."
o=$1
i=0
readable=false
writeable=false
executable=false
if [[ -f $o ]]
then
    printf "$1 existe\ne é um arquivo\n"
    while [ $i -lt 3]
    do
        if [ $i -eq 1]
        then
            # verificar se é um arquivo com permissão de leitura
            if [[ -r $o ]]
            then
            readable=true
            echo "readable"
            fi
         fi   
        elif [ $i -eq 2]
        then    
            #verificar se é um arquivo com permissão de escrita
            if [[ -w $o ]] 
            then
            writeable=true
            echo "writable"
            fi
         fi   
        elif [ $i -eq 3]
        then    
            #verificar se é um arquivo com permissão de escrita
            if [[ -x $o ]]
            then
            executable=true
            echo "executable"
            fi
        fi
        i=$(($i+1))
    done    
elif [[ -d $o ]] 
then
    printf "$o existe\ne é um directorio"
else
    echo "$o não existe"