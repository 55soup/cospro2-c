#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// [1차][구현] 문제10) 쇼핑몰 등급별 할인 금액 구하기

int solution(int price, char* grade) {
	if (strcmp(grade, "S") == 0) price = price * 0.95;
	else if (strcmp(grade, "G") == 0) price = price * 0.9;
	else price = price * 0.85;
	return price;
}
int main() {
	int price1 = 2500;
	char* grade1 = "V";
	int ret1 = solution(price1, grade1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int price2 = 96900;
	char* grade2 = "S";
	int ret2 = solution(price2, grade2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
