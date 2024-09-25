#include <iostream>
#include <string.h>
#include<ctime>
using namespace std;
//Function for validating password.
bool validatepassword(char password[25]){
    int i;
    for (i=3; i>0; i--)
    {
        cout<<"Enter password(You are remaining with "<<i<<" )";
        cin>>password;
        if (strcmp(password,"CMP2103")==0)//Comparing the prompted password to the related password
        {
            
            cout<<"Correct password!"<<endl;
           return true;
        }else
        {
            cout<<"Incorrect Password. Please re-input password."<<endl;
        }
    }
    return false;
}

int main()
{
    // first part 
    //Prompting user for the name
    char name[25];
    char password[25];
    cout<<"Enter Name: ";
    cin.get(name,25);
    cout<<name<<endl;
    


    if (!validatepassword(password))//checks if password is incorrect
    {
        cout<<"Attempts ended. Wrong password."<<endl;
       
    }
    
    cout<<"Welcome back "<<name<<"!"<<endl;
       
  
     double GP;
     int no_of_subjects;
     cout<<"Enter the number of subjects:"<<endl;//Prompting the user for the number of subjects done
     cin>>no_of_subjects;

    double marks[no_of_subjects][2];
          const int weight = 4;// Credit Units

     //Assigning each range of marks a grade and a grade point
     for(int i=0; i<no_of_subjects; i++){
           cout<<"Enter your marks:";
            cin>>marks[i][0];
            if(marks[i][0]<=100 && marks[i][0]>=90){
                marks[i][1]=5.0;
                cout<<"A+"<<endl;
                 cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=89 && marks[i][0]>=80){
                marks[i][1]=5.0;
                cout<<"A"<<endl;
                 cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=79 && marks[i][0]>=75){
                marks[i][1]= 4.5;
                cout<<"B+"<<endl;
                cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=74 && marks[i][0]>=70){
                marks[i][1] =4.0;
                cout<<"B"<<endl;
                cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=69 && marks[i][0]>=65){
                marks[i][1] = 3.5;
                cout<<"C+"<<endl;
                cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=64 && marks[i][0]>=60){
                marks[i][1] = 3.0;
                cout<<"C"<<endl;
                cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=59 && marks[i][0]>=55){
                marks[i][1] = 2.5;
                cout<<"D+"<<endl;
                cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=54 && marks[i][0]>=50){
                marks[i][1] = 2.0;
                cout<<"D"<<endl;
                cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=49 && marks[i][0]>=45){
                marks[i][1] = 1.5;
                cout<<"E"<<endl;
                cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=44 && marks[i][0]>40){
                marks[i][1] = 1.0;
                cout<<"E-"<<endl;
                cout<< marks[i][1]<<endl;
            }else if(marks[i][0]<=40 && marks[i][0]>=0){
                marks[i][1] = 0.5;
                cout<<"F"<<endl;
                cout<< marks[i][1]<<endl;
            }else{
                cout<<"Invalid Mark entered."<<endl;
                i--;
            }
          
     }
    //Calculating the Grade point weighted sum
       double weighted_sum = 0;

    for(int i = 0; i<no_of_subjects; i++){
        weighted_sum =  weighted_sum + (weight*marks[i][1]);
    }
      //Calculating the Grade Point Average(GPA)
    double GPA =  weighted_sum/(no_of_subjects*weight);
    cout<<"Your GPA is " <<GPA<<endl;
    
     while (1)
    {
     int bday, bmonth, byear,age;//Birthday BirthMonth BirthYear Age
    cout<<"Enter your date of birth in format DD/MM/YYYY: "<<endl;//Prompting the user for the date of birth.
    cin>>bday>>bmonth>>byear;

    //geting current time
    time_t _t = time(0);
    tm* tm = localtime(&_t);
    int currentDay = tm->tm_mday;
    int currentMonth = tm->tm_mon +1;
    int currentYear = tm->tm_year+1900;

    cout<<currentDay<<"/"<<currentMonth<<"/"<<currentYear<<endl;
     //Obtaining the age of the user 
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




        

    
   
    
    

    
   

