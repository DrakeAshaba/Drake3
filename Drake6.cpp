#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    string name;
    cout<<"Enter your name:"<<endl;
    getline(cin,name);

    cout<<"Hello World!"<<endl;
    cout<<"Enter your age"<<endl;
    cin>>age;
    
    cout<<"Your name is:"<<name<<endl;
    cout<<"Your age is:"<<age<<endl;
    return 0;
}