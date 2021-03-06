//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#if !defined _VFS_PRIORITYQUEUE_H_
#define _VFS_PRIORITYQUEUE_H_

//======================================================================

#include "listqueue.h"

//======================================================================

template <class T>
class ListPriorityQueue: public ListQueue<T>
{
public:

    //-----------------------------------------------------------
    // Constructor
    ListPriorityQueue( uint32_t const maxSize ):
        ListQueue( maxSize )
    {
    }

    //-----------------------------------------------------------
    // Destructor
    virtual ~ListPriorityQueue()
    {
    }

    //-----------------------------------------------------------
    // Enqueue entry at the back of the queue, sort insertion so
    // that entry with the largest value is at the front of the
    // queue.
    virtual bool Enqueue( const T& entry ) override
    {
        T t;
        for (uint32_t i = 0, c = mList.Size(); i < c; i++)
        {
            if (!mList.At( t, i ))
            {
                return false;
            }
            if (entry > t)
            {
                return mList.Insert( entry, i );
            }
        }
        return mList.Append( entry );
    }
};

//======================================================================

#endif

//======================================================================
