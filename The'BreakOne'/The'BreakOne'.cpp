// The'BreakOne'.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

char 
char  YourName[MaxNum];
int main()
{
	printf("Is a test");
    return 0;
	getchar();
}


//1.DRYԭ��
//��Ҫ�ظ���Don��t repeat yourself���������������һ���������ԭ�����Ҫ�����ظ���
//����̽ṹ������ѭ������������ȣ��Ĵ��ھ���Ϊ�˱����ظ���
//һ���ظ������磬һ�������ʽ��һϵ����䣬��ͬ�ĸ���Ļ����ͻᴴ��һ���µĳ���
void IcanNamedOne()
{
	printf("Please enter your name");
	scanf("%s", YourName);
}

