void class_shedule::search()
{
   system("cls");
   cout<<"Welcome To Search Of Class Shedule "<<endl;
   cout<<endl;
   int datecode;
   cout<<"You Can Search Only By Datecode Of a class"<<endl;
   cout<<"Enter Date Of a class                    ";
   cin>>datecode;

   for(int i=0;i<=num-1;i++)
   {
    if(sir[i].date==datecode)
    {
      cout<<"     Course_Name     Course_No        Class_Date     Class_Time         Batch "<<endl;
      cout<<"     ---------------------------------------------------------------------                                  "<<endl;
      cout<<setw(13)<<sir[i].name;
      cout<<setw(10)<<sir[i].no;
      cout<<setw(6)<<sir[i].date;
      cout<<setw(15)<<sir[i].time;
      cout<<setw(15)<<sir[i].batch;
      cout<<endl;
    }
    cout<<endl;
   }
    cout<<"going to main menu";
    getch();
}
