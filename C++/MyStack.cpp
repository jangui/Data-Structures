#include <iostream>
using namespace std;

/*stack implementation using vector*/

template <class T> class MyStack
{
private:
    int cap;
    int curr;
    T *arr;
public:
    MyStack(int size= 10);
    void push(T elem);
    T pop();
    T top();
    bool is_empty();
    bool is_full();
    int size();
};

template <class T> MyStack<T>::MyStack(int size) {
    arr = new T[size];
    cap = size;
    curr = -1; 
}

template <class T> void MyStack<T>::push(T elem) {
    if (is_full()) {
        cout << "Stack is full!" << endl;
        exit(1);
    }
    arr[++curr] = elem;
}

template <class T> T MyStack<T>::pop() {
    if (is_empty()) {
        cout << "Stack is empty" << endl;
        exit(1);
    }
    T elem = top();
    curr--;
    return elem;
}

template <class T> T MyStack<T>::top() {
    if (is_empty()) {
        cout << "Stack is empty" << endl;
        exit(1);
    }
    return arr[curr];
}

template <class T> bool MyStack<T>::is_empty() {
    return (curr == -1);
}

template <class T> bool MyStack<T>::is_full() {
    return (cap == curr+1);
}

template <class T> int MyStack<T>::size() {
    return curr+1;
}

int main() {
    MyStack<int> s;
    int a = 4;
    s.push(a);
    cout << s.top() << endl;
    s.pop();
    return 0;
}
