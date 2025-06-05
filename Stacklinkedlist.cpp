#include <iostream>
using namespace std;

class node 
{
public:
    int data;
    node* next;

    node()
    {
        next = NULL;
    }
};

class stack
{
private:
    node *top;// pointer to the top of the stack


}