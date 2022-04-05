#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

# define size 100
class Stack
{
private :
    int top,stack[size];
public:
    Stack();
    bool isfull();
    bool isempty();
    int push(int);
    int pop();
    int display();
    void clearstack();
};

#endif // STACK_H_INCLUDED
