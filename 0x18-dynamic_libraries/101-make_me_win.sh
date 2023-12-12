#!/bin/bash
wget -P /tmp https://github.com/happychuks/alx-low_level_programming/blob/master/0x18-dynamic_libraries/randomNum.so
export LD_PRELOAD=/tmp/randomNum.so
