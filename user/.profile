# ~/.profile

# Personal environment variables and startup programs.

# Personal aliases and functions should go in ~/.bashrc.  System wide
# environment variables and startup programs are in /etc/profile.
# System wide aliases and functions are in /etc/bashrc.

# Personal environment variables
#
# File permissions table
# This TUG syntax is not valid for any permissions command such as chmod
# It's only used for convenience in this file
#
# T = sticky bit
# U = SUID
# G = SGID
# (s)pecial
# (u)ser
# (g)roup
# (o)ther
# sugo
# 0--- = ---
# 1--- = --T
# 2--- = -G-
# 3--- = -GT
# 4--- = U--
# 5--- = U-T
# 6--- = UG-
# 7--- = UGT
# sugo
# -0xx = ---
# -1xx = --x
# -2xx = -w-
# -3xx = -wx
# -4xx = r--
# -5xx = r-x
# -6xx = rw-
# -7xx = rwx

# Each new file/directory has '0777 - umask' permissions
umask 0002

shopt -s autocd

append () {
    case ":$PATH:" in
        *:"$1":*)
            ;;
        *)
            PATH="${PATH:+$PATH:}$1"
    esac
}

appendrecurse ()
{
    rp="$(realpath "$1")"
    if [ -d "$rp" ] ; then
        for d in $(find -L "$rp" -type d -not -path '*.git*') ; do
            append "$d"
        done
    fi
}

append "$HOME/.gem/ruby/2.6.0/bin"
appendrecurse "$HOME/.local/bin"
appendrecurse "$HOME/bin"
appendrecurse "$HOME/scripts"
unset append
unset appendrecurse

PATH="$(echo "$PATH" | sed "s/::/:/g")"
export PATH
PS1=""
#PS1="$PS1\[\e[1;31m\]\u"
#PS1="$PS1\[\e[35m\]-"
#PS1="$PS1\[\e[33m\]\h"
#PS1="$PS1\[\e[0;39m\]:"
#PS1="$PS1\[\e[1;34m\]\W"
#PS1="$PS1\[\e[0;39;49m\]"
#PS1="$PS1\$(A=\$? ; if [ \$A -ne 0 ] ; then echo [\$A] ; fi)"
#PS1="$PS1\$"

path()
{
    if [ "$PWD" = "$HOME" ] ; then
        printf "~"
    else
        P_D=`pathdepth -d "$PWD"`
        M_D=3
        if [ $P_D -le $M_D ] ; then
            printf "$PWD"
        else
            printf ".../%s" "`echo "$PWD" | cut -d '/' -f$((P_D - M_D + 2))-`"
        fi
    fi
}

PS1="$PS1\[\e[00;31;49m\]\u"
PS1="$PS1\[\e[02;39;49m\]:"
PS1="$PS1\[\e[00;01;34;49m\]\$(path)"
PS1="$PS1\[\e[00;31;49m\]\$(A=\$? ; if [ \$A -ne 0 ] ; then echo [\$A] ; fi)"
PS1="$PS1\[\e[00;33;49m\]\$ "

PS1="$PS1\[\e[00;97;49m\]"
export PS1

export DEFINES="$HOME/.config/defines"
[ -f "$DEFINES" ] && . "$DEFINES"

export GPG_TTY=$(tty)
export LPASS_PINENTRY="pinentry-curses"
export NNN_USE_EDITOR=1
export DOTNET_CLI_TELEMETRY_OPTOUT=1

if [ -n "$(command -v dotnet)" ] ; then
    export MSBuildSDKsPath="/usr/share/dotnet/sdk/$(dotnet --version)/Sdks"
fi
