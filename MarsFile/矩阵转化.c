#include <stdio.h>
int main()
{
	int n,m,i,j,t,s1[100],s2[100],s3[100],top=0;
	scanf("%d%d",&n,&m);£¤Í· 
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&t);
			if(t!=0){
				s1[top]=i;
				s2[top]=j;
				s3[top]=t;
				top++;
			}	
		}
	}
	while(--top+1)
		printf("%d %d %d\n",s1[top]+1,s2[top]+1,s3[top]);
    return 0;
}
