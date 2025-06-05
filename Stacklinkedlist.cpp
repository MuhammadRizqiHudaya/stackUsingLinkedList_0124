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
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "push value " << value << endl;
        return value;
    }
};