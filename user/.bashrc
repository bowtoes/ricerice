# ~/.bashrc

# Personal aliases and functions.

# Personal environment variables and startup programs should go in ~/.bash_profile.
# System wide environment variables and startup programs are in /etc/profile.
# System wide aliases and functions are in /etc/bashrc.

stty -ixon # Disable ctrl-s, ctrl-q

if [ -r "/etc/bash.bashrc" -a -f "/etc/bash.bashrc" ]; then
  source "/etc/bash.bashrc"
fi
if [ -r "$ALIASRC" -a -f "$ALIASRC" ]; then
  source "$ALIASRC"
fi
if [ -r "$HOME/.config/alias2" -a -f "$HOME/.config/alias2" ]; then
  source "$HOME/.config/alias2"
fi
if [ -r "/usr/share/bash-completion/bash_completion" -a -f "/usr/share/bash-completion/bash_completion" ]; then
  source "/usr/share/bash-completion/bash_completion"
fi

# Removing this causes an error on login?
n()
{
	echo > /dev/null
}
