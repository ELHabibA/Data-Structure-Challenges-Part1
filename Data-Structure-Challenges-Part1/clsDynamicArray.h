#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{

protected:
    int _Size = 0;
    T* _TempArray;


public:
    T* OriginalArray;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _Size = Size;

        OriginalArray = new T[_Size];

    }

    ~clsDynamicArray()
    {

        delete[]  OriginalArray;

    }

    bool SetItem(int index, T Value)
    {

        if (index >= _Size || _Size < 0)
        {
            return false;
        }

        OriginalArray[index] = Value;
        return true;

    }


    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);

    }

    void PrintList()

    {

        for (int i = 0; i <= _Size - 1; i++)
        {
            cout << OriginalArray[i] << " ";
        }

        cout << "\n";

    }

    void Resize(int NewSize)
    {

        if (NewSize < 0)
        {
            _Size = 0;
        }

        _TempArray = new T[NewSize];

        if (NewSize  < _Size)
        {
            for (int i = 0; i < NewSize; i++)
            {
                _TempArray[i] = OriginalArray[i];
            }
        }

        else
        {
            for (int i = 0; i < _Size; i++)
            {
                _TempArray[i] = OriginalArray[i];
            }
        }

        _Size = NewSize;


        delete[] OriginalArray;
        OriginalArray = _TempArray;


    }

    T GetItem(int index) {

        return OriginalArray[index];

    }

    void Reverse() {

        _TempArray = new T[_Size];

        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[_Size - 1 - i];

        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;

    }

    void Clear() {

        _TempArray = new T[0];

        _Size = 0;

        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    bool DeleteItemAt(int index) {

        if (index > _Size || index < 0)
        {
            return false;
        }

        _Size = _Size - 1;

        _TempArray = new T[_Size];
        int counter = 0;

        for (int i = 0; i <= _Size; i++)
        {
            if (i != index)
            {
                _TempArray[counter] = OriginalArray[i];
                counter++;
            }

        }

        delete[] OriginalArray;
        OriginalArray = _TempArray;
        return true;
    }

    bool DeleteFirstItem() {


        return DeleteItemAt(0);

    }

    bool DeleteLastItem() {


        return DeleteItemAt(_Size - 1);

    }

    int Find(T value) {

        for (int i = 0; i < _Size; i++)
        {
            if (OriginalArray[i] == value)
            {
                return i;
            }
        }

        return -1;
    }

    bool DeleteItem(T value) {

        int index = Find(value);

        if (index == -1)
        {
            return false;
        }

        return DeleteItemAt(index);
    }

    bool InsertAt(int index, T value) {

        if (index > _Size || index < 0)
        {
            return false;
        }

        _Size++;

        _TempArray = new T[_Size];

        for (int i = 0; i < index; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _TempArray[index] = value;

        for (int i = index; i < _Size - 1; i++)
        {
            _TempArray[i + 1] = OriginalArray[i];
        }


        delete[] OriginalArray;
        OriginalArray = _TempArray;
        return true;

    }

    bool InsertAtBeginning(T value) {

        return InsertAt(0, value);
    }

    bool InsertBefore(int index, T value) {

        if (index == 1 || index == 0)
        {
            return  InsertAt(0, value);
        }

        return  InsertAt(index - 1,value);
    }

    bool InsertAfter(int index, T value) {

        if (index > _Size - 1)
        {
            return  InsertAt(_Size - 1, value);
        }

        return  InsertAt(index + 1, value);
    }

    bool InsertAtEnd(T value) {

        return  InsertAt(_Size, value);
    }




};

