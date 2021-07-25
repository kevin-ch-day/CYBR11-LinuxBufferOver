/* esp.c
 * shows the value of $esp -- the Extended Stack Pointer
 */

#include <stdio.h>

int main(){
	register int i asm("esp");
	printf("$esp = %#101x\n", i);
	return 0;
}
