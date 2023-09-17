#include <iostream>
#include "easy.h"

using namespace std;

int itc_str(int a, int b, int c) {
	int p = (a + b + c) / 2;
	p = p * (p - a) * (p - b) *(p - c);
	int i = 0;
	while (i * i < p) i++;
	if (i * i == p) return i;
	return -1;
}

double itc_scir(int radius) {
	if(radius > 0) return 3.14 * radius * radius;
	return -1;
}
double itc_pow(int num, int step) {
	if (num == 0) return 0;
	if (step == 1) return num;
        if (step == 0) return 1;
	if (step < 0) {
		for (int i = -1; i > step; i--) num = 1.0 / (float)(num * num);
	}
	else {
		for (int j = 1; j < step; j++) num = num * num;
	}
	return num;
}
