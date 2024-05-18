/* queue.cc */

#include "queue.h"

template <> Queue<int>::Queue(void) : m_vec(std::vector<int *>()) {}

template <> void Queue<int>::Enqueue(const int &element) {
    m_vec.insert(m_vec.begin(), new int(element));
}

template <> int *Queue<int>::Dequeue() {
    if (m_vec.empty())
        return nullptr;

    int *out = m_vec.back();
    m_vec.pop_back();
    return out;
}

template <> std::size_t Queue<int>::size() const { return m_vec.size(); }
