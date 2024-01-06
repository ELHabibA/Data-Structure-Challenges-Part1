#pragma once
#include <iostream>
#include "clsDblLinkedList.h"



using namespace std;
template <class T>

class clsMyQueue 
{

protected:
	clsDblLinkedList <T> _MyList;

public:

	void push(T Item){

		_MyList.InsertAtEnd(Item);
	}

	void pop() {

		_MyList.DeleteFirstNode();
	}

	void Print()
	{
		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T front()
	{
		return _MyList.GetItem(0);
	}

	T back()
	{
		return _MyList.GetItem(Size()-1);
	}

	T GetItem(int index) {

		return _MyList.GetItem(index);
	}

	void Reverse() {

		_MyList.Reverse();
	}

	bool UpdateItem(int Index, T NewValue) {

		return _MyList.UpdateItem(Index, NewValue);
	}

	void InsertAfter(int Index, T value){

		_MyList.InsertAfter(Index,value);
	}

	void InsertAtFront(T Item) {


		_MyList.InsertAtBeginning(Item);
	}

	void InsertAtBack(T Item) {

		push(Item);

	}

	void Clear() {

		_MyList.Clear();
	}

};