#include<iostream>
using namespace std;
class Employee{
   
    string Name;
    string Company;
    string  gender;
    int age;
    public:
     Employee(){
        cout<<"Employee1 created."<<endl;

     }
      Employee(string name,string Company, string gender, int age){
        cout<<"Employee2 created."<<endl;
         Name = "name";
        Company = "Company";
        gender = "gender";
        age = age; 

     }
     void setname(string name);
        

     
         string getname(){
        return Name;

     }
 void setCompany(string Employee_Company);
     string getCompany(){
        return Company;
     }
    void  setage(int Employee_age);
     int getage(){
        return age;
     }
     void  setgender(string Employee_gender);
     
     string getgender(){
        return gender;
     }
     };
      
     void Employee::setname(string name){
         Name = name;
     }
     void Employee::setCompany(string Employee_Company){
        Company = Employee_Company;
     }
     void Employee:: setgender(string Employee_gender){
        gender = Employee_gender;
     }
     void Employee:: setage(int Employee_age){
        age = Employee_age;

     }
  

int main(){
    Employee employee_1;
    Employee employee_2("Ashaba", "META", "Male", 21);

    string Name = "Drake";
    string Company = "NVIDIA";
    string gender = "Male";
    int age = 21;

    employee_1.setname("Drake");
    Name = employee_1.getname();
    cout<<"EMPLOYEE name is "<<Name<<endl;

    employee_1.setCompany("NVIDIA");
    Company = employee_1.getCompany();
    cout<<"Employee Company is "<<Company<<endl;

    employee_1.setage(21);
    age = employee_1.getage();
    cout<<" Employee age is "<<age<<endl;

   employee_1.setgender("Male");
   gender = employee_1.getgender();
   cout<<"Employee gender is "<<gender<<endl;
     
     string employee2Name = employee_2.getname();
     cout<<"Employee 2 name is "<<employee2Name<<endl;

     string employee2Company = employee_2.getCompany();
     cout<<"Employee 2 Company is "<<employee2Company<<endl;

     string employee2gender = employee_2.getgender();
     cout<<"Employee 2 gender is  "<<employee2gender<<endl;

     int employee2age = employee_2.getage();
     cout<<"Employee 2 age is "<<employee2age<<endl;


    return 0;
}
