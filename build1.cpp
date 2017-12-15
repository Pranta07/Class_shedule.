#include<iostream>
#include<ctime>
#include<windows.h>
#define max 30
int num;
class_shedule sir[max];
void class_shedule::build()
{
 system("cls");
 cout<<endl<<"\t\t********Build The Class Shedule Table*********"<<endl<<endl;
  cout<<"Maximum number of entries  -----  >  30"<<endl;

 cout<<"How many do you want?    ----->";
 cin>>num;
 cout<<endl<<"Enter The Following Items..."<<endl<<endl;
 for(int i=0;i<=num-1;i++)
{
        cout<<"Course_Name  ";
        cin>>sir[i].name;

        cout<<"Course_Code ";
        cin>>sir[i].no;

        cout<<"Class_Date ";
        cin>>sir[i].date;

        cout<<"Class_Time  ";
        cin>>sir[i].time;

        cout<<"Batch  ";
        cin>>sir[i].batch;
        cout<<endl;
}
  cout<<"going to main menu";

  Sleep(500);
}
