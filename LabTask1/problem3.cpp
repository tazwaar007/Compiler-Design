#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Write Something : ";
    getline(cin,str);

    int ln = str.length();
    if (str[0]=='/' && str [1]=='/')
    {
        cout<<"Single line Comment"<<endl;
    }
    else if(str[0] =='/' && str[1] == '*' && str[ln-2]=='*' && str[ln-1]=='/'){
        
            cout<<"Multiple Line Comment"<<endl;    
    }
    else{
        cout<< "Not a Comment"<<endl;
    }
    
    return 0;
}