//2025661049 전형민
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
long long solution(int price, int money, int count) {
    long long answer = 0;
    long long total = (long long)price * count * (count + 1) / 2;
    if(total > money){
        answer = total - money;
    }else{
        answer = 0;
    }
    return answer;
}