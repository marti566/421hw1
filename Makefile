###################################
# OS COURSE - 2006
# 
###################################
CC = g++						# use g++ for compiling c++ code or gcc for c code
CFLAGS = -g -Wall 		# compilation flags: -g for debugging. Change to -O or -O2 for optimized code.
LIB = -lm	-pthread					# linked libraries	
LDFLAGS = -L.					# link flags
PROG = priorityQ				# target executable (output)
DEPS = driver.h generator.h recognizer.h
SRC = Main.cpp driver.cpp generator.cpp recognizer.cpp      # .c or .cpp source files.
OBJ = $(SRC:.cpp=.o) 			# object files for the target. Add more to this and next lines if there are more than one source files.

all : $(PROG)

$(PROG): $(OBJ) $(DEPS)
	$(CC) -o $(PROG) $(OBJ) $(LDFLAGS) $(LIB)
#$(PROG): Main.o driver.o generator.o recognizer.o $(DEPS)
#	$(CC) -o $(PROG) Main.o driver.o generator.o recognizer.o
#Main.o: Main.cpp driver.h
#	$(CC) -c $(CFLAGS) Main.cpp
#driver.o: driver.cpp driver.h generator.h recognizer.h
#	$(CC) -c $(CFLAGS) driver.cpp
#generator.o: generator.cpp generator.h
#	$(CC) -c $(CFLAGS) generator.cpp
#recognizer.o: recognizer.cpp recognizer.h
#	$(CC) -c $(CFLAGS) recognizer.cpp
.cpp.o:
	$(CC) -c $(CFLAGS) $< -o $@ 

# cleanup
clean:
	/bin/rm -f *.o 
# $(PROG)

# DO NOT DELETE
