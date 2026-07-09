#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        int x=q-p;
        if(x>=2){
            count++;
        }

    }
    cout<<count;
    return 0;
}