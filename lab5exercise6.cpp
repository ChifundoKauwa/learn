#include<iostream>
#include<fstream>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
    ifstream datafile;
    datafile.open("module.txt");
    if(datafile.is_open())
    cout<<"its all good"<<endl;
    else
    cout<<"opps,something went wrong";
int count =0;
char vowel;
int a=0,e=0,i=0,o=0,u=0;
while(datafile.get(vowel))
{
    if(vowel=='a')
        a++;    
     else if(vowel=='e')  
    e++;
     else if(vowel=='i')
     i++;
       else if(vowel=='o')
       o++;
         else if(vowel=='u')
         u++;
   count++;
}
cout<<"the number of vowels is: "<<" "<<a+e+i+o+u<<endl;
}


 
