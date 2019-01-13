#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*set<int> myset;
    if(myset.empty())
        myset.insert(100);
    myset.insert(9);
    myset.insert(8);
    myset.insert(8);
    myset.insert(9);
    myset.insert(11);
    myset.erase(9);
    //myset.clear();
    for(auto i : myset)
        cout<<i<<" ";*/
    //-------------------------------------
    /*set<int> set1;
    set<int> set2;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set2.insert(22);
    set2.insert(11);
    set2.insert(33);
    set1.swap(set2);
    for(auto i : set1)
        cout<<i<<" ";*/
    //-------------------------------------
    /*set<int> set1;
    set1.insert(7);
    set1.insert(8);
    set1.insert(9);
    //cout<<set1.find(3)<<" ";  //gives error because find() needs an iterator;
    set<int>::iterator it; //its a pointer
    //set1.begin() points to starting of set
    //set1.end() points to end of set
    for(it = set1.begin();it != set1.end();it++)
        cout<<*it<<" ";
    it = set1.find(3);
    cout<<*it<<" ";//returns position , pos starts from 1
    */
    //-------------------------------------
    /*set<int> set1;
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set1.insert(1);
    set1.insert(2);
    set1.insert(1);
    //set<int>::iterator it;
    int i = set1.count(1); //returns 1 if element is present , else not;
    cout<<i<<" ";*/
    //-------------------------------------
    set<string> s1;
    s1.insert("ajay");
    s1.insert("Ajay");
    s1.insert("flash");
    for(auto i:s1)
        cout<<i<<" ";
    int myints[]={12,75,10,32,20,25};
    set<int> first (myints,myints+3);     // 10,12,75
    set<int> second (myints+3,myints+6);  //20,25,32
}