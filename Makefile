CC=gcc
CFLAGS=-Iinclude -Wall

SRCS=$(wildcard src/arithmetic/*.c src/algebra/*.c src/utils/*.c src/main.c)
OBJS=$(SRCS:.c=.o)

TARGET=math_app

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) -lm

clean:
	rm -f $(TARGET) $(OBJS)

