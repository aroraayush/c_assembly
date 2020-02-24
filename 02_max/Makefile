PROGS = max_main
OBJS = max_c.o max_s.o

CFLAGS = -g

%.o : %.c
	gcc ${FLAGS} -c -o $@ $<

%.o : %.s
	as -o $@ $<

all : ${PROGS}

max_main: max_main.c max_c.o max_s.o
	gcc ${CFLAGS} -o $@ $^

clean:
	rm -rf ${PROGS} ${OBJS}