// The'BreakOne'.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;
#define �� ;
string  YourName;
int main()
{//����һ����ͨ�ĵǼ��û����ϣ������ǵ�һ�˳Ƶڶ��˳ƻ��ǵ����˳Ƶĳ��򣬺��ж�д�ļ�������Ϊcsv�ĵ��Ĳ���
	for (;;)
	{
		printf("Please enter your name and type ok:");
		std::cin >> YourName;
		getchar();
		system("pause");
	}

}


//1.DRYԭ��
//��Ҫ�ظ���Don��t repeat yourself���������������һ���������ԭ�����Ҫ�����ظ���
//����̽ṹ������ѭ������������ȣ��Ĵ��ھ���Ϊ�˱����ظ���
//һ���ظ������磬һ�������ʽ��һϵ����䣬��ͬ�ĸ���Ļ����ͻᴴ��һ���µĳ���
void IcanNamedOne(string YourName,int person)
{
	printf("Please enter your name");
	std::cin >> YourName;
}

