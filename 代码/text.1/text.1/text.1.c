#include<stdio.h>  
#include<stdbool.h>

int main()
{
	printf("%d\n", strlen("abcdef"));					//�󳤶ȣ���������\0
	printf("%d\n", sizeof("abcdef"));					//���С������\0
	printf("%d\n", strlen("c:\test\328\test.c"));	
						//c:*est*8*est.c        \tΪһ���ֽ�          
	return 0;			//						\32 Ϊһ���ֽ�����Ϊ����������ֻҪ������8���ͱ������˽��Ƶ�һ�����ּ���
}						//��Ϊ "c:\test\325\test.c"���� \325Ϊһ���ֽڣ���Ϊ����������������8
						//��Ϊ"c:\test\832\test.c"���� \8Ϊһ���ֽ�   2��5����Ϊһ���ֽ�
						//��Ϊ"c:\test\x28\test.c"����\x Ϊһ���ֽڣ�x֮�����������Ϊһ���ֽ�   ��ʮ�����ƣ�




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
	char str[] = { 'a' };                       //''���ݱ�ʾ�ַ�
	printf("size = %d\n", sizeof(str));

	char str1[] = { "a" };                      // ""���ݱ�ʾ�ַ������ַ���ĩβ�Դ�һ��'\0'   
	printf("size = %d\n", sizeof(str1));

}
*/


/*void main()
{
	char *str = "Hello Bit."
	printf("str=%s\n",str);

	char str1[] = "Hello CPP,"
	printf("str1=%s\n",str1);

	char str2[] = { 'a', 'b', 'c', '\0' };           //�ַ��������Ŀ��ǡ�\0��
	printf("str2=%s\n",str2);
}
*/

/*
void main()
{
	int a = 10;             //ȫ�ֱ���
	//����
	{
		int b = 20;
		printf("b=%d",b);   //�ֲ�����
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
	int a;            //δ��ʼ��
	a = 100;          //��ֵ
	printf("a=%d\n",a);
}
*/


/*
void main()
{
	char ch = "a";
	int a = 100;
	double b = 12.34;
	float c = 12.34;       //����д�ᵼ�¾��Ƚض�  Ӧ��д����һ������
	float f = 12.34f;      //f��ʾ��Ϊ12.34Ϊ������
}
*/


/*
void main()
{
	printf("%d\n", sizeof(char));             //1
	printf("%d\n", sizeof(short));           //2
	printf("%d\n", sizeof(int));           //4
	printf("%d\n", sizeof(double));            //8          ˫���ȸ���
	printf("%d\n", sizeof(long));           //4
	printf("%d\n", sizeof(bool));           //1
	printf("%d\n", sizeof(long long));           //8
	printf("%d\n", sizeof(float));           //4            �����ȸ���
}
*/

/*
int main()
{
	//�������          ���͵����ã� �����ڴ�ռ� 
	int a = 10;
	char ch = 'A';
	double d = 12.34;
	return 0;
}
*/



/*
#include<stdio.h>     //��׼�������
int main()
{
	printf("Hello World.\n");
	printf("Change World.\n");
	return 0;             //��ȷ����return 0������ -1��     Linux ���뷵�أ�Ϊ����ϰ��
}
*/