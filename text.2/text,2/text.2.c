#include<stdio.h>

/*
int fun()
{
	int i = 0;
	i += 10;
	return i;
}
//			û�о�̬�����������a��b��Ϊ10
//							ԭ����a��bΪ��ͬ�Ŀռ䣬�ֱ����һ�κ��������໥Ӱ��
//			������Ͼ�̬�����static int i = 0;  ��a=10,b=20
//							ԭ���Ǿ�̬��Ҫ������������ȫ����ɺ���ͷţ���һ�ε���֮��Ӱ��ڶ��εĽ��
//					��̬���м����ԣ���̬���������α������ֿ������κ���
void main()
{
	int a = fun();
	printf("a=%d\n", a);
	int b = fun();
	printf("b=%d\n",b);
}
*/

/*

typedef unsigned int u_int;             //���Ͷ��壬��ԭ���Ľ����ض��壨û�в��������ͣ�

#define u_int_32 unsigned int           //�궨��
void main()
{
	unsigned int a = 100;
	size_t b = 200;
	u_int_32 d = 300;
}
*/

/*					
							//�߼�����   0Ϊ��1Ϊ��

void main()
{
	int a = 1;
	int b = 2;
	int v = a || ++b;      //��·��ֵ�� ��Ϊa�Ѿ�Ϊ�棬��ôa || ++bֱ�Ӿ����棬|| ++b��·��++b����������
	printf("v=%d\n",v);
	printf("b=%d\n",b);

	int m = a && ++b;      
	printf("m=%d\n", m);   //����&&�ĸ�����߶�Ϊ����У���++b������
	printf("b=%d\n", b);

	int n = a && ++b;
	printf("n=%d\n", n);   //����&&�ĸ����aΪ0��a�Ѿ�Ϊ�٣���a && ++bֱ��Ϊ�٣�++bҲ����������
	printf("b=%d\n", b);
}
*/
/*				
void main()
{
	int a = 0;
	int b = 7;

	int v = a && b;            // �߼���  ����Ϊ�棨ֻҪ����0�����棩��Ϊ��
	printf("v=%d\n", v);
	int m = a || b;			   // �߼���  ��һ��Ϊ���Ϊ��
	printf("m=%d\n", m);
	int n = !a;                // ��    aΪ�٣���a������
	printf("n=%d\n", n);
}
*/




/*

//                                    ��λ����  &	|	^	~

void main()
{
	int a = 10;
	int b = 7;

	int v = a & b;
	//0000 1010
	//0000 0111  ��λ��   ֻ��1��1����1����������0  ��һ������1��
	//0000 0010
	printf("v=%d\n",v);
	int m = a | b;
	//0000 1010	
	//0000 0111  ��λ��   ֻ��0��0����0����������1   ��һ������0��
	//0000 1111
	printf("m=%d\n", m);
	int p = a ^ b; 
	//0000 1010	
	//0000 0111  ��λ���    ��ͬ����0����ͬ����1
	//0000 1101  
	printf("p=%d\n", p);
	int q = ~a;
	//0000 0000 0000 0000 0000 0000 0000 1010	
	//1111 1111 1111 1111 1111 1111 1111 0101  ��λȡ��
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
// ����  ֻ�ܶ���һ������     �±��0��ʼ
// δ��ʼ��             ���ֵ
// δ��ȫ��ʼ��         ʣ�µ��������
// ��ȫ��ʼ��
*/

/*
//������
//����ֵ
//����
//������
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
	maxvalue = MaxValue(a,b);                   //�����ĺ�������ı�������ȫ�������Ҳ��ܶ�
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
	printf("i=%d\n", i);                  //%d ����з���

	printf("i=%u\n", i);                  //%u ����޷���
}

//  int i = -1 
//  1000 0000 0000 0000 0000 0000 0000 0001
//  Դ��1000 0000 0000 0000 0000 0000 0000 0001
//  ����1111 1111 1111 1111 1111 1111 1111 1110              ����λ��������ȡ��
//  ����1111 1111 1111 1111 1111 1111 1111 1111              �����һ
//		 F     F   F    F     F   F    F     F               ���ʮ�������ü������ȡ����ȡ���ǲ��룩
//                  4294967295                               ת��ʮ���Ƽ�Ϊ�޷�����������������޷����ǰѷ���λ����������λ

*/

/*
void main()
{
	char ch = 1;
	for (; ch < 128; ++ch)
		printf("ch = %d\n", ch);          //�з��ſ��Ա�ʾ�������޷��Ų�����
}

//		char 1
//		0000 0000(��С)			1111 1111�����
//		   0				=1*2^8+����= 1111 1111+1-1=1 0000 0000 =1*2^8-1 = 255

//		unsigned char            0~255
//		char                     -128~127       �з��ž��ǰ��޷��ŵķ�Χ��һ�������
*/

/*
void main()
{
	int a = 0;
	int v = (a++) + (a++) + (++a);   //�ڲ�ͬ�ģ�32/64������ϵͷ�ϣ��������ֲ�ͬ

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
		printf("��úõ�offer\n");
	}
	else
	{
		printf("����Ŭ��\n");
	}
}
*/ ��