#pragma warning(disable:4996)
//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <direct.h>

using namespace std;


int main()
{
    setlocale(0, "");
    srand(time(nullptr));

    //cout << "Begin:\n";
    //try {//Контролировать 
    //    cout << "Start" << endl;
    //    throw 100; // выбрасывать 
    //    cout << "Finish" << endl;
    //}
    //catch(int a) {// поймать 
    //    cout << "Exception!!!\n";

    //}
    //cout << "End.\n";

    /*int a;
    int b;
    
    try {
        cout << "Enter A:\n";
        cin >> a;
        cout << "Enter B:\n";
        cin >> b;
        if (a == 0) {
            throw a;
        }
        else if (b == 0) {
            throw b;
        }
        cout << "Result = " << a / b << endl;
    }
    catch (int x) {
        cout << "Error! Division by " << x << endl;
    }*/

    try {
        int user;
        cout << "Введите размер массива:\n";
        cin >> user;
        if (user < 0) {
            throw "Размер меньше 0";
        }
        if (user > 100) {
            throw "Выход за верхнюю границу";
        }
        int* arr = new int[user];
        for (int i = 0; i < user; i++) {
            cin >> arr[i];
            if (arr[i] % 5 == 0) {
                throw 5;
            }
            if (arr[i] % 3 == 0) {
                throw 3;
            }
        }
        for (int i = 0; i < user; i++) {
            cout << arr[i] << " ";
        }
    }
    catch (const char* s) {
        cout << s << endl;
    }
    catch (int x) {
        cout << "В массиве есть числа, кратные " << x << endl;
    }

}
