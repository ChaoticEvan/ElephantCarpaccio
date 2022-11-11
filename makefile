# Makefile for Elephant Carpaccio
# **********************************
# Variables

CC = g++
CFLAGS = -Wall -g
SRCS = main.cpp userinput.cpp input.cpp calculator.cpp
OBJS = $(SRCS:.cpp=.o) # Super helpful for converting .cpp to .o and not missing any
TARG = main.exe
LIBS = # Blank for now

# Targets
all: $(TARG)

$(TARG): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARG) $(SRCS) $(LIBS)

main.o:
	$(CC) $(CFLAGS) -c main.cpp -o main.o

userinput.o:
	$(CC) $(CFLAGS) -c userinput.cpp -o userinput.o

input.o: 
	$(CC) $(CFLAGS) -c input.cpp -o input.o

calculator.o:
	$(CC) $(CFLAGS) -c calculator.cpp -o calculator.o

clean:
	del -f $(OBJS) $(TARG) 