#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
	char *buffer = NULL;
	size_t bufsize = 0;
	size_t byte;
	char *token;

	printf("$ ");
	byte = getline(&buffer, &bufsize, stdin);

	printf("%ld\n", byte);
	printf("%s", buffer);

	token = strtok(buffer, " ");
	while(token){
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	free(buffer);
	free(token);

	return 0;
}
