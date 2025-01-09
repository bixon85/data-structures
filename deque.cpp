//using stl deque
#include<iostream>
#include<deque>
using namespace std;
int main(){
    //using the deque as the stl
    deque<int>d;//the empty deque
    d.push_back(1);//pushing the element in the deque
    d.push_back(2);
    d.push_back(0);
    deque<int>::iterator it;
    it=d.begin();
    d.push_front(3);//pushing the element in the front of the deque
    d.pop_back();//poping the element from the back of the deque
    d.pop_front();//poping the element from the front of the deque
    while(it!=d.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}