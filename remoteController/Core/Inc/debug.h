/*
 * debug.h
 *
 *  Created on: Oct 21, 2025
 *      Author: edogan
 */

#ifndef INC_DEBUG_H_
#define INC_DEBUG_H_


#include "type.h"



class Debug
{

private:

	U8 setVal;


public:
	Debug();
	~Debug();

	void timer(void);
	void set(U32 val);
};





#endif /* INC_DEBUG_H_ */
