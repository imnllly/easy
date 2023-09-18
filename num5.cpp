#include <iostream>
#include "easy.h"

using namespace std;

int itc_str(int a, int b, int c) {
	double p = (a + b + c) / 2.0;
	p = p * (p - a) * (p - b) *(p - c);
	return itc_sqrt(p);
}

double itc_scir(int radius) {
	if(radius > 0) return 3.14 * radius * radius;
	return -1;
}
double itc_pow(int num, int step) {
	double a = num;
	if (num == 0) return 0;
	else if (step == 1) return num;
	else if (step == 0) return 1;
	else if (step < 0) {
		for (int i = -1; i > step; i--) {
			a = a * num;
		}
		return 1.0 / a;
	}
	else {
		for (int j = 1; j < step; j++) a = a * num;
	}
	return a;
}
