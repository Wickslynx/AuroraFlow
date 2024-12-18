// -----------------------------------------------
//Library for embedded system, built by @Wickslynx on github.

#ifned AURORAFLOW_H
#define AURORAFLOW_H


#ifdef ARDUINO
#include <stdio.h>
#include <avr/io.h>
#include <stdbool.h>
#endif 

#define LOW false
#define HIGH true

#define OUTPUT 0001
#define INPUT 0002



#ifdef ARDUINO
void SetPinMode(const int pin, const int mode) {
    if (mode == OUTPUT) {
        switch (pin) {
            case 0:
                DDRD |= (1 << PD0);
                break;
            case 1:
                DDRD |= (1 << PD1);
                break;
            case 2:
                DDRD |= (1 << PD2);
                break;
            case 3:
                DDRD |= (1 << PD3);
                break;
            case 4:
                DDRD |= (1 << PD4);
                break;
            case 5:
                DDRD |= (1 << PD5);
                break;
            case 6:
                DDRD |= (1 << PD6);
                break;
            case 7:
                DDRD |= (1 << PD7);
                break;
            case 8:
                DDRB |= (1 << PB0);
                break;
            case 9:
                DDRB |= (1 << PB1);
                break;
            case 10:
                DDRB |= (1 << PB2);
                break;
            case 11:
                DDRB |= (1 << PB3);
                break;
            case 12:
                DDRB |= (1 << PB4);
                break;
            case 13:
                DDRB |= (1 << PB5);
                break;
            default:
                printf("Invalid pin number: %s.", pin);
                break;
        }
    } else if (mode == INPUT) {
        switch (pin) {
            case 0:
                DDRD &= ~(1 << PD0); //Set pin 0 to input.
                break;
            case 1:
                DDRD &= ~(1 << PD1); //set pinut 1 to input..
                break;
            case 2:
                DDRD &= ~(1 << PD2);
                break;
            case 3:
                DDRD &= ~(1 << PD3);
                break;
            case 4:
                DDRD &= ~(1 << PD4);
                break;
            case 5:
                DDRD &= ~(1 << PD5);
                break;
            case 6:
                DDRD &= ~(1 << PD6);
                break;
            case 7:
                DDRD &= ~(1 << PD7);
                break;
            case 8:
                DDRB &= ~(1 << PB0);
                break;
            case 9:
                DDRB &= ~(1 << PB1);
                break;
            case 10:
                DDRB &= ~(1 << PB2);
                break;
            case 11:
                DDRB &= ~(1 << PB3);
                break;
            case 12:
                DDRB &= ~(1 << PB4);
                break;
            case 13:
                DDRB &= ~(1 << PB5);
                break;
            default:
                printf("Invalid pin number: %s.", pin);
                break;
        }
    }
}

void WritePin(const int pin, const bool value) {
    if (value == HIGH) {
        switch (pin) {
            case 0:
                PORTD |= (1 << PD0);
                break;
            case 1: 
                PORTD |= (1 << PD1); 
                break; 
            case 2: PORTD |= (1 << PD2); 
                break;
            case 3:
                PORTD |= (1 << PD3); 
                break;
            case 4: 
                PORTD |= (1 << PD4); 
                break;
            case 5: 
                PORTD |= (1 << PD5);
                break; 
            case 6: 
                PORTD |= (1 << PD6);
                break;
            case 7: 
                PORTD |= (1 << PD7);
                break; 
            case 8: 
                PORTB |= (1 << PB0); 
                break;
            case 9:
                PORTB |= (1 << PB1);
                break;
            case 10:
                PORTB |= (1 << PB2);
                break; 
            case 11: 
                PORTB |= (1 << PB3); 
                break;
            case 12: 
                PORTB |= (1 << PB4);
                break;
            case 13: 
                PORTB |= (1 << PB5);
                break;
            default:
                printf("Invalid pin number: %s.", pin);
        } else { 
            switch (pin) { 
                case 0: 
                    PORTD &= ~(1 << PD0); 
                    break; 
                case 1:
                    PORTD &= ~(1 << PD1);
                    break; 
                case 2: 
                    PORTD &= ~(1 << PD2);
                    break; 
                case 3:
                    PORTD &= ~(1 << PD3); 
                    break; 
                case 4: 
                    PORTD &= ~(1 << PD4);
                    break; 
                case 5: 
                    PORTD &= ~(1 << PD5); 
                    break;
                case 6:
                    PORTD &= ~(1 << PD6);
                    break;
                case 7: 
                    PORTD &= ~(1 << PD7);
                    break; 
                case 8: 
                    PORTB &= ~(1 << PB0); 
                    break; 
                case 9: 
                    PORTB &= ~(1 << PB1); 
                    break;
                case 10: 
                    PORTB &= ~(1 << PB2);
                    break; 
                case 11: 
                    PORTB &= ~(1 << PB3); 
                    break; 
                case 12: 
                    PORTB &= ~(1 << PB4);
                    break;
                case 13: 
                    PORTB &= ~(1 << PB5); break;
    }
}

#endif 

int main() {

  
}

//Oooo,  Now you can set pins to other modes.
#endif 
