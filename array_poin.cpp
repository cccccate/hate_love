//�ļ�����array_poin
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ��������������Ϊ�����β�ʱ��c���Խ�����������Ϊָ��

#include<stdio.h>

//void test(int a[10])
void test(int *a)//������
//void test(int a[])
{
	printf("%lu\n",sizeof(a));//��������4
	a[5] = 100;
}
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("%lu\n",sizeof(a));//��������40
	printf("----------------\n");
	test(a);

	int i;
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
		/*�����
		a[0]=1
		a[1]=2
		a[2]=3
		a[3]=4
		a[4]=5
		a[5]=100
		a[6]=7
		a[7]=8
		a[8]=9
		a[9]=10
		*/
	}
	return 0;
}