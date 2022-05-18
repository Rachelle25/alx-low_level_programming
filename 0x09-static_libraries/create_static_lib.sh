#!/bin/bash
gcc -c *.c
ar -rc Liball.a *.o
ranlib Liball.a
