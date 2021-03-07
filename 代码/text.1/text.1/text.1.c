#include<stdio.h>  
#include<stdbool.h>

int main()
{
	printf("%d\n", strlen("abcdef"));					//求长度，不过包含\0
	printf("%d\n", sizeof("abcdef"));					//求大小，包含\0
	printf("%d\n", strlen("c:\test\328\test.c"));	
						//c:*est*8*est.c        \t为一个字节          
	return 0;			//						\32 为一个字节是因为这三个数字只要不超过8，就被当作八进制的一个数字计算
}						//若为 "c:\test\325\test.c"，则 \325为一个字节，因为这三个数都不超过8
						//若为"c:\test\832\test.c"，则 \8为一个字节   2、5单独为一个字节
						//若为"c:\test\x28\test.c"，则\x 为一个字节，x之后的数字整体为一个字节   （十六进制）




/*
int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };

	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%s\n",arr3);
	return 0;
}
*/
/*
void main()
{
	char str[] = { 'a' };                       //''内容表示字符
	printf("size = %d\n", sizeof(str));

	char str1[] = { "a" };                      // ""内容表示字符串，字符串末尾自带一个'\0'   
	printf("size = %d\n", sizeof(str1));

}
*/


/*void main()
{
	char *str = "Hello Bit."
	printf("str=%s\n",str);

	char str1[] = "Hello CPP,"
	printf("str1=%s\n",str1);

	char str2[] = { 'a', 'b', 'c', '\0' };           //字符串天生的克星‘\0’
	printf("str2=%s\n",str2);
}
*/

/*
void main()
{
	int a = 10;             //全局变量
	//语句块
	{
		int b = 20;
		printf("b=%d",b);   //局部变量
	}
}
*/


/*
void main()
{
	int a, b;
	printf("input a and b:>");
	scanf("%d,%d", &a, &b);
	int sum = a + b;
	printf("sum =%d\n", sum);
}
*/


/*
void main()
{
	int a;            //未初始化
	a = 100;          //赋值
	printf("a=%d\n",a);
}
*/


/*
void main()
{
	char ch = "a";
	int a = 100;
	double b = 12.34;
	float c = 12.34;       //这样写会导致精度截断  应该写成下一行这样
	float f = 12.34f;      //f表示认为12.34为单精度
}
*/


/*
void main()
{
	printf("%d\n", sizeof(char));             //1
	printf("%d\n", sizeof(short));           //2
	printf("%d\n", sizeof(int));           //4
	printf("%d\n", sizeof(double));            //8          双精度浮点
	printf("%d\n", sizeof(long));           //4
	printf("%d\n", sizeof(bool));           //1
	printf("%d\n", sizeof(long long));           //8
	printf("%d\n", sizeof(float));           //4            单精度浮点
}
*/

/*
int main()
{
	//定义变量          类型的作用： 申请内存空间 
	int a = 10;
	char ch = 'A';
	double d = 12.34;
	return 0;
}
*/



/*
#include<stdio.h>     //标准输入输出
int main()
{
	printf("Hello World.\n");
	printf("Change World.\n");
	return 0;             //正确运行return 0，错误 -1；     Linux 必须返回，为养成习惯
}
*/