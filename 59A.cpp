#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s;
    cin>>s;
    int lower=0;
    int upper=0;
    string num="";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            lower++;

        }
        else if(s[i]>='A' && s[i]<='Z'){
          upper++;
        }
    }

    if(lower>=upper){
        for(int i=0; i<s.length();i++){

            if(s[i]>='A' && s[i]<='Z'){
                num+=s[i]+32;}
            else{
                num+=s[i];
            }        

        }
    }
    else{ for(int i=0; i<s.length();i++){

            if(s[i]>='a' && s[i]<='z'){
                num+=s[i]-32;}
            else{
                num+=s[i];
            }        

        }
        


    }
    cout<<num;
    return 0;}
