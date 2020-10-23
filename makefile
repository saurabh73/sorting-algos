# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects


# compiler to use
CC = gcc
CFLAGS = -Wall
DEPS = sort_common.h sort_algo.h
CSRC = main.c \
	$(wildcard algorithms/*.c) \
       	$(wildcard common/*.c)
OBJFILES = $(CSRC:.c=.o)
TARGET = ./dist/main
.PHONY : clean all
all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
