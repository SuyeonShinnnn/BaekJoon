#include <iostream>
#define QUEUE_SIZE 10000
using namespace std;

typedef struct Queue
{
    int front;
    int back;
    int queue[QUEUE_SIZE];
}Queue;

void initQueue(Queue* q)
{
    q -> front = -1;
    q -> back = -1;
}
int empty(Queue* q)
{
    if(q -> front == q -> back)
        return 1;
    else return 0;
}
void push(Queue* q, int x)
{
    q -> queue[++(q -> back)] = x;
}
int pop(Queue* q)
{   
    if(empty(q)) return -1;
    return q -> queue[++(q -> front)];
}
int main()
{
    int n;
    cin >> n;

    Queue q;
    initQueue(&q);

    for(int i = 0; i < n; i++)
    {
        string order;
        int x;
        cin >> order;
        if(order.compare("push") == 0)
        {
            cin >> x;
            push(&q, x);
        }
        else if(order.compare("pop") == 0)
        {
            cout << pop(&q) << endl;
        }
        else if(order.compare("size") == 0)
        {
            cout << q.back - q.front << endl;
        }
        else if(order.compare("empty") == 0)
        {
            cout << empty(&q) << endl;
        }
        else if(order.compare("front") == 0)
        {
            if(empty(&q)) cout << -1 << endl;
            else cout << q.queue[q.front + 1] << endl;
        }
        else if(order.compare("back") == 0)
        {
            if(empty(&q)) cout << -1 << endl;
            else cout << q.queue[q.back] << endl;
        }
    }
}