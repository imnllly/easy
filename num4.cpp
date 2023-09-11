#include <iostream>
#include "easy.h"

using namespace std;

int itc_sqrt(int num) {
	cin >> num;
	int i = 0;
	while (i * i < num) i++;
	if(i * i == num) return i;
	return -1;
}

int itc_skv(int num) {
	cin >> num;
	if (num > 0) return num * num;
	return -1;
}

int itc_spr(int a, int b) {
	cin >> a >> b;
	if (a > 0 && b > 0) return a * b;
	return -1;

}
