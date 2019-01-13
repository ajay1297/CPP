#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<string,int> pair3 = make_pair(string("Ajay"),7);
    pair<int,int> p1(1,2);
    pair<int,int> p2;
    p2.first = 1;
    p2.second = 2;
    pair<int,int> p3;//by default intialised to 0 or NULL
    p3 = make_pair(4,5);
    //-----------------------------------------------------
    pair<int,int> pair1 = make_pair(1,8); //make_pair(a,b)
    pair<int,int> pair2 = make_pair(1,9); //make_pair(c,d)
    cout << (pair1 == pair2) << endl; 
    cout << (pair1 != pair2) << endl; 
    cout << (pair1 >= pair2) << endl; // first 1(a) & 2(c) are compared
    cout << (pair1 <= pair2) << endl; // if a & c are same , then b and d are comapred
    cout << (pair1 > pair2) << endl; 
    cout << (pair1 < pair2) << endl; 
}