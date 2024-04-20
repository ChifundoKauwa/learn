    #include<iostream>
    #include<stdlib.h>
    using namespace std;
    
    double triangle(double base, double height);
    double square(double length);
    double rectangle(double length,double widith);
      
    
    int main()
    {
        int a;
        double length;
        double widith;
        double base;
        double height;
        
        
            do{
            
                cout<<"select the shape to calculate area:"<<endl;
                cout<<"1.square"<<endl;
                cout<<"2.rectangle"<<endl;
                cout<<"3.triangle"<<endl;
                cout<<"4.quit program"<<endl;
                cout<<"enter the selection:";
                cin>>a;
                switch (a)
                {
                case 1: 
                 cout<<"enter the length of a square :"<<endl;
                 cin>>length;
                 cout<<"the area of a square is"<<" "<<square( length);
                    break;
                case 2:  
                cout<<"enter the length :"<<endl;
                cin>>length;
                cout<<"enter the widith:"<<endl;
                cin>>widith;
                cout<<"the area of a rectangle is"<<" "<<rectangle(length,widith);
                    break;
                case 3:
                 cout<<"enter the base of a triangle :"<<endl;
                 cin>>base;
                 cout<<"enter the height of a triangle :"<<endl;
                 cin>>height;
                 cout<<"the area of a triangle is"<<" "<< triangle(base,height);
                    break;
                
                case 4:
                     exit(0);
                
                default:
                    break;
                }
            }
            while(a==4);
            return 0;
    }
    double triangle(double base, double height)
    {
        double area = 0.5*base*height;
        return area;
    }
    double square(double length)
    {
    
    return length*length;
    
    }
    double rectangle(double length,double widith)
    {
    return widith*length;
    }
    
    
