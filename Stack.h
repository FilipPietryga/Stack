#pragma once
template<typename T>
class Stack {
public:
	Stack();
	Stack(int);
	Stack(int, T);
	void push(T);
	T pop();
	T top() const;
	friend std::ostream& operator<<(std::ostream&, const Stack&);
	T operator[](int) const;
protected:
	void init();
	void init(T);
	T* _arr;
	int _size, _max;
};