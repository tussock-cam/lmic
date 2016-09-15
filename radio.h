#ifndef LMIC_RADIO_H
#define LMIC_RADIO_H

void lmic_radio_init(void);
void os_radio (u1_t mode);
void radio_irq_handler (u1_t dio);

#endif
