# /etc/bash.bashrc

# System wide aliases and functions.

# System wide environment variables and startup programs should go into/etc/profile.
# Personal environment variables and startup programs should go into ~/.bash_profile.
# Personal aliases and functions should go into ~/.bashrc

# System wide aliases
[ -r "/etc/aliasrc" ] && . "/etc/aliasrc"
# System wide bash functions
[ -r "/etc/bash.funcs" ] && . "/etc/bash.funcs"

# If not running interactively, don't do anything
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

[ -r "/usr/share/bash-completion/bash_completion" ] && . "/usr/share/bash-completion/bash_completion"
