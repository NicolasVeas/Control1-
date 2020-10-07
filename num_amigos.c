/*===============================================================================*/
/* Control1 - Numeros amigos - ICI125 ProgramaciónI				    */
/* Determina si 2 numeros son amigos				                   */
/* Para compilar gcc num_palindromo.c -o eje13  				    */
/* Para ejecutar ./eje13							    */
/* Autores: Felipe Leviñir - Nicolas Veas         				    */
/* Profesoras: Ana Aguilera - Eliana Providel                                    */
/*===============================================================================*/

#include <stdio.h>
#include <stdbool.h>

bool comprobar2(int a, int b){
	if(a > 0 && b > 0){
		return true;
	}else{
		return false;
	}
}

bool comprobar(int a, int b){
	if(a > 0 || b >0){
		return true;
	}else{
		return false;
	}	
}

bool amigos(int n1, int n2){
	int i,j;
	int sum_n1=0;
	int sum_n2=0;
	
	for(i=1;i<n1;i++){
		if(n1 % i==0){
			sum_n1 = sum_n1 + i;
		}
	}
	
	for(j=1;j<n2;j++){
		if(n2 % j==0){
			sum_n2 = sum_n2 + j;
		}
	}
	
	if(sum_n1 == n2 && sum_n2 == n1) return true;
	else return false;
}
	

int main(){
	
    int a,b;
    bool ver_num=true;
    bool ver_amigos;
    bool ver_cero=true;
    
    while(ver_num){
    	printf("\n\n**Para salir ingrese un numero NEGATIVO o CERO en los dos numeros(a y b)'**\n");
    	printf("Ingresa el numero 'a': ");
    	scanf("%d",&a);
    	printf("Ingresa el numero 'b': ");
    	scanf("%d",&b);
    	ver_num= comprobar(a,b);
    	ver_cero = comprobar2(a,b);
    	if(ver_num==true && ver_cero == true){
    		ver_amigos = amigos(a,b);
    		if(ver_amigos) printf("'a' y 'b' son amigos");
    		else printf("'a' y 'b' no son amigos");
    	}
    }

    return 0;
}




