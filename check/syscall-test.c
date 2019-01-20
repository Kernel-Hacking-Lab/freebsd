#include <sys/syscall.h>
#include <unistd.h>

int main(){
	syscall(SYS_hellotuli, 0, 0);
	return 0;
}

