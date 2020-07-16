#include <stdio.h>
char a[100];
int main()
{
	int i,n,flag=1;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		a[i]=getchar();
		getchar();
	}
	for(i=0;i<=n/2;i++)
		if(a[i]!=a[n-i-1]) flag=0;
	if(flag==1) printf("1");
	else printf("0");
    return 0;
}

