#!/bin/bash

gcc -g -fno-stack-protector -z execstack -o program program.c
