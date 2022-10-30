#!/bin/bash

printinfo()
{
echo -e "|--------------|\n"
echo "today's date :"
date
echo -e "\n|--------------|\n"
echo "User : "
echo $USER
echo -e "\n|--------------|\n"
echo "Host : "
hostname
echo -e "\n|------UwU-------|\n"

return 0

}
echo -e "\nEx04 b)\n"
printinfo
