//�ļ�����main_multi
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ��������mainʵ������ӷ�����,���磬����������a 5 + 6 ���5+6�Ľ��11

#include<stdio.h>
#include<stdlib.h>//atoi��ͷ�ļ�

int main(int argc, char **args)
{
	if (argc<4)//�����������ֱ����ʾ���˳�
	{
		printf("��������\n");
		return 0;
	}
	//ע�⣺main�����Ĳ��������ַ�����û��char���м��+�ǡ�+�������ǡ�+��
	int a = atoi(args[1]);//�ѵ�һ������5ת��Ϊint��
	int b = atoi(args[3]);//�ѵ���������6ת��Ϊint��

	char *s = args[2];//+���ַ�������˲���д������һ��
	//char c = args[2];
	char c = s[0];//+�ǡ�+���ĵ�һ���ַ����ɵõ��ڶ�������+�ַ�
	//�������佨��ϲ�Ϊ����һ��
	//char c = args[2][0];
	switch (c)
	{
	case '+':
		printf("%d\n",a+b);
	case '-':
		printf("%d\n",a-b);
	case '*':
		printf("%d\n",a*b);
	case '/':
		printf("%d\n",a/b);
	default:
		printf("error\n");
	}

	return 0;
}
//ע�⣺*�������ͨ���������ʱ�����error��Ҫ��ʹ��*���������ת�Ʒ���\
//�磺a 1 \* 5