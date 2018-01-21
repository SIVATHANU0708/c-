#include<stdio.h>
int main()
{
int s,p,m;
printf("enter the three numbers:");
scanf("%d%d%d",&s,&p,&m);
if((s>p)&&(s>m))
{
printf("\n the largest number is %d",s);
}
if((p>s)&&(p>m))
{
printf("\n the largest number is %d",p);
}
if(m>p)&&(m>s))
{
printf("\n the largest number is %d",m);
}
return 0;
]
