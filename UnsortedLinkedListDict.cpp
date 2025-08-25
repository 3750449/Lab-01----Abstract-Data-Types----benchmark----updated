#include "UnsortedLinkedListDict.hpp"

  UnsortedLinkedListDict::UnsortedLinkedListDict() {}

  UnsortedLinkedListDict::~UnsortedLinkedListDict() { // pre define list

      Node* cur = head;

        while (cur) {

          Node* nxt = cur->next;
          delete cur;
          cur = nxt;

        }

  }

void UnsortedLinkedListDict::insert(int n) {

    head = new Node{n, head};

}

bool UnsortedLinkedListDict::lookup(int n) const {

        for (Node* cur = head; cur; cur = cur->next) {

            if (cur->data == n) return true;

        }

    return false;

}

void UnsortedLinkedListDict::remove(int n) {

    if (head == nullptr) return;

    Node* cur = head->next;
    Node* prev = head;

    if (head->data == n) { //head has no previous node

        Node* oldHead = head;
        head = head->next;
        delete oldHead;
        return;

    }

    while (cur != nullptr) {

        if (cur->data == n) {  // head has previous node
            prev->next = cur->next;
            delete cur;
            return;

        }

        cur = cur->next;
        prev = cur;

    }
}

