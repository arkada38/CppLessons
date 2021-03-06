//
// Created by MAN on 8/17/2016.
//

#include <iostream>

using namespace std;

// Курс "Введение в программирование(C++)"
// Академия Яндекса, Высшая школа экономики (НИУ ВШЭ)

// Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.
void task_04_1() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }

}

// Даны два целых числа.
// Программа должна вывести единицу, если первое число больше второго,
// двойку, если второе больше первого, или ноль, если они равны.
void task_04_2() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << 1 << endl;
    }
    else if (a < b) {
        cout << 2 << endl;
    }
    else {
        cout << 0 << endl;
    }

}

// Даны три целых числа.
// Найдите наибольшее из них (программа должна вывести ровно одно целое число).
// Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
void task_04_3() {
    int a, b, c, x;
    cin >> a >> b >> c;

    if (a > b) {
        x = a;
    }
    else {
        x = b;
    }

    if (x < c) {
        x = c;
    }

    cout << x << endl;

}

// Даны три натуральных числа A, B, C.
// Определите, существует ли треугольник с такими сторонами.
// Если треугольник существует, выведите строку YES, иначе выведите строку NO.
// Треугольник — это три точки, не лежащие на одной прямой.
// сумма длин любых двух сторон треугольника должна быть больше длины третьей стороны
void task_04_4() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c &&
        b + c > a &&
        c + a > b) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}

// Даны три целых числа.
// Определите, сколько среди них совпадающих.
// Программа должна вывести одно из чисел : 3 (если все совпадают),
// 2 (если два совпадает) или 0 (если все числа различны).
void task_04_5() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 3 << endl;
    }
    else if (a == b || b == c || c == a) {
        cout << 2 << endl;
    }
    else
        cout << 0 << endl;

}

// Шахматная ладья ходит по горизонтали или вертикали.
// Даны две различные клетки шахматной доски, определите, может ли ладья попасть с первой клетки на вторую одним ходом.
void task_04_6() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 && y1 == y2) {
        cout << "NO" << endl;
    }
    else if (x1 == x2 || y1 == y2) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

}

// Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку.
// Даны две различные клетки шахматной доски, определите, может ли король попасть с первой клетки на вторую одним ходом.
void task_04_7() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 && y1 == y2) {
        cout << "NO" << endl;
    }
    else if (x1 - x2 >= -1 && x1 - x2 <= 1 &&
             y1 - y2 >= -1 && y1 - y2 <= 1) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

}

// Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите,
// может ли слон попасть с первой клетки на вторую одним ходом.
void task_04_8() {
    int x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2;

    a = (x1 - x2) * (x1 - x2);
    b = (y1 - y2) * (y1 - y2);

    if (x1 == x2 && y1 == y2) {
        cout << "NO" << endl;
    }
    else if (a == b) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

}

// Шахматный ферзь ходит по диагонали, горизонтали или вертикали.
// Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.
void task_04_9() {
    int x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2;

    a = (x1 - x2) * (x1 - x2);
    b = (y1 - y2) * (y1 - y2);

    if (x1 == x2 && y1 == y2) {
        cout << "NO" << endl;
    }
    else if (x1 == x2 || y1 == y2 || a == b) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

}

// Шахматный конь ходит буквой “Г” — на две клетки по вертикали в любом направлении и на одну клетку по горизонтали, или наоборот.
// Даны две различные клетки шахматной доски, определите, может ли конь попасть с первой клетки на вторую одним ходом.
void task_04_10() {
    int x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2;

    a = (x1 - x2) * (x1 - x2);
    b = (y1 - y2) * (y1 - y2);

    if (x1 == x2 && y1 == y2) {
        cout << "NO" << endl;
    }
    else if (a + b == 5) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

}

// Шоколадка имеет вид прямоугольника, разделенного на N×M долек.
// Шоколадку можно один раз разломить по прямой на две части.
// Определите, можно ли таким образом отломить от шоколадки ровно K долек.
void task_04_11() {
    int n, m, k;
    cin >> n >> m >> k;

    if ((n < 0 || m < 0 || k < 0) || k > n * m) {
        cout << "NO" << endl;
    }
    else if (k % n == 0 || k % m == 0) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

}

// Яша плавал в бассейне размером N×M метров и устал.
// В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков
// (не обязательно от ближайшего) и Y метров от одного из коротких бортиков.
// Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?
void task_04_12() {
    int n, m, x, y, temp;
    cin >> n >> m >> x >> y;

    if(n > m) {
        temp = n;
        n = m;
        m = temp;
    }

    if(x > n) {
        temp = x;
        x = y;
        y = temp;
    }

    if(n - x < x)
        x = n - x;
    if(m - y < y)
        y = m - y;

    if(x < y)
        cout << x << endl;
    else
        cout << y << endl;
}

// Дано три числа. Упорядочите их в порядке неубывания.
void task_04_13() {
    int a, b, c, temp;
    cin >> a >> b >> c;

    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if(a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if(b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    cout << a << " " << b << " " << c << endl;
}

// Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2.
// Определите, можно ли разместить одну из этих коробок внутри другой, при условии,
// что поворачивать коробки можно только на 90 градусов вокруг ребер.
void task_04_14() {
    int a1, b1, c1, a2, b2, c2, temp;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    if(a1 > b1) {
        temp = a1;
        a1 = b1;
        b1 = temp;
    }

    if(a1 > c1) {
        temp = a1;
        a1 = c1;
        c1 = temp;
    }

    if(b1 > c1) {
        temp = b1;
        b1 = c1;
        c1 = temp;
    }

    if(a2 > b2) {
        temp = a2;
        a2 = b2;
        b2 = temp;
    }

    if(a2 > c2) {
        temp = a2;
        a2 = c2;
        c2 = temp;
    }

    if(b2 > c2) {
        temp = b2;
        b2 = c2;
        c2 = temp;
    }

    if(a1 == a2 && b1 == b2 && c1 == c2)
        cout << "Boxes are equal" << endl;
    else if(a1 <= a2 && b1 <= b2 && c1 <= c2)
        cout << "The first box is smaller than the second one" << endl;
    else if(a1 >= a2 && b1 >= b2 && c1 >= c2)
        cout << "The first box is larger than the second one" << endl;
    else
        cout << "Boxes are incomparable" << endl;
}