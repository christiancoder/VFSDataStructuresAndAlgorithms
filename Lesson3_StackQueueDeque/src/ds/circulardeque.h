//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#if !defined _VFS_CIRCULARDEQUE_H_
#define _VFS_CIRCULARDEQUE_H_

//======================================================================

#include "adt/deque.h"
#include <iostream>
#include <assert.h>

//======================================================================

template <class T>
class CircularDeque: public Deque<T>
{
public:

    //------------------------------------------------------------------
    // Constructor
    CircularDeque( uint32_t const maxSize ):
        mArray( nullptr ),
        mFront( 0 ),
        mBack( 0 ),
        mMaxSize( 0 ),
        mSize( 0 )
    {
        assert( maxSize > 0 );
        if (maxSize > 0)
        {
            mArray = new T[maxSize];
            mMaxSize = maxSize;
        }
    }

    //------------------------------------------------------------------
    // Destructor
    virtual ~CircularDeque()
    {
    }

    //------------------------------------------------------------------
    // Enqueue entry to the front of the queue.
    virtual bool EnqueueFront( const T& entry ) override
    {
        // Overflow?
        assert( mSize < mMaxSize );
        if (mSize >= mMaxSize)
        {
            return false;
        }

        if (mSize == 0)
        {
            mFront = 0;
            mBack = 0;
        }
        else
        {
            mFront = (mFront + mMaxSize - 1) % mMaxSize;
        }
        mArray[mFront] = entry;
        mSize++;

        return true;
    }

    //------------------------------------------------------------------
    // Enqueue entry to the back of the queue.
    virtual bool EnqueueBack( const T& entry ) override
    {
        // Overflow?
        assert( mSize < mMaxSize );
        if (mSize >= mMaxSize)
        {
            return false;
        }

        if (mSize == 0)
        {
            mFront = 0;
            mBack = 0;
        }
        else
        {
            mBack = (mBack + 1) % mMaxSize;
        }
        mArray[mBack] = entry;
        mSize++;

        return true;
    }

    //------------------------------------------------------------------
    // Copy the front entry.
    virtual bool PeekFront( T& entry ) const override
    {
        // Underflow?
        assert( mSize > 0 );
        if (mSize == 0)
        {
            return false;
        }

        entry = mArray[mFront];

        return true;
    }

    //------------------------------------------------------------------
    // Copy the back entry.
    virtual bool PeekBack( T& entry ) const override
    {
        // Underflow?
        assert( mSize > 0 );
        if (mSize == 0)
        {
            return false;
        }

        entry = mArray[mBack];

        return true;
    }

    //------------------------------------------------------------------
    // Dequeue entry from the front of the queue.
    virtual bool DequeueFront() override
    {
        // Underflow?
        assert( mSize > 0 );
        if (mSize == 0)
        {
            return false;
        }

        mSize--;
        if (mSize > 0)
        {
            mFront = (mFront + 1) % mMaxSize;
        }

        return true;
    }

    //------------------------------------------------------------------
    // Dequeue entry from the back of the queue.
    virtual bool DequeueBack() override
    {
        // Underflow?
        assert( mSize > 0 );
        if (mSize == 0)
        {
            return false;
        }

        mSize--;
        if (mSize > 0)
        {
            mBack = (mBack + mMaxSize - 1) % mMaxSize;
        }

        return true;
    }

    //------------------------------------------------------------------
    // Return current size of the queue.
    virtual uint32_t Size() const override
    {
        return mSize;
    }

    //------------------------------------------------------------------
    // Dump contents to stdout.
    virtual void Dump() const override
    {
        for (uint32_t i = 0; i < mSize; i++)
        {
            std::cout << "[" << i << "] " << mArray[(mFront + i) % mMaxSize] << std::endl;
        }
    }

protected:

    T* mArray;
    uint32_t mMaxSize;
    uint32_t mFront;
    uint32_t mBack;
    uint32_t mSize;
};

//======================================================================

#endif

//======================================================================
