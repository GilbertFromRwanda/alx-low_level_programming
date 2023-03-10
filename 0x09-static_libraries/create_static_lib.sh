#!/bin/bash

gcc -c -I *.c
ar rcs liball.a *.o
rm *.o
