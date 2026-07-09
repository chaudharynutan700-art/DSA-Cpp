#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string num ="";
    for(int i= 0; i<s1.length();i++){
        if(s1[i] != '+'){
            num+=s1[i];}}
    

    for(int i=0; i<num.length();i++){
        for(int j= i + 1 ; j<num.length() ;j++){
        if(num[i]>num[j]){
            char temp=num[i];
            num[i]=num[j];
            num[j]=temp;}}}

   for(int i=0 ;i<num.length();i++){
    cout<<num[i];
    if(i != num.length()-1){
        cout<<'+'; }
    }
    }