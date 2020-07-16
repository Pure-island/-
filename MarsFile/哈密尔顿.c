#include <stdio.h>
int ans,a[8][8],left,track[8];
int des,n,m,temp; 
int main()
{
	int i;
	scanf("%d%d",&n,&m);
	left=n;
	for(i=0;i<m;i++){
		scanf("%d%d",&temp,&des);
		a[temp][des]=1;
		a[des][temp]=1;
	}
	func(1);
	printf("%d",ans);
    return 0;
}

int func(int t)
{
	left--;
	track[t]=1; 
	if(left==0){
		if(a[t][1]==1) 
			ans=1;
	}
	int i;
	for(i=1;i<n+1;i++){
		if(a[t][i]==1&&track[i]==0) func(i);	
	}
	left++;
	track[t]=0;
	return 0;
}


