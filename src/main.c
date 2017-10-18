#include"macros.h"

int main(void)
{
    while (1) {
        IOTOGGLE(GPIOC, 13);
        delay(700);
    }
    return 0;
}

