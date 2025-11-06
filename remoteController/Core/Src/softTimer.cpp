/*
 * softTimer.cpp
 *
 *  Created on: Oct 21, 2025
 *      Author: edogan
 */


#include "softTimer.h"

softwareTimer::softwareTimer() : m_duration(0),m_counter(0),m_periodic(false),m_fired(false),m_status(false)
{

}



void softwareTimer::start(U32 dur, bool per)
{
	m_duration	= dur;
	m_counter	= dur;
	m_periodic	= per;
	m_fired		= false;
	m_status	= true;
}


void softwareTimer::start()
{
	if (m_duration != 0)
	{	
		m_counter		= m_duration;
		m_fired			= false;
		m_status		= true;
	}
}

void softwareTimer::stop()
{
	m_fired			= false;
	m_status		= false;
}


bool softwareTimer::is_fired(bool clear)
{
	bool sts = false;

	if (m_fired)
	{
		if (clear)
			m_fired = false;
		sts = true;
	}

	return(sts);
}


void softwareTimer::timer()
{
	if (m_status)
	{
		if (--m_counter==0)
		{
			m_fired = true;
			if (m_periodic)
				m_counter = m_duration;
			else
				m_status = false;
		}
	}
}

























