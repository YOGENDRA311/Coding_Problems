#include<stdio.h>
#include<math.h>
int main()
{
	int A[]={3,1,4,2};
	int n  = sizeof(A)/sizeof(A[0]);
	int B[]={2,4,3};
	int i,j,count=0;
	for(i=0;i<n;i++)
	{
		for(j=1;j<sqrt(B[i]);j++)
		{
			if(B[i]%j==0){
				if(j<=n && A[j-1]>0)
					A[j-1]--;
					
				if(B[i/j]!=0 && A[B[i/j]-1]>0)
					A[B[i/j]-1]--;
			}
		}
	}
	for(i=0;i<n;i++){
		if(A[i]==0){
			count++;
		}
	}printf("%d",count);

		return 0;
}
