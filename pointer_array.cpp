//�ļ�����pointer_array
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ָ������

#include<stdio.h>

int main0000()
{
	char *a[10];//����ָ������a��ÿ����Ա��char*���͵ģ�һ��10����Ա
	int *b[10];//����ָ������b��ÿ����Ա��int*���͵ģ�һ��10����Ա
	printf("%lu,%lu\n",sizeof(a),sizeof(b));//�����40,40
	char i = 0;
	//a = &i;//a��bΪ��������������������Ϊ��ֵ
	//b = &i;
	a[0] = &i;//�Ϸ�
	printf("%lu,%lu\n",sizeof(a[0]),sizeof(*a[0]));//������4,1
	return 0;
}

int main0001()
{
	int *b[10] = { NULL };
	int a,b1,c;
	b[0] = &a;
	b[1] = &b1;
	b[2] = &c;
	*b[0] = 10;
	printf("%d\n",a);
	return 0;
}