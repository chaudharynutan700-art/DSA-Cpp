#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Entr number";
    cin >>x ;
    bool found=false;
    for(int a=2; a<x; a++){
        for(int b=2;b<x;b++){
            if( a+b==x && a%2==0 && b%2==0){
            cout<<a<<"+"<<b<<endl;
             found=true;
             break;}

        }
        if(found){
            break;
        }
    }
    if(found){
        cout<<"yes";}
    else{
        cout<<"No";
    }    
    
    return 0;

}