//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#if !defined _VFS_LISTDEQUE_H_
#define _VFS_LISTDEQUE_H_

//======================================================================

#include "adt/deque.h"
#include "arraylist.h"
#include "linkedlist.h"

//======================================================================

template <class T>
class ListDeque: public Deque<T>
{
public:

#if !defined USE_LINKEDLIST
    ListDeque( uint32_t const maxSize ):
        mList( maxSize )
#else
    ListDeque( uint32_t const maxSize )
#endif
    {
    }

    virtual ~ListDeque()
    {
    }

    //-----------------------------------------------------------
    // Enqueue entry to the front of the queue.
    virtual bool EnqueueFront( const T& entry ) override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Enqueue entry to the back of the queue.
    virtual bool EnqueueBack( const T& entry ) override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Copy the front entry.
    virtual bool PeekFront( T& entry ) const override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Copy the back entry.
    virtual bool PeekBack( T& entry ) const override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Dequeue entry from the front of the queue.
    virtual bool DequeueFront() override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Dequeue entry from the back of the queue.
    virtual bool DequeueBack() override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Return current size of the queue.
    virtual uint32_t Size() const override
    {
        return 0;
    }

    //-----------------------------------------------------------
    // Dump contents to stdout.
    virtual void Dump() const override
    {
    }

protected:

#if defined USE_LINKEDLIST
    LinkedList<T> mList;
#else
    ArrayList<T> mList;
#endif
};

//======================================================================

#endif

//======================================================================
