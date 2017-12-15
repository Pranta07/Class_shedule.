void class_shedule::sort()
{
 system("cls");

     void sortcode();
     char option;
 cout<<endl;
 while(1)
 {
    //system("cls");
   cout<<"Sort The Class Shedule By Date"<<endl;
   cout<<"Press c to Sort The Class Shedule by Date "<<endl;
   cout<<"Press q to Quit "<<endl;
   cin>>option;
   if(option=='c')
   {
       system("cls");
       sortcode();
   }
   else
   {
       system("cls");
       break;
   }
 }
 menu();
}

void sortcode()
{
 system("cls");
 int i,j;

 class_shedule temp[max];

 for(i=0;i<=num-1;i++)
 {
  sortsir1[i]=sir[i];
 }

 for(i=0;i<=num-1;i++)
 {
   for(j=0;j<=num-1;j++)
   {
    if(sortsir1[i].date<sortsir1[j].date)
    {
     temp[i]=sortsir1[i];
     sortsir1[i]=sortsir1[j];
     sortsir1[j]=temp[i];
    }
   }
 }

 for( i=0;i<=num-1;i++)
 {
    cout<<"     Course_Name     Course_No        Class_Date     Class_Time         Batch "<<endl;
    cout<<"     ---------------------------------------------------------------------                                  "<<endl;

 for( i=0;i<=num-1;i++)
 {
  cout<<setw(13)<<sortsir1[i].name;
  cout<<setw(10)<<sortsir1[i].no;
  cout<<setw(6)<<sortsir1[i].date;
  cout<<setw(15)<<sortsir1[i].time;
  cout<<setw(15)<<sortsir1[i].batch;
  cout<<endl;
 }
  cout<<"Press Any Key To Go Back";
 getch();
 system("cls");

} }

