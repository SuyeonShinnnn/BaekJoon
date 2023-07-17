#include <iostream>
#include <stdlib.h>
#include <string.h>
#define STACK_SIZE 10000
using namespace std;

int stack[STACK_SIZE];
int top = -1;

void push(int x)
{
    if(top >= STACK_SIZE)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    stack[++top] = x;
}
int empty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
int pop()
{
    if(empty())
        return -1;
    else
        return stack[top--];
}
int top_integer()
{
    if(empty())
        return -1;
    else
        return stack[top];
}
int main()
{
    int n;
    cin >> n;

    int x; //push
    char order[10]; //명령어

    for(int i = 0; i<n; i++)
    {
        cin >> order;

        if(strcmp(order, "push") == 0)
        {
            cin >> x;
            push(x);
        }
        else if(strcmp(order, "pop")== 0)
            cout << pop() << endl;
        else if(strcmp(order, "size") == 0)
            cout << top+1 << endl;
        else if(strcmp(order, "empty") == 0)
            cout << empty() << endl;
        else if(strcmp(order, "top") == 0)
            cout << top_integer() << endl;
    }
    return 0;
}