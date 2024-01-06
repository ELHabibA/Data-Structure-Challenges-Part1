#pragma once
#include <iostream>
#include "clsMyStackArr.h"

using namespace std;

class clsMyString
{
private:

	string _Value;
	clsMyStackArr <string> _UndoStack;
	clsMyStackArr <string> _RedoStack;


public:
	
    void SetValue(string Value) {

        _UndoStack.push(_Value);
        _Value = Value;
    }

    string GetValue() {
        return _Value;
    }

    __declspec(property(get = GetValue, put = SetValue)) string Value;

    void Undo(){

        if (!_UndoStack.IsEmpty())
        {
            _RedoStack.push(_Value);
            _Value = _UndoStack.Top();
            _UndoStack.pop();
        }
 

    }

    void Redo() {

        if (!_RedoStack.IsEmpty())
        {
            _UndoStack.push(_Value);
            _Value = _RedoStack.Top();
            _RedoStack.pop();
        }

    }

};

