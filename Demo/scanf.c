/*
 * filename: scanf.c
 * create_wangxb_20150323
 */
#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	scanf("please enter num1:%d", &num1);
	scanf("please enter num2:%d", &num2);
	int sum = num1 + num2;
	printf("sum : %d", sum);
}
