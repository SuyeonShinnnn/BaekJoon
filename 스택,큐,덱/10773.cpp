#include <iostream>
#define STACK_SIZE 100000
using namespace std;

int stack[STACK_SIZE];
int top = -1;

void push(int x)
{
    if(top >= STACK_SIZE)
        return;
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
int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int number;
        cin >> number;

        if(number == 0)
            pop();
        else
            push(number);
    }

    int sum = 0;

    for(int i=0;i<=top;i++)
        sum+=stack[i];
        
    cout << sum << endl;

    return 0;
}