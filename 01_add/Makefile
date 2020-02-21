PROGS = add_main
OBJS = add_c.o add_s.o

CFLAGS = -g

# Pattern rules to avoid explicit rules
%.o : %.c
	gcc ${FLAGS} -c -o $@ $<

%.o : %.s
	as -o $@ $<

all : ${PROGS}

add_main : add_main.c add_c.o add_s.o
	gcc ${CFLAGS} -o $@ $^

clean :
	rm -rf ${PROGS} ${OBJS}



