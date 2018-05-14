#!/bin/sh

# diff 2 strings (like md5 sums) in terminal

test "string 1" = "string 2" && echo "identical"
# nothing will be displayed...

# the echo statement will execute only if both statements are true (if test exits with a code of 0).

test "string 1" = "string 1" && echo "identical"
# "indentical" will be echoed
