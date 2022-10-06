#!/bin/bash
#check if a file exist
#and return the exit code

filename=$1
file $filename

echo "Exit code: $?"
