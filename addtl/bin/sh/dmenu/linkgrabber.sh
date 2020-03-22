#!/usr/bin/env sh
regex='(((http|https|ftp|gopher)|mailto)[.:][^ >"\t]*|www\.[-a-z0-9.]+)[^ .,;\t>">\):]'
url=$(grep -Po "$regex" | dmenu -p "Go:" -w "$WINDOWID") || exit
$BROWSER "$url"
