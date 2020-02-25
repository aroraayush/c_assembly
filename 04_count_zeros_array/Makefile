PROGS = count_zeros_main
OBJS = count_zeros_c.o count_zeros_s.o

CFLAGS = -g

%.o : %.c
	gcc ${FLAGS} -c -o $@ $<

%.o : %.s
	as -o $@ $<

all : ${PROGS}

count_zeros_main: count_zeros_main.o count_zeros_c.o count_zeros_s.o
	gcc ${FLAGS} -c -o $@ $^

clean:
	rm -rf ${PROGS} ${OBJS}