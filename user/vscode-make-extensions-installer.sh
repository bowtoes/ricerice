#!/bin/sh
code --list-extensions | xargs -L 1 echo code --install-extension > install-code-extensions.sh
chmod +x install-code-extensions.sh
