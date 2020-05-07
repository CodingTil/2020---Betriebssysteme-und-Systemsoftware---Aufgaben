#!/bin/bash

END=2

function print_tabs () {
    for i in $(seq 1 $END); do
    printf "\t"
    done
}

function print_directory () {
    FILES="$(ls -l | grep ^-)"
    while read -r line; do
    print_tabs
    printf "%s" $line
    printf "\n"
    done <<< $FILES
}
print_directory