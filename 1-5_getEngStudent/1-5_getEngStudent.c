#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// [1차][한줄] 문제5) 영어 수강 대상자 수 구하기
/*초급 영어 강의는 토익시험에서 650점 이상 800점 미만의 성적을 취득한 학생만을
수강대상으로 하고 있습니다.*/
int solution(int scores[], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++) {
        if (scores[i] >= 650 && scores[i] < 800) {
            ++answer;
        }
    }
    return answer;
}

int main() {
    int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
    int scores_len = 10;
    int ret = solution(scores, scores_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}