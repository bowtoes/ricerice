#!/usr/bin/env sh

[ -r "$XMODMAP"    ] && xmodmap "$XMODMAP"
[ -r "$XRESOURCES" ] && xrdb "$XRESOURCES"
[ -r "$XPROFILE"   ] && . "$XPROFILE"
[ -r "$XPROFILE2"  ] && . "$XPROFILE2"
