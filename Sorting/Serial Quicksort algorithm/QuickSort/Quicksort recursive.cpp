// Quicksort recursive.cpp : Traditional recursive version of Quicksort algorithm.  

//
#include <windows.h>
#include <stdio.h>

#define NN 100

int A[NN];
long tCount = 0;

int Partition (int p, int r)
{	int x = A[p];
	int k = p;
	int l = r+1;
	int t;

	do k++; while ((A[k] <= x) && (k < r));
	do l--; while (A[l] > x);

	while (k < l) {
		t = A[k];  A[k] = A[l];  A[l] = t;
		do k++; while (A[k] <= x);
		do l--; while (A[l] > x);
	}
	t = A[p];  A[p] = A[l];  A[l] = t;
	return l;
}

void QuickSort(int p, int r)
{
	if (p < r) {
		int q = Partition(p, r);
		QuickSort (p, q-1); 
		QuickSort (q+1, r);
	}
}

/*
// Create a new thread for each QuickSort() recursive call
unsigned __stdcall QuickSort(qSortIndex *m)
{
	int p = m->lo;
	int r = m->hi;
	if (p < r)
	{
		qSortIndex s, t;
		HANDLE tH[2];
		int q = Partition(p, r);
		s.lo = p;
		s.hi = q - 1;
		tH[0] = (HANDLE)_beginthreadex(NULL, 0, QuickSort, &s, 0, NULL);
		t.lo = q + 1;
		t.hi = r;
		tH[1] = (HANDLE)_beginthreadex(NULL, 0, QuickSort, &t, 0, NULL);
		WaitForMultipleObjects(2, tH, INFINITE);
	}
	return 0;
}
*/

void init_data()
{
	int i, x, y;
	for (i = 0; i < NN; i++)
		A[i] = i;
	for (i = 0; i < NN; i++){
		x = rand() % NN;
			y = A[x]; A[x] = A[i]; A[i] = y;
	}

}

int main(int argc, char* argv[])
{
	init_data();
	for (int i = 0; i < NN; i++) printf("%3d ",A[i]);
	printf("\n\n");
	QuickSort(0, NN-1);
	for (int j = 0; j < NN; j++) printf("%3d ",A[j]);

	return 0;
}
