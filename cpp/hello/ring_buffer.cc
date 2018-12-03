#include <iostream>
#include "ring_buffer.h"

using namespace std;

RingBuffer::RingBuffer(int buffer_num)
{
    m_buffer_num = buffer_num;
    mp_buffer = new int[m_buffer_num];
    memset(mp_buffer, 0, m_buffer_num * sizeof(int));
    m_write_pointer = 0;
    m_read_pointer = 0;
    m_valid_data_num = 0;
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

    if (m_write_pointer == m_read_pointer) {
        if (m_valid_data_num != 0) {
            IncrementPointer(&m_read_pointer);
        }
    }

    mp_buffer[m_write_pointer] = number;
    IncrementPointer(&m_write_pointer);
    m_valid_data_num++;
    if (m_valid_data_num > m_buffer_num) {
        m_valid_data_num = m_buffer_num;
    }

    Print();

    return;
}

void RingBuffer::Pop()
{
    cout << "Pop(): ";

    if (m_valid_data_num == 0) {
        cout << "N/A" << endl;
    } else {
        cout << mp_buffer[m_read_pointer] << endl;
        mp_buffer[m_read_pointer] = 0;
        IncrementPointer(&m_read_pointer);
        m_valid_data_num--;
    }

    Print();

    return;
}

void RingBuffer::Print()
{
    cout << "wp=" << m_write_pointer << ", ";
    cout << "rp=" << m_read_pointer << ", ";
    cout << "vn=" << m_valid_data_num << ", ";

    cout << "buffer: ";
    for (int i = 0; i < m_buffer_num; i++) {
        cout << mp_buffer[i] << " ";
    }
    cout << endl;
    return;
}

void TestRingBuffer()
{
    RingBuffer ring_buffer(3);
    ring_buffer.Push(1);
    ring_buffer.Pop();
    ring_buffer.Push(1);
    ring_buffer.Push(2);
    ring_buffer.Push(3);
    ring_buffer.Push(4);
    ring_buffer.Push(5);
    ring_buffer.Pop();
    ring_buffer.Pop();
    ring_buffer.Pop();
    ring_buffer.Pop();
    ring_buffer.Pop();
    ring_buffer.Pop();
    ring_buffer.Pop();
}

//
// end
//

