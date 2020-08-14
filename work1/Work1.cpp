#include<stdio.h>
int sum = 0, price[8]={0,0,0,0,0,0,0,0};
int main() {
	printf("  :::Stationery Shop:::\n");
	printf("=========================\n");
	printf("| pencil case = 150 THB |\n");
	printf("| pencil      =  10 THB |\n");
	printf("| pen         =  15 THB |\n");
	printf("| eraser      =  10 THB |\n");
	printf("=========================\n");
	printf("Enter number of stationery\n");
	printf("Pencil case : ");
	scanf_s("%d", &price[0]);
	printf("pencil      : ");
	scanf_s("%d", &price[1]);
	printf("pen         : ");
	scanf_s("%d", &price[2]);
	printf("eraser      : ");
	scanf_s("%d", &price[3]);
	price[4] = price[0] * 150;
	price[5] = price[1] * 10;
	price[6] = price[2] * 15;
	price[7] = price[3] * 10;
	sum = price[4] + price[5] + price[6] + price[7];
	printf(":: Total = %d THB ::",sum);
	return 0;


}