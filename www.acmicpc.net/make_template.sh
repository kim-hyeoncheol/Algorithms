#!/bin/bash

PROBLEM_ID=$1

if [ "${PROBLEM_ID}" != "" ]; then
    mkdir ${PROBLEM_ID}
    if [ $? -eq 0 ]; then
        cp template.main.cpp ${PROBLEM_ID}/main.cpp
        cp template.Makefile.cpp ${PROBLEM_ID}/Makefile
    else
        echo "${PROBLEM_ID} already exists.";
    fi
else
    echo "$0 id"
fi
