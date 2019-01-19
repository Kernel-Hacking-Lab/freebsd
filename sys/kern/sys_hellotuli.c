#include <sys/sysproto.h>
#include <sys/proc.h>

// Required for printf
#include <sys/types.h>
#include <sys/systm.h>

#ifndef _SYS_SYSPROTO_H_
struct hellotuli_args{
	unsigned int k0;
	unsigned int k1;
};
#endif

/* ARGSUSED */
int sys_hellotuli(struct thread *td, struct hellotuli_args *args)
{
	printf("Hello World!\n");
	return 0;
}

