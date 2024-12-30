#include<iostream>
#include<vector> 
#include<map>

//自定义的头文件，放在与main.cpp同一层级目录下 格式: #include"..."
#include"struct.h"
#include"function.h"

using namespace std;

int main()
{

	account_setting my_account;
	my_account.ip = 123;
	my_account.name = "zzz";
	my_account.password = 123456;

	cout << my_account.ip << endl; 
	cout << my_account.name << endl;
	cout << my_account.password << endl;



	double num1 = 100;
	double num2 = 200;
	double ans = sum(num1,num2);
	cout << ans << endl;
	cout << sum(num1,num2) << endl;

}
