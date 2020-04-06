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

PATH="$(echo $PATH | sed "s/::/:/g")"
export PATH
export PS1="\[\e[1;31m\]\u\[\e[35m\]-\[\e[33m\]\h\[\e[0;39m\]:\[\e[1;34m\]\w\[\e[0;39;49m\]\$(A=\$? ; if [ \$A -ne 0 ] ; then echo [\$A] ; fi)\$ "

export DEFINES="$HOME/.config/defines"
[ -f "$DEFINES" ] && . "$DEFINES"

export GPG_TTY=$(tty)
export LPASS_PINENTRY="pinentry-curses"
export NNN_USE_EDITOR=1
export DOTNET_CLI_TELEMETRY_OPTOUT=1

if [ -n "$(command -v dotnet)" ] ; then
    export MSBuildSDKsPath="/opt/dotnet/sdk/$(dotnet --version)/Sdks"
fi
