#!/bin/bash

# collect commit message
read -p 'write your commit msg: ' msg

# git cmds
git add .

git commit \-m "$msg"

git push

# Pushes all files in the current directory
