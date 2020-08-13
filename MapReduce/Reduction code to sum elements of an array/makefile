CC = icc

LIBDIR = 
LIBS = $(LIBDIR) -lpthread 
#LIBS = $(LIBDIR)


phsum: ReductionCode.cpp
	$(CC) ReductionCode.cpp -o phsum $(LIBS)

clean:
	rm -rf *.o phsum
