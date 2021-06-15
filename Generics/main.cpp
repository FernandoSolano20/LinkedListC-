#include <iostream>
using namespace std;
// declaring node class
template<class L>
class Node {
public:
    Node();
    Node<L>* getNext();
    void setNext(Node<L>* next);
    L getData();
    void setData(L data);

private:
    Node<L>* next;
    L data;
};
// declaring linked list class
template<class L>
class LinkedList
{
public:
    Node<L>* head;
    Node<L>* last;
    LinkedList<L>() {
        head = NULL;
        last = NULL;
    }
    void add(L data) {
        if(!head) {
            // when there is no element in the list
            head = new Node<L>();
            head->setData(data);
            head->setNext(NULL);
            last = head;
        } else {
            // when the list is not empty
            if(last == head) {
                // when the list has one element
                last = new Node<L>();
                last->setData(data);
                last->setNext(NULL);
                head->setNext(last);
            } else {
                // when the list has more than one element
                Node<L>* insdata = new Node<L>();
                insdata->setData(data);
                insdata->setNext(NULL);
                last->setNext(insdata);
                last = insdata;
            }
        }
    }
    L get(int index) {
        if(index == 0) {
            // returning the head element
            return this->head->getData();
        } else {
            // Get the index'th element
            Node<L>* curr = this->head;
            for(int i = 0; i < index; ++i) {
                curr = curr->getNext();
            }
            return curr->getData();
        }
    }
    L operator[](int index) {
        return get(index);
    }
};
int main(int argc, char const *argv[])
{
    LinkedList<string> Str;
    Str.add("Hello");
    cout<<Str.get(0)<<endl;
    LinkedList<int> INT;
    INT.add(4);
    cout<<INT.get(0);
}