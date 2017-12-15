void class_shedule::deletes()
{
   system("cls");

   char time[30];
   int date;
   int check;
   cout<<"Delete A class shedule"<<endl;
   cout<<"Enter the Date of Class Shedule ";
   cin>>date;
   cout<<"Enter the Time of the Class Shedule ";
   cin>>time;
   int i;
   for(i=0;i<=num-1;i++)
   {
        if(strcmp(sir[i].time,time)==0 && sir[i].date==date)
        {
          check=i;
        }
   }

   for(i=0;i<=num-1;i++)
   {
        if(i==check)
        {
          continue;
        }
        else
        {
          if(i>check)
          {
            tempsir[i-1]=sir[i];
          }
          else
          {
            tempsir[i]=sir[i];
          }
        }
   }
   num--;

  for(i=0;i<=num-1;i++)
  {
     sir[i]=tempsir[i];
  }

}
