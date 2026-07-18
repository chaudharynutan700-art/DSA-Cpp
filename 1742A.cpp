#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    char arr[t];
    
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;

        if(a+b==c or b+c==a or a+c==b){
            arr[i]='y';
        }
        else{
           arr[i]='n';
        }


    }
    for(int i=0;i<t;i++){
        if(arr[i]=='y'){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<endl;
    }

}