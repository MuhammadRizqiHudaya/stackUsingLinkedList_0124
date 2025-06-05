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

    //pop operation ; remove the topmost element ftom the stack
    void pop()
    {
        if (isempty())
        {
            cout << "stack is empty" << endl;
            return;// if the stack is empty print a message and return
        }
        cout << "popped value:" << top->data << endl;
        top = top->next;
    }

    //peek/tap operation retreive the value of the topmost element without removing it
    int peek()
    {
        if(isempty())
        {
            cout << "list is empty" << endl;
            return; //if the stack is empty print a message and return
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << "" << endl;
                current = current->next;
            }
            cout << endl;
        }//return value of the top node
    }
};

int main()
{
    stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.peek\n";
        cout << "4.exit\n";
        cout << "enter your choice:";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "enter the value to push:";
                cin >> value;
                stack.push(value);//push the entered value into the stack
                break;
            case 2:
                stack.pop();// pop the topmost element from the stack
                break;
            case 3 :
                stack.peek();
                break;
            case 4:
                cout << "exiting program" << endl;
                break;
            default:
                cout << "invalid choice,try again"<< endl;
                break;
        }
        cout << endl;
    }
    return 0;
}