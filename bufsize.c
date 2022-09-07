#include <stdio.h>
#include <stdlib.h>

int main(int ac __attribute__((unused)), char **av __attribute__((unused))){
	char *buffer;
	size_t bufsize = 32;

	buffer = malloc(bufsize * sizeof(char));

	printf("$ ");
	getline($buffer, &bufsize, stdin);
	printf("%s", buffer);

	return 0;


}
