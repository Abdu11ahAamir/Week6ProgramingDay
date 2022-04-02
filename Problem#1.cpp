#include<iostream>
using namespace std;

void character(int num, char a)
{
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the character: ";
    cin>>a;

    if( num == 0 && (a == 'm' || a == 'f'))
    {
        cout<<"me!";
    }
    if( num == 1 && a == 'm')
    {
        cout<<"son";
    }
    if( num == 1 && a == 'f')
    {
        cout<<"daughter";
    }
    if( num == 2 && a == 'm')
    {
        cout<<"grandson";
    }
    if( num == 2 && a == 'f')
    {
        cout<<"granddaughter";
    }
    if( num == 3 && a == 'f')
    {
        cout<<"great granddaughter";
    }
    if( num == 3 && a == 'm')
    {
        cout<<"great grandson";
    }
    if( num == -1 && a == 'm')
    {
        cout<<"father";
    }
    if( num == -1 && a == 'f')
    {
        cout<<"mother";
    }
    if( num == -2 && a == 'm')
    {
        cout<<"grandfather";
    }
    if( num == -2 && a == 'f')
    {
        cout<<"grandmother";
    }
    if( num == -3 && a == 'f')
    {
        cout<<"great grandmother";
    }
    if( num == -3 && a == 'm')
    {
        cout<<"great grandfather";
    }
}

main()
{
    int num;
    char a;

    character(num, a);
}