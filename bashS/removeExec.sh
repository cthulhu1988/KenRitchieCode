#!/bin/bash


find . -maxdepth 1 -perm -111 -type f -exec /bin/rm {} \;
