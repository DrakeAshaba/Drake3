#include <iostream>
#include <string.h>
using namespace std;

bool validatepassword(char password[25]){
   int i;
    for (i=3; i>0; i-- )
    {
        cout<<"enter password(You are remaining with "<<i<<" )";
        cin>>password;
        if (strcmp(password,"CMP2103")==0)
        {
            
            cout<<"correct password"<<endl;
           return true;
        }else
        {
            cout<<"re input passwaod incorrect password"<<endl;
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
    cout<<"enter name ";
    cin.get(name,25);
    cout<<name<<endl;
    


    if (!validatepassword(password))//checks if paworsd is incoreect
    {
        cout<<"times ended worng  password ";
        return 0;
    }
    
    cout<<"Welcome back "<<name<<endl;

   
    
    

    //cin>>name;
   
    return 0;
}
