#define _CRT_SECURE_NO_WARING
#include <stdio.h>

//1.关于回调函数的描述
//①回调函数就是一个通过函数指针调用的函数
//②回调函数一般通过函数指针实现
//③回调函数一般不是函数的实现方调用，而是在特定的场景下，由另外一方调用
//④回调函数是调用函数指针指向的那个函数

//2.下面test函数的设计：void test(char** arr);   void test(char* arr[5]);
// char* arr[5] = {"hello","bit"};
// rest(arr);

//3.下面print_arr函数参数的设计：void print_arr(int (*arr)[5], int row, int col);
// int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
// print_arr(arr,3,5);


/*4.
int main()
{
	int a[5] = { 5,4,3,2,1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	//输出结果：4；1
	return 0;
}
*/

