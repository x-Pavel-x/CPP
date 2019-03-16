#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::ostream;
void task1(string &stroka_task1) //Удаляет повторяющиеся улементы, которые идут друг за другом
{
	int size = stroka_task1.length();
	for (int i = 1; i < size; i++)
	{
		if (stroka_task1[i-1]==stroka_task1[i])
		{
			stroka_task1.erase(i,1);
			i--;
			size--;
		}
	}
}
int task2(const string stroka_task2,const string podstroka_task2)  //возвращает индекс элемента строки "stroka_task2", 
{									//с которого начинается первое включение подстроки "podstroka_task2" в строку "stroka_task2"
	int size_stroka= stroka_task2.length();
	int size_podstroka = podstroka_task2.length();
	int size = size_stroka - size_podstroka;
	if (size<0)
	{
		cout << "Ошибка! Подстрока больше строки";
		return -1;
	}
	int index=-1;

		for (int i = 0; i < size; i++)
		{
			if (index >= 0) {return index;}
			for (int j = 0; j < size_podstroka; j++)
			{
				if (stroka_task2[i + j] == podstroka_task2[j])
				{
					index = i;
				}
				else { index = -1; }
			}
		}
}
void task3(vector<int> &vector_task3, int element_task3) // Удаляет все элементы вектора, равные значению "element_task3"
{
	int size = vector_task3.size();
	for (int i = 0; i < size; i++)
	{
		if (vector_task3[i] == element_task3)
		{
			vector_task3.erase(vector_task3.begin() + i);
			size--;
			i--;
		}
	}
}
ostream& operator<< (ostream &s, const vector<int> vector)
{
	int size = vector.size();
	cout << "[";
	for (int i = 0; i < size; i++)
	{
		s << " " << vector[i];
	}
	cout << " ]";
	return s;
}
int main()
{
	string stroka_task1 = "aaassddfy!!gjkk";
	string podstroka_task2 = "aiygr"; // встречается с 6-го элемента строки "stroka2"
	string stroka_task2 = "sdf!_aiygr_!gflks";
	int index_task2;
	int element_task3 = 4;
	vector<int> vector_task3 = {1,4,2,3,4,5,6,7,8,4,9,10,4};
	setlocale(LC_ALL, "Rus");
	cout << "ЗАДАНИЕ 1" <<endl<<"Строка до: "<< stroka_task1 << endl; 
	task1(stroka_task1);
	cout <<"Строка после: "<<stroka_task1 << endl<< endl 
	<< "ЗАДАНИЕ 2" << endl;
	cout <<"Строка: "<<stroka_task2 << endl <<"Подстрока: "<<podstroka_task2<<endl;
	index_task2 = task2(stroka_task2, podstroka_task2);
	cout <<"Индекс элемента строки, с которого начинается подстрока: "<<index_task2<<endl<<endl<<"ЗАДАНИЕ 3"<<endl;
	cout <<"Вектор до: "<<vector_task3<<endl;
	task3(vector_task3,element_task3);
	cout << "Вектор после: " <<vector_task3<<endl;
	system("Pause");
	return 0;
}
