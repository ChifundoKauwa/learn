#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{
        int daysUntilExpiration;
    srand(time(NULL));
    daysUntilExpiration= rand() %12;
    switch (daysUntilExpiration)
    {
    case 0: 
    std::cout<<"Your subscription has expired";
        break;
    case 1:
    std:: cout<<"Your subscription expires within a day!"<<endl;
        cout<<"Renew now andd save 20%!"<<endl;
        break;
        case 5:
        std:: cout<<"your subscription expires in"<<" "<<daysUntilExpiration<<"days"<<endl;
            cout<<"Renew now and save 10%";
            break;
            case 10:
            std::cout<<"You have subscription will expire soon.Renew now";
    default:
    cout<<"you have an active subscription";
        break;
    }
    return 0;
}