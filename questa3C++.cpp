#include<stdio.h>
#include<string.h>
#include <iostream>
#include <cstdlib> 
using namespace std; 

main(){
	int quant,i,j; 
	char name[10][15]; 
	char var1[15];
	cin >> quant; 
	for(i=0;i<quant;i++){
		cin>>name[i]; 
	}
		
	for(i=0;i<quant;i++){
		for(j=0;j<quant;j++){
			if(strcmp(name[i],name[j])<0){
				strcpy(var1, name[i]);
				strcpy(name[i], name[j]); 
				strcpy(name[j], var1); 
				
			}
		}
	}
	cout << "\ndois primeiros em ordem alfabetica:"; 
	for(i=0;i<2;i++){
		cout <<"\n"<<name[i]; 
	}
}
