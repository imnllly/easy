#include <iostream>
#include "easy.h"

using namespace std;

bool itc_ispositive(int num) {
	if (num > 0) return num;
	return !num;
}
bool itc_ispositive_d(double num) {
	if (num > 0) return num;
	return !num;
}
