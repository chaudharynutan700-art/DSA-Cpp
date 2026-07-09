#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int countA=0;
    int countD=0;
    for(int i=0; i<n;i++){
        if(s[i]=='A'){
            countA++;

        }
        else if(s[i]=='D'){
            countD++;
        }
    }
if(countA>countD){
    cout<<"Anton";
}
else if(countA<countD){
    cout<<"Danik";
}
else{
    cout<<"Friendship";
}
return 0;
}