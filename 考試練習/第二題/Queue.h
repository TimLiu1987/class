#ifndef QUEUE_H
#define QUEUE_H

template<typename T>
class Queue
{
public:
    Queue();
    bool isEmpty() const;
    bool isFull() const;
    int getFront() const;
    int getBack() const;
    void push(int value);
    T pop();
    int getSize() const;

private:
    int* elements;
    int capacity;
    int front;
    int back;
    void ensureCapacity();
};

template<typename T>
Queue<T>::Queue() : capacity(16), front(-1), back(-1)
{
    elements = new int[capacity];
}

template<typename T>
bool Queue<T>::isEmpty() const
{
    return (front == back);
}

template<typename T>
bool Queue<T>::isFull() const
{
    return (back + 1 == capacity);
}

template<typename T>
int Queue<T>::getFront() const
{
    return elements[front + 1];
}

template<typename T>
int Queue<T>::getBack() const
{
    return elements[back];
}

template<typename T>
void Queue<T>::push(int value)
{
    if (isFull())
        ensureCapacity();
    elements[++back] = value;
}

template<typename T>
void Queue<T>::ensureCapacity()
{
    capacity *= 2;
    int* newQueue = new int[capacity];

    int j = -1;
    for (int i = front + 1; i <= back; i++)
    {
        j++;
        newQueue[j] = elements[i];
    }
    front = -1;
    back = j;
    delete[] elements;
    elements = newQueue;
}

template<typename T>
T Queue<T>::pop()
{
    return front++;
}

template<typename T>
int Queue<T>::getSize() const
{
    return (back - front);
}

#endif
