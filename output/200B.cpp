#include<iostream>
using namespace std;
int main(){
    double n;
    cin>>n;
    double total=0;
    for(int i=0;i<n;i++){
        double x;
        cin>>x;
        total=total+x;
    }
    
    cout<<total/n;
    

}