#include<stdio.h>
#include<cmath>
#include<iostream>

using namespace std;
/*#include<stdio.h>

int main()

{

	int sz[10] = { 0 }, zm[26] = { 0 }, z[26] = { 0 }, i, space = 0, e = 0, t = 0;

	char c;

	printf("请输入一段字符，统计其中各字符的数量\n");

	while ((c = getchar()) != '\n')

	{

		if (c <= 'z' && c >= 'a')

			zm[c - 'a']++;

		else if (c <= 'Z' && c >= 'A')

			z[c - 'A']++;

		else if (c <= '9' && c >= '0')

			sz[c - '0']++;

		else if (c == ' ')

			space++;

		else

			e++;

	}

	printf("\n\n");

	for (i = 0; i <= 9; i++)

	{

		t++;

		printf(" %d的个数为%d ", i, sz[i]);

		if (t % 3 == 0)

			printf("\n");

	}

	t = 0;

	printf("\n\n\n");

	for (i = 0; i <= 25; i++)

	{

		t++;

		printf(" %c的个数为%d ", i + 97, zm[i]);

		if (t % 3 == 0)

			printf("\n");

	}

	t = 0;

	printf("\n\n\n");

	for (i = 0; i <= 25; i++)

	{

		t++;

		printf(" %c的个数为%d ", i + 65, z[i]);

		if (t % 3 == 0)

			printf("\n");

	}

	t = 0;

	printf("\n\n\n");

	printf(" 空格的个数为%d\n\n", space);

	printf(" 其他字符的个数为%d\n", e);

	return 0;

}*/
//字符统计
/*#include <stdio.h>


int main()
{
	char a;
	int i = 0;
	int number = 0; //数字个数
	int space = 0;  //空格个数
	int letters = 0; //字母个数
	int other = 0;  //其他个数


	while ((a = getchar()) && a != '\n')
	{
		if (a >= '0' && a <= '9')
		{
			number++;
		}
		else if (a == ' ')
		{
			space++;
		}
		else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		{
			letters++;
		}
		else
		{
			other++;
		}
	}

	printf("英文字母个数为:%d\n", letters);
	printf("数字个数为:%d\n", number);
	printf("空格个数为:%d\n", space);
	printf("其他个数为:%d\n", other);
	return 0;
}*/
//字符统计（简化版）
/*#include<stdio.h>
int main()
{
	int sum;
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i)//防止输出两遍
			{
				sum = i * j;
				printf("%d*%d=%d\t", i, j, sum);
			}
		}
		printf("\n");
	}
	return 0;
}*/
//乘法表
/*int main()
{

	int p1, p2, t1 = 0;
	printf("输入两个数字\n");
	scanf_s("%d %d", &p1, &p2);
	while (p1 % p2) //当a整除b时循环结束
	{

		t1 = p1 % p2;
		p1 = p2;     // 把b赋值给a
		p2 = t1;    //余数重新赋值给b
	}
	int a1 = p1, b1 = p2;
	printf("最大公约数是%d\n", p2);
	int n1 = a1 * b1;
	int m1 = 0;
	while (m1 = a1 % b1)
	{
		a1 = b1;
		b1 = m1;
	}
	printf("最小公倍数是%d\n", n1 / b1);

	return 0;

}*/
//最大公因数，最小公倍数
/*int gcd(int a, int b)
{
	if (a % b == 0) return b;
	else
		return gcd(b, a % b);
}
int mul(int a, int b)
{
	return (a * b) / gcd(a, b);
}
int x, y, z, a;
int main()
{
	cin >> x >> y;
	cout << "最大公约数是" << gcd(x, y) << endl;
	cout << "最小公倍数是" << mul(x,y)<< endl;
	return 0;
}*/
//最大公因数，最小公倍数（多函数版）
/*int main(void)
{
	int a, flag;//a是分母,flag是为了变正负号的
	double item, pi;
	double eps;//eps是精确度
	printf("输入精确度\n");
	scanf_s("%lf", &eps);
	flag = 1; a = 1; item = 1.0; pi = 0;//建立初始状态
	while (fabs(item) >= eps) //fabs是求item绝对值，item只要大于设定的精度就会不断循环
	{
		pi = pi + item;//按照公式，π/4最开始等于1
		flag = -flag;//后面每一项都在改变符号，由于第二项是负的，所以在让flag前面加负号
		a= a + 2;//分母是奇数，所以每次都要在前面数的分母上加2
		item = flag * 1.0 / a;//这里就是公式里1后面的数字
	}
	pi = pi + item;//小于设定精度后循环结束，最终的π/4就等于公式里的样子
	pi = pi * 4;//得到最终的π
	printf("pi = %lf\n", pi);//输出
	return 0;
}*/
//π的估算
/*int main()
{
	char h, j{};
	printf("输入字母\n");
	h = getchar();
	if (h>=65 && h<=90)
	{
		j = h + 32;
		printf("小写字母为%c\n", j);
		printf("%d，%d\n", h, j);
	}
	else
	{
		j = h - 32;
		printf("大写字母为%c\n", j);
		printf("acsll码分别为%d,%d\n", h,j);
	}
}*/
//大小写互换
/*int main()
{
	double q;
	printf("enter a number\n");
	scanf_s("%lf", &q);
	printf("it's %.2lf\n", round(q*100)/100);

}*/
//四舍五入
/*int main()
{
	double a, b, c;
	double p, s;
	printf("请输入三角形的三边长度\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	if (a + b > c && b + c > a && a + c > b && a - b < c && b - a < c && b - c < a && c - b < a && a - c < b && c - a < b)
	{
		printf("可以构成三角形\n三角形面积为%lf\n", s);
		if (a + b <= c || a + c <= b || b + c <= a)
			printf("输入的三边不能构成三角形\n");
		else if (a == b && b == c)
			printf("输入的三边能构成等边三角形\n");
		else if ((a == b) || (a == c) || (b == c))
			printf("输入的三边能构成等腰三角形\n");
		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
			printf("输入的三边能构成直角三角形\n");
		else printf("输入的三边能构成普通三角形\n");
	}
	else
		printf("不可以构成三角形\n");

}*/
//三角形判断
/*int main()
{
	cout << "输入三科成绩" << endl;
	double a, b, c, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 3.0;
	if (p>=90)
	{
		cout<<"A";
	}
	else
	{
		if (p>=80&&p<90)
		{
			cout<<"B";
		}
		else
		{
			if (p>=70&&p<80)
			{
				cout<<"C";
			}
			else
			{
				if (p>=60&&p<70)
				{
					cout<<"D";
				}
				else
				{
					cout<<"E";
				}
			}
		}
	}

}
*/
//成绩判断
/*void sort(int a[], int n);
void PrintArr(int a[], int n);
void sort(int a[], int n)
{
	int j, temp, i;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}


void PrintArr(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}
int main() {
	int n, i, a[10];
	cout << "请输入数组大小(元素个数):" << endl;
	scanf("%d", &n);
	cout << "请依次输入元素:" << endl;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	cout << "排序前:" << endl;
	PrintArr(a, n);
	cout << "\n" << endl;
	cout << "排序后:" << endl;
	sort(a, n);
	PrintArr(a, n);
	cout << "\n" << endl;
	return 0;
}
*/
//选择排序(多函数)
/*#include <stdio.h>

#define COUNT 15
int sequence(int n)
{
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else {
		return sequence(n - 1) + sequence(n - 2);
	}

}
int main()
{
	int i;
	for (i = 1; i < COUNT; i++) {
		printf("%d ", sequence(i));
	}
	printf("\n");

	return 0;
}*/
//斐波那契数列
/*char score(double a, double b, double c)//成绩排名
{

	double p;
	p = (a + b + c) / 3.0;
	if (p >= 90)
	{
		return 'A';
	}
	else
	{
		if (p >= 80 && p < 90)
		{
			return 'B';
		}
		else
		{
			if (p >= 70 && p < 80)
			{
				return 'C';
			}
			else
			{
				if (p >= 60 && p < 70)
				{
					return 'D';
				}
				else
				{
					return 'E';
				}
			}
		}
	}
}

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	cout << score(a, b, c);
}*/
//成绩判断（多函数）
