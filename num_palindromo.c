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

bool comprobar(int n){
	if(n>=0){
		return true;
	}else{
		return false;
	}
	
}

bool palindromo(int n){
	
	int num_invertido=0;
	int num_copia=n;
	
	
	while(n>0){
		num_invertido = (num_invertido + n%10)*10;
		n/=10;
	}
	
	num_invertido /=10;
	
	if(num_invertido==num_copia){
		return true;
	}else{
		return false;
	}
}
	

int main(){
	
    int num;
    bool ver_num=true;
    bool ver_palindromo;
    
    while(ver_num){
    	printf("\n\nPara comprobar si un numero es PALINDROMO ingrese un numero positivo,\nsi desea salir ingrese un negativo: ");
    	scanf("%d",&num);
    	ver_num= comprobar(num);
    	if(ver_num){
    		ver_palindromo = palindromo(num);
    		if(ver_palindromo) printf("Es palindromo");
    		else printf("No es palindromo");
    	}
    }
    
    
    return 0;
}




