#!/bin/bash

# Parameter is team size
teams () {
    FILE=$(sort teamnamen.txt | uniq -c)
    FILE="$(sed 's/^ *//' <<<$FILE)"
    #printf "${FILE}\n"
    AMOUNT=$(grep -c "^$1" "^$FILE")
    echo $AMOUNT
}

if [ $# -eq 0 ]; then
    teams 3
else
    teams $1
fi