//�ļ�����pointer2
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ��������ָ��

#include<stdio.h>

//����ָ��
int main0002()
{
	int a = 0;
	int *p = &a;
	int **pp;//����ָ�룬����ָ��pp���ָ��p�ĵ�ַ��
	pp = &p;
	//int **pp = &p;//ǰ����Ľ����
	return 0;
}

//����ָ��������
int main0003()
{
	int a[10];
	int *p = a;//p��ָ������a��ָ��
	p[0] = 0;
	p[1] = 2;
	int *b[10];//����ָ������b
	int **p1 = b;//����ָ��ָ������b�Ķ���ָ��p1��������һ��ָ��ָ��b��
	p1[0] = NULL;
	printf("%lu\n",sizeof(p1[0]));//���н����4
	return 0;
}