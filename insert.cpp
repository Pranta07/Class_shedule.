#include<iostream>
#include<cstring>
#include<windows.h>
#include <ctime>
#define max 30

using namespace std;
class_shedule sir[max];
void class_shedule::insert()
{
  system("cls");

  int i=num;
  num+=1;
  cout<<"Insert New class shedule"<<endl;
  cout<<"Enter The Following Items.."<<endl;
  cout<<"Course_Name  ";
  cin>>sir[i].name;

  cout<<"Course_Code  ";
  cin>>sir[i].no;

  cout<<"Class_Date ";
  cin>>sir[i].date;

  cout<<"Class_Time  ";
  cin>>sir[i].time;

  cout<<"Batch  ";
  cin>>sir[i].batch;

  cout<<endl<<endl;
  cout<<"going to main menu";

  Sleep(500);

}
