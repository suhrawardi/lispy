#!/usr/bin/env bash

cc -std=c99 -Wall "${1}.c" -ledit -o "${1}"
