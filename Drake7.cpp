#include<iostream>
#include<string>
using namespace std;
void agechecker(int age);
int main(){
    int age;
    do{
         cout<<"Enter your age:"<<endl;
         cin>>age;
         agechecker(age);
         
    }while(cin>>age);
   cout<<"Wrong input"<<endl;
    
  return 0;

} void agechecker(int age){
    if(age>18){
        cout<<"You are eligible."<<endl;
    }else{
        cout<<"You are not eligible."<<endl;
    }
}