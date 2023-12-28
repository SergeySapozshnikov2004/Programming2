#pragma once
#include <iostream>
#include <memory>
#include "Node.h"

template<typename T>
class SingleList
{
    using link_pointer = typename Node<T>::pointer;
    private:
    link_pointer head = {};
    Node<T> *tail = nullptr;
    public:

/**
 * @brief Destroy the Single List object
 * 
 */
~SingleList();

/**
 * @brief Destroy the first element of List
 * 
 */
void pop();

/**
 * @brief Inserts an item at the top of the list
 * 
 * @param elem 
 */
void push_back(T elem);

/**
 * @brief Inserts an item at the back of the list
 * 
 * @param elem 
 * @return * void 
 */
void push_front(T elem);

/**
 * @brief Show all elements of list
 * 
 * @return * void 
 */
void show() const;
    
/**
 * @brief Flips the list
 * 
 * @return * void 
 */
void reverse();
};