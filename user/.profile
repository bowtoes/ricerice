# ~/.profile

# Personal environment variables and startup programs.

# Personal aliases and functions should go in ~/.bashrc.  System wide
# environment variables and startup programs are in /etc/profile.
# System wide aliases and functions are in /etc/bashrc.

# Personal environment variables
umask 022

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

export EDITOR="vim"
export TERMINAL="st"
export BROWSER="brave"
export AUDIO="vlc"
export EXPLORER="thunar"
export WALLDIR="$HOME/wallpapers/include"
export LOGDIR="$HOME/.log"
export SRC="/addtl/src"
export GPG_TTY=$(tty)

export LPASS_PINENTRY="pinentry-curses"

export NNN_USE_EDITOR=1
export DOTNET_CLI_TELEMETRY_OPTOUT=1

if [ -n "$(command -v dotnet)" ] ; then
    export MSBuildSDKsPath="/opt/dotnet/sdk/$(dotnet --version)/Sdks"
fi

export RICEDIR="/addtl/dev/other/ricerice/"
export TERMCOLS="$HOME/.config/termcolors"
export DIRCOLS="$HOME/.config/dircolors"
[ -f "$TERMCOLS" ] && . "$TERMCOLS"
[ -f "$DIRCOLS" ] && . "$DIRCOLS"
