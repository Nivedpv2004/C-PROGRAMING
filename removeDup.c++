#include<iostream>
using namespace std;

string removeDup(string s)
{
    if(s.length()==0)
    return "";

    char ch=s[0];
    string ans = removeDup(s.substr(1));

    if(ch==ans[0])
    return ans;
    else
    return (ch+ans);
}

int main(){
    
    string n;
    cin>>n;
    cout<<removeDup(n);
    return 0;
}
