#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter any String : ";
    cin >> str;
    bool alphabet = false;
     for (int i = 0; i< str.length();i++)
    {
        if (str[i]< '0' || str[i]>'9')
        {
            alphabet = true;
            break;;
        }
    }
    if (alphabet == false)
    {
        cout<<"Numeric Constraint";
    }
    else{
        cout<<"Not Numeric";
    }
    
    return 0;
}