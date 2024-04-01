#include<iostream>
#include<stack>
using namespace std;
int main()
{
    // creation of stack ..
    stack<int> s;
    //push operation in stack ..
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(25);
    // pop operation in stack ..
    s.pop();

    cout<<"Elements present in stack are "<<s.top()<<endl;

    cout<<"Size of stack is - "<<s.size()<<endl;

    return 0;
}