//2025661049 전형민
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int schedules[], size_t schedules_len, int** timelogs, size_t timelogs_rows, size_t timelogs_cols, int startday) {
    int answer = 0;
    for (size_t i = 0; i < schedules_len; i++) {
        int hour = schedules[i] / 100;
        int min = (schedules[i] % 100) + 10;
        if (min >= 60) {
            hour += 1;
            min -= 60;
        }
        int limit = hour * 100 + min;
        bool is_eligible = true;
        for (size_t j = 0; j < timelogs_cols; j++) {
            int day = (startday - 1 + j) % 7 + 1;
            if (day == 6 || day == 7) {
                continue;
            }
            if (timelogs[i][j] > limit) {
                is_eligible = false;
                break;
            }
        }
        if (is_eligible) {
            answer++;
        }
    }
    return answer;
}