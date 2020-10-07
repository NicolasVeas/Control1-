/*===============================================================================*/
/* Control1 - Numeros amigos - ICI125 ProgramaciónI				    */
/* Determina si 1 numero entero es libre de cuadrados	                   */
/* Para compilar gcc num_libredecuadrados.c -o eje18  			    */
/* Para ejecutar ./eje18							    */
/* Autores: Felipe Leviñir - Nicolas Veas         				    */
/* Profesoras: Ana Aguilera - Eliana Providel                                    */
/*===============================================================================*/

#include <stdio.h>
#include <stdbool.h>

bool comprobar(int n){
	if(n>0){
		return true;
	}else{
		return false;
	}
	
}

bool libredecuadrados(int n){
	
	
	
	int divisor = 2;
	int numero = n;
	int cont;
	bool ver = false;
	
	while(numero >= divisor){
		cont = 0;
		while(numero % divisor == 0){
			numero = numero / divisor;
			cont ++;
			if(cont>1) ver = true;
		
		}
		divisor++;
	}
	
	if(ver) return false;
	else return true;
}
	

int main(){
	
    int num;
    bool ver_num=true;
    bool ver_libredecuadrados;
    
    while(ver_num){
    	printf("\n\n**PARA SALIR INGRESE UN NUMERO NEGATIVO O CERO**\n");
    	printf("Ingres un numero positivo: ");
    	scanf("%d",&num);
    	ver_num= comprobar(num);
    	if(ver_num){
    		ver_libredecuadrados = libredecuadrados(num);
    		if(ver_libredecuadrados) printf("SI es un numero libre de cuadrados");
    		else printf("NO es un numero libre de cuadrados");
    	}
    }
    
    
    return 0;
}




