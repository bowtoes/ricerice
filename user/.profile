# ~/.profile

# Personal environment variables and startup programs.
#
# Personal aliases and functions should go in ~/.bashrc.  System wide
# environment variables and startup programs are in /etc/profile.
# System wide aliases and functions are in /etc/bashrc.

# Personal environment variables
#
# File permissions table
# This TUG syntax is not valid for any permissions command such as chmod
# It's only used for my convenience in this table
#
# U = SUID
# G = SGID
# T = sticky bit
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

# 0664
umask 0002
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
	rp="$(realpath -m "$1")"
	if [ -d "$rp" ] ; then
		for d in $(find -L "$rp" -type d -not -path '*.git*') ; do
			append "$d"
		done
	fi
}

appendrecurse "$HOME/bin"
appendrecurse "$HOME/.local/bin"
unset append
unset appendrecurse

PATH="$(echo "$PATH" | sed "s/::/:/g")"
export PATH
export CPATH="$PATH"
export LIBRARY_PATH="${LIBRARY_PATH:+$LIBRARY_PATH:}/addtl/lib"
export PKG_CONFIG_PATH="${PKG_CONFIG_PATH:+$PKG_CONFIG_PATH:}/addtl/lib/pkgconfig"

PS1=""
sh_path ()
{
	case "$PWD" in
		"$HOME"*)
			P_D=`pathdepth -r "$HOME" -d "$PWD"`
			;;
		*)
			P_D=`pathdepth -d "$PWD"`
			;;
	esac
	M_D=2
	PTH=`echo "$PWD" | sed "s~^$HOME~\~~"`
	if [ $P_D -le $M_D ] ; then
		printf "$PTH"
	else
		printf ".../%s" "`echo "$PTH" | cut -d '/' -f$((P_D - M_D + 2))-`"
	fi
}
sh_errorcode ()
{
	A=$?
	if [ $A -ne 0 ] ; then
		printf "[$A]"
	fi
}

PS1="$PS1\[\e[00;31;49m\]\u"
PS1="$PS1\[\e[02;39;49m\]:"
PS1="$PS1\[\e[00;32;49m\]\$(sh_errorcode)"
PS1="$PS1\[\e[01;34;49m\]\$(sh_path)"
PS1="$PS1\[\e[00;33;49m\]\$ "
PS1="$PS1\[\e[00;97;49m\]"
export PS1

if [ -d "$HOME/.config" ] ; then
	export CONFIGDIR="$HOME/.config"
else
	export CONFIGDIR="$HOME"
fi
export DEFINES="$CONFIGDIR/defines"
[ -f "$DEFINES" ] && . "$DEFINES"

export GPG_TTY=$(tty)
export DOTNET_CLI_TELEMETRY_OPTOUT=1

export GTK_IM_MODULE=ibus
export XMODIFIERS=@im=ibus
export QT4_IM_MODULE=xim
export QT_IM_MODULE=xim

# dotnet's weird, this seems to be a bit of a problem on windows too.
[ -n "`command -v dotnet`" ]  && \
	export MSBuildSDKsPath="/usr/share/dotnet/sdk/$(dotnet --version)/Sdks"
# https://web.archive.org/web/20200919120248/https://andrewlock.net/building-net-framework-asp-net-core-apps-on-linux-using-mono-and-the-net-cli/#adding-frameworkpathoverrides-for-linux
# 4.5 works for vim-omnisharp
[ -n "`command -v mono`" ] && \
	export FrameworkPathOverride="/usr/lib/mono/4.5"
