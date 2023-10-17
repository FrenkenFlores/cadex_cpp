#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Volumes/TOSHIBA/cadex_cpp/xcode
  echo Build\ all\ projects
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Volumes/TOSHIBA/cadex_cpp/xcode
  echo Build\ all\ projects
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Volumes/TOSHIBA/cadex_cpp/xcode
  echo Build\ all\ projects
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Volumes/TOSHIBA/cadex_cpp/xcode
  echo Build\ all\ projects
fi

