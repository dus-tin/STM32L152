#!/usr/bin/bash

MFLAG="openocd -s /usr/share/openocd/scripts/interface -f stlink.cfg -s /usr/share/openocd/scripts/target -f stm32l1.cfg"
FILE=$2
CMD=$1
PARENT="/home/dustin/STM32/src"
GDB="arm-none-eabi-gdb"
PFLAG="program ${PARENT}/$FILE verify exit"
TEST="target extended-remote localhost:3333"

if [[ "$CMD" == "program" ]]; then
	echo "programming..."
	$MFLAG -c "$PFLAG"
elif [[ "$CMD" == "debug" ]]; then
	echo "opening openocd server..."
	terminator -x $MFLAG
	sleep 1
	echo "opening GDB client..."
	echo "config .gdbinit at /home/.gdbinit"
	terminator -x $GDB --cd=$PARENT app.elf
else
    echo "invalid argument"
fi

		
