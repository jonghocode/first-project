#include <stdio.h>
#include <string.h>
int a[4][4];

int main()
{
	int sum1=0,sum2=0,sum3=0,sum4=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
			if(i==0)sum1+=a[i][j];
			if(i==1)sum2+=a[i][j];
			if(i==2)sum3+=a[i][j];
			if(i==3)sum4+=a[i][j];
		}
	}
	int min = 999999,sum=0;
	for(int i=0;i<4;i++){
		sum=0;
		for(int j=0;j<4;j++){
			for(int k=0;k<4;k++){
				for(int z=0;z<4;z++){
					if(i==j || i==k  || i==z || j==k || j==z  || k==z)continue;
					sum = sum1-a[0][i]+sum2-a[1][j]+sum3-a[2][k]+sum4-a[3][z];
					
					if(min>sum)min=sum;
				}
			}
		}
	}
	printf("%d",min);
    return 0;
}
