/*===============================================================================*/
/* Control1 - Numeros amigos - ICI125 ProgramaciónI				    */
/* Determina si 1 numero es semi-poderoso			                   */
/* Para compilar gcc num_semi_poderoso.c -o eje14  				    */
/* Para ejecutar ./eje14							    */
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

bool semi_poderoso(int n){
	int numero = n;
	bool verificar = true;
	int i,j;
	
	if(n==1){
		return true;	
	}else{
	for(i=2;i<=n;i++){
		while(numero%i==0){
			if(n%(i*i)==0){
				verificar=false;
			}
			numero = numero / i;
		}
	
	}
	
	if(verificar) return false;
	else return true;
	}
}
	

int main(){
	
    int num;
    bool ver_num=true;
    bool ver_semi_poderoso;
    
    while(ver_num){
    	printf("\n\n**PARA SALIR INGRESE UN NUMERO NEGATIVO O CERO**\n");
    	printf("Ingres un numero positivo: ");
    	scanf("%d",&num);
    	ver_num= comprobar(num);
    	if(ver_num){
    		ver_semi_poderoso = semi_poderoso(num);
    		if(ver_semi_poderoso) printf("Es SEMI PODEROSO");
    		else printf("No es SEMI PODEROSO");
    	}
    }
    
    
    return 0;
}




