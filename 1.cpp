#include<stdio.h>
int main()
{
	int arr[7]={1,3,7,2,1,3,2},i,j,count=0;
	for(i=0;i<7;i++)
	{
		count=0;
		for(j=0;j<7 && count<=3;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%d \n",arr[i]);
		}
	}
}
