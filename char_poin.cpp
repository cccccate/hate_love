//�ļ�����char_poin
//��  �ߣ�ccate
//ʱ  �䣺2019.1
//��  ����������Ϊ�����Ĳ���

#include<stdio.h>


//void test(char a[10])�ȼ�
//void test(char a[])
void print_array(int n,int *a)//�ṩ��һ������n��������ĳ�Ա����
{
	int i;
	for(i = 0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};

	print_array(sizeof(a)/sizeof(a[0]),a);//n=sizeof(a)/sizeof(a[0])
	return 0;
}