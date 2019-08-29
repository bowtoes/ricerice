#!/bin/sh

cat "$HOME/.surf/bookmarks" | dmenu -l 10 -b -i
