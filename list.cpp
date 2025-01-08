#include<iostream>
#include<list>
using namespace std;
int main(){
    //using the list as the stl
    list<int>l;//the empty list
    l.push_back(1);//pushing the element in the list
    l.push_back(2);
    l.push_back(0);
    list<int>::iterator it;
    it=l.begin();
    l.sort();//sorting the list
    l.reverse();//reversing the list
    while(it!=l.end()){
        cout<<*it<<" ";
        it++;
    }
    return 0;
}