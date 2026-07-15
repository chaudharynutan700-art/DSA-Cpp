#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,l,m,n,d ;
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    int count=0;
    int a=1;
    
    for(int i=1;i<=d;i++){
       if(k==1 ||l==1 ||m==1||n==1){
        cout<<d<< endl;
        a=0;
        break;


       }
      else if(i%k==0 || i%l==0 || i%m==0 ||i%n==0){

        }
        else{
            count++;
        }

    }

    if(a){
        cout<<d-count;
    }


}