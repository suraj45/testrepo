#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100],s3[100];
	int l1,l2,l3,i=0;
	scanf("%s",s1);
	//sgsk
	//sdkgs
	scanf("%s",s2);
	scanf("%s",s3);
	l1=strlen(s1);
	l2=strlen(s2);
	l3=strlen(s3);
	//printf("%d  %d  %d",l1,l2,l3);
	while(i<l1||i<l2||i<l3)
	{
		if(i<l1)
		{
			if(s1[i]=='a'||s1[i]=='i'||s1[i]=='e'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='O'||s1[i]=='E'||s1[i]=='I'||s1[i]=='U')
			{
				s1[i]='$';
			}
		}
		if(i<l2)
		{
			if(s2[i]=='a'||s2[i]=='i'||s2[i]=='e'||s2[i]=='o'||s2[i]=='u'||s2[i]=='A'||s2[i]=='O'||s2[i]=='E'||s2[i]=='I'||s2[i]=='U')
			{
			}
			else s2[i]='#';
		}
		if(i<l3)
		{
			if(s3[i]>=97)
				s3[i]-=32;
		}
		i++;

	}
			printf("%s\n%s\n%s",s1,s2,s3);
scanf("%c",s1);

}