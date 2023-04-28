#!/bin/bash

echo add your commit message
read msg

git add .
git commit -m "${msg}"
git push
