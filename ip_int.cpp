//�ļ�����ip_int
//��  �ߣ�ccate
//ʱ  �䣺2018.12
//��  ������ip��ַת��Ϊ����

#include<stdio.h>

int main003()
{
	char a[] = "192.168.2.5";
	unsigned int ip = 0;
	unsigned char *p = (unsigned char *)&ip;
	int a1,a2,a3,a4;
	sscanf(a,"%d.%d.%d.%d",&a1,&a2,&a3,&a4);
	printf("%d,%d,%d,%d\n",a1,a2,a3,a4);
	p[0] = a4;
	p[1] = a3;
	p[2] = a2;
	p[3] = a1;
	printf("%u\n",ip);
	//���н����192,168,2,5    3232236037
	return 0;
}