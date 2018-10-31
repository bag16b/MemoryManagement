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
#include "mproc.h"
#include "param.h"

int isPrime(int x)
{
    printf("%d", 1);
    return 1;
 }


PUBLIC int main() {
    while(true){
        isPrime(0);
        sleep(1);
    }
    
}