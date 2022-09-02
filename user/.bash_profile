#
# ~/.bash_profile
#

function checksource ()
{
	if [ -r "$1" ] && [ -f "$1" ] ; then
		source "$1"
	fi
}

checksource "/etc/bash.bash_login"
checksource "/etc/profile"
checksource "/etc/bash.bashrc"
checksource "$HOME/.bash_login"
checksource "$HOME/.profile"
checksource "$HOME/.bashrc"
