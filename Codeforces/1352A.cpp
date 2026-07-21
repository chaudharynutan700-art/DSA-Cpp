#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
     for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        int place=1;
        int digit;
        vector<int>ans;
        while(n>0){
           
            digit=n%10;
            if(digit!=0){
             ans.push_back(digit*place);
            }
            place=place*10;
            n/=10;
            
        }
        cout<<ans.size()<<endl;
            for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";}
            cout << endl;
     }
        

}