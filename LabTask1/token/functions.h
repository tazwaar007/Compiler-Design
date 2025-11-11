#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>
using namespace std;

bool isKeyword(string word);
bool isConstant(string word);
bool isOperator(string word);
bool isIdentifier(string word);
bool isPunctuation(string word);

#endif
