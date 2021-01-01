# ~/.bashrc

# Personal aliases and functions.

# Personal environment variables and startup programs should go in ~/.bash_profile.
# System wide environment variables and startup programs are in /etc/profile.
# System wide aliases and functions are in /etc/bashrc.

stty -ixon # Disable ctrl-s, ctrl-q

[ -f "/etc/bash.bashrc" ] && source "/etc/bash.bashrc"
[ -f "$HOME/.config/aliasrc" ] && source "$HOME/.config/aliasrc"
[ -f "$HOME/.config/alias2" ] && source "$HOME/.config/alias2"
[ -f "/usr/share/bash-completion/bash_completion" ] && source "/usr/share/bash-completion/bash_completion"

# Removing this causes an error on login?
n()
{
	echo "A" > /dev/null
}
