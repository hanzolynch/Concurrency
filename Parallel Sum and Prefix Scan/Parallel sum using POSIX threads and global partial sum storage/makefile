CC = icc

LIBDIR = 
LIBS = $(LIBDIR) -lpthread 
#LIBS = $(LIBDIR)


psum: ParallelSum.cpp
	$(CC) ParallelSum.cpp -o psum $(LIBS)

clean:
	rm -rf *.o psum 
