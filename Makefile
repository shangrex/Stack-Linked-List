CC = gcc

CFLAGS = -g -Wall

target = stack
target_src = stack.c
target_obj = stack.o

all: $(target)

$(target): $(target_obj)
	$(CC) $(CFLAGS) -o $@ $^

$(target_obj): $(target_src)
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f $(target) $(target_obj)