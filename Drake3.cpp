#include<iostream>
using namespace std;
int main(){
    int sum  = 8;
    int num;
    cin>>num;
    while(cin){
        sum = sum + num;
        cin>>num;
    } 
    cout<<"Sum = "<<sum<<endl;
}