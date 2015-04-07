#!/bin/bash

PROBLEM_ID=$1

if [ "${PROBLEM_ID}" != "" ]; then
    mkdir ${PROBLEM_ID}
    cp template.main.cpp ${PROBLEM_ID}/main.cpp
    cp template.Makefile.cpp ${PROBLEM_ID}/Makefile
else
    echo "$0 id"
fi
