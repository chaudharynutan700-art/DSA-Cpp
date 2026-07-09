#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    string rev="";
    int l=s.length();
    for(int i=l-1;i>=0;i--){
        rev=rev+s[i];

    }
    
    if(rev==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
   return 0;
}