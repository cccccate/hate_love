//�ļ�����poin_2array
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ����ָ�������ԡ�������ָ��Զ�ά�����������

#include<stdio.h>

int main()
{
	char a[2][5] = {{3,4,1,2,9},{3,44,98,0,5}};//�Ѷ�ά����"��ֱ"����һά����
	char *p =(char *)a;

	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(p[j]<p[j-1])
			{
				char tmp = p[j];
				p[j] = p[j-1];
				p[j-1] = tmp;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	return 0;
}