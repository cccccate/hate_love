//�ļ�����poin_array_main
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ����ָ��������Ϊmain�������β�

#include<stdio.h>

//int main(int argv, char *args[])
int main(int argv, char **args)//args��һ��ָ������char*��argc��������ĳ�Ա����
{
	int i;
	for(i=0;i<argv;i++)
	{
		printf("%s\n",args[i]);
	}
	return 0 ;
}