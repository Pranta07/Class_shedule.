#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

class_shedule obj;
int main()
{
    char option;
    system("cls");
    obj.menu();
 while((option=cin.get())!='q')
 {
  switch(option)
  {
   case 'b':
         obj.build();
         break;
   case 'l':
         obj.show();
         break;
   case 'i':
         obj.insert();
         break;
   case 'd':
         obj.deletes();
         break;
   case 'e':
       obj.edit();
        break;
   case 's':
        obj.search();
        break;
   case 'n':
         obj.sort();
         break;
  }
   obj.menu();
  }
  return 0;
 }
