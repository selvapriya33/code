#include<stdio.h>
void main()
{char str[15],str1[15];
int len,i;
int j=0;
printf("Enter a string");
scanf("%c",str);
len=strlen(str);
for(i=len-1;i>=0;i++)
{
str1[j]=str[i];
}
printf("%c",s[j]);
}
