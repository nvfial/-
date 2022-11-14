#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




int main()
{
	int a = -1, b = 3, k;
	k = (++a< 0) && !(b-- < 0);/*输出的结果是：0 0 4
								对于 && （逻辑与）运算符，如果第一个操作数为false, 就不会评估第二个操作数。
								但& 是要评估所有的操作数。在这道题里，++a < 0是false, 所以不会执行&& 后的语句，所以输出的结果为0 0 4。*/
	printf("%d%d%d\n", k, a, b);
	
	return 0;
}
