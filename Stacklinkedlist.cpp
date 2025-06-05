#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }
};

class stack
{
private:
    Node *top;// pointer to the top of the stack

public:
    stack()
    {
        top = NULL;//initiatelize the stack with a null top pointer
    }

    int push(int value)
    {
        Node* newNode = new Node(); //1.allocate memory for new node
        newNode->data = value;  //2.assign value to the new node
        newNode->next = top;    //3.set the next pointer of the new node to the current top
        top = newNode;          //4.update the top pointer to point to the new node
        cout << "push value " << value << endl;
        return value;
    }
    //isempty operation : check if step is empty
    bool isempty()
    {
        return top == NULL;//return true if the top pointer is null
    }
};