// LORENZO GRIPPO CHIACHIO

#include <stdio.h>
#include <stdlib.h>

#define MAX 30

//========================================================== STRUCTS ================================================================



//========================================================= PORTOTIPOS ==============================================================

int verificar_string (char* string);

//============================================================ MAIN =================================================================
int main() {

char string[MAX];
scanf("%s", string);

(verificar_string(string)) ? printf("Essa string possui o cractere 'a'\n") : printf("Essa string não possui o cractere 'a'\n");

return 0; }
//=========================================================== FUNCOES ===============================================================

int verificar_string (char* string) {

	for (int i = 0; i < 30; i++) {
		if (string[i] == 'a') return 1;
		else if (string[i] == '\0') return 0;
	}
	return 0;

}

