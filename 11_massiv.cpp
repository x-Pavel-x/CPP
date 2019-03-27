#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int* arr;
	int size = 10, j;
	 arr =(int*) malloc (size*sizeof(int));
	 for (int i = 0; i < size; i++)
	 {
		 printf("a[%d] = ", i);
		 scanf_s("%d", &arr[i]);
	 }
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			for (j = i; j < size - 1; j++)
			{
				swap(arr[j], arr[j + 1]);
			}
			size--;
			i--;
		}
	}
	arr = (int*)realloc(arr, size*sizeof(int));
	for (int i = 0; i < size; i++) { printf(" %d ", arr[i]); }
	system("pause");
	return 0;
}
