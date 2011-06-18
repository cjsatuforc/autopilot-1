/*
 * 16-bit timer 1 used for timekeeping as well as arbitrary timeouts.
 */

void timer_init(void);
uint32_t timer_read(void);
void my_delay(uint16_t msecs);
void set_timeout(uint32_t when, void (*callback)(void));