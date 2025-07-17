#include "pico/stdlib.h"
int main() {
    gpio_init(25); // Initialize GPIO 25
    gpio_set_dir(25, GPIO_OUT); // Set GPIO 25 as output
    while(1){
        gpio_put(25, 1); // Set GPIO 25 high
        sleep_ms(1000);
        gpio_put(25, 0); // Set GPIO 25 low
        sleep_ms(1000);
    }
}