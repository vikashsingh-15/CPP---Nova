#include<iostream>
#include"bitmap.h"
using namespace std;

template<typename T>
Stack<T>::Stack()
{
	size=5;
    top=-1;
    arr = new T[size];
}

template<typename T>
Stack<T>::Stack(int s)
{
    size=s;
    top=-1;
    arr=new T[size];
}

template<typename T>
void Stack<T>::push(T data)
{
    top++;
    arr[top]=data;
}
	
template<typename T>
T Stack<T>::pop()
{
    int x=arr[top];
    top++;
    return x;
}

template<typename T>
T Stack<T>::peep()
{
    if(! isempty())
    return arr[top];
}
	
template<typename T>
bool Stack<T>::isfull()
{
     return top==size-1;
}
	
template<typename T>
bool Stack<T>::isempty()
{
    return top==-1;
}
