#include <stdio.h>
#include "libs.h"
#include "app.h"

void helloworld(){
    printf("This is cmake template\n");
}

int main(int argc, char const *argv[])
{
    helloworld();
    printLibsName();
    return 0;
}
