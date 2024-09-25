#include<iostream>
using namespace std;
int main(){
    int counter,a,b,c,nthfib;
    a = 0;
    b = 1;
    counter = 0;
    nthfib = 10;
    while(counter<=nthfib){
        c = a + b;
        a = b;
        b = c;
        counter++;
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}