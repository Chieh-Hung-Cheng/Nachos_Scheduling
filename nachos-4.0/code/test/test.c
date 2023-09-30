#include "syscall.h"
main(){
    int	i=0;
    for (i=0; i<5;i++){
        Sleep(200+i*100);
        PrintInt(-9999);
	}
}