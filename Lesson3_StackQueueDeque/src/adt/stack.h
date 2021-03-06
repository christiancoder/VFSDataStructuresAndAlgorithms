//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#if !defined _VFS_STACK_H_
#define _VFS_STACK_H_

//======================================================================

#include <stdint.h>

//======================================================================

template <class T>
class Stack
{
public:

    virtual ~Stack() {}

    // Push entry to the top of the stack.
    virtual bool Push( const T& entry ) = 0;

    // Copy the next entry to be popped.
    virtual bool Peek( T& entry ) const = 0;
    
    // Pop entry from the top of the stack.
    virtual bool Pop() = 0;

    // Return current size of stack.
    virtual uint32_t Size() const = 0;

    // Dump contents to stdout.
    virtual void Dump() const = 0;
};

//======================================================================

#endif

//======================================================================
