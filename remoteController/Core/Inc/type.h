/*
 * type.h
 *
 *  Created on: Oct 21, 2025
 *      Author: edogan
 */

#ifndef INC_TYPE_H_
#define INC_TYPE_H_

#include <stdint.h>




typedef uint8_t 		U8;
typedef int8_t 			S8;
typedef uint16_t 		U16;
typedef int16_t 		S16;
typedef uint32_t 		U32;
typedef int32_t 		S32;

#ifndef TRUE
	#define TRUE (1 == 1)
#endif

#ifndef FALSE
	#define FALSE (!TRUE)
#endif

#ifndef HIGH
	#define HIGH 1
#endif

#ifndef LOW
	#define LOW  0
#endif
#endif /* INC_TYPE_H_ */
