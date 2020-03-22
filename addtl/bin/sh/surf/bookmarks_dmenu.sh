#!/usr/bin/env sh

cat "$HOME/.surf/bookmarks" | dmenu -l 10 -b -i
