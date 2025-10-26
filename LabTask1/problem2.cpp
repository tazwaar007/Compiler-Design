#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Write the expression : ";
    cin >> str;
    int count= 0;
    for(int i = 0 ; i< str.length(); i++)
    {
        if(str[i]=='+' || str[i]=='-' ||str[i]=='*' ||str[i]=='/' ||str[i]=='%' ||str[i]=='=')
        {
            count++;
            cout<<"Operator "<<count<<": "<<str[i]<<endl;
        }
        
    }
    return 0;
}