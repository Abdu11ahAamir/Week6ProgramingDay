#include<iostream>
using namespace std;

void leapyear(int year)
{
    cout<<"Enter the year: ";
    cin>>year;

    if(( year % 4 == 0 ) && ( year % 100 == 0 ) && ( year % 400 == 0 ))
    {
        cout<< "it is a leap year"; 
    }
    if(( year % 4 == 0 ) && ( year % 100 != 0 ))
    {
        cout<< "it is a leap year"; 
    }
    if( year % 4 != 0 )
    {
        cout<< "it is a not leap year"; 
    }
    if( ((year % 4 == 0) && (year % 100 == 0)) && (year % 400 != 0))
    {
        cout<< "it is a not leap year"; 
    }

}

main()
{
    int year;
    leapyear(year);
}