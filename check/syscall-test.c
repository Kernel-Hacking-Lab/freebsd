#include <sys/syscall.h>
#include <unistd.h>

int main(){
	syscall(564, 0, 0);
	return 0;
}

