/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include <stdbool.h>

#define LEB_PERIOD                  100         // Leading Edge Blanking = n x PWM resolution (here: 50 x 2ns = 100ns)

#define MAX_DUTY_CYCLE             1150         // This sets the maximum duty cycle

#define PWM_PERIOD                 1429         // Measured in [tick = 2ns] -> 350 kHz 

#define VOUT_ADC_TRIGGER_DELAY      120         // With respect to the start of the PWM cycle 
#define SLOPE_START_DELAY           100         // With respect to the start of the PWM cycle; ToDo: How is this influenced by the settling and steady-state time of the DAC-slope generator?
#define SLOPE_STOP_DELAY           1150         // With respect to the start of the PWM cycle

#define TDR                          25         // Rising edge dead time [2ns]
#define TDF                          40         // Falling edge dead time [2ns]

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

extern volatile uint16_t init_pwm_module(void);
extern volatile uint16_t init_sepic_pwm(void);
extern volatile uint16_t launch_sepic_pwm(void);
extern volatile uint16_t init_sepic_trig_pwm(void);
extern volatile uint16_t launch_sepic_trig_pwm(void);

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */
