#!/bin/bash
find . -type f -o -type d | wc -l | awk '{ SUM = $1 } END { print SUM }'
