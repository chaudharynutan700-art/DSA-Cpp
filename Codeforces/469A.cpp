#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool level[101]={false};
    int x;
    cin>>x;
    
    for(int i=0;i<x;i++){
      int p;
      cin>>p;
   
      level[p]=true;}
   int y;
   cin>>y;
   for(int i=0;i<y;i++){
      int q;
      cin>>q;
      level[q]=true;
   }
    int t=1;
   for(int i=1;i<=n;i++){
      if(!level[i]){
         cout<<"Oh, my keyboard!";
         t=0;
         break;
         
      }
   }
    if(t){
      cout<<"I become the guy.";
    }
    
    
 
}