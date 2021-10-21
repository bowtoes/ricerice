#!/usr/bin/env sh

checkrun ()
{
	#$1==File
	#$2==Name
	#$3==Command
	#$4==CommandString

	if [ -r "$1" -a -f "$1" ] ; then
		printf "%s %s '%s'...\\n" "$4" "$2" "$1"
		$3 "$1" >> "$LOGDIR"/xinit 2>&1
	else
		printf "Could not read %s file '%s'.\\n" "$2" "$1"
	fi
}

if ! echo "" > "$LOGDIR"/xinit ; then
	echo "Failed to create xinit log" >&2
	exit 1
fi

checkrun "$XMODMAP" "Xmodmap" "xmodmap" "Reading"
checkrun "$XRESOURCES" "Xresources" "xrdb" "Reading"
checkrun "$XPROFILE" "Xprofile" "." "Sourcing"
checkrun "$XENVIRONMENT" "Xenvironment" "." "Sourcing"

unset checkrun
