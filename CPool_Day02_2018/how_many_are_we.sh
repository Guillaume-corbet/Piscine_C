#!/bin/bash
if [ "$1" == "" ]; then
    cut -d";" -f 3 | wc -l
else
    cut -d";" -f 3 | grep $1 -i | wc -l
fi
