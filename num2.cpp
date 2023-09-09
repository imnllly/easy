#include <iostream>
#include "Header.h"

using namespace std;

int itc_revnbr(int num) {
    cin >> num;
    int n1, n2, n3, n4;
    n1 = num / 100;
    n2 = num % 100 / 10 * 10;
    n3 = num % 10 * 100;
    n4 = n3 + n2 + n1;
    return n4;
}

bool itc_iseven(int num) {
    cin >> num;
    if (num % 2 == 0) return num;
    return !num;
}

int itc_max(int num, int num2) {
    cin >> num >> num2;
    if (num > num2) return num;
    return num2;
}

