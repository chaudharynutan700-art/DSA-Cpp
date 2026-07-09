#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, n,w;
    cin>>k>>n>>w;
    int dollor=0;
    for(int i=1;i<=w;i++){
       dollor=dollor+k*i;
    }
    if(n>=dollor){
        cout<<0;
    }
    else{
    cout<<dollor-n;}

    return 0;
}