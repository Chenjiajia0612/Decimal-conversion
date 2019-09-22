#include <stdio.h>
void main()
{
	int i,j,k,a,b,s,x,t[20];
	scanf("%d",&x);
	b=x;
	for(i=0;b!=0;i++)
	{
		t[i]=b%2;
		b/=2;
	}
	printf("\nThe binary form:");
	for(i--;i>=0;i--)
		printf("%d",t[i]);
	printf("\n");
	s=x;
	for(j=0;s!=0;j++)
	{
		t[j]=s%8;
		s/=8;
	}
	printf("\nThe octal from:");
	for(j--;j>=0;j--)
		printf("%d",t[j]);
	printf("\n");	
	a=x;
	for(k=0;a!=0;k++)
	{
		t[k]=a%16;
		a/=16;
	}
	printf("\nThe hexadecimal from:");
	
	for(k--;k>=0;k--)
		switch(t[k])
	{
    case 1:printf("%d",t[k]);break;
	case 2:printf("%d",t[k]);break;
	case 3:printf("%d",t[k]);break;
	case 4:printf("%d",t[k]);break;
	case 5:printf("%d",t[k]);break;
	case 6:printf("%d",t[k]);break;
	case 7:printf("%d",t[k]);break;
	case 8:printf("%d",t[k]);break;
	case 9:printf("%d",t[k]);break;
	case 10:printf("A");break;
    case 11:printf("B");break;
    case 12:printf("C");break;
    case 13:printf("D");break;
    case 14:printf("E");break;
	case 15:printf("F");break;
	}
	printf("\n");
}
