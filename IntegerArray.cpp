#include "IntegerArray.h"

IntegerArray::IntegerArray() : m_data(nullptr), m_length(0) {}

IntegerArray::IntegerArray(int length) : m_data(new int[length]), m_length(length) {}

IntegerArray::~IntegerArray() {
	delete[] m_data;
}

int IntegerArray::get_length() const {
	return m_length;
}

int IntegerArray::get_value(int index) const {
	if (index < 0 || index >= m_length) {
		throw bad_range();
	}
	return m_data[index];
}

void IntegerArray::set_value(int index, int value) {
	if (index < 0 || index >= m_length) {
		throw bad_range();
	}
	m_data[index] = value;
}