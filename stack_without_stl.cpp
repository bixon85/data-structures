#include<iostream>
using namespace std;
class stack_using_vector{
    public:
    int * arr;
    int top;
    int capacity;
    stack_using_vector(int capacity){
        arr = new int[capacity];
        top = -1;
        this->capacity = capacity;
    }
    void push(int x){
        if(top == capacity-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        arr[++top] = x;
    }
    int pop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool empty(){
        return top == -1;
    }
    
};
int main(){
    return 0;
}