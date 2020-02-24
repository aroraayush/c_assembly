PROGS = max3_main
OBJS = max3_s.o max3_c.o

CFLAGS = -g

%.o : %.c
	gcc ${FLAGS} -c -o $@ $<

%.o : %.s
	as -o $@ $<

all : ${PROGS} 

max3_main: max3_main.c max3_s.o max3_c.o
	gcc ${CFLAGS} -o $@ $^

clean:
	rm -rf ${PROGS} ${OBJS}