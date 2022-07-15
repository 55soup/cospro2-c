#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// [1차][한줄] 문제7) 중복문자 삭제하기

char* solution(char* ch) {
    char* answer = (char*)malloc(sizeof(char) * 103);
    int len = 0;
    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] != ch[i + 1])
            answer[len++] = ch[i];
    }
    answer[len] = '\0';
    return answer;
}
int main() {
    char* characters = "senteeeencccccceeee";
    char* ret = solution(characters);

    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}