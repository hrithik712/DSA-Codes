#include<iostream>
#include<stack>
using namespace std;
class Stack
{
    // properties ..
    public:
    int *arr;
    int size;
    int top;
    // behaviour .. 
    Stack(int size)
    {
        this -> size = size;
        arr = new int(size);
        top = -1;
    }
    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        cout<<"Stack Overflow! "<<endl;
    }
    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else{
            cout<<"Stack Underflow "<<endl;
        }
    }
    int peek()
    {
        if(top >= 0 && top < size)
        {
            return arr[top];
        }
        else{
            cout<<"Stack is empty! "<<endl;
        }
    }
    bool isEmpty()
    {
        if(top == -1)
        return true;
        else
        return false;
    }
};
int main()
{
    Stack st(5);
    st.push(20);
    st.push(30);
    st.push(45);

    cout<<"Top element is - "<<st.peek()<<endl;

    st.pop();

    cout<<"Top element is -  "<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout<<"Top element is - "<<st.peek()<<endl;
    
    if(st.isEmpty())
    {
        cout<<"Stack is empty! "<<endl;
    }
    else

    {
        cout<<"Stack is not empty"<<endl;
    }

    st.push(100);
    st.push(102);
    st.push(1055);

    cout<<"Top element present in stack is - "<<st.peek()<<endl;
    return 0;
}
