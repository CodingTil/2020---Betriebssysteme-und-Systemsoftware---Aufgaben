#!/bin/bash

for e in $(ls); do
    echo "$e" $(stat -c '%s' "$e")
done