#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

main(){
	int quant;
	int i,j;
	char var1[15];
	char name[10][15];
	
	scanf("%d", &quant); 
	
	for(i=0;i<quant;i++){
		scanf("%s", name[i]); 
		}
	for(i=0;i<quant;i++){
		for(j=0;j<quant;j++){
			if(strcmp(name[i], name[j]) < 0){
				strcpy(var1, name[i]); 
				strcpy(name[i], name[j]); 
				strcpy(name[j], var1); 
			}
		}
	} 
	printf("\ndois primeiros em ordem alfabetica: ");
	for(i=0;i<2;i++){
		printf(" %s", name[i]); 
	}
		
	
	
}
