#include<iostream>
using namespace std ;
int main(){ 
    int arr[50];
    int n,k;
    cin>>n>>k;
    int count=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];}

    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
    }
    cout<<count;
    return 0;
}