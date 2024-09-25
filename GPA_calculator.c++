#include<iostream>
#include<string.h>

using namespace std;
int main(){
     double GP;
     int no_of_subjects;
     cout<<"Enter the number of subjects"<<endl;
     cin>>no_of_subjects;

    double marks[no_of_subjects][2];
          const int weight = 4;// Credit Units
     
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

       double weighted_sum = 0;

    for(int i = 0; i<no_of_subjects; i++){
        weighted_sum =  weighted_sum + (weight*marks[i][1]);
    }

    double GPA =  weighted_sum/(no_of_subjects*weight);
    cout<<"Your GPA is " <<GPA<<endl;
   return 0; 
}
        

    
   