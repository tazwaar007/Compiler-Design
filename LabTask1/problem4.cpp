#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Write something: ";
    cin >> str;
    if ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z') || str[0] == '_') 
    {
        for (int i = 1;i < str.length(); i++) {
            if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_')) 
            {
                cout << "Not a Valid Identifier";
                return 0;
            }
        }
        cout << "Valid Identifer";
    } 
    else 
    {
        cout << "Not Valid Identifier";
    }

    return 0;
}
