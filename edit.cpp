void class_shedule::edit()
{
   system("cls");
   int datecode;

   cout<<"          Edit a class shedule           "<<endl<<endl;
   int i;
   void editmenu();
   void editcoursename(int);
   void editdate(int);
   void edittime(int);
   void editcourseno(int);
   void editbatch(int);
   char option;
   cout<<"Enter A datecode To Edit A class shedule----  ";
   cin>>datecode;

   editmenu();
   for(i=0;i<=num-1;i++)
   {
    if(sir[i].date==datecode)
    {
      while((option=cin.get())!='q')
      {
        switch(option)
        {
           case 'n':
                editcoursename(i);
                break;
           case 'c':
                editdate(i);
                break;
           case 'd':
                edittime(i);
                break;
           case 'e':
                editcourseno(i);
                break;
           case 'a':
               editbatch(i);
               break;
        }
    editmenu();
     }
  }
 }
}
  void editmenu()
  {
   system("cls");
   cout<<"        What Do You Want To edit"<<endl;
   cout<<"          n--------->Course_Name "<<endl;
   cout<<"          e--------->Course_No "<<endl;
   cout<<"          c--------->Date "<<endl;
   cout<<"          d--------->Class_Time"<<endl;
   cout<<"          a--------->Batch        "<<endl;
   cout<<"          q----->QUIT                            "<<endl;
   cout<<"   Options Please ---->>>  "<<endl;
  }

  void editcoursename(int i)
  {
     cout<<"Enter New Name of class----->  ";
     cin>>sir[i].name;
  }

  void editdate(int i)
  {
   cout<<"Enter New Date of class----->  ";
   cin>>sir[i].date;
  }

  void edittime(int i)
  {
   cout<<"enter new time of class----->  ";
   cin>>sir[i].time;
  }

  void editcourseno(int i)
  {
   cout<<"Enter new Course number ";
   cin>>sir[i].no;
  }

  void editbatch(int i)
  {
   cout<<"Enter new Batch ";
   cin>>sir[i].batch;
  }
