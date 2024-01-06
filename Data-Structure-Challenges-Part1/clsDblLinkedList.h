#pragma once
#include <iostream>
using namespace std;


template <class T>
class clsDblLinkedList
{

protected:

    int _Size = 0;

public:

    class Node
    {

    public:
        T value;
        Node* next;
        Node* prev;
    };

    Node* head = NULL;

    void InsertAtBeginning(T value)
    {

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        ++_Size;

    }

    // Print the linked list
    void PrintList()
    {

        Node* Current = head;

        while (Current != NULL) {
            cout << Current->value << " ";
            Current = Current->next;
        }
        cout << "\n";


    }

    Node* Find(T Value)
    {
        Node* Current = head;
        while (Current != NULL) {

            if (Current->value == Value)
                return Current;

            Current = Current->next;
        }

        return NULL;

    }

    void InsertAfter(Node* current, T value) {

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL) {
            current->next->prev = newNode;
        }

        current->next = newNode;

        ++_Size;
    }


    void InsertAtEnd(T value) {

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = NULL;
        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        }
        else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }

        ++_Size;

    }

    void DeleteNode(Node*& NodeToDelete) {

       
        if (head == NULL || NodeToDelete == NULL) {
            return;
        }
        if (head == NodeToDelete) {
            head = NodeToDelete->next;
        }
        if (NodeToDelete->next != NULL) {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }
        if (NodeToDelete->prev != NULL) {
            NodeToDelete->prev->next = NodeToDelete->next;
        }
        delete NodeToDelete;

        --_Size;

    }

    void DeleteFirstNode()
    {

        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        --_Size;
    }

    void DeleteLastNode() {

        if (head == NULL) {
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        // we need to find the node before last one.
        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = NULL;
        delete temp;
        --_Size;
    }

    int Size() {

        // This commented solution works but its O(n) Complexibilty, The other solution is only O(1)!

       /* int sum = 0;
        Node* current = head;

        if (head == NULL)
        {
            return 0;
        }

        while (current->next != NULL)
        {
            sum++;
            current = current->next;

        }
        
        return ++sum;   */

        return _Size;
    }

    bool IsEmpty() {
     
        return (head == NULL) ? true : false;
    }

    void Clear() {

        while (_Size != 0)
        {
            DeleteFirstNode();
        }

    }

    void Reverse() {

        Node* current = head;
        Node* temp = NULL;

        while (current != NULL)
        {
            temp = current->next;
            current->next = current->prev;
            current->prev = temp;

            if (current->next != NULL) {
                head = current;
            }

            current = current->prev;
        }
    }

    Node* GetNode(int index) {

        int counter = 0;
        Node* current = head;

        if (index > _Size-1 || index < 0)
        {
            return NULL;
        }
        while (current != NULL)
        {
            if (index == counter)
            {
                return current;
            }

            counter++;
            current = current->next;
        }

    }

   T GetItem(int index) {

        Node* current = GetNode(index);

        if (current == NULL)
        {
            return NULL;
        }

        return current->value;

    }

    bool UpdateItem(int Index, T NewValue)
    {
        Node* ItemNode = GetNode(Index);

        if (ItemNode != NULL)
        {
            ItemNode->value = NewValue;
            return true;
        }
        else
            return false;

    }

    bool InsertAfter(int Index, T value) {

        Node* ItemNode = GetNode(Index);

        if (ItemNode == NULL)
        {
            return false;
        }
        else
        {
            InsertAfter(ItemNode, value);
            return true;
        }
    }
};

