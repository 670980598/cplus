#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	char gchar;
	int num = 0;
	fp = fopen("test.txt","r");
	while(!feof(fp)){
		gchar = fgetc(fp);
		
		
		
		putchar(gchar);
		
		num++;
	}
	 
	num = num -1;
	printf("\n %d \n", num);
	
	fclose(fp);
	return 0;
} 
