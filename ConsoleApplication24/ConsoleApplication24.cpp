
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}

};
class Stack {
private:
    Node* top;
public:
    Stack() : top(nullptr) {}
    void push_back(int value) {
        Node* newNode = new Node(value);//
        newNode->next = top;
        top = newNode;//
    }
    int pop() {
        if (top == nullptr)
            return-1;
        Node* temp = top;
        top = top->next;
        return temp->data;
    }
    void print() {
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << "\n";
            current = current->next;
        }
    }
};
class Queue {
private:
    Node* top;
    Node* bottom;
public:
    Queue() : top(nullptr), bottom(nullptr) {}
    void push(int value) {
        Node* newNode = new Node(value);
        if (top == nullptr) {
            top = bottom = nullptr;
        }
        else {
            bottom->next = newNode;
            bottom = newNode;
        }
    }
    int pop() {
        if (top = nullptr) {
            return -1;
        }
        else {
            Node* temp = top;
            top = top->next;
            if (top == nullptr) {
                bottom = nullptr;
            }
            return temp->data;
        }
    }
    void print() {
        Node* current = top;
        while (current != top) {
            cout << current->data << endl;
            current = current->next;
        }
    }
};
int main()
{
    Queue s;
    s.push(45);
    s.push(333);
    s.push(898);
    s.push(234789);
    s.push(333);
    cout << s.pop() << endl;
    s.print();
}
