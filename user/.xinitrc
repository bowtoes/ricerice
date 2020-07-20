#!/usr/bin/env sh

[ -r "$XMODMAP"    ] && xmodmap "$XMODMAP"
[ -r "$XRESOURCES" ] && xrdb "$XRESOURCES"
[ -r "$XPROFILE"   ] && . "$XPROFILE"
[ -r "$XPROFILE2"  ] && . "$XPROFILE2"
#nvidia-settings --load-config-only
#xfce4-session > $LOGDIR/xfce4 2>&1
#exec dwm
