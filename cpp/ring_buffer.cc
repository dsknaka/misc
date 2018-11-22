#include <iostream>
#include "ring_buffer.h"

using namespace std;

RingBuffer::RingBuffer(int buffer_num)
{
    m_buffer_num = buffer_num;
    mp_buffer = new int[m_buffer_num];
    memset(mp_buffer, 0, m_buffer_num * sizeof(int));
    m_write_pointer = -1;
    m_read_pointer = -1;
}

RingBuffer::~RingBuffer()
{
    delete mp_buffer;
}

void RingBuffer::IncrementPointer(int* pointer)
{
    (*pointer)++;
    if ((*pointer) >= m_buffer_num) {
        *pointer = 0;
    }

    return;
}

void RingBuffer::Push(int number)
{
    cout << "Push(" << number << ")" << endl;

    IncrementPointer(&m_write_pointer);
    mp_buffer[m_write_pointer] = number;

    if (m_write_pointer == m_read_pointer) {
        IncrementPointer(&m_read_pointer);
    }

    if (m_read_pointer == -1) {
        IncrementPointer(&m_read_pointer);
    }

    Print();

    return;
}

void RingBuffer::Pop()
{
    cout << "Pop(): ";

    if (m_read_pointer == m_write_pointer) {
        cout << endl;
        Print();
        return;
    }

    cout << mp_buffer[m_read_pointer] << endl;
    mp_buffer[m_read_pointer] = 0;
    IncrementPointer(&m_read_pointer);

    Print();

    return;
}

void RingBuffer::Print()
{
    cout << "wp = " << m_write_pointer << ", ";
    cout << "rp = " << m_read_pointer << ", ";

    cout << "buffer: ";
    for (int i = 0; i < m_buffer_num; i++) {
        cout << mp_buffer[i] << " ";
    }
    cout << endl;
    return;
}

//
// end
//

