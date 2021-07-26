#!/bin/bash

rm TEST_OUTPUT
./script.py > TEST_OUTPUT
./vulnerable $(cat TEST_OUTPUT)
