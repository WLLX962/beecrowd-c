#!/bin/sh
cc $1/_main.c -Werror -Wextra -Wall -o ./outs/prod.out && ./outs/prod.out