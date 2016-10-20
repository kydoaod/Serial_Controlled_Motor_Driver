#if !defined(CUSTOMSERIALINTERRUPTS_H)
#define CUSTOMSERIALINTERRUPTS_H

#include "project.h"

CY_ISR_PROTO(custom_USER_PORT_SPI_UART_ISR);

//Prototypes
void parseSPI( void );
void parseUART( void );
void parseI2C( void );
void parseSlaveI2C( void );

#endif
