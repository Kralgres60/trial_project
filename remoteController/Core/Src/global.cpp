/*
 * global.c
 *
 *  Created on: Oct 21, 2025
 *      Author: edogan
 */


#include "global.h"
#include "main.h"
#include "config.h"
#include <stdio.h>
#include <stdint.h>



/*C Exported*/
U32 gu32a_adc_val[ADC_CHANNEL_NUMBERS];

nrflink *pnrflink;
