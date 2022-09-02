## /etc/bash.bashrc

# System wide aliases and functions.

# System wide environment variables and startup programs should go into/etc/profile.
# Personal environment variables and startup programs should go into ~/.bash_profile.
# Personal aliases and functions should go into ~/.bashrc

# System wide aliases
alias ls="ls -hCXHNF --color=auto --group-directories-first"
alias la="ls -as"
alias ll="ls -las"
alias l="ls -ls"

alias mv="mv -iv"
alias cp="cp -ivP"
alias rsync="rsync -vih --progress --log-file=\$LOGDIR/rsync.log"
alias ln="ln -iv"
alias rm="rm -Iv"
alias mkdir="mkdir -pv"
alias rename="rename -iv"
alias lrzip="lrzip -vv"
alias lrztar="lrztar -vv"
alias badblocks="badblocks -sv"
alias pip="pip -vvv --log=\$LOGDIR/pip.log"

alias chattr="chattr -V"
alias lsattr="lsattr -vap"

alias chmod="chmod -c --preserve-root"
alias chown="chown -hc --preserve-root"
alias chgrp="chgrp -hc --preserve-root"

alias grep="grep --color=auto -E"
alias diff="diff --color=auto"

alias bt="echo bt | coredumpctl gdb"
# System wide bash functions
takeme()
{
  if [ -n "$(command -v "$1")" ]; then
    cd "$(dirname "$(where "$1")")"
  else
    return 1
  fi
}
up()
{
  newdir="../"
    if strictlypositive "$1" ; then
        i=1
        while [ "$i" -lt "$1" ] ; do
            if [ "$PWD" = "/" ] ; then break ; fi
      newdir="$newdir""../"
            i="$((i+1))"
        done
    fi
  cd "$newdir" || return 1
}

# If not running interactively, don't do anything else
[[ $- != *i* ]] && return

[[ $DISPLAY ]] && shopt -s checkwinsize

#PS1='\[\e[1;31m\]\u\[\e[35m\]@\[\e[33m\]\h\[\e[0;39m\]:\[\e[1;34m\]\w\[\e[0;39;49m\]\$ '
#PS1='[\u@\h \W]\$ '

case ${TERM} in
  xterm*|rxvt*|Eterm|aterm|kterm|gnome*)
    PROMPT_COMMAND=${PROMPT_COMMAND:+$PROMPT_COMMAND; }'printf "\033]0;%s@%s:%s\007" "${USER}" "${HOSTNAME%%.*}" "${PWD/#$HOME/\~}"'

    ;;
  screen*)
    PROMPT_COMMAND=${PROMPT_COMMAND:+$PROMPT_COMMAND; }'printf "\033_%s@%s:%s\033\\" "${USER}" "${HOSTNAME%%.*}" "${PWD/#$HOME/\~}"'
    ;;
esac

if [ -r "/usr/share/bash-completion/bash-completion/bash_completion" ]; then
	source "/usr/share/bash-completion/bash_completion"
fi
