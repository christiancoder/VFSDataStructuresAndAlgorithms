//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#if !defined _VFS_LISTQUEUE_H_
#define _VFS_LISTQUEUE_H_

//======================================================================

#include "adt/queue.h"
#include "arraylist.h"
#include "linkedlist.h"

//======================================================================

template <class T>
class ListQueue: public Queue<T>
{
public:

#if !defined USE_LINKEDLIST 
    ListQueue( uint32_t const maxSize ):
        mList( maxSize )
#else
    ListQueue( uint32_t const maxSize )
#endif
    {
    }

    virtual ~ListQueue()
    {
    }

    //-----------------------------------------------------------
    // Enqueue entry at the back of the queue.
    virtual bool Enqueue( const T& entry ) override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Copy the next entry to be dequeued.
    virtual bool Peek( T& entry ) const override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Dequeue entry from the front of the queue.
    virtual bool Dequeue() override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Return current size of queue.
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
