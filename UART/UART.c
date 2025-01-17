#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/bootrom.h"
#include <string.h>

#define LED_GREEN 11
#define LED_BLUE 12
#define LED_RED 13
#define BUZZER 21


void init ()
{
    stdio_init_all();

    gpio_init(LED_GREEN);
    gpio_init(LED_BLUE);
    gpio_init(LED_RED);
    gpio_init(BUZZER);

    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_set_dir(BUZZER, GPIO_OUT);

    gpio_put(LED_GREEN, 0);
    gpio_put(LED_BLUE, 0);
    gpio_put(LED_RED, 0);
    gpio_put(BUZZER, 0);
}
void comandos (const char *buffer)
{
 if (strcmp(buffer, "GREEN") == 0) {
   gpio_put(LED_GREEN, 1);
   gpio_put(LED_BLUE, 0);
   gpio_put(LED_RED, 0);
 } else if (strcmp(buffer, "BLUE") == 0) {
   gpio_put(LED_GREEN, 0);
   gpio_put(LED_BLUE, 1);
   gpio_put(LED_RED, 0);
 } else if (strcmp(buffer, "RED") == 0) {
   gpio_put(LED_GREEN, 0);
   gpio_put(LED_BLUE, 0);
   gpio_put(LED_RED, 1);
} else if (strcmp(buffer, "WHITE") == 0) {
   gpio_put(LED_GREEN, 1);
   gpio_put(LED_BLUE, 1);
   gpio_put(LED_RED, 1);
} else if (strcmp(buffer, "OFF") == 0) {
   gpio_put(LED_GREEN, 0);
   gpio_put(LED_BLUE, 0);
   gpio_put(LED_RED, 0);
} else if (strcmp(buffer, "BUZZER") == 0) {
   gpio_put(BUZZER, 1);
   sleep_ms(2000);
   gpio_put(BUZZER, 0);
} else if (strcmp(buffer, "REBOOT") == 0) {
    printf("Rebooting into bootloader mode...\n");
    sleep_ms(1000);
    reset_usb_boot(0, 0); // Reinicia no modo USB Bootloader
}   
}
int main() {
    char buffer[1024];
     init(); 

    while (true) 
    {
        scanf("%1024s", buffer);

        comandos(buffer);
        
        sleep_ms(1000);
    }
}
