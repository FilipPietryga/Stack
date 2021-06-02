#pragma once
template<typename A>
class Stack
{
public:
	Stack();
	Stack(int size);
	Stack(int size, A value);
	//void push();
	//A pop();
	//A top();
private:
	void init();
	void init(A value);
	A* _arr;
	int _size;
};