//3.1 rhodium.c -- 用金属铑衡量您的体重

#include <stdio.h>
int mian()
{
	float weight;
	float value;
	
	printf("Are you worth your weight in rhdium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	
	scanf("%f",&weight);
	// 假设铑为每盎司770美元 
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n", value);
	printf("ear more to maintain your value.\n");
	return 0;
} 
