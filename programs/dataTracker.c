#include <minix/callnr.h>
#include <signal.h>
#include <sys/svrctl.h>
#include <sys/resource.h>
#include <sys/utsname.h>
#include <minix/com.h>
#include <minix/config.h>
#include <minix/type.h>
#include <minix/vm.h>
#include <string.h>
#include <lib.h>
#include <assert.h>
#include <stdio.h>
#include "../servers/pm/pm.h"
#include "../servers/pm/misc.c"

int isPrime(int x)
{
    printf("%d \n", x);
    return 1;
 }


PUBLIC int main() {
    int mem = 0;
    while(1){
        if(getsysinfo(PM_PROC_NR, SI_MEM_ALLOC, &pmi) < 0) {
		fprintf(stderr, "getsysinfo() for SI_MEM_ALLOC failed.\n");
		mem = 0;
		exit(1);;
	} else mem = 1;
        sleep(1);
    }
    
}