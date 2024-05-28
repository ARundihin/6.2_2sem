#pragma once

#include <iostream>
#include "exhibit.hpp"

using namespace std;

class DynamicArray {
private:
    Exhibit** elements;
    int size;
    int capacity;

public:
    DynamicArray();
    DynamicArray(const DynamicArray& other);
    DynamicArray& operator=(const DynamicArray& other);
    DynamicArray(DynamicArray&& other) noexcept;
    DynamicArray& operator=(DynamicArray&& other) noexcept;
    virtual ~DynamicArray();

    void addElement(Exhibit* element);
    void removeElement(Exhibit* element);
    void printElements() const;

    virtual void expandCapacity();
    int findIndex(Exhibit* element) const;
    void clear();
};
