#include <iostream>
#include "clsMyString.h"
#include "clsDblLinkedList.h"
#include "clsDynamicArray.h"
#include "clsMyQueue.h"
#include "clsMyQueueArr.h"
#include "clsMyStack.h"
#include "clsQueueLine.h"
#include "clsMyStackArr.h"


using namespace std;

int main()
{
    // ------------------------------- Examples To try all Projects classes -------------------------------------------



    //Project 1: Doubly Linked List

    cout << "\n\n\t\t\t\t\t\t Project 1: Doubly Linked List\n\n";

    clsDblLinkedList<int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(4, 500);


    MydblLinkedList.PrintList();


    //Project 2: Queue based on Doubly Linked List
    cout << "\n\n\t\t\t\t\t\t Project 2: Queue based on Doubly Linked List\n\n";

    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: \n";
    MyQueue.Print();

    cout << "\nQueue Size: " << MyQueue.Size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueue.Print();

    //Extension #1
    cout << "\n\n Item(2) : " << MyQueue.GetItem(2);

    //Extension #2
    MyQueue.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueue.Print();

    //Extension #3
    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueue.Print();

    //Extension #4
    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueue.Print();


    //Extension #5
    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueue.Print();

    //Extension #6
    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueue.Print();

    //Extension #7
    MyQueue.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueue.Print();


    //Project 3: Stack based on Queue
    cout << "\n\n\t\t\t\t\t\t Project 3: Stack based on Queue\n\n";

    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);


    cout << "\nStack: \n";
    MyStack.Print();

    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Top: " << MyStack.Top();
    cout << "\nStack Bottom: " << MyStack.Bottom();

    MyStack.pop();

    cout << "\n\nStack after pop() : \n";
    MyStack.Print();

    //Extension #1
    cout << "\n\n Item(2) : " << MyStack.GetItem(2);

    //Extension #2
    MyStack.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.Print();

    //Extension #3
    MyStack.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStack.Print();

    //Extension #4
    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStack.Print();


    //Extension #5
    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStack.Print();

    //Extension #6
    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStack.Print();

    //Extension #7
    MyStack.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStack.Print();

    //Project 4: Dynamic Array
    cout << "\n\n\t\t\t\t\t\t Project 4: Dynamic Array\n\n";

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAtBeginning(400);
    cout << "\n\nArray after insert 400 at Begining:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertBefore(2, 500);
    cout << "\n\nArray after insert 500 before index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAfter(2, 600);
    cout << "\n\nArray after insert 600 after index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    MyDynamicArray.InsertAtEnd(800);
    cout << "\n\nArray after insert 800 at End:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    //Project 5: Queue based on Dynamic Array
    cout << "\n\n\t\t\t\t\t\t Project 5: Queue based on Dynamic Array\n\n";

    clsMyQueueArr <int> MyQueueArr;

    MyQueueArr.push(10);
    MyQueueArr.push(20);
    MyQueueArr.push(30);
    MyQueueArr.push(40);
    MyQueueArr.push(50);


    cout << "\nQueue: \n";
    MyQueueArr.Print();

    cout << "\nQueue Size: " << MyQueueArr.Size();
    cout << "\nQueue Front: " << MyQueueArr.front();
    cout << "\nQueue Back: " << MyQueueArr.back();

    MyQueueArr.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueueArr.Print();


    cout << "\n\n Item(2) : " << MyQueueArr.GetItem(2);


    MyQueueArr.Reverse();
    cout << "\n\nQueue after reverse() : \n";
    MyQueueArr.Print();


    MyQueueArr.UpdateItem(2, 600);
    cout << "\n\nQueue after updating Item(2) to 600 : \n";
    MyQueueArr.Print();


    MyQueueArr.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2) : \n";
    MyQueueArr.Print();



    MyQueueArr.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at front: \n";
    MyQueueArr.Print();


    MyQueueArr.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at back: \n";
    MyQueueArr.Print();


    MyQueueArr.Clear();
    cout << "\n\nQueue after Clear(): \n";
    MyQueueArr.Print();


    //Project 6: Stack based on New Queue
    cout << "\n\n\t\t\t\t\t\t Project 6: Stack based on New Queue\n\n";
    clsMyStackArr <int> MyStackArr;

    MyStackArr.push(10);
    MyStackArr.push(20);
    MyStackArr.push(30);
    MyStackArr.push(40);
    MyStackArr.push(50);


    cout << "\nStack: \n";
    MyStackArr.Print();

    cout << "\nStack Size: " << MyStackArr.Size();
    cout << "\nStack Top: " << MyStackArr.Top();
    cout << "\nStack Bottom: " << MyStackArr.Bottom();

    MyStackArr.pop();

    cout << "\n\nStack after pop() : \n";
    MyStackArr.Print();


    cout << "\n\n Item(2) : " << MyStackArr.GetItem(2);


    MyStackArr.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStackArr.Print();


    MyStackArr.UpdateItem(2, 600);
    cout << "\n\nStack after updating Item(2) to 600 : \n";
    MyStackArr.Print();


    MyStackArr.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2) : \n";
    MyStackArr.Print();



    MyStackArr.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at top: \n";
    MyStackArr.Print();


    MyStackArr.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at bottom: \n";
    MyStackArr.Print();


    MyStackArr.Clear();
    cout << "\n\nStack after Clear(): \n";
    MyStackArr.Print();


    // Project 7: Undo and Redo Simulation


    cout << "\n\n\t\t\t\t\t\t Project 7: Undo and Redo Simulation\n\n";

    clsMyString S1;

    cout << "\nS1  = " << S1.Value << "\n";

    S1.Value = "Habib";

    cout << "S1  = " << S1.Value << "\n";

    S1.Value = "Habib2";

    cout << "S1  = " << S1.Value << "\n";

    S1.Value = "Habib3";

    cout << "S1  = " << S1.Value << "\n";

    cout << "\n\nUndo: ";
    cout << "\n__________\n";

    S1.Undo();
    cout << "\nS1  after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "S1  after undo = " << S1.Value << "\n";

    S1.Undo();
    cout << "S1  after undo = " << S1.Value << "\n";

    cout << "\n\nRedo: ";
    cout << "\n__________\n";

    S1.Redo();
    cout << "\nS1  after Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "S1  after Redo = " << S1.Value << "\n";

    S1.Redo();
    cout << "S1  after Redo = " << S1.Value << "\n";

    //Project 8: Queue Management System
    cout << "\n\n\t\t\t\t\t\t Project 8: Queue Management System\n\n";

    clsQueueLine PayBillsQueue("A0", 10);
    clsQueueLine SubscriptionsQueue("B0", 5);


    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();
    PayBillsQueue.IssueTicket();

    cout << "\nPay Bills Queue Info:\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.PrintTicketsLineRTL();
    PayBillsQueue.PrintTicketsLineLTR();



    PayBillsQueue.PrintAllTickets();

    PayBillsQueue.ServeNextClient();
    cout << "\nPay Bills Queue After Serving One client\n";
    PayBillsQueue.PrintInfo();

    cout << "\nSubscriptions Queue Info:\n";

    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();
    SubscriptionsQueue.IssueTicket();


    SubscriptionsQueue.PrintInfo();

    SubscriptionsQueue.PrintTicketsLineRTL();
    SubscriptionsQueue.PrintTicketsLineLTR();

    SubscriptionsQueue.PrintAllTickets();

    SubscriptionsQueue.ServeNextClient();
    cout << "\nSubscriptions Queue After Serving One client\n";
    SubscriptionsQueue.PrintInfo();



    system("pause>0");

    return 0;
}



