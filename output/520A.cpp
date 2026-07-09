#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>m;
    for(int i=0;i< s.size();i++){
            if(s[i]>='A' &&s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
    for(int i=0;i<s.size();i++){
            m.insert(s[i]);
        }
    if(m.size()>=26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }}