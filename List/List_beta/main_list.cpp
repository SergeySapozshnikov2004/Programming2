#include <memory>
#include "SingleList.h"
#include "SingleList.cpp"

int main()
{
    SingleList<int> list;

    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_front(4);
    list.push_back(7);

    list.show();
    std::cout << std::endl;

    list.reverse();
    list.show();
  
    std::cout << std::endl;
    list.pop();
    list.show();
}