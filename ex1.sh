#!/bin/bash
if [ -z "$1" ]
then 
	echo "No input"
else
	> ex1.txt
	echo "$1" > ex1.txt
	lshw >> ex1.txt
fi
