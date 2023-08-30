#include<iostream>
using namespace std;
perfect_Num(int low,int high)
{
    while(low<=high)
    {
        int sum=0;
        for(int i=1;i<=low/2;i++)
        {
            if(low%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==low)
        {
            cout<<low<<" is a perfect number\n";
        }
        low++;
    }
}
int main()
{
    int low,high;
    cout<<"enter the low value:";
    cin>>low;
    cout<<"enter last:";
    cin>>high;
    perfect_Num(low,high);
}

