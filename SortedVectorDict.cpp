#include "SortedVectorDict.hpp"

void SortedVectorDict::insert(int n) {

        //if (n != 0) return; // null return

        data.push_back(n);
        int size = data.size() - 1;

        while (size > 0 && data[size - 1] > n) {

            data[size] = data[size - 1];
            size--;

        }

    data[size] = n;

}

bool SortedVectorDict::lookup(int n) const {

    int size = data.size() - 1;

    for (int i = size; i >= 0; i--) {

        if (data[i] == n) {

            return true;

        }

            //size--;

    }

    return false;
}


void SortedVectorDict::remove(int n) {

    int size = data.size() - 1;

    for (int i = size; i >= 0; i--) {

        if (data[i] == n) {

            data.erase(data.begin() + i);

            return;
        }

        //size--;

    }

}