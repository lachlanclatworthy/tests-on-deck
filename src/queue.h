/* queue.h */

#ifndef TOD_QUEUE_H
#define TOD_QUEUE_H

#include <cstddef>
#include <vector>

template <typename E> class Queue {
  public:
    Queue();
    void Enqueue(const E &);
    E *Dequeue(); // Returns NUll if empty
    std::size_t size() const;

  private:
    std::vector<E *> m_vec;
};

#endif // TOD_QUEUE_H
