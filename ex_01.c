// LORENZO GRIPPO CHIACHIO

#include <stdio.h>
#include <stdlib.h>

//========================================================== STRUCTS ================================================================



//========================================================= PORTOTIPOS ==============================================================

int fibonacci (int num);

//============================================================ MAIN =================================================================
int main() {

int num = 0;
scanf("%d", &num);

(fibonacci(num)) ? printf("O número fornecido pertence à sequência de Fibonacci\n") : printf("O número fornecido não pertence à sequência de Fibonacci\n");

return 0; }
//=========================================================== FUNCOES ===============================================================

int fibonacci (int num) {
	
	if (num == 0 || num == 1) return 1;
	int aux1 = 0, aux2 = 1, atual = 0;
	
	while (1) {
		
		atual = aux1 + aux2;
		if (atual > num) return 0;
		else if (atual == num) return 1;
		
		aux1 = aux2;
		aux2 = atual;
		
	}

}

