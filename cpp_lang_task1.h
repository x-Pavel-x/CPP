#pragma once
namespace student {
	class string {
		char* _data;
		unsigned int _size;
		static const unsigned int npos = -1;
	public:
		~string();
		string(const char* other);
		string& operator= (string&& other);
		char& operator+(string& other);
		unsigned int size() const;
		void clear();
		void push_back(char ch);
		void pop_back();
		string& append(const string& other);
		string substr(const string& other);
	};
	template <typename T>
	class vector {
		T* _data;
		unsigned int _size;
	public:
		~vector();
		vector();
		vector(const vector& other);
		vector(vector&& other);
		void push_back(const T& value);
		void pop_back();
		void insert(unsigned int pos, const T& value);
	};
}