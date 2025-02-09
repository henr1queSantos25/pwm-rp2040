#include "pico/stdlib.h"
#include "hardware/pwm.h"

#define PWM_SERVO 22
const uint16_t WRAP = 25000;
const float PWM_DIVISER = 100.0;
const uint16_t STEP = 5;
uint16_t level = 625;


void pwm_setup(){
    gpio_set_function(PWM_SERVO, GPIO_FUNC_PWM);
    uint slice = pwm_gpio_to_slice_num(PWM_SERVO);
    pwm_set_clkdiv(slice, PWM_DIVISER);
    pwm_set_wrap(slice, WRAP);
    pwm_set_gpio_level(PWM_SERVO, 3000);
    pwm_set_enabled(slice, true);
}


int main(){
    stdio_init_all();
    bool updown = true;
    pwm_setup(); // INICIALIZA, CONFIGURA A FREQUNCIA DO PWM (50Hz) E DEFINE POSIÇÃO INICIAL DO SERVO-MOTOR (180°)
    sleep_ms(5000);
    pwm_set_gpio_level(PWM_SERVO, 1838); // (90°)
    sleep_ms(5000);
    pwm_set_gpio_level(PWM_SERVO, 625); // (0°)
    sleep_ms(5000);

    while(true){
        // LOOP ENTRE 0° E 180°
        pwm_set_gpio_level(PWM_SERVO, level);

        if(updown){
            level += STEP;
            if(level >= 3000){
                updown = false;
            }
        }
        else{
            level -= STEP;
            if(level <= 625){
                updown = true;
            }
        }

        sleep_ms(10);

    }
}