#include "stdafx.h"
#include"CircularQueue.h"
#include<iostream>
using namespace std;
int main(void)
{
	int i;
	CCircularQueue<int>CircularQueue;
	CircularQueue.SetSize(10);
	for (i = 0; i < 12;i++)
	{
		cout << "Push";
		if (!CircularQueue.Push(i))
		{
			cout << " full;\t";
		}
		else
		{
			cout << i << ";\t";
		}
	}
	cout << "\n";
	for (i = 0; i < 5; i++)
	{
		cout << "Pop" << CircularQueue.Pop() << ";\t";
	}
	cout << "\n";
	for (i = 0; i < 7; i++)
	{
		cout << "Push";
		if (!CircularQueue.Push(i + 10))
		{
			cout << " full;\t";
		}
		else
		{
			cout << i << ":\t";
		}
	}
	cout << "\n";
	for (i = 0; i < 8; i++)
	{
		cout << "Pop" << CircularQueue.Pop() << ";\t";
	}
	cout << "\n";
	return 0;
}

