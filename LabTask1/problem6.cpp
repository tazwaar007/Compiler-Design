#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of the elements ";
    cin>>n;
    int ar[n];
    for (int i = 0; i<n;i++)
    {
        cin>>ar[i];
    }
    int min = ar[0];
    int max = ar[0];
    for (int i = 0; i<n;i++)
    {
        if(ar[i]<min)
    {
        min = ar[i];
    }
    if (ar[i]>max)
    {
        max = ar[i];
    }
    }
    
    cout<<"Minimum number is : "<<min<<endl;
    cout<<"Maximum number is : "<<max<<endl;

    
    return 0;
}