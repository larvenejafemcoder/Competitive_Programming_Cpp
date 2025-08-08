#include <stdio.h>
#include <math.h>

int main() 
{
	int m,n;
	scanf("%d %d", &m, &n);
	int i;
	int a=ceil(sqrt(m)); // Tìm căn bậc hai nhỏ nhất >= sqrt(m)
	int b=sqrt(n);       // Tìm căn bậc hai lớn nhất <= sqrt(n)
	printf("%d\n", b-a+1); // In ra số lượng số chính phương
	for(i=a;i<=b;i++)
	{
		printf("%lld\n",(long long)i*i); // In ra từng số chính phương
	}
	return 0;
}
