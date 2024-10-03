#include<iostream>
#include<string>

 using namespace std;
 class Car{
    private:
    string make;
    string model;
    public:
    void setMake(string m){
        make = m;
    }

    string getMake(){
        return make;
    }
 };
 int main(){
    Car myCar;
    myCar.setMake("Toyota");
    cout<<myCar.getMake()<<endl;
    myCar.setMake("Camry");
    cout<<myCar.getMake()<<endl;
    return 0;
 }