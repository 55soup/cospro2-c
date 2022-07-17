#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int datas[], int data_len) {
    int answer = 0;
    int avg = 0;
    for (int i = 0; i < data_len; i++) {
        avg += datas[i];
    }
    avg = avg / data_len;
    
    for (int i = 0; i < data_len; i++) 
        if (datas[i] <= avg) ++answer;

    return answer;
}

int main() {
    int data1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int data_len1 = 10;
    int ret1 = solution(data1, data_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int data2[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 10 };
    int data_len2 = 10;
    int ret2 = solution(data2, data_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}