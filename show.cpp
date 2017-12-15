
void  class_shedule::show()
{
     system("cls");
     cout<<"\t\t********Show The Class Shedule Table********"<<endl;
     cout<<"     Course_Name     Course_No     Class_Date     Class_Time      Batch "<<endl;
     cout<<"     --------------------------------------------------------------------                                  "<<endl;
 for(int i=0;i<=num-1;i++)
 {
  cout<<setw(12)<<sir[i].name;
  cout<<setw(14)<<sir[i].no;
  cout<<setw(15)<<sir[i].date;
  cout<<setw(15)<<sir[i].time;
  cout<<setw(14)<<sir[i].batch;
  cout<<endl;
 }
  cout<<"going to main menu";
  getch();

}
