#include <iostream>
#include "easy.h"

using namespace std;

int itc_sqrt(int num) {
    for(long long i = 0; i <= num; i++) {
        if(i * i == num) return i;
    }
    return -1;
}

int itc_skv(int num) {
	if (num > 0) return num * num;
	return -1;
}

int itc_spr(int a, int b) {
	if (a > 0 && b > 0) return a * b;
	return -1;

}
