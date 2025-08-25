#include "SortedLinkedListDict.hpp"

void SortedLinkedListDict::insert(int n) {

    data.push_back(n);
    int size = data.size() - 1;
    //if (size == 0) return; // null

    while (size > 0 && data[size - 1] > n) {

        data[size] = data[size - 1];
        size--;

    }

    data[size] = n;

}

bool SortedLinkedListDict::lookup(int n) const {

    for (int i = 0; i < data.size(); i++) {

        if (data[i] == n) return true;

        if (data[i] > n) return false; // exit check

    }

    return false;

}

void SortedLinkedListDict::remove(int n) {

    for (int i = 0; i < data.size(); i++) {

        if (data[i] == n) {

            data.erase(data.begin() + i);
            return;

        }

        if (data[i] > n) return; // exit check
    }

}
