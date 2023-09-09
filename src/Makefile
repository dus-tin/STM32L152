CC=arm-none-eabi-gcc
MACH=cortex-m3
CFLAGS=-mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0 -g
LDFLAGS=-nostdlib -T stm32_ls.ld -Wl,-Map=app.map

all: app.elf

SRC_FILES:=$(wildcard *.c)
OBJ_FILES:=$(SRC_FILES:.c=.o) 


app.elf: $(OBJ_FILES)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f *.o *.elf *.map
