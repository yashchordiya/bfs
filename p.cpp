#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n = 5;
    int a[n]={ 8,9,15,21,30},First=0,Last=n-1 , Mid, Num;
    Num=21;
    do
    {
        
        Mid=(First+Last)/2;
        if(a[Mid]==Num){
            cout<<"found at location"<<Mid+1;
            break;
        }
        else if(a[Mid]<Num)
        First = Mid+1;
        else 
         Last=Mid-1;
         
        
    }
    while (First<=Last);
    if(First>Last)
    cout<<"element not found";
    return 0;

}
