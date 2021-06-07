#include <iostream>
#include "Stack.h"

Stack<int>::Stack() 
	: _size(0), _max(0) {
	init();
}

Stack<int>::Stack(int size)
	: _size(size), _max(size) {	
	init();
}

Stack<int>::Stack(int size, int value)
	: _size(size), _max(size) {
	init(value);
}

template<>
void Stack<int>::init() {
	_arr = new int[_size];
}

template<>
void Stack<int>::init(int value) {
	_arr = new int[_size];
	for (int i = 0; i < _size; i++)	{
		_arr[i] = value;
	}
}

int Stack<int>::operator[](int n) const {
	return _arr[n];
}

std::ostream& operator<<(std::ostream& out, const Stack<int>& stack) {
	for (int i = 0; i < stack._size; i++) {
		out << stack[i] << " ";
	}
	return out;
}

void Stack<int>::push(int arg) {
	if (_size == 0) {
		_max += 4;
		_arr = new int[_max];
		_arr[_size] = arg;
		_size++;
	}
	else {
		if (_size >= _max) {
			_max += 4;
			int* temp = new int[_max];
			for (int i = 0; i < _size; i++) {
				temp[i] = _arr[i];
			}
			delete _arr;
			_arr = temp;
		}
		_arr[_size] = arg;
		_size++;
	}
}

int Stack<int>::pop() {
	int value = _arr[_size];
	_arr[_size] = 0;
	_size -= 1;
	return value;
}

int Stack<int>::top() const {
	return _arr[_size > 0 ? _size - 1 : _size];
}