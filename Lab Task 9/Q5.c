#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int count=0;
	scanf("%s", &str);
	printf("Your string is: %s", str);
	int i=0;
	while(str[i]!='\0'){
		count++;
		i++;
	}
	printf("\n");
	printf("Number of words in the string  are: %d", count);
	return 0;
}