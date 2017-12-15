#include<iostream>
#include<cstring>
#include<iomanip>
#include<windows.h>
#include <ctime>
#include<conio.h>
#define max 30
using namespace std;
class class_shedule
{
    public:
         char name[30];
         long int date;
         char time[30];
         int no;
         int batch;
    public:
        void build();
        void show();
        void insert();
        void deletes();
        void edit();
        void search();
        void sort();
        void menu();
};

int num;
class_shedule sir[max],tempsir[max],sortsir[max],sortsir1[max],obj;
