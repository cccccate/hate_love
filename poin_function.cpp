//�ļ�����poin_function
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ���������Ĳ�����Ϊָ�����

#include<stdio.h>

void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main0006()
{
	int a = 1;
	int b = 2;
	swap(&a,&b);//c������ͨ�������ڲ��޸�ʵ�ε�ֵ��ֻ�ܸ�����ʵ�δ���ʵ�εĵ�ַ������޸�ʵ�ε�ֵ
	printf("a=%d,b=%d\n",a,b);
	return 0;
}