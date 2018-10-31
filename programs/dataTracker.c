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

int isPrime(int x)
{
    printf("%d", x);
    return 1;
 }


PUBLIC int main() {
    while(1){
        isPrime(0);
        sleep(1);
    }
    
}