#include <stdio.h>
int a[20][20],b[20][20],c[20][20];

int main()
{
	int i,j,ii,jj,m1,n1,m2,n2,temp;
	scanf("%d%d%d%d",&m1,&n1,&m2,&n2);
	for(i=0;i<m1;i++)
		for(j=0;j<n1;j++)
			scanf("%d",&a[i][j]);
			
	for(i=0;i<m2;i++)
		for(j=0;j<n2;j++)
			scanf("%d",&b[i][j]);
			
	for(i=0;i<=m1-m2;i++){
		for(j=0;j<=n1-n2;j++){
			temp=0;
			
			for(ii=0;ii<m2;ii++)
				for(jj=0;jj<n2;jj++)
					temp+=b[ii][jj]*a[i+ii][j+jj];
					
			printf("%d ",temp);
		}
		printf("\n");
	}

    return 0;
}

