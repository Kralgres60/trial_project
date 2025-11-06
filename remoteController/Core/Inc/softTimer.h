/*
 * softTimer.h
 *
 *  Created on: Oct 21, 2025
 *      Author: edogan
 */

#ifndef INC_SOFTTIMER_H_
#define INC_SOFTTIMER_H_

#include "type.h"

class softwareTimer
{
	private:
		U32  m_duration; 	//msec
		U32  m_counter; 	//
		bool m_periodic; 	//TRUE:periodic, FALSE:one shot	
		bool m_fired;
		bool m_status; 	//TRUE:on, FALSE:off
	public:
		softwareTimer();
		~softwareTimer() {}
		void timer();
		void start(U32 dur, bool per=false); //sets and start
		void start(); //also resets
		void stop();
		bool is_fired(bool clear=true);
};



#endif /* INC_SOFTTIMER_H_ */
