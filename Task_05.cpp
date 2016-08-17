//
// Created by MAN on 8/17/2016.
//

#include <iostream>

using namespace std;

// Курс "Введение в программирование(C++)"
// Академия Яндекса, Высшая школа экономики (НИУ ВШЭ)

// По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
void task_05_1() {
    int n, i;
    cin >> n;
    i = 1;

    while (i * i <= n) {
        cout << i * i << " ";
        i++;
    }
}

// Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
void task_05_2() {
    int n, i;
    cin >> n;
    i = 2;

    while (i <= n) {
        if(n % i == 0){
            cout << i;
            break;
        }
        i++;
    }
}

// По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
void task_05_3() {
    int n, i;
    cin >> n;
    i = 1;

    while(i <= n){
        cout << i << " ";
        i *= 2;
    }
}

// Дано натуральное число N.
// Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
void task_05_4() {
    int n, i;
    cin >> n;
    i = 1;

    while(i <= n){
        if(i == n)
            cout << "YES" << endl;
        else if(i * 2 > n)
            cout << "NO" << endl;
        i *= 2;
    }
}