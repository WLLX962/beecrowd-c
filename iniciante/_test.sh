#!/bin/sh
cc $1/test_suite_$1.c libs/wkh_*.c -Werror -Wextra -Wall -o ./outs/tests.out && ./outs/tests.out