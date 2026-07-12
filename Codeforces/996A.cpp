#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n){
    if(n>=100){
      int m=n/100;
    
      count=count+m;
      n=n%100;
    }
    else if(n>=20 && n<100){
        int m=n/20;
        n=n%20;
        count=count+m;
    }
    else if(n>=10 && n<20){
        int m=n/10;
        n=n%10;
        count=count+m;
    }
    else if(n>=5 && n<10){
        int m=n/5;
        n=n%5;
        count=count+m;
    }
    else{n--;
        count++;

    }
}
    cout<<count;

    
    
}