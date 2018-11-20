CFLAGS	= -Wall -std=c++11 -g -DDEBUG
LFLAGS	= 
CC	    = g++

srcs = $(wildcard *.cpp)
objs = $(srcs:.cpp=.o)
deps = $(srcs:.cpp=.d)

a.out: $(objs)
	$(CC) $^ -o $@ $(LFLAGS)



%.o: %.cpp
	$(CC) -MMD -MP $(CFLAGS) -c $< -o $@

.PHONY: clean

# $(RM) is rm -f by default

clean:
	$(RM) $(objs) $(deps) a.out core


-include $(deps)

