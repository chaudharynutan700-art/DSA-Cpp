#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s1;
    cin>>s1;
    string num="";
    for(int i = 0 ; i< s1.length();i++){
        bool found=false;
    for(int j=0; j<num.length();j++){

        if(s1[i]==num[j]){
            found=true;
            break;
        }
    }
    if(!found){
        num+=s1[i];
    }

    }
    int length=num.length();

   if(length % 2==0){
    cout<<"CHAT WITH HER!";
   }
   else{
    cout<<"IGNORE HIM!";
   }
    return 0;

}