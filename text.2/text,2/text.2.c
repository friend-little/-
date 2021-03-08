#include<stdio.h>

/*
int fun()
{
	int i = 0;
	i += 10;
	return i;
}
//			没有静态，主函数结果a，b都为10
//							原因是a，b为不同的空间，分别调动一次函数，不相互影响
//			如果加上静态，变成static int i = 0;  则a=10,b=20
//							原因是静态是要等整个主函数全部完成后才释放，第一次调动之后影响第二次的结果
//					静态具有记忆性，静态即可以修饰变量，又可以修饰函数
void main()
{
	int a = fun();
	printf("a=%d\n", a);
	int b = fun();
	printf("b=%d\n",b);
}
*/

/*

typedef unsigned int u_int;             //类型定义，把原来的进行重定义（没有产生新类型）

#define u_int_32 unsigned int           //宏定义
void main()
{
	unsigned int a = 100;
	size_t b = 200;
	u_int_32 d = 300;
}
*/

/*					
							//逻辑运算   0为假1为真

void main()
{
	int a = 1;
	int b = 2;
	int v = a || ++b;      //短路求值： 因为a已经为真，那么a || ++b直接就是真，|| ++b短路，++b不参与运算
	printf("v=%d\n",v);
	printf("b=%d\n",b);

	int m = a && ++b;      
	printf("m=%d\n", m);   //根据&&的概念，两者都为真才行，则++b参运算
	printf("b=%d\n", b);

	int n = a && ++b;
	printf("n=%d\n", n);   //根据&&的概念，若a为0，a已经为假，则a && ++b直接为假，++b也不参与运算
	printf("b=%d\n", b);
}
*/
/*				
void main()
{
	int a = 0;
	int b = 7;

	int v = a && b;            // 逻辑与  两者为真（只要不是0就是真）才为真
	printf("v=%d\n", v);
	int m = a || b;			   // 逻辑或  有一个为真就为真
	printf("m=%d\n", m);
	int n = !a;                // 非    a为假，！a就是真
	printf("n=%d\n", n);
}
*/




/*

//                                    按位运算  &	|	^	~

void main()
{
	int a = 10;
	int b = 7;

	int v = a & b;
	//0000 1010
	//0000 0111  按位与   只有1与1才是1，其他都是0  （一样的是1）
	//0000 0010
	printf("v=%d\n",v);
	int m = a | b;
	//0000 1010	
	//0000 0111  按位或   只有0或0才是0，其他都是1   （一样的是0）
	//0000 1111
	printf("m=%d\n", m);
	int p = a ^ b; 
	//0000 1010	
	//0000 0111  按位异或    相同就是0，不同就是1
	//0000 1101  
	printf("p=%d\n", p);
	int q = ~a;
	//0000 0000 0000 0000 0000 0000 0000 1010	
	//1111 1111 1111 1111 1111 1111 1111 0101  按位取反
	//
	printf("q=%d\n", q);
}

*/

/*
void main()
{
	int ar[10] = {1,2,3,4,5};
	printf("ar=%d", ar);
}
// 数组  只能定义一种类型     下标从0开始
// 未初始化             随机值
// 未完全初始化         剩下的用零填充
// 完全初始化
*/

/*
//函数名
//返回值
//参数
//函数体
int MaxValue(int a, int b)
{
	return a > b ? a : b;
										//if (a > b)
										//	return a;
										// return b;
}

void main()
{
	int a, b, maxvalue;
	printf("inout a and b:>");
	scanf("%d%d", &a, &b);
	maxvalue = MaxValue(a,b);                   //调动的函数里面的变量必须全都包含且不能多
	printf("max value=%d\n",maxvalue);
}
*/


/*
void main()
{
	int sum = 0;
	int i = 1;
	do
	{
		sum += i;
		i++;
	} while (i <= 10);
	
	/*while (i<=10)
	{
		sum += i;      //sum = sum+i
		++i;
	}
	/*
	for (; i <= 10;)                  
	{
		sum += i;      //sum = sum+i
		++i;
	}
	*/
	/*printf("sum = %d\n", sum);
}
*/

/*
void main()
{
	int i = -1;
	printf("i=%d\n", i);                  //%d 输出有符号

	printf("i=%u\n", i);                  //%u 输出无符号
}

//  int i = -1 
//  1000 0000 0000 0000 0000 0000 0000 0001
//  源码1000 0000 0000 0000 0000 0000 0000 0001
//  反码1111 1111 1111 1111 1111 1111 1111 1110              符号位不变其他取反
//  补码1111 1111 1111 1111 1111 1111 1111 1111              反码加一
//		 F     F   F    F     F   F    F     F               变成十六进制让计算机读取（读取的是补码）
//                  4294967295                               转成十进制即为无符号输出结果，这里的无符号是把符号位看作是数据位

*/

/*
void main()
{
	char ch = 1;
	for (; ch < 128; ++ch)
		printf("ch = %d\n", ch);          //有符号可以表示负数，无符号不可以
}

//		char 1
//		0000 0000(最小)			1111 1111（最大）
//		   0				=1*2^8+……= 1111 1111+1-1=1 0000 0000 =1*2^8-1 = 255

//		unsigned char            0~255
//		char                     -128~127       有符号就是把无符号的范围分一半给负数
*/

/*
void main()
{
	int a = 0;
	int v = (a++) + (a++) + (++a);   //在不同的（32/64）操作系头上，结果会出现不同

	printf("a=%d\n",a);

	printf("v=%d\n",v);
}
*/

/*
void main()
{
	int a = 1;
	int v = a++;
	printf("a= %d",a);  //2
	printf("v= %d",v);  //1
}
*/

/*
void main()
{ 
	int sum = 0;
	int i = 1
	for (; i <= 10;)                  
	{
		sum += i;      //sum = sum+i
		++i;
	}
	printf("sum = %d\n",sum);
}
*/


/*
void main()
{
	int grade = 66;
	if (grade >= 90)
		printf("A");
	else if (grade >= 80 && grade <= 90)
		printf("B");
	else if (grade >= 60 && grade <= 80)
		printf("B");
	else
		printf("D");
}
*/

/*
void main()
{
	int a, b,maxvalue;
	printf("inout a and b:>");
	scanf("%d%d", &a, &b);
	if (a > b)
	{
		maxvalue = a;
	}
	else
	{
		maxvalue =b;
	}
	printf("max value=%d\n",maxvalue);
}
*/

/*
void main()
{
	int line = 0;
	printf("input line;>");
	scanf("%d",&line);

	if (line > 200000)
	{
		printf("获得好的offer\n");
	}
	else
	{
		printf("继续努力\n");
	}
}
*/ ·