//�ļ�����pointer3
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ��������ָ�루�༶ָ�룩
//ԭ�����õͼ�ָ��ľ�����Ҫ�ø߼�ָ�룬һ��ָ�����ָ����ã�����ָ�����

#include<stdio.h>

int main()
{
	int a = 0;
	int *p = &a;
	int **pp = &p;
	int ***ppp = &pp;//����ָ��
	int ****pppp = &ppp;
	int *****ppppp = &pppp;//�弶ָ��

	*****ppppp = 10;//ͨ���弶ָ��ı�a��ֵ
	printf("a = %d\n",a);//a = 10;
	return 0;
}