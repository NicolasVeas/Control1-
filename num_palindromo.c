/*===============================================================================*/
/* Control1 - Numeros amigos - ICI125 ProgramaciónI				    */
/* Determina si 1 numero es palindromo			                   */
/* Para compilar gcc num_palindromo.c -o eje11  				    */
/* Para ejecutar ./eje11							    */
/* Autores: Felipe Leviñir - Nicolas Veas         				    */
/* Profesoras: Ana Aguilera - Eliana Providel                                    */
/*===============================================================================*/

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>

bool comprobar(char n[]){
	
	if(n[0]=='-'){
		return false;
	}else
	{
		return true;
	}
	
	
}

bool palindromo(char n[]){
	
	bool ver = true;
	int j = strlen(n)-1;
	for(int i=0;i<strlen(n) && i<=j;i++){
		
		if(n[i]!=n[j]){
			ver = false;
		} 
		else j--;
	}
	
	return ver;
	
}
	

int main(){
	
	char num[1000];
	bool ver_num=true;
	bool ver_ondulado;

	while(ver_num){
		printf("Ingrese un numero positivo: ");
		scanf("%s",&num);
		ver_num = comprobar(num);
		if(ver_num){
			ver_ondulado = palindromo(num);
			if(ver_ondulado) printf("\nSI es un numero palindromo\n");
			else printf("\nNO es un numero palindromo\n");
		}
	}
	
    
    return 0;
}




