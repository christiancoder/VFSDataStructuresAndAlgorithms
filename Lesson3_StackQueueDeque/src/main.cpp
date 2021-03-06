//======================================================================
// VFS: Data Strucrtures And Algorithms
//======================================================================

#include "ds/liststack.h"
#include "ds/listqueue.h"
#include "ds/listpriorityqueue.h"
#include "ds/listdeque.h"
#include "ds/circulardeque.h"
#include <windows.h>

//======================================================================

void TestStack( Stack<int>& stack )
{
    int t = 0xff;

    stack.Push( 0 );
    stack.Peek( t );
    stack.Pop();
    std::cout << "pop: " << t << std::endl;

    stack.Push( -1 );
    stack.Push( 1 );
    stack.Push( -2 );
    stack.Push( 2 );
    stack.Push( -3 );
    stack.Push( 3 );
    stack.Push( -4 );
    stack.Push( 4 );
    stack.Push( -5 );
    stack.Push( 2 );
    stack.Dump();
    while (stack.Size() > 0)
    {
        stack.Peek( t );
        stack.Pop();
        std::cout << "pop: " << t << std::endl;
    }
    std::cout << std::endl;
}

//======================================================================

void TestQueue( Queue<int>& queue )
{
    int t = 0xff;

    queue.Enqueue( 0 );
    queue.Peek( t );
    queue.Dequeue();
    std::cout << "dequeue: " << t << std::endl;

    queue.Enqueue( -1 );
    queue.Enqueue( 1 );
    queue.Enqueue( -2 );
    queue.Enqueue( 2 );
    queue.Enqueue( -3 );
    queue.Enqueue( 3 );
    queue.Enqueue( -4 );
    queue.Enqueue( 4 );
    queue.Enqueue( -5 );
    queue.Enqueue( 2 );
    queue.Dump();
    while (queue.Size() > 0)
    {
        queue.Peek( t );
        queue.Dequeue();
        std::cout << "dequeue: " << t << std::endl;
    }
    std::cout << std::endl;
}

//======================================================================

void TestDeque( Deque<int>& deque )
{
    int t = 0xff;

    deque.EnqueueBack( 0 );
    deque.PeekFront( t );
    deque.DequeueFront();
    std::cout << "pop front: " << t << std::endl;

    deque.EnqueueFront( -1 );
    deque.EnqueueBack( 1 );
    deque.EnqueueFront( -2 );
    deque.EnqueueBack( 2 );
    deque.EnqueueFront( -3 );
    deque.EnqueueBack( 3 );
    deque.EnqueueFront( -4 );
    deque.EnqueueBack( 4 );
    deque.EnqueueFront( -5 );
    deque.EnqueueBack( 2 );
    deque.Dump();
    while (deque.Size() > 0)
    {
        if ((deque.Size() % 2) == 0)
        {
            deque.PeekFront( t );
            deque.DequeueFront();
            std::cout << "pop front: " << t << std::endl;
        }
        else
        {
            deque.PeekBack( t );
            deque.DequeueBack();
            std::cout << "pop back: " << t << std::endl;
        }
    }
    std::cout << std::endl;
}

//======================================================================

int main()
{
    std::cout << "- ListStack ----------------------" << std::endl;
    ListStack<int> listStack( 10 );
    TestStack( listStack );

    std::cout << "- ListQueue ----------------------" << std::endl;
    ListQueue<int> listQueue( 10 );
    TestQueue( listQueue );

    std::cout << "- ListPriorityQueue ----------------------" << std::endl;
    ListPriorityQueue<int> listPriQueue( 10 );
    TestQueue( listPriQueue );

    std::cout << "- ListDeque ----------------------" << std::endl;
    ListDeque<int> listDeque( 10 );
    TestDeque( listDeque );

    std::cout << "- CircularDeque --------------------" << std::endl;
    CircularDeque<int> circularDeque( 10 );
    TestDeque( circularDeque );

    system( "pause" );

    return 0;
}

//======================================================================
