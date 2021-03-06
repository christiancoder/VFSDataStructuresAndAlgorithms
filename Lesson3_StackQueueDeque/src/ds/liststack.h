//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#if !defined _VFS_LISTSTACK_H_
#define _VFS_LISTSTACK_H_

//======================================================================

#include "adt/stack.h"
#include "arraylist.h"
#include "linkedlist.h"

//======================================================================

template <class T>
class ListStack: public Stack<T>
{
public:

    //-----------------------------------------------------------
    // Constructor
#if !defined USE_LINKEDLIST 
    ListStack( uint32_t const maxSize ):
        mList( maxSize )
#else
    ListStack( uint32_t const maxSize )
#endif
    {
    }

    //-----------------------------------------------------------
    // Destructor
    virtual ~ListStack()
    {
    }

    //-----------------------------------------------------------
    // Push entry to the top of the stack.
    virtual bool Push( const T& entry ) override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Copy the next entry to be popped.
    virtual bool Peek( T& entry ) const override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Pop entry from the top of the stack.
    virtual bool Pop() override
    {
        return false;
    }

    //-----------------------------------------------------------
    // Return current size of stack.
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
