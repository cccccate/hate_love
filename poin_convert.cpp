//�ļ�����poin_convert
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ��������ָ����ַ������е���
//˼  ·��������ָ�룬p��p1��p��ͷ��ʼ��p1�Ӻ�ʼ����һ���ַ������һ���ַ��������ڶ����뵹���ڶ�����ֱ��p>p1;
#include<stdio.h>
#include<string.h>

int main()
{
	char a[100] = "hello,world";
	char *p = a;
	int len = strlen(a);

	char *p1 = p;//��ͬ��*p1 = a;
	p1 += len -1;
	if(p<p1)
	{
		char tmp = *p;//ֵ����
		*p = *p1;
		*p1 = tmp;
		p1--;//��ַ��1��1
		p++;
	}
	printf("%s\n",a);//%s�ַ���
	return 0;
}