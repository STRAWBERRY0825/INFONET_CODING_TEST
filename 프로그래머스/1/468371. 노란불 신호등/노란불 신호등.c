//2025661049 전형민
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int gcd(int a, int b){
    while(b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int lcm(int a, int b){
    return a / gcd(a, b) * b;
}
int solution(int** signals, size_t signals_rows, size_t signals_cols){
    int period = 1;
    for(size_t i=0; i<signals_rows; i++){
        int cycle = signals[i][0] + signals[i][1] + signals[i][2];
        period = lcm(period, cycle);
    }
    for(int t = 1; t <= period; t++){
        bool all_yellow = true;
        for(size_t i = 0; i < signals_rows; i++){
            int G = signals[i][0];
            int Y = signals[i][1];
            int R = signals[i][2];
            int cycle = G + Y + R;
            int pos = (t - 1) % cycle;
            if(pos < G || pos >= G + Y){
                all_yellow = false;
                break;
            }
        }
        if(all_yellow){
            return t;
        }
    }
    return -1;
}