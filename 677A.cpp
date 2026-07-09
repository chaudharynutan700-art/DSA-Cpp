#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int counth=0;
    int countH=0;
    while(n--){
        int x;
        cin>>x;
        if(x<=h){
            counth++;
            

        }
        else{
            countH=countH+2;
        }
    }
    cout<<counth+countH;
    return 0 ;

}
