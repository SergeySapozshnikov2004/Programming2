#include <memory>
#include "SingleList.h"

template <typename T>
SingleList<T>::~SingleList()
{
    while(head != nullptr)
    {
        head = std::move(head->next);
    }
}

template <typename T>
void SingleList<T>::pop()
{
        if(head == nullptr) 
        {
            return;
        }
        link_pointer new_link = std::move(head);
        head = std::move(new_link->next);
}

template <typename T>
void SingleList<T>::push_back(T elem)
{
    auto new_link = new Node<T>(std::move(elem));
    if (head == nullptr)
    {
        head.reset(new_link);
    }
    if (tail != nullptr) 
    {
        tail->next.reset(new_link);
    }
}

template <typename T>
void SingleList<T>::push_front(T elem)
{
    auto new_link = new Node<T>(std::move(elem));

    if (tail != nullptr)
    {
        tail->next.reset(new_link);
    }
    else
    {
        head.reset(new_link);
    }    
    tail = new_link;
}

template<typename T>
void SingleList<T>::reverse()
{
    if (head == nullptr) 
    {
    return;
    }

    link_pointer prev;
    link_pointer next;

    while (head->next != nullptr)
    {
        next = std::move(head->next);
        head->next = std::move(prev);
        prev = std::move(head);
        head = std::move(next);
    }
    head->next = std::move(prev);
}

template<typename T>
void SingleList<T>::show() const
{
    auto current = head.get();
    while (current != nullptr)
    {
        std::cout << current->data << std::endl;
        current = current->next.get();
    }
}
