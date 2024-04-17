#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
        int daysUntilExpiration;
    srand(time(NULL));
    daysUntilExpiration= rand() %11;
    cout<<daysUntilExpiration;
    return 0;
}
    /*
        if(daysUntilExpiration<=10)
        cout<<"Your subscription will expire soon.Renew now!"<<endl;
        else if(daysUntilExpiration<=5)
        {
        cout<<"Your subscription expires in"<<" "<<daysUntilExpiration<<endl;
        cout<<"renew now and save 10%!"<<endl;
        }
        else if(daysUntilExpiration==1)
        {
        cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now andd save 20%!"<<endl;
        }
        else if(daysUntilExpiration==0)
        cout<<"Your subscription has expired."<<endl;
        else
        cout<<"You have active subscription";
        return 0;
}
*/