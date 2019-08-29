#!/bin/sh

cat "$HOME/.surf/history" | dmenu -l 10 -i | cut -d ' ' -f 3
