#include <iostream>
#include <vector>
#include <list>
#include "ring_buffer.h"

using namespace std;

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

