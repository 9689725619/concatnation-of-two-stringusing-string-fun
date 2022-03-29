#include<stdio.h>
#include<string.h>

	int main(){
	
	char str1[100],str2[100];
	int i;
	printf("enter any string");
	gets(str1);
	for(i=0;str1[i]='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("string copied into str2=%s",str1);
	printf("total no. of car copied=%d",i);
	
	return 0;
	
}
