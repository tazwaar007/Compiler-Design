#include<iostream>
#include "functions.h"


using namespace std;
   
    bool isKeyword(string word)
    {

        string keyword[] = {"alignas", 
        "main","alignof", "and", "and_eq", "asm", "atomic_cancel", "atomic_commit", "atomic_noexcept", 
"auto", "bitand", "bitor", "bool", "break", "case", "catch", "char", "char8_t", "char16_t", "char32_t", 
"class", "compl", "concept", "const", "consteval", "constexpr", "constinit", "const_cast", "continue", 
"co_await", "co_return", "co_yield", "decltype", "default", "delete", "do", "double", "dynamic_cast", 
"else", "enum", "explicit", "export", "extern", "false", "float", "for", "friend", "goto", "if", "inline", 
"int", "long", "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator", "or", 
"or_eq", "private", "protected", "public", "register", "reinterpret_cast", "requires", "return", "short", 
"signed", "sizeof", "static", "static_assert", "static_cast", "struct", "switch", "synchronized", "template", 
"this", "thread_local", "throw", "true", "try", "typedef", "typeid", "typename", "union", "unsigned", "using", 
"virtual", "void","endl","cin", "volatile", "wchar_t", "while", "xor", "xor_eq","string"
};
        int sz = sizeof(keyword) / sizeof(keyword[0]);
        for (int i = 0; i < sz;i++)
        {
            if (word == keyword[i])
                return true;
        }
        return false;
    }
    bool isConstant(string word)
    {
        for (int i = 0; i < word.length();i++)
        {
            if (isdigit(word[i])==false)
            {
                return false;
            }
        }
        return true;
    }
    bool isOperator(string word)
    {
        string ops[] = {
    "+", "-", "*", "/", "%", 
    "++", "--", 
    "=", "+=", "-=", "*=", "/=", "%=", 
    "==", "!=", ">", "<", ">=", "<=", 
    "&&", "||", "!", 
    "&", "|", "^", "~", "<<", ">>", 
    "&=", "|=", "^=", "<<=", ">>=", 
    "?", ":", 
    ",", 
    "->", ".", 
    "->*", ".*"
};

         int sz = sizeof(ops) / sizeof(ops[0]);
        for (int i = 0; i < sz;i++)
        {
            if (word == ops[i])
                return true;
        }
        return false;   
    }
   bool isIdentifier(string word)
{
    if (word == "") 
        return false;

    if ((word[0] >= 'A' && word[0] <= 'Z') || 
        (word[0] >= 'a' && word[0] <= 'z') || 
        word[0] == '_')
    {
        for (int i = 1; i < word.length(); i++)
        {
            if (!((word[i] >= 'A' && word[i] <= 'Z') ||
                  (word[i] >= 'a' && word[i] <= 'z') ||
                  (word[i] >= '0' && word[i] <= '9') ||
                  word[i] == '_'))
                return false;
        }
        return true;
    }
    return false;
}

  bool isPunctuation(string word)
{
    string puncs[] = {
        ";", ",", "()","(", ")", "{", "}", "[", "]", "\"", "\'", ":", ".", "#"
    };
    int sz = sizeof(puncs) / sizeof(puncs[0]);
    for (int i = 0; i < sz; i++)
    {
        if (word == puncs[i])
            return true;
    }
    return false;
}
