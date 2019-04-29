#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string st;
	getline(cin,st);
	int size = st.length(), j;
	for (int i = 0; i < size - 1; i++)
	{
		if (st[i] == st[i + 1])
		{
			for (j = i; j < size - 1; j++)
			{
				swap(st[j], st[j + 1]);
			}
			size--;
			i--;
		}
	}
	st.resize(size,' ');
	cout << st;
	system("pause");
	return 0;
}