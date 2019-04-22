#include "pch.h"
#include "cpp_lang_task1.h"
#include <iostream>
using namespace student;
string(const char * other) 
{
	this->_size = strlen(other._data);
	this->_data = new char[size + 1];
	for (int i = 0; i <= size; ++i)
		this->_data[i] = other[i];
}
~String() {
	delete[] _data;
}
void append(const String & other) {
	char * temp = new char[size + other.size + 1];
	for (size_t i = 0; i < size; ++i)
		temp[i] = str[i];
	for (size_t j = 0; j < other.size; ++j)
		temp[size + j] = other.str[j];
	temp[size + other.size] = 0;

	delete[] str;
	str = temp;
	size += other.size;
}
string& operator= (string&& other) {
	this->_data = other._data;
	this->_size = other._size;
};
string& operator+(string other)
{
	string* temp = new string();
	temp->_size = temp->_size + 1;
	temp->_data = new char[temp->_size];

	strcpy_s(temp->_data, temp->_size, this->_data);
	strcat_s(temp->_data, temp->_size, str);

	return (string&)*temp;
}
unsigned int size() const
{
	_size = strlen(_data);
}
template<class T>
Vector<T> & Vector<T>::operator = (const Vector<T> & v)
{
	delete[] buffer;
	my_size = v.my_size;
	my_capacity = v.my_capacity;
	buffer = new T[my_size];
	for (int i = 0; i < my_size; i++)
		buffer[i] = v.buffer[i];
	return *this;
}

template<class T>
typename Vector<T>::iterator Vector<T>::begin()
{
	return _data[0];
}

template<class T>
typename Vector<T>::iterator Vector<T>::end()
{
	return _data[_size-1];
}


template<class T>
void vector<T>::push_back(const T & value)
{
		reserve(_size + 5);
	buffer[size++] = value;
}

template<class T>
void vector<T>::pop_back()
{
	my_size--;
}
template vector<_Tp, _Alloc>::
void insert(unsigned int pos, const T& value)
{
	const value.size = pos - begin();
	this->_data[pos] = value._data;
	
}
