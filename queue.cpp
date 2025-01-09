//queue using stl
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //using the queue as the stl
    queue<int>q;//the empty queue
    q.push(1);//pushing the element in the queue
    q.push(2);
    q.push(0);
    cout<<q.front()<<endl;//printing the front element of the queue
    q.pop();//poping the element from the front of the queue
    cout<<q.front()<<endl;//printing the front element of the queue
    return 0;
}