/*WAP which will accept 5 states name and their 12 months
temperature from the user. Now display the states name with their
average temperature.*/

#include<iostream>
using namespace std;
 class state{
   char name[31];
   float temp[12],sum,avg;
   int i;
 public:
   void getdata()
   {
     cout<<"Enter the state name:";
     cin.getline(name,31);
     cout<<"enter temp one by one:";
     for(i=0; i<12;i++)
     cin>>temp[i];
     cin.ignore();

   }

   void show_data()
   {
     sum=0.0;
     for(i=0;i<12;i++)
     sum=sum+temp[i];
     cout<<endl<<"State name:"<<name<<endl;
     cout<<"Avg temp:"<<(sum/12.0);


   }
 } ;

 int main()
 {
   int i;
   state ob[5];
   for(i=0;i<5;i++)
   ob[i].getdata();
   for(i=0;i<5;i++)
   ob[i].show_data();
   return 0;

 }
