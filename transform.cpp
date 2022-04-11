#include <math.h>
#include <iostream>
#include <string>
#include<stdlib.h>
#include<vector>
#include <algorithm>
#include<iostream>
#include<ctype.h>
#include <iomanip>
using namespace std;
using LL = long long;

# define M 100
const int mod = 7 + 1e9;
int f(char v);
int ma(int); 

string s;
vector<int> a;
vector<int> b;

int calc(int p) {                       //p为进制数；
    LL ans = 0;
    for (auto &i : a) {
        if (i >= p) return -1;
        ans = ans * p + i;
        ans %= mod;
    }
    return ans;
}

int  f(char v) 
    {                                    //v = i
        if (isdigit(v)) return (v - '0'); //判断是否是十进制数
        return (v - 'A' + 10);
    }

int main() {
    cin >> s;                            // s = '12'   
        
    for (auto & i : s) {                //i = s[0],i = s[1],i = s[2]...
        a.push_back(f(i));              //a[0] = f ,a[1] =  
    }

	cout << ma(calc(10)) <<endl;
    return 0;
}

char numToLetter(int inputNum)
{
	int i=0;
	i = inputNum - 10;
	return 'A'+i;
}
void change(int srcnum,int R)
{
	int i=0,j=0;		// 循环变量
	int a[M] = {0};	// 全部元素初始化为0
	while(srcnum)
	{
		a[i] = srcnum % R;
		srcnum /= R;
		i++;
	}
 
	for(j=i-1; j>=0; j--)	// 注意：i多加了一次，i-1，一直取到j为0
	{
		if(a[j]<0)
		{
			return;
		}
		else if(a[j]>=0 && a[j]<10)
		{
			printf("%d",a[j]);
		}
		else
		{
			printf("%c",numToLetter(a[j]));
		}
	}
 
	printf("\n");
} 
 
 
 
int ma(int s)
{
	int source = 0;		// 原数字
	int R = 0;			// 要转为R进制
	char confirm;       // 控制是否继续
 
	do
	{
		source = s ;
	
		printf("请输入转换的进制数(2~36): \n");
		scanf("%d", &R);
		while(getchar() != '\n');
		if(R >= 2 && R<=36)
		{
			change(source,R);
			printf("想继续输入吗？Y/N: \n");
		}else{
			printf("输入有误, 继续输入Y, 否N\n");
		}
		
		scanf("%c", &confirm);
	}
	while('Y' == confirm || 'y' == confirm);
 
	return 0;
}