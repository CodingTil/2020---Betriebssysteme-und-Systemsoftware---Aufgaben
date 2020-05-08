#!/bin/bash

# Basename
# Anzahl tabs
print_directory () {
    printf $
    for e in "$1"*; do
        if [ -f "$e" ]; then
            for i in $(seq 1 $2); do
                printf "\t";
            done
            printf "File: $e\n";
        fi
    done

    for e in "$1"*; do
        if [ -d "$e" ]; then
            for i in $(seq 1 $2); do
                printf "\t";
            done
            printf "Directory: $e\n"
            print_directory '"$e"/' $(($2+1))
        fi
    done
}

print_directory_2 () {
    Directory=$(ls -l $1 | grep "^d")
    printf $Directory
}

printf "Starting \n"
if [ $# -eq 0 ]; then
    print_directory "./" 0
else
    print_directory "$1" 0
fi
printf "Done \n"