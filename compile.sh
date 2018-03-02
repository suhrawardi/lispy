#!/usr/bin/env bash

cc -std=c99 -Wall "${1}.c" mpc.c -ledit -o "${1}"
