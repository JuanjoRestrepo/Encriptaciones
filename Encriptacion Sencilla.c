#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

#define MAX 100

int main(){
	
	
	//FILE *f = fopen("Archivo_Encriptado.txt", "w");
	char texto[MAX];
	char store[MAX];
	int i, opcion, key;	
	
	
	printf("Texto a encriptar: ");
	gets(texto);
	
	printf("Numero del cifrado: ");
	scanf("%d", &key);
	
	
	//Encripcion
	for(i = 0; i < strlen(texto); i++){
		store[i] = texto[i] + key;
	}
	
	printf("\nTexto Encriptado:\n");
	
	for(i = 0; i < strlen(texto); i++){
		printf("%c", store[i]);
	}		
	
	//Desencripcion
	for(i = 0; i < strlen(texto); i++){
		store[i] = texto[i] - key;
	}
	
	/*printf("\nTexto Desencriptado:\n");
	
	for(i = 0; i < strlen(texto); i++){
		printf("%c", store[i]);
	}*/
	
	return 0;
}
