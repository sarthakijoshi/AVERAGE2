#include <iostream>
using namespace std;
int main()
{
 int n,i,a;
    double sum=0;
    double avg=0;
    cout<<"enter no of elements"<<endl;
    cin>>a;
    for(i=0;i<n;i++)
    {
     cout<<"enter the number"<<i+1<<":";
     cin>>a;
     sum=sum+a;
    }
    cout<<"avg of"<<n<<"numbers"<<sum;
    return 0;
}
         
            
