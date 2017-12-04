#include<stdio.h>
#include<string.h>
int main(){
	char a[2333],t;
	int len,i,j;
	gets(a);
	len=strlen(a);
	printf("%d\n",len);
	for(i=0;i<=len-2;i++)   
	{
		for(j=i+1;j<=len-1;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
						}			
		}
	}
	puts(a);
	return 0;
}
