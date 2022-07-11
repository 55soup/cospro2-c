#include <stdio.h>
#include <stdlib.h>
// [1차][빈칸] 문제4) 등장하는 가장 많은 수와 적은수 구하기

int* func_a(int arr[], int arr_len) {
    // 배열 동적할당
    int* counter = (int*)malloc(sizeof(int) * 1001) ;
    for (int i = 0; i < arr_len; i++) {//배열 초기화
        counter[i] = 0; 
    }
    for (int i = 0; i < arr_len; i++) {
        ++counter[arr[i]];
    }
    return counter;
}

int func_b(int counter[], int arr_len) {
    int max = counter[0];
    for (int i = 1; i < arr_len; i++) {
        if (max < counter[i]) {
            max = counter[i];
        }
    }
    return max;
}


int func_c(int counter[], int arr_len) {
    int min = counter[0];
    for (int i = 1; i < arr_len; i++) {
        if (min > counter[i]) {
            min = counter[i];
        }
    }
    return min;
}

int solution(int arr[], int arr_len) {
    int* counter = func_a(arr, arr_len);
    int max_cnt = func_b(counter, arr_len);
    int min_cnt = func_c(counter, arr_len);
    return max_cnt / min_cnt;
}

int main() {
    int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
    int arr_len = 10;
    int ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}