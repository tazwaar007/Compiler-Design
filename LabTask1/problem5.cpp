#include<iostream>
using namespace std;
int main()
{
    int n;
    
    cout<< "Enter the total number of elements : ";
    cin>>n;
    int ar[n];
    int sum=0;
    for(int i = 0; i<n ; i++)
    {
        cin>> ar[i];
        sum+=ar[i];
    }
    double average = (double)sum/n;
    cout<< "Average is : "<< average<<endl;

    return 0;
}