
#ifndef __CIRCULAR_BUFFER_H__
#define __CIRCULAR_BUFFER_H__


#include "type.h"
#include <stdio.h>

class circular_buffer
{
public:
	circular_buffer(size_t itemSize, U32 capacity);
	circular_buffer(U32 capacity);
	~circular_buffer();


	
	bool push(const void* data);
	bool pop(void* data);

	
	U32  freeSpace();
	U32  capacity();
private:

    /* Tracks the pop operation */
    U32 m_head;

    /* Tracks the push operation */
    U32 m_tail;

    /* Buffer item size */
    U32 m_itemSize;

    /* Total capacity of buffer items */
    U32 m_capacity;

    /* Byte Array */
    U8 *ma_data;


    bool 	is_empty();
    bool 	is_full();
};

















#endif
