#include <stdio.h>

/* 02/18/2020 CLASSWORK */

int main(void) {
	int c, cn = 0, l_count[26];
	for (int i = 0; i < 26; i++) {
		l_count[i] = 0;
	}

	while((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			l_count[c - 97]++;
		}
		cn++;
	}
	for (int i = 0; i < 26; i++) {
		printf("The number of %c is: %d\n", i+97, l_count[i]);
	}
}
