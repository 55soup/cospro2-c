#include <stdio.h>
#include <stdlib.h>

int func_a(int* arr, int arr_len) {
    int count = 0;
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] % 5 == 0)
            ++count;
    }
    return count;
}

char* func_b(int count_three, int count_five) {
    return count_three > count_five ? "three" : "five";
}

int func_c(int* arr, int arr_len) {
    int count = 0;
    for (int i = 0; i < arr_len; i++) {
        if (arr[i] % 3 == 0) 
            ++count;
    }
    return count;
}

char* solution(int* arr, int arr_len) {
    int count_three = func_c(arr, arr_len);
    int count_five = func_a(arr, arr_len);
    char* answer = func_b(count_three, count_five);
    return answer;
}

int main(void) {
    int arr[10] = { 2, 3, 6, 9, 12, 15, 10, 20, 22, 25 };
    int arr_len = 10;
    char* ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);

	return 0;
}