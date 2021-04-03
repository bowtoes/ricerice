# Append our default paths

append ()
{
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

append        "/addtl/include"
appendrecurse "/addtl/bin"

unset append
unset appendrecurse

export PATH

# default PS1? I have no idea why this is here and not in /etc/profile
#export PS1='\[\e[1;31m\]\u\[\e[35m\]@\[\e[33m\]\h\[\e[0;39m\]:\[\e[1;34m\]\w\[\e[0;39;49m\]\$ '
