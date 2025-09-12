#!/usr/bin/env bash

MY_ECHO="./cli"
SYS_ECHO="echo"

# Check if programs exist
if [ ! -x "$MY_ECHO" ]; then
  echo "Error: $MY_ECHO does not exist or is not executable."
  exit 1
fi

if ! command -v $SYS_ECHO &> /dev/null; then
  echo "Error: system command '$SYS_ECHO' not found."
  exit 1
fi

# Get iterations from command line, default to 100
iterations=${1:-100}

echo "Using $iterations iterations for timing."
echo "Supply a numeric argument to change iteration count."
echo

# Test string
test_string="Hello\nWorld\tThis is a longer test string for timing."

echo "Timing Chicken Scheme echo ($MY_ECHO) ..."
time for i in $(seq 1 $iterations); do
  $MY_ECHO "$test_string" > /dev/null
done

echo ""
echo "Timing system echo ($SYS_ECHO -e) ..."
time for i in $(seq 1 $iterations); do
  $SYS_ECHO -e "$test_string" > /dev/null
done
