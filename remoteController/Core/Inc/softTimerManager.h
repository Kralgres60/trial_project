/*
 * softTimerManager.h
 *
 *  Created on: Oct 21, 2025
 *      Author: edogan
 */

#ifndef INC_SOFTTIMERMANAGER_H_
#define INC_SOFTTIMERMANAGER_H_

#include "type.h"
#include "softTimer.h"


class softwareTimerManager
{
	public:
		softwareTimerManager();
		~softwareTimerManager(){ }

		U32 createTimer(U32 dur,bool periodic);


		void stopTimer(U32 timerId);
		void startTimer(U32 timerId,U32 dur, bool per=false);
	 	void startTimer(U32 timerId);
	 	bool isTimer_fired(U32 timerId);
	 	
	private:
		U32 m_timerId;
		U32 m_sysTime;


		softwareTimer m_timer1;
		softwareTimer m_timer2;
		softwareTimer m_timer3;
		softwareTimer m_timer4;
		softwareTimer m_timer5;
		softwareTimer m_timer6;
		softwareTimer m_timer7;
		softwareTimer m_timer8;
		softwareTimer m_timer9;
		softwareTimer m_timer10;
		softwareTimer m_timer11;
		softwareTimer m_timer12;
		softwareTimer m_timer13;
		softwareTimer m_timer14;
		softwareTimer m_timer15;
		softwareTimer m_timer16;
		softwareTimer m_timer17;
		softwareTimer m_timer18;
		softwareTimer m_timer19;
		softwareTimer m_timer20;
};

#endif /* INC_SOFTTIMERMANAGER_H_ */
