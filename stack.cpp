#include<iostream>
#include<stack>
using namespace std;
int main(){
    //using the stack as the stl
    stack<int>s;//the empty stack
    s.push(1);//pushing the element in the stack
    cout<<s.top()<<endl;//this will give the top element of the stack   
    cout<<s.size()<<endl;//this will give the size of the stack
    cout<<s.empty()<<endl;//this will check if the stack is empty or not
    s.push(2);
    //basically using the swap we can swap the two stacks
    return 0;
}