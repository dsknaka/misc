#include <iostream>
#include <vector>

using namespace std;

class RingBuffer
{
public:
    RingBuffer(int size)
        : m_buffer(size), m_write(0), m_read(0), m_valid_data_num(0)
    {}
    ~RingBuffer(){};

    void Push(int number);
    void Pop();
    void Print();

private:
    vector<int> m_buffer;
    int m_read;
    int m_write;
    int m_valid_data_num;
};

void RingBuffer::Push(int number)
{
    cout << "Push(" << number << ")" << endl;

    if (m_write == m_read && m_valid_data_num > 0) {
        m_read++;
        m_read %= m_buffer.size();
    }

    m_buffer[m_write] = number;
    m_write++;
    m_write %= m_buffer.size();
    m_valid_data_num++;
    if (m_valid_data_num > m_buffer.size()) {
        m_valid_data_num = m_buffer.size();
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
        cout << m_buffer[m_read] << endl;
        m_buffer[m_read] = 0;
        m_read++;
        m_read %= m_buffer.size();
        m_valid_data_num--;
    }

    Print();

    return;
}

void RingBuffer::Print()
{
    cout << "wp=" << m_write << ", ";
    cout << "rp=" << m_read << ", ";
    cout << "vn=" << m_valid_data_num << ", ";

    cout << "buffer: ";
    for (int i = 0; i < m_buffer.size(); i++) {
        cout << m_buffer[i] << " ";
    }
    cout << endl;
    return;
}

int main(void)
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

    return 0;
}

