//======================================================================
// VFS: Data Structures And Algorithms
// Lesson 2: ArrayList & LinkedList
//======================================================================

#if !defined _LESSON2_ARRAYLIST_H_
#define _LESSON2_ARRAYLIST_H_

//======================================================================

#include "adt/list.h"
#include <assert.h>

//======================================================================
// Data Structure: ArrayList
//======================================================================
template <class T>
class ArrayList: public List<T>
{
public:

    //------------------------------------------------------------------
    // Constructor: allocate array.
    ArrayList( uint32_t const maxSize ):
        mArray( nullptr ),
        mMaxSize( 0 ),
        mSize( 0 )
    {
        // Make sure size is valid.

        // Allocate array.

        // Set max size.
    }

    //------------------------------------------------------------------
    // Destructor: delete array.
    virtual ~ArrayList()
    {
        // Delete array.
    }

    //------------------------------------------------------------------
    // Appends entry to end of list.
    // Errors: List is full
    virtual bool Append( const T& entry ) override
    {
        // Return false if size >= maxSize.

        // Assign array at size to entry.

        // Increment size.

        return true;
    }


    //------------------------------------------------------------------
    // Insert entry at supplied index, return true on success, false on error.
    // Errors: index is outside list size, list is full.
    virtual bool Insert( const T& entry, uint32_t const index ) override
    {
        // If the list full or the index is > size return false.

        // Make room, start at bottom and move everybody down one until
        // we reach index.

        // Insert new entry.

        // Increment size.

        return true;
    }

    //------------------------------------------------------------------
    // Remove entry at supplied index, return true on success, false on error.
    // Errors: index outside list size.
    virtual bool Remove( uint32_t const index ) override
    {
        // If the list is empty or the index is >= size return false.

        // Decrement size.

        // Start at index and move everybody up one.

        return true;
    }

    //------------------------------------------------------------------
    // Return current size of list.
    virtual uint32_t Size() const override
    {
        // Return size.
    }

    //------------------------------------------------------------------
    // Set entry = array entry at supplied index, return true on success or false on error.
    // Errors: index outside list size.
    bool At( T& entry, uint32_t const index ) const override
    {
        // Return false if index >= size.

        // Assign entry to array entry at index.

        return true;
    }

    //------------------------------------------------------------------
    // Return index of first instance of supplied entry or -1 if not found.
    virtual int32_t Find( const T& entry ) const override
    {
        // Search for first instance of entry.
    }

    //------------------------------------------------------------------
    // Dump contents to stdout.
    virtual void Dump() const override
    {
        for (uint32_t i = 0; i < mSize; i++)
        {
            std::cout << "[" << i << "] " << mArray[i] << std::endl;
        }
    }

protected:

    T* mArray;
    uint32_t mMaxSize;
    uint32_t mSize;
};

//======================================================================

#endif

//======================================================================
