#include <sys/syscall.h>
#include <unistd.h>

int main(){
	__asm__("mov $564, %rax\n\t"
		"syscall\n\t");		

}

