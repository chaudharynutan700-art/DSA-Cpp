#include<iostream>
#include<string>
using namespace std ;
int main(){
    int n;
    cin>>n;
    string s;
    int X=0;
    for (int i=0;i<n; i++){
        cin >> s;
        if(s=="X++"||s=="++X")
        X++;
        else if(s=="X--"||s=="--X")
        X--;
    }
    cout<< X;
    return 0;
}