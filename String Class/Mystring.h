#ifndef STRING_H
#define STRING_H
//////////////////////////////////////
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
//////////////////////////////////////
class strings {

    public:
    int strlengh (string  a);    
    string uppercasing (string a);
    string lowercasing (string a);
    string concatenating (string a,string b);
    string replacechar (string a , int b , char c);
    void searchchar(string a,char b);
    string swapchar (string a,int b,int c);
    string reverser (string a);
    string addchar (string a , int b, char c);
    string removechar (string a , int b);
    string randomstr (int a);
    int strcompare (string a , string b);
    string strsort (string a);
    private:
};

#endif