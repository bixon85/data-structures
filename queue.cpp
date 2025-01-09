// //queue using stl
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     //using the queue as the stl
//     queue<int>q;//the empty queue
//     q.push(1);//pushing the element in the queue
//     q.push(2);
//     q.push(0);
//     cout<<q.front()<<endl;//printing the front element of the queue
//     q.pop();//poping the element from the front of the queue
//     cout<<q.front()<<endl;//printing the front element of the queue
//     return 0;
// }
//without using the stl
#include<iostream>
using namespace std;
class Queue {
    
    int* arr;
    int qfront;
    int rear; 
    int size;
    
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }


    bool isEmpty() {
        if(qfront == rear) {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size)
            cout << "Queue is Full" << endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    int dequeue() {
        if(qfront == rear) {
            return -1;
        }
        else
        {	int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
         return ans;
        }
    }

    int front() {
        if(qfront == rear) {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};
int main(){
    return 0;
}
