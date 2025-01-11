# include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    //all keys are unique and one key point to one element 
    // all are int he orderd way
    map<int,string>m;
    m.insert({5,"love"});
    m.insert({1,"i"});
    m.insert({2,"hello"});
    for (auto i :m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    

    return 0;
}