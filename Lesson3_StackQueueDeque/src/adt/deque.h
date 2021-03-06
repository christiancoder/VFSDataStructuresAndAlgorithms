//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#if !defined _VFS_DEQUE_H_
#define _VFS_DEQUE_H_

//======================================================================

#include <stdint.h>

//======================================================================

template <class T>
class Deque
{
public:

    virtual ~Deque() {}

    // Enqueue entry to the front of the queue.
    virtual bool EnqueueFront( const T& entry ) = 0;
    
    // Enqueue entry to the back of the queue.
    virtual bool EnqueueBack( const T& entry ) = 0;

    // Copy the front entry.
    virtual bool PeekFront( T& entry ) const = 0;
    
    // Copy the back entry.
    virtual bool PeekBack( T& entry ) const = 0;

    // Dequeue entry from the front of the queue.
    virtual bool DequeueFront() = 0;
    
    // Dequeue entry from the back of the queue.
    virtual bool DequeueBack() = 0;

    // Return current size of the queue.
    virtual uint32_t Size() const = 0;

    // Dump contents to stdout.
    virtual void Dump() const = 0;
};

//======================================================================

#endif

//======================================================================
