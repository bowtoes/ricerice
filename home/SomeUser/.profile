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
    if [ -d $1 ] ; then
        for d in $(find $1 -type d) ; do
            append $d
        done
    fi
}

appendrecurse "$HOME/.local/bin"
appendrecurse "$HOME/bin"
appendrecurse "$HOME/scripts"
unset append
unset appendrecurse

PATH="$(echo $PATH | sed "s/::/:/g")"
export PATH

export PS1='\[\e[1;31m\]\u\[\e[35m\]-\[\e[33m\]\h\[\e[0;39m\]:\[\e[1;34m\]\w\[\e[0;39;49m\]\$ '

export EDITOR="vim"
export TERMINAL="st"
export BROWSER="brave"
export AUDIO="vlc"
export EXPLORER="xfe"
export WALLDIR="$HOME/wallpapers"
export LOGDIR="$HOME/.log"
export SRC="/addtl/src"

export NNN_USE_EDITOR=1

export TERMCOLS="$HOME/.config/termcolors"
export DIRCOLS="$HOME/.config/dircolors"
[ -f "$TERMCOLS" ] && . "$TERMCOLS"
[ -f "$DIRCOLS" ] && . "$DIRCOLS"
