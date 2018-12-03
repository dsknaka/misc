//
// ring_buffer.h
//

#ifndef RING_BUFFER_H_
#define RING_BUFFER_H_

class RingBuffer
{
public:
    RingBuffer(int buffer_size);
    ~RingBuffer();

    void Push(int number);
    void Pop();
    void Print();

private:
    void IncrementPointer(int* pointer);

    int* mp_buffer;
    int m_buffer_num;
    int m_read_pointer;
    int m_write_pointer;
    int m_valid_data_num;
};

void TestRingBuffer();

#endif  // #ifndef RING_BUFFER_H_
//
// end
//

