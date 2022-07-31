#include<iostream>
#include"bitmap.h"
using namespace std;

template<typename T>
Queue<T>::Queue()
{
  size = 5;
  front = -1;
  rear = -1;
  arr = new T[size];
}

template<typename T>
Queue<T>::Queue(int s)
{
  size = s;
  front = -1;
  rear = -1;
  arr = new T[size];
}

template<typename T>
void Queue<T>::insert(T data)
{
  rear++;
  arr[rear] = data;

}
	
template<typename T>
T Queue<T>::remove()
{
  T temp = arr[front];
  front++;
  if (front > rear)
    front = rear = -1;
  return temp;
}

	
template<typename T>
bool Queue<T>::isfull()
{
  if (rear == size)
    return true;
  else
    return false;
}
	
template<typename T>
bool Queue<T>::isempty()
{
  if (front == -1)
    return true;
  else
    return false;
}
