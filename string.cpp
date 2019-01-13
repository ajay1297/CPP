#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Hey hello....";
    string str2 = "Flash";
    str1.append(str2); // Hey hello....Flash
    str1.replace(4,9,str2);
    cout<<str1<<" ";
    string str3 = "hi there , Zoom";
    size_t i = str3.find("Zoom");
    if(i!=string::npos)
        cout<<i<<"\n";
    string s1 ("There are two needles in this haystack with needles.");
    string s2 ("needle");
    s1.replace(s1.find(s2),s2.length(),"preposition");
    cout << s1 << '\n';
}