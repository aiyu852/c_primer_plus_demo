/* escape.c --浣跨敤杞箟瀛楃*/

#include <stdio.h>
int main(void)

{
	float salary;
	printf("\aEnter your desired monthly salary: ");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);
	printf("\rGee!\n");
	return 0;
}
/* 
************************* 
   
\b 作为一个退位的符号也是很有用的

刷新输出 ：
printf() 函数语句首先将输出一个被称作缓冲区(buffer)的中介存储区域。
缓冲区中的内容再不断不断地被传递给屏幕。
标准 C 规定在以下几种情况下将缓冲区内容传给屏幕：
缓冲区满的时候、遇到换行符的时候以及需要输入的时候。
将缓冲区内容传送给屏幕或文件称为刷新缓冲区(flushing the buffer).
例如， 上例中， 前兩個printf()語句既達沒有填滿緩衝區也不包含換行符， 但是後面緊跟了一個scanf()語句要求輸入。
迫使pintf()的輸出内容被傳給屏幕。

有的版本中遇到scanf()語句不强迫緩衝區刷新， 遮將使程序停在那裏等待您的輸入，而沒有顯示任何提示信息。為防止此問題，可以用換行符刷新緩衝區， 如下所示

printf("Enter your desired monthly salary: \n");
scanf("%f", &salary);

不管後續的輸入語句時否引起刷新緩衝區， 改代碼都會正常工作。 但是， 何陽做是光標移到下一行起始位置， 防止您再提示字符串的同一行輸入數據。
寧一個解決辦法是使用fflush()函數 
*************************
*/ 
