#!/bin/sh

groups $FT_USER | cut -d ":" -f 2 | cut -c 2- | tr " " "," | tr -d '\n'
