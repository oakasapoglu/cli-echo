#!/usr/bin/env bash

MY_ECHO="./cli"
SYS_ECHO="echo -e"

# Test cases
tests=(
  "Hello World"                      # simple words
  "Line1\nLine2"                     # newline
  "Column1\tColumn2"                 # tab
  "Path:\\folder\\file.txt"          # backslashes
  "Hello\nWorld\t!"                   # mixed escapes
  ""                                 # empty string
  "This is a test"                   # multiple words
  "Unknown\qSequence"                # unknown escape sequence
  "\nStartsWithNewline"              # string starting with newline
  "EndsWithNewline\n"                # string ending with newline
  "\tStartsWithTab"                  # string starting with tab
  "EndsWithTab\t"                     # string ending with tab
  "Multiple\nNewlines\nHere"         # multiple newlines
  "Multiple\tTabs\tHere"             # multiple tabs
  "\\EscapedBackslash\\"              # multiple backslashes
  "Mix\\nLiteral\\tEscape"           # literal backslash sequences
  "UnicodeTest: π ∑ λ"               # unicode characters
  "Quotes 'single' \"double\""       # quotes
  "SpecialChars !@#$%^&*()_+"       # special symbols
)


echo "Running direct comparison tests..."
echo "=============================="

for t in "${tests[@]}"; do
  # Capture outputs
  my_output=$($MY_ECHO "$t")
  sys_output=$($SYS_ECHO "$t")

  # Compare and print boolean
  if [ "$my_output" == "$sys_output" ]; then
    result=true
  else
    result=false
  fi

  echo "Test: '$t' -> $result"
done

echo "=============================="
echo "See that our program is not fully compatible with the echo command."
echo "Even though our program covers some escape sequences (\\n, \\t)"
echo "It does not cover \\f ."
