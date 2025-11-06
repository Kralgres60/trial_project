/*
 * nrflink.cpp
 *
 *  Created on: Oct 30, 2025
 *      Author: edogan
 */


#include "nrflink.h"
#include <stdio.h>
#include <string.h>
#include "nRF24L01.h"




nrflink::nrflink()
{

	m_hasResponse 		= false;
	m_hasPacket   		= false;
	m_nrflinkMessage 	= false;
	m_nrflinkIndex 		= 0;

	memset(ma_rx_buffer,0x00,sizeof(ma_rx_buffer));
	memset(ma_tx_buffer,0x00,sizeof(ma_tx_buffer));

	/*NRF24 Configurations*/
	NRF24_Init();


	U8 tmpNRF24Addr[NRF24_ADDR_WIDTH] = NRF24_ADDRESS;

	#ifdef REMOTE_CONTROLLER
		NRF24_TxMode(tmpNRF24Addr, NRF24_COMMUNICATION_CHANNEL);
	#else
		NRF24_RxMode(tmpNRF24Addr, NRF24_COMMUNICATION_CHANNEL);
	#endif


	printf("Is_ChipConnected = %d \r\n",NRF24_IsChipConnected());
}


void nrflink::nrflink_timer(void)
{
	nrflink_parser();
	nrflink_receiver();
	nrflink_transmitter();
}


void nrflink::nrflink_parser(void)
{

}




void nrflink::nrflink_receiver()
{
	if (m_hasPacket)
	{
		m_hasPacket = false;


		switch(ma_rx_buffer[2])
		{
			case NRFLINK_COMMAND_GO_FORWARD:
			{
				nrflink_exe_go_forward(ma_rx_buffer);
				break;
			}
			case NRFLINK_COMMAND_GO_BACKWARD:
			{
				nrflink_exe_go_backward(ma_rx_buffer);
				break;
			}
			case NRFLINK_COMMAND_GO_LEFT:
			{
				nrflink_exe_go_left(ma_rx_buffer);
				break;
			}
			case NRFLINK_COMMAND_GO_RIGHT:
			{
				nrflink_exe_go_right(ma_rx_buffer);
				break;
			}
			case NRFLINK_COMMAND_SET_SPEED:
			{
				printf("NRFLINK_COMMAND_SET_SPEED \r\n");
				break;
			}
			case NRFLINK_COMMAND_STOP:
			{
				nrflink_exe_stop(ma_rx_buffer);
				break;
			}

			case NRFLINK_COMMAND_DRIVE:
			{
				nrflink_exe_drive(ma_rx_buffer);
				break;
			}
			default:
			{
				printf("UNKNOWN PACKAGE \r\n");
				break;
			}
		}
	}
}

void nrflink::nrflink_transmitter(void)
{
	if (m_hasResponse)
	{
		
		m_hasResponse = false;
	}
}


