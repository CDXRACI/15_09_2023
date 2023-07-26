#Compiler
FC = g++

#Compiler flags
FCFLAGS = $(FC) -c

#Stores the object files
OBJS = main.o message.o

#Linker
LINKER = $(FC) -o
#output
PROG = prog


# $< will point the first file in the dependency chain
# $@ will point the last file in the dependency chain

# Make all target
.PHONY: $(PROG)
$(PROG): $(OBJS)
	$(LINKER) $(PROG)  $(OBJS)
main.o: main.cpp
	$(FCFLAGS)  main.cpp
message.o: message.cpp message.h
	$(FCFLAGS)  $<
clean:
	rm *.o prog

#dependency chains
message.o: message.cpp message.h
