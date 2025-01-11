#include<iostream>
#include<set>
using namespace std;
int main(){
    //if the set is give it stores the unique elements only if thier is 5 time 5 
    // then it shows only one times 5
    // ekbar agaar a ek element dala to woh fir modify nahi hoga ya to dalo ya delete kardo
    // set is little slow then unorderd set
    // thier is sorted order in set
    set<int>p;
    p.insert(1);
    p.insert(2);
    p.insert(5);
    p.insert(3);
    for(auto i :p)//this is the new method to access the element in the given data structure
    { 
        cout<<i<<endl;
    }
    cout<<p.count(5);//it says whether the element is present or not//1 for true

    return 0;
}