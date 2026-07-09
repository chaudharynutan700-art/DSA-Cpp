#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
         count1++;
         break;
        }
    }
    if(count1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }

}