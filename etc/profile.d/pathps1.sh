# Append our default paths

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
append        "/addtl/include"
append        "/addtl/bin"
appendrecurse "/addtl/bin/sh"
append        "/addtl/bin/python"
appendrecurse "/addtl/sbin"
unset append
unset appendrecurse

export PATH

export PS1='\[\e[1;31m\]\u\[\e[35m\]@\[\e[33m\]\h\[\e[0;39m\]:\[\e[1;34m\]\w\[\e[0;39;49m\]\$ '
