#include "c_lang_task.h"
#include "pch.h"
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
void print_number_table(short col, short row) {
	for (int j = 0; j < row; ++j) {

		for (int i = 0; i < col + row; ++i) {
			cout << "* ";
		}
		cout << "" << endl;
		for (int i = 0; i < col; ++i) {

			cout << "|" << 0 + rand() % 9 << "|";
		}
		cout << "" << endl;
		cout << "|";
		for (int i = 0; i < col; ++i) {
			cout << "-+ ";
		}
		cout << "|";
		cout << "" << endl;
	}
}
void write_nils_to_head_file(const char* full_fname, int N){
	FILE *F;
	fopen_s(&F, full_fname, "w");
	for (int i = 0; i < N; i++)
		{
			fprintf(F, "0x00 ");
		}
	fclose(F);
}
void write_ones_to_tail_file(const char* full_fname, int N)
{
	FILE *F;
	fopen_s(&F, full_fname, "a");
	for (int i = 0; i < N; i++)
	{
		fprintf(F, "0x00 ");
	}
	fclose(F);
}
int read_i_string_from_file(const char* full_fname, int i, char* out_str, int max_sz)
{
	int a = 0;
	char c;
	FILE *fp;
	fopen_s(&fp, full_fname, "r");
	while (a != i)
	{
		c = fgetc(fp);
		if (c == '\n')
		{
			a++;
		}
	}
	a = 0;
	c = fgetc(fp);
	for (int j = 0; j < max_sz; j++)
	{
		if (c != '\n')
		{
			out_str[j] = c;
			c = fgetc(fp);
			a++;
		}
	}
	return a;
}

void TEST_memcpy_and_memset(void) 
{
	int *array_of_int = (int*)malloc(40*sizeof(int));
	double *array_of_double = (double*)malloc(20 * sizeof(double));
	char *array_of_char = (char*)malloc(80 * sizeof(char));
	memset(array_of_char, 0x01, 80);
	memset(array_of_double, 0x0, 160);
	memset(array_of_int, 0x00, 160);
	for (int i = 0; i < 40; i++) 
	{
		memset(array_of_int + i, 0x01, 1);
	}
	printf("\n Массив char");
	for (int i = 0; i < 10; i++) 
	{
		printf("%c ", array_of_char[i]);
	}
	printf("\n Массив int");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array_of_int[i]);
	}
	printf("\n Массив double");
	for (int i = 0; i < 10; i++) 
	{
		printf("%f ", array_of_double[i]);
	}
	printf("\n \n \n MEMCPY \n \n \n");
	printf("\n Массив char");
	memcpy(array_of_char, array_of_int, 10);
	memcpy(array_of_int, array_of_double, 10);
	memcpy(array_of_double, array_of_char, 10);
	for (int i = 0; i < 10; i++) 
	{
		printf("%c ", array_of_char[i]);
	}
	printf("\n Массив int");
	for (int i = 0; i < 10; i++) 
	{
		printf("%d ", array_of_int[i]);
	}
	printf("\n Массив double");
	for (int i = 0; i < 10; i++) 
	{
		printf("%f ", array_of_double[i]);
	}
}