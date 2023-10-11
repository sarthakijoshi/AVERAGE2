#include<iostream>
using namespace std;
int main()
{
    double numbers[5];
    double sum=0,average;
    cout<<"enter 5 numbers";
    for(int i=0;i<5;i++)
        {
            cin>>numbers[i];
            sum+=numbers[i];
        }
    average= sum/5;
    cout<<"sum;"<<sum/5;
    cout<<"sum;"<<sum<<endl;
    cout<<"avg;"<<avg<<endl;
    return 0;
         
    
}
