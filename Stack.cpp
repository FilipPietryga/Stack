#include "Stack.h"

Stack<int>::Stack() 
	: _size(0) {
	init(0);
}

Stack<int>::Stack(int size)
	: _size(size) {	
	init(0);
}

Stack<int>::Stack(int size, int value)
	: _size(size) {
	init(value);
}

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