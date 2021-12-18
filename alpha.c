#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// Одноалфавитный шифр (алфавит английский)
// Шакиров, ИС-41
int main (int argc, char *argv[]) {
	if (argc < 3) {
		printf("HELP: use %s \"MESSAGE\" ALPHABETIC_KEY\n", argv[0]);
		exit(-1);
	}
	char *message = argv[1], *alpha = argv[2];
	for (int i = 0; i < strlen(alpha); i++) alpha[i] = toupper(alpha[i]);
	for (int i = 0; i < strlen(message); i++) {
		if (!isalpha(message[i])) continue; // не алфавит
		message[i] = alpha[toupper(message[i]) - 'A'];
	}
	printf("ENCODED MESSAGE: %s\n", message);
	return 0;
}
