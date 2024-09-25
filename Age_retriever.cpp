#include<iostream>
#include<ctime>
using namespace std;
int main(){
    while (1)
    {
     int bday, bmonth, byear,age;
    cout<<"Enter your date of birth "<<endl;
    cin>>bday>>bmonth>>byear;

    //geting current time
    time_t _t = time(0);
    tm* tm = localtime(&_t);
    int currentDay = tm->tm_mday;
    int currentMonth = tm->tm_mon +1;
    int currentYear = tm->tm_year+1900;

    cout<<currentDay<<"/"<<currentMonth<<"/"<<currentYear<<endl;
      
    age = currentYear -byear;
   
    if (bmonth>currentMonth)
    {
       age--;
    }

    if (bmonth==currentMonth && bday>currentDay)
    {
       age--;
    }

    cout<<"You are "<<age<<" years old"<<endl<<endl;


    int response = 1;
    cout<<"Would you like to Repeat the process"<<endl;
    cout<<"1.Yes"<<endl;
    cout<<"2.No"<<endl;
    cin>>response;

    if (response==2)
    {
       break;
    }
    
    }


    return 0;
}