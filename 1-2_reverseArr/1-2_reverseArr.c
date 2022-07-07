#include <stdio.h>
//[1차][빈칸] 문제2) 배열의 순서 뒤집기
//배열의 순서를 뒤집어라

int* solution(int arr[], int arr_len) {
    int left = 0;
    int right = arr_len-1;
    int temp;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        ++left;
        --right;
    }
    return arr;

}

int main() {
    int arr[4] = { 1, 4, 2, 3 };
    int arr_len = 4;
    int* ret = solution(arr, arr_len);

    printf("solution 함수의 반환 값은 {");
    for (int i = 0; i < 4; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} 입니다.\n");
}