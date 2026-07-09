#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    int m;
    int row,column;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>m;
            if(m==1){
                row=i;
                column=j;
            }
        }
    }
    cout<<abs(row-2)+abs(column-2);
    return 0;

}
