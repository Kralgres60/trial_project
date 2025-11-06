#ifndef __NRFLINK_H__
#define __NRFLINK_H__




#include "config.h"
#include "type.h"



#define NRFLINK_COMMAND_GO_FORWARD 		0x01
#define NRFLINK_COMMAND_GO_BACKWARD 	0x02
#define NRFLINK_COMMAND_GO_LEFT			0x03
#define NRFLINK_COMMAND_GO_RIGHT		0x04
#define NRFLINK_COMMAND_SET_SPEED		0x05
#define NRFLINK_COMMAND_STOP 			0x06
#define NRFLINK_COMMAND_DRIVE 			0x07


class circular_buffer;

class nrflink
{
	public:
		nrflink();
		~nrflink(){}

		void nrflink_timer(void);

	private:
		U8 ma_rx_buffer[NRFLINK_RX_BUFFER_SIZE];
		U8 ma_tx_buffer[NRFLINK_TX_BUFFER_SIZE];

		U8 m_hasResponse;
		U8 m_hasPacket;
		U8 m_nrflinkMessage;
		U8 m_nrflinkIndex;

		
		void nrflink_parser(void);
		void nrflink_receiver(void);
		void nrflink_transmitter(void);


		/*Command Functions*/

		void 	nrflink_exe_go_forward(uint8_t* buf);
		void 	nrflink_exe_go_backward(uint8_t* buf);
		void 	nrflink_exe_go_left(uint8_t* buf);
		void 	nrflink_exe_go_right(uint8_t* buf);
		void 	nrflink_exe_stop(uint8_t* buf);
		void 	nrflink_exe_drive(uint8_t* buf);
};


#endif