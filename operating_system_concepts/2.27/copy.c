#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc < 3) {
		printf("Minimum three arguments: copy from to\n");
		exit(1);
	}

	char from[63], to[64];
	strcpy(from, argv[1]);
	strcpy(to, argv[2]);

	FILE *ffp, *tfp;

	if ((ffp = fopen(from, "r")) == NULL) {
		printf("Cannot open file to copy: %s", from);
		exit(1);
	}

	if ((tfp = fopen(to, "w")) == NULL) {
		printf("Cannot open target file: %s", to);
		exit(1);
	}

	int c;
	while ((c = getc(ffp)) != EOF) {
		putc(c, tfp);
	}

	return 0;
}
