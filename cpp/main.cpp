#include <iostream>
#include <vector>
#include <list>

using namespace std;

class RingBuffer {
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
};

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



void my_vector()
{
    cout << "---------- vector start" << endl;
    vector<int> v1;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "empty?; " << v1.empty() << endl;
    v1.clear();
    cout << "empty?; " << v1.empty() << endl;

    cout << "capacity: " << v1.capacity() << endl;

    v1.pop_back();
    cout << "v1: ";
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;


    cout << "---------- vector end" << endl << endl;
}

void my_list()
{
    cout << "---------- list start" << endl;
    list<int> li;

    li.push_back(1);
    li.push_back(2);
    li.push_front(3);

    list<int>::iterator itr;
    itr = li.begin();
    itr++;
    li.insert(itr, 4);

    cout << "li: ";
    for (itr = li.begin(); itr != li.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    itr = li.begin();
    li.remove(*itr);
    cout << "li: ";
    for (itr = li.begin(); itr != li.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

//    cout << "empty?; " << li.empty() << endl;
//    li.clear();
//    cout << "empty?; " << li.empty() << endl;

//    cout << "capacity: " << li.capacity() << endl;

    cout << "---------- list end" << endl << endl;

}

int main(void)
{
    //cout << "hello" << endl;

    // my_vector();
    // my_list();

    RingBuffer ring_buffer(3);
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

    return 0;
}

