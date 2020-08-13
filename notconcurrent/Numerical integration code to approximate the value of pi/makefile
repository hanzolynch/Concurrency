CC = clang

LIBDIR = 
LIBS = $(LIBDIR) -lpthread 
#LIBS = $(LIBDIR)


valpi: thevalueofpi.cpp
	$(CC) thevalueofpi.cpp -o valpi $(LIBS)

clean:
	rm -rf *.o valpi 
