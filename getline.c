#include <stdio.h>
#include <unistd.h>

int main(void){
	pid_t process_id;
	pid_t p_proces_id;

	process_id = getpid();
	p_process_id = getppid();
	printf("The process id: %d\n",process_id);
	printf("The process id of parent: %d\n", p_process_id);

	return 0;

}
