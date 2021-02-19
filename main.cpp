#include <iostream>
#include <string>
#include "stdafx.h"

using namespace std;

int main() {
    setlocale(0, "");
//    String title("Учимся программировать на языке C++");
//    String lesson("Перезагрузка операторов");
//    String str("Учимся программировать на языке C++");
    String firstStr("Hello");
    String secondStr("Hello");
    if (firstStr == secondStr) {
        cout << "Ok";
    }
    if (firstStr != secondStr) {
        cout << "Error";
    }

//    title.show_string();
//    title = title + "Я учусь!";
//    title.show_string();
//    lesson.show_string();
//    lesson = lesson - 'p';
//    lesson.show_string();
}
