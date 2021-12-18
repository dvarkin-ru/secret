#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// Анализ одноалфавитного шифра (алфавит английский)
// Шакиров, ИС-41
int main (int argc, char *argv[]) {
	if (argc < 3) {
		printf("HELP: use %s \"SAMPLE\" \"MESSAGE\"\n", argv[0]);
		exit(-1);
	}
	char *sample = argv[1], *message = argv[2], key[256] = {' '};
	int sta1[256] = {0}, sta2[256] = {0};
	for (int i = 0; i < strlen(sample); i++) { // статистика по примеру
		if (!isalpha(sample[i])) continue; // не алфавит
		sta1[toupper(sample[i])]++;
	}
	for (int i = 0; i < strlen(message); i++) { // статистика по сообщению
		if (!isalpha(message[i])) continue; // не алфавит
		sta2[toupper(message[i])]++;
	}
	int max[2], idx[2];
	do {
		max[0] = 0;
		max[1] = 0;
		for (int i = 'A'; i <= 'Z'; i++) {
			if (sta1[i] > max[0]) {
				max[0] = sta1[i];
				idx[0] = i;
			}
			if (sta2[i] > max[1]) {
				max[1] = sta2[i];
				idx[1] = i;
			}
		}
		key[idx[1]] = idx[0];
		sta1[idx[0]] = 0;
		sta2[idx[1]] = 0;
	} while ((max[0] > 0) && (max[1] > 0));
	printf("DECODED MESSAGE: ");
	for (int i = 0; i < strlen(message); i++) {
		if (!isalpha(message[i])) putchar(message[i]); // не алфавит
		else putchar(key[message[i]]);
	}
	putchar('\n');
	return 0;
}
