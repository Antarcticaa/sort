#include<stdio.h>
int main(){
	int book[1001],i,j,t,n;
	for(i=1;i<=1000;i++)  book[i]=0;
	scanf("%d",&n);   //输入一个整数n,表示接下来有n个数
	for(i=1;i<=n;i++) //循环读入这n个数，并进行桶排序
	{
		scanf("%d",&t);   //把每一个数读到变量 t中 
		book[t]++;     //进行计数，对编号为 t的桶放一个小旗子
}
    for(i=1000;i>=0;i--)       //依次判断编号为1000-0的桶（倒序） 
	 {
	 for(j=1;j<=book[i];j++) printf("%d ",i);
	 }                                       //出现了几次就将桶的编号打印几次 
     getchar();getchar();               //用来暂停程序，以便查看程序输出的内容，也可以用system（“pause”）；等来代替 
	 return 0; 
} 
