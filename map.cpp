#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*map<char,int> map1;
    map1.insert(pair<char,int>('a',100));
    map1.insert(pair<char,int>('b',200));
    map1.insert(pair<char,int>('c',300));
    pair<map<char,int>::iterator,bool> ret;
    ret = map1.insert(pair<char,int>('a',500));
    cout<<ret.first->second<<" "; //100
    cout<<ret.second<<" "; //false 
    for(auto i : map1)
    {
        cout<<i.first<<" "<<i.second<<" ";
    }*/
    //----------------------------------------
    map<char,int> m1;
    m1['a'] = 100;
    m1['b'] = 200;
    m1['c'] = 300;
    m1['c'] = 500;//takes the latest value;
    m1['d'] = 400;
    m1['e'] = 700;
    for(auto i: m1)
    {
        cout<<i.first<<" "<<i.second<<",";
    }
    map<char,int>::iterator it;
    it = m1.lower_bound('b'); //points to b
    it = m1.upper_bound('d'); //points to e
    it=m1.find('b');
    m1.erase (it);   //removes b     
    m1.erase ('c');      // erasing by key , removes c
    it=m1.find ('e');
    m1.erase ( it, m1.end() );//erasing by range , from 'e' to end;
    m1.count('d'); //returns 1 if present , else 0;
}