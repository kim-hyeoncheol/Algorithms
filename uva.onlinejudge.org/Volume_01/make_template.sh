#!/bin/bash

PROBLEM_ID=$1

mkdir ${PROBLEM_ID}
cp template.Main.cpp ${PROBLEM_ID}/Main.cpp
cp template.Makefile.cpp ${PROBLEM_ID}/Makefile

