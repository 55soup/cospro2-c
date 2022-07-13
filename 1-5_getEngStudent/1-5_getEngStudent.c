#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// [1차][한줄] 문제5) 영어 수강 대상자 수 구하기

int main() {
    int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
    int scores_len = 10;
    int ret = solution(scores, scores_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}