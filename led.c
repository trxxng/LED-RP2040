#include "pico/stdlib.h"
int main() {
    gpio_init(25); // Khởi tạo GPIO25
    gpio_set_dir(25, GPIO_OUT); // Set GPIO25 output
    while(1){
        gpio_put(25, 1); // Set GPIO25 high
        sleep_ms(1000);
        gpio_put(25, 0); // Set GPIO25 low
        sleep_ms(1000);
    }
}