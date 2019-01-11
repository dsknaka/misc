#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

typedef struct {
    string name;
    int time;
} Proc;

class Queue {
public:
    Queue(int size) : m_queue(size), m_head(0), m_tail(0) {};
    ~Queue(){};
    void Enqueue(Proc& proc);
    Proc Dequeue();
    bool IsEmpty();

private:
    vector<Proc> m_queue;
    int m_head;
    int m_tail;
};

void Queue::Enqueue(Proc& proc)
{
    m_queue[m_tail] = proc;
    m_tail++;
    m_tail %= m_queue.size();
}

Proc Queue::Dequeue()
{
    Proc ret = m_queue[m_head];
    m_head++;
    m_head %= m_queue.size();

    return ret;
}

bool Queue::IsEmpty()
{
    return m_head == m_tail;
}

int main()
{
    int n, q;
    cin >> n >> q;

    Queue queue(n + 1);
    for (int i = 0; i < n; i++) {
        Proc proc;
        cin >> proc.name >> proc.time;
        queue.Enqueue(proc);
    }

    int time = 0;
    while (!queue.IsEmpty()){
        Proc tmp = queue.Dequeue();
        if (tmp.time <= q) {
            time += tmp.time;
            cout << tmp.name << " " << time << endl;
        } else {
            time += q;
            tmp.time -= q;
            queue.Enqueue(tmp);
        }
    }

    return 0;
}

