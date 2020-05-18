#include <iostream>
#include <cstdlib>
#include "List.h"


int main() {
    List list;
    list.pushBack(10);
    list.pushBack(20);
    list.pushFront(30);
    list.pushFront(40);
    list.pushBack(50);
    list.pushBack(60);
    // std::cout << "The number of elements in the list is:\t" << list.getSize() << std::endl;
    list.printList();
    try {
        list.sort();
    } catch (EmptyListException ex) {
        std::cout << ex.what();
    }
    list.printList();

    for(int i = 0; i < 50; i++) {
        list.pushBack(rand() % 50);
    }

    return 0;
}