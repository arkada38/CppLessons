//
// Created by MAN on 8/17/2016.
//

#include <iostream>

using namespace std;

//Курс "Введение в программирование(C++)"
//Академия Яндекса, Высшая школа экономики (НИУ ВШЭ)

//Белочки и орешки - 1
//N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.
void task_03_1() {
    int n, k;
    cin >> n >> k;
    cout << k / n << endl;
}

//Белочки и орешки - 2
//N белочек нашли K орешков и решили разделить их поровну.
//Определите, сколько орешков останется после того, как все белочки возьмут себе равное количество орешков.
void task_03_2() {
    int n, k;
    cin >> n >> k;
    cout << k % n << endl;
}

//Последняя цифра
//Дано натуральное число, выведите его последнюю цифру.
void task_03_3() {
    int n;
    cin >> n;
    cout << n % 10 << endl;
}

//Первая цифра двузначного числа
//Дано двузначное число. Выведите его первую цифру (число десятков)
void task_03_4() {
    int n;
    cin >> n;
    cout << n / 10 << endl;
}

//Число десятков
//Дано целое неотрицательное число N, определите число десятков в нем (предпоследнюю цифру числа).
//Если предпоследней цифры нет, то можно считать, что число десятков равно нулю.
void task_03_5() {
    int n;
    cin >> n;
    cout << n / 10 % 10 << endl;
}

//Сумма цифр трехзначного числа
//Дано целое трехзначное число. Найдите сумму его цифр.
void task_03_6() {
    int n;
    cin >> n;
    cout << n / 100 + n / 10 % 10 + n % 10 << endl;
}

//Следующее четное
//На вход дается натуральное число N. Выведите следующее за ним четное число
void task_03_7() {
    int n;
    cin >> n;
    cout << n / 2 * 2 + 2 << endl;
}

//Парты
//В некоторой школе решили набрать три новых математических класса и оборудовать кабинеты для них новыми партами.
//За каждой партой может сидеть два учащихся. Известно количество учащихся в каждом из трех классов.
//Выведите наименьшее число парт, которое нужно приобрести для них. Каждый класс сидит в своем кабинете.
void task_03_8() {
    int a, b, c, aa, bb, cc;
    cin >> a >> b >> c;

    aa = (a + 1) / 2;
    bb = (b + 1) / 2;
    cc = (c + 1) / 2;

    cout << aa + bb + cc << endl;
}

//Покупка пирожков
//Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.
void task_03_9() {
    int a, b, n;
    cin >> a >> b >> n;

    a = a * n + b * n / 100;
    b = b * n % 100;

    cout << a << " " << b << endl;
}

//Электронные часы
//Электронные часы показывают время в формате h : mm:ss(от 0:00 : 00 до 23 : 59 : 59),
//то есть сначала записывается количество часов, потом обязательно двузначное количество минут,
//затем обязательно двузначное количество секунд. Количество минут и секунд при необходимости дополняются
//до двузначного числа нулями.
//С начала суток прошло N секунд. Выведите, что покажут часы.
void task_03_10() {
    int n, h, m, s;
    cin >> n;

    s = n % 60;
    m = n / 60 % 60;
    h = n / 60 / 60 % 24;

    cout << h << ":" << m / 10 % 10 << m % 10 << ":" << s / 10 % 10 << s % 10 << endl;
}

//Разность времен
//Даны значения двух моментов времени, принадлежащих одним и тем же суткам:
//часы, минуты и секунды для каждого из моментов времени.
//Известно, что второй момент времени наступил не раньше первого.
//Определите, сколько секунд прошло между двумя моментами времени.
void task_03_11() {
    int n, h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

    n = (h2 - h1) * 60 * 60;
    n += (m2 - m1) * 60;
    n += (s2 - s1);

    cout << n << endl;
}

//МКАД
//Длина Московской кольцевой автомобильной дороги —109 километров.
//Байкер Вася стартует с нулевого километра МКАД и едет со скоростью V километров в час.
//На какой отметке он остановится через T часов?
void task_03_12() {
    int v, t, x;
    cin >> v >> t;

    x = ((v * t + 109) % 109 + 109) % 109;

    cout << x << endl;
}

//Симметричное число
//Дано четырехзначное число.
//Определите, является ли его десятичная запись симметричной.
//Если число симметричное, то выведите 1, иначе выведите любое другое целое число.
//Число может иметь меньше четырех знаков, тогда нужно считать,
//что его десятичная запись дополняется слева незначащими нулями.
void task_03_13() {
    int n, x, n1, n2, n3, n4;
    cin >> n;

    n1 = n / 10 / 10 / 10 % 10;
    n2 = n / 10 / 10 % 10 % 10;
    n3 = n / 10 % 10 % 10 % 10;
    n4 = n % 10 % 10 % 10 % 10;

    x = (n1 - n4) * (n1 - n4) + (n2 - n3) * (n2 - n3) + 1;

    cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    cout << x << endl;
}

//Улитка
//Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров,
//а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?
void task_03_14() {
    int h, a, b, n;// 10 3 2 8
    cin >> h >> a >> b;

    n = (h - b + a - b - 1) / (a - b);

    cout << n << endl;
}