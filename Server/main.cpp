#include "mbed.h"



AnalogIn CNY1(PTB0);
AnalogIn CNY2(PTB1);
AnalogIn CNY3(PTB2);
AnalogIn CNY4(PTB3);
AnalogIn CNY5(PTC2);

DigitalOut led(LED1);

int main()
{
    while(1) {
        printf("CNY1 = %f   ", (CNY1.read()*3.3));
        printf("CNY2 = %f   ", (CNY2.read()*3.3));
        printf("CNY3 = %f   ", (CNY3.read()*3.3));
        printf("CNY4 = %f   ", (CNY4.read()*3.3));
        printf("CNY5 = %f   \r \n", (CNY5.read()*3.3));
        led = !led;
        wait(0.5);
    }
}
