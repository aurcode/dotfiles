# Here Xfce is kept as default
session=${1:-i3}

case $session in
    i3|i3wm           )
        exec i3
        ;;
    dwm               )
        [ -f ~/.xprofile ] && . ~/.xprofile
        exec dwm
        ;;
    firefox           )
        feh --bg-fill file:///home/wyda/dwm.jpg &
        exec firefox
        ;;

    # No known session, try to run it as command
    *                 )
        exec $1
        ;;
esac
