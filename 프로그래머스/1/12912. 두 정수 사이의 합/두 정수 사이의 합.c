//2025661049 전형민
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long min = (a < b) ? a : b;
    long long max = (a < b) ? b : a;
    return (max - min + 1) * (min + max) / 2;
}