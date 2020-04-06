#!/bin/sh
#fixhdmi
[ -r "$XMODMAP"    ] && xmodmap "$XMODMAP"
[ -r "$XRESOURCES" ] && xrdb "$XRESOURCES"
[ -r "$XPROFILE"   ] && . "$XPROFILE"
#nvidia-settings --load-config-only
xfce4-session > $LOGDIR/xfce4 2>&1
#startdwm "$LOGDIR/dwm_log"
#exec dwm
