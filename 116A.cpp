#include<iostream>
using namespace std;
int main(){
    int n,arra[1000],arrb[1000],arr[1000];
    cin>>n;
        
    
        for(int i=0;i<n;i++){
            cin>>arra[i]>>arrb[i];
            
        }
    arr[0]=arrb[0]-arra[0];   
        for(int i=1;i<n;i++){
            arr[i]=arr[i-1]-arra[i]+arrb[i];
        }
       int max=0; 
       for(int i=0;i<n;i++){
        
            if(arr[i]>max){
                max=arr[i];
            }
        
       }
    cout<<max;
}