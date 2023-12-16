template<typename T>
#pragma once

struct Node
{
    using pointer = std::unique_ptr<Node>;

    T data;
    pointer next = {};
    Node(T value) : data{std::move(value)} {}
};