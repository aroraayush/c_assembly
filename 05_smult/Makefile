PROGS = smult_main
OBJS = smult_c.o smult_s.o

CFLAGS = -g

%.o : %.c
	gcc ${FLAGS} -c -o $@ $<

%.o : %.s
	as -o $@ $<

all : ${PROGS}

smult_main: smult_main.o smult_c.o smult_s.o
	gcc ${FLAGS} -c -o $@ $^

clean:
	rm -rf ${PROGS} ${OBJS}