#include<iostream>
using namespace std;
int main(){
    int i;
    i = 0;
    while(i<=20){
        cout<<i<<" "<<endl;
        i = i + 5;
    }
    cout<<endl;
     int a,j;
    for( a= 0;a<=5;a++){
        for(j= 0; j<=a; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}