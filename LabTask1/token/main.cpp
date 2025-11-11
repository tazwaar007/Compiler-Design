#include <iostream>
#include "functions.h"
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string word, line;
    ifstream inputFile("example.txt");

    while (inputFile >> word)
    {
        if (word == "//") {
            getline(inputFile, line);
            continue;
        }
        if (word == "/*") {
            while (inputFile >> word) {
                if (word == "*/") break;
            }
            continue;
        }
        if (isKeyword(word))
            cout << word << " is Keyword" << endl;
        else if (isConstant(word))
            cout << word << " is Constant" << endl;
        else if (isOperator(word))
            cout << word << " is Operator" << endl;
        else if (isIdentifier(word))
            cout << word << " is Identifier" << endl;
        else if (isPunctuation(word))
            cout << word << " is Punctuation" << endl;
        else
            cout << word << " is Unknown" << endl;
    }

    inputFile.close();
    return 0;
}
