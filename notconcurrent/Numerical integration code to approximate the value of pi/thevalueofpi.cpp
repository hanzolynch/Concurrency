#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_THREADS 4
#define NUM 20

int N=NUM;  // number of elements in array X
int X[NUM];
int gSum[NUM_THREADS];  // global storage for partial results

/*
     s0
pi = s (4 / 1 + x^2) dx
     s1 
*/

static long num_rects = 100000;
int main()
{
  int i;
  double mid, height, width, sum = 0.0;
  double area;
  width = 1.0 / (double)num_rects;
  for (i = 0; i < num_rects; i++)
  {
    mid = (i + 0.5) * width;
    height = 4.0 / (1.0 + mid * mid);
    sum += height;
  }

  area = width * sum;
  printf("Computed pi = %f\n", area);
  return 0;
}
