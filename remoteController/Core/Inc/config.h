/*
 * config.h
 *
 *  Created on: Oct 21, 2025
 *      Author: edogan
 */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_


//#define ROBOT_CAR
#define REMOTE_CONTROLLER


#define NRF24_ADDR_WIDTH				5
#define NRF24_COMMUNICATION_CHANNEL 	105
#define NRF24_CONFIGURATION_DATA_LEN 	50

#ifdef REMOTE_CONTROLLER
	#define NRF24_ADDRESS 	   {0xEE,0xDD,0xCC,0xBB,0xAA}	
#else
	#define NRF24_ADDRESS 	   {0x00,0xDD,0xCC,0xBB,0xAA}
#endif

#define NRFLINK_RX_BUFFER_SIZE 						256
#define NRFLINK_TX_BUFFER_SIZE						256
#define NRFLINK_CIRCULAR_BUFFER_SIZE				256

#ifdef REMOTE_CONTROLLER
	#define ADC_CHANNEL_NUMBERS						4UL
#endif





#endif /* INC_CONFIG_H_ */
