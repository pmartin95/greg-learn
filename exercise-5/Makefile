SRCS=$(wildcard *.c)
OBJS=$(SRCS:%.c=%.o)
FLAGS= -Wall -fanalyzer -g
main.out: $(OBJS)
	@$(CC) $(FLAGS) -o main $(OBJS) 
	@rm *.o
%.o : %.c
	@$(CC) $(FLAGS) -c -o $@ $<

.PHONY:clean

clean:
	@rm -rf *.o
	@rm main