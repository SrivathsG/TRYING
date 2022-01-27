#include<iostream>
using namespace std;
int main()
{
    int i,n,j;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    j=1;
    while(j<n)
    {
        for(i=0;i<n-j;i++)
        {
            if(a[i]>a[i+1])
            {
              int temp=a[i];
              a[i]=a[i+1];
              a[i+1]=temp;
            }
        }
        j++;
    }
    cout<<"sorted array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}