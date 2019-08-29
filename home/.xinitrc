#!/bin/sh
[ -r "$HOME/.Xresources" ] && xrdb "$HOME/.Xresources"
[ -r "$HOME/.Xcolor" ] && xrdb -merge "$HOME/.Xcolor"
[ -r "$HOME/.Xprofile" ] && . "$HOME/.Xprofile"
[ -r "$HOME/.Xmodmap" ] && xmodmap "$HOME/.Xmodmap"
nvidia-settings --load-config-only
startdwm "$HOME/.log/dwm_log"
#exec dwm
