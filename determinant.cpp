/*  */
#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,d,a[3][3],b,c,e;
    printf("Enter the number:\n");
    for(i=0;i<9;i++){
    	for(j=0;j<9;j++){
    		scanf("%d",&a[i][j]);
    		
		}
		
	}
	        b=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2]);
		c=a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2]);
		e=a[0][2]*(a[1][0]*a[2][1]-a[2][0]*a[1][1]);
		printf("The determinant of matrix A is %d .",b-c+e);
return 0;
}
