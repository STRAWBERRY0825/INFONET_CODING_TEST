//2025661049 전형민
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(const char* cards1[], size_t cards1_len, const char* cards2[], size_t cards2_len, const char* goal[], size_t goal_len) {
    char* answer = (char*)malloc(sizeof(char) * 4);
    size_t idx1 = 0;
    size_t idx2 = 0;
    for (size_t i = 0; i < goal_len; i++) {
        if (idx1 < cards1_len && strcmp(cards1[idx1], goal[i]) == 0) {
            idx1++;
        } else if (idx2 < cards2_len && strcmp(cards2[idx2], goal[i]) == 0) {
            idx2++;
        } else {
            strcpy(answer, "No");
            return answer;
        }
    }
    strcpy(answer, "Yes");
    return answer;
}