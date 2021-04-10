#include <iostream>
using namespace std;

/*stack implementation using vector*/

template <class T> class Stack {
public:
    Stack(int size = 10);
    void push(T elem);
    T pop();
    T top();
    bool is_empty();
    bool is_full();
    int size();
private:
    int cap;
    int curr;
    T *arr;
};

template <class T> Stack<T>::Stack(int size) {
    arr = new T[size];
    cap = size;
    curr = -1; 
}

template <class T> void Stack<T>::push(T elem) {
    if (is_full()) {
        cout << "Stack is full!" << endl;
        exit(1);
    }
    arr[++curr] = elem;
}

template <class T> T Stack<T>::pop() {
    if (is_empty()) {
        cout << "Stack is empty" << endl;
        exit(1);
    }
    T elem = top();
    curr--;
    return elem;
}

template <class T> T Stack<T>::top() {
    if (is_empty()) {
        cout << "Stack is empty" << endl;
        exit(1);
    }
    return arr[curr];
}

template <class T> bool Stack<T>::is_empty() {
    return (curr == -1);
}

template <class T> bool Stack<T>::is_full() {
    return (cap == curr+1);
}

template <class T> int Stack<T>::size() {
    return curr+1;
}
