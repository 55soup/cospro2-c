#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//[1차][한줄] 문제6) 팰린드롬 판단하기

bool solution(char *str) {
    char* answer = (char*)malloc(sizeof(char) * 103);
    //. 과 공백 제s거한 문자열 저장
    int len = 0;// 문자열의 길이 저장
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '.') {
            answer[len++] = str[i];
        }
    }

    // 문자열 비교
    for (int i = 0; i < len/2; i++) {
        if (answer[i] != answer[len - i - 1])
            return false;
    }
    return true;
}

int main() {
    char sentence1[19] = "never odd or even.";
    bool ret1 = solution(sentence1);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 == true ? "true" : "false");

    char sentence2[19] = "palindrome";
    bool ret2 = solution(sentence2);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 == true ? "true" : "false");
}