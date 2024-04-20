#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
        int daysUntilExpiration;
    srand(time(NULL));
    daysUntilExpiration= rand() %12;

        if(daysUntilExpiration==0)
        cout<<"Your subscription has expired"<<endl;
        else if(daysUntilExpiration==1)
        {
        
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now andd save 20%!"<<endl;
        }
        else if(daysUntilExpiration<=5)
        {
            cout<<"your subscription expires in"<<" "<<daysUntilExpiration<<endl;
            cout<<"Renew now and save 10%";
        }
        else if(daysUntilExpiration<=10)
        cout<<"You have subscription will expire soon.Renew now";
        else
        cout<<"you have active subscription";
        return 0;
}
