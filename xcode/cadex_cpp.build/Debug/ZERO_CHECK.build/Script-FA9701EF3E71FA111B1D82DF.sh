#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Volumes/TOSHIBA/cadex_cpp/xcode
  make -f /Volumes/TOSHIBA/cadex_cpp/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Volumes/TOSHIBA/cadex_cpp/xcode
  make -f /Volumes/TOSHIBA/cadex_cpp/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Volumes/TOSHIBA/cadex_cpp/xcode
  make -f /Volumes/TOSHIBA/cadex_cpp/xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Volumes/TOSHIBA/cadex_cpp/xcode
  make -f /Volumes/TOSHIBA/cadex_cpp/xcode/CMakeScripts/ReRunCMake.make
fi

