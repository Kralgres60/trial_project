
#include "circular_buffer.h"
#include "config.h"
#include <string.h>



circular_buffer::circular_buffer(size_t itemSize, U32 capacity):
m_head(0),
m_tail(0),
m_itemSize(itemSize),
m_capacity(capacity) 
{
	ma_data = new U8(m_itemSize * (m_capacity + 1));

	if (!ma_data)
		printf("Circular Buffer Allocation of Memory Failed \r\n");
	
}


circular_buffer::circular_buffer(U32 capacity) :
m_head(0),
m_tail(0),
m_itemSize(1),
m_capacity(capacity) 
{
	ma_data = new U8(m_itemSize * (m_capacity + 1));

	if (!ma_data)
		printf("Circular Buffer Allocation of Memory Failed \r\n");
}



circular_buffer::~circular_buffer()
{
	delete[] ma_data;
}



bool circular_buffer::push(const void* data)
{
	if (is_full() || data == NULL)
		return false;

	int index = (m_tail + 1) % (m_capacity * m_itemSize);

	(void)memcpy((void *)&ma_data[index],data,m_itemSize);
 	m_tail = (m_tail + m_itemSize) % (m_capacity * m_itemSize);

 	return true;
}


bool circular_buffer::pop(void* data)
{
    if (is_empty()|| data == NULL)
    {
        return false;
    }

	int index = (m_head + 1) % (m_capacity * m_itemSize);
 	(void)memcpy(data, (void *)&ma_data[index], m_itemSize);

 	ma_data[m_head] = 0;
	m_head = (m_head + m_itemSize) % (m_capacity * m_itemSize);
	
    if (is_empty())
    {
        m_head = 0;
        m_tail = 0;
    }

    return true;
}

U32  circular_buffer::freeSpace()
{
	int freeSpace = 0;

    if (m_head > m_tail)
        freeSpace = ((m_head - m_tail) / m_itemSize) - 1;
    else 
        freeSpace = m_capacity - ((m_tail - m_head) / m_itemSize);
    
    return freeSpace;
}


U32  circular_buffer::capacity()
{
	return m_capacity;
}


bool circular_buffer::is_empty()
{
    /* If the tail and head pointers are equal, it means that circlar buffer is empty.
    Because of that reason, the one more space is used in circular buffer design */

   	bool retVal = (m_tail == m_head) ? true : false;
    return retVal;
}


bool 	 circular_buffer::is_full()
{
    /*  If the next move of tail equals to head, it means that circular buffer is full.
    Since the buffer is circular, we should take the mode of tail with capacity
    to calculate the next position of tail pointer */

    return (((m_tail + m_itemSize) % ((m_capacity + 1) * m_itemSize)) == m_head) ? true : false;
}







