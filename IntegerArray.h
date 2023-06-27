#pragma once
#ifndef INTEGER_ARRAY_H
#define INTEGER_ARRAY_H
#include<exception>


class bad_range : public std::exception {

public:
	const char* what() const throw () {
		return "Out of range";
	}
};

class bad_length : public std::exception {

public:
	const char* what() const throw () {
		return "Invalid array length";
	}
};

class IntegerArray {

public:
	IntegerArray();
	IntegerArray(int length);
	~IntegerArray();
	int get_length() const;
	int get_value(int index) const;
	void set_value(int index, int value);

private:
	int* m_data;
	int m_length;
};

#endif // INTEGER_ARRAY_H