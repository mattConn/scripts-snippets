#include <iostream>
#include <cassert>

using namespace std;

template <class T>
class Stack
{
	int size;
	int currentIndex = 0;
	T *arr = nullptr;

	public:
	Stack();
	Stack(const int &s);
	int getSize();
	void push(const T &item);
	void resize(const int &newSize);
	T operator[](const int &i);
};

int main()
{
	Stack<int> s(2);

	s.push(2);
	s.push(5);
	s.push(10);
	s.push(4);
	s.push(14);

	cout << "Size: " << s.getSize() << endl;

	for(int i = 0; i < s.getSize(); i++)
		cout << s[i] << endl;

	return 0;
}


// default constructor
template <class T>
Stack<T>::Stack()
{
	size = 10;
	arr = new T [size];
}


// custom constructor
// set array size
template <class T>
Stack<T>::Stack(const int &s)
{
	size = s;
	arr = new T [size];
}

template <class T>
void Stack<T>::push(const T &item)
{
	if(currentIndex == size)
		resize(size+1);

	arr[currentIndex] = item;
	currentIndex++;
}

template <class T>
int Stack<T>::getSize(){ return size; }

template <class T>
void Stack<T>::resize(const int &newSize)
{
	T *tmp = new T [newSize];
	for(int i = 0; i < size; i++)
		tmp[i] = arr[i];

	size = newSize;
	arr = tmp;
}


template <class T>
T Stack<T>::operator[](const int &i)
{
	assert(i < size && i > -1);
	return arr[i];
}
