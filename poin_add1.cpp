//�ļ�����poin_add1
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ָ������-��һ

#include<stdio.h>

int main07()
{
	int a = 0;
	int *p = &a;
	printf("%p,%p,%p\n",p,p+1,p+2);//�����0118FCA4,0118FCA8,0118FCAC����1������4���ֽڣ�

	char c = 0;
	char *p1 = &c;
	printf("%p,%p,%p\n",p1,p1+1,p1+2);//�����0075F937,0075F938,0075F939

	return 0;
}