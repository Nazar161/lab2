#pragma once
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class String {
private:
    string a;
//    string b;
    //    char data[256];

public:
    String(string _a) {
        this->a = _a;
    }
//    char* operator +(char *);
//    char* operator -(char);
    friend bool operator== (const String &str1, const String &str2);
    friend bool operator!= (const String &str1, const String &str2);
//    void show_string(void);

};


//String::String(char *str) {
//    strcpy(data, str);
//}

//char* String::operator +(char *str) {
//    return(strcat(data, str));
//}

//char* String::operator -(char letter) {
//    char temp[256];
//    int i, j;
//    for (i = 0, j = 0; data[i]; i++)
//        if (data[i] != letter)
//            temp[j++] = data[i];
//    temp[j] = NULL;
//
//    strcpy(data, temp);
//}
bool operator== (const String &str1, const String &str2) {
    return (str1.a == str2.a);
}

bool operator!= (const String &str1, const String &str2) {
    return !(str1 == str2);
}


//void String::show_string(void) {
//    cout << data << endl;
//}






