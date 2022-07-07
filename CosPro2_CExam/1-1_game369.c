#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// [1차][빈칸] 문제1) 369 게임 박수의 갯수는?
// 369게임 박수의 갯수를 구해라

int solution(int number) {
    // 박수의 갯수를 구하는 변수
    int count = 0;
    int current;
    // 3, 6, 9 숫자가 하나만 들어가도 박수갯수 1증가
    for (int i = 1; i <= number; i++) {
        current = i;
        while (current != 0) {
            if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) //숫자 하나가 3,6,9중 하나라도 포함된다면
                ++count;
            current /= 10; // 1의 자리수 구하기.
        }
        
    }
    return count;
    // 박수의 갯수 리턴
}

int main() {
    int number = 40;
    int ret = solution(number); //22

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
