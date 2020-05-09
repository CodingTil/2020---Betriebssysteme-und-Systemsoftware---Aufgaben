#!/bin/bash

for e in $(ls); do
    echo $(stat -c '%s' "$e") "$e"
done