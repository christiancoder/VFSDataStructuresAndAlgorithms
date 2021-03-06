//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#if !defined _VFS_QUEUE_H_
#define _VFS_QUEUE_H_

//======================================================================

#include <stdint.h>

//======================================================================

template <class T>
class Queue
{
public:

    virtual ~Queue() {}

    // Enqueue entry at the back of the queue.
    virtual bool Enqueue( const T& entry ) = 0;

    // Copy the next entry to be dequeued.
    virtual bool Peek( T& entry ) const = 0;

    // Dequeue entry from the front of the queue.
    virtual bool Dequeue() = 0;

    // Return current size of queue.
    virtual uint32_t Size() const = 0;

    // Dump contents to stdout.
    virtual void Dump() const = 0;
};

//======================================================================

#endif

//======================================================================
