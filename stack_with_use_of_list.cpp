#include<iostream>
using namespace std;
class stack_using_list{
    public:
    struct node {
        int data;
        node * next;
    };
    node*head;
    stack_using_list( int data){
        head->data=data;
        head->next=NULL;
    }
    void push(int x){
        node *newnode =new node();
        newnode->data=x;
        newnode->next=head;
    }
    int pop(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int res=head->data;
        node *temp=head;
        head=head->next;
        delete temp;
        return res;
    }
    int peek(){
        if(head==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return head->data;
    }
    int size(){
        int count=0;
        node *temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    bool empty(){
        return head==NULL;
    }
    
};