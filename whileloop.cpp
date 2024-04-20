#include<iostream>
using namespace std;
int main()
{
    int value;
    cout<<"enter a value between 5 and 10 :";
    cin>> value;
        while(!(value>5 && value<10))
        {
        cout<<"sorry, you entered invalid input,please try again"<<endl;
        cout<<"enter a value between 5 and 10 :";
    cin>> value; 
        }
cout<<"your input is accepted";
        return 0;
    }  
    


