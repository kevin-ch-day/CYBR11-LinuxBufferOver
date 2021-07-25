#!/bin/bash
# Disabling ASLP

echo 0 | tee /proc/sys/kernel/randomize_va_space
