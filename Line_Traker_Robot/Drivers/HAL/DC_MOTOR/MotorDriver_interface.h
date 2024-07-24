#include <avr/io.h>
#include <util/delay.h>

#define MOTOR_PORT PORTD
#define MOTOR_DDR DDRD
#define IN1 PD0
#define IN2 PD1

void motor_forward(void) {
	MOTOR_PORT |= (1 << IN1);  // Set IN1 high
	MOTOR_PORT &= ~(1 << IN2); // Set IN2 low
}

void motor_backward(void) {
	MOTOR_PORT |= (1 << IN2);  // Set IN2 high
	MOTOR_PORT &= ~(1 << IN1); // Set IN1 low
}

void motor_stop(void) {
	MOTOR_PORT &= ~(1 << IN1); // Set IN1 low
	MOTOR_PORT &= ~(1 << IN2); // Set IN2 low
}

int main(void) {
	// Set IN1 and IN2 as outputs
	MOTOR_DDR |= (1 << IN1) | (1 << IN2);

	while (1) {
		motor_forward(); // Move the motor forward
		_delay_ms(2000); // Run for 2 seconds
		
		motor_stop(); // Stop the motor
		_delay_ms(1000); // Wait for 1 second

		motor_backward(); // Move the motor backward
		_delay_ms(2000); // Run for 2 seconds

		motor_stop(); // Stop the motor
		_delay_ms(1000); // Wait for 1 second
	}

	return 0;
}
