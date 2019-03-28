#include "pch.h"
#include <iostream>
#include "c_lang_task.h"
using std::cout;
int main()
{
	setlocale(LC_ALL, "ru");
	short col = 3;
	short row = 2;
	int N = 3 , i = 4, max_sz = 20;
	char* out_str;
	out_str = (char*)malloc(max_sz*(sizeof(char)));
	const char *full_fname = "test1.txt";
	//print_number_table(col, row);
	//write_nils_to_head_file(full_fname,N);
	//write_ones_to_tail_file(full_fname,N);
	//cout<<read_i_string_from_file(full_fname, i, out_str, max_sz);
	//TEST_memcpy_and_memset();
	system("pause");
	return 0;
}
