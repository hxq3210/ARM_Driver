#ifndef MILLET_ADC_H_
#define MILLET_ADC_H_

#include <lib.h>

extern void adc_polling_init();
extern u32 adc_read_by_polling(void);

extern void adc_irq_init(void);
extern void adc_startup(void);

#define ADCCON 		0x126c0000
#define ADCDLY 		0x126c0008 
#define ADCDAT 		0x126c000C 
#define CLRINTADC 	0x126c0018 
#define ADCMUX 		0x126c001C 

#endif
