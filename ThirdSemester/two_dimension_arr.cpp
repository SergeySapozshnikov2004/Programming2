#include "two_dimension_arr.h"
#include "one_dimension_arr.h"
#include <cstddef>
#include <stdexcept>
#include<utility>
#include <sstream>
#include <iostream>

two_dimension_arr::two_dimension_arr(int num_rows, int num_columns)
{
    if (num_rows <= 0 || num_columns <= 0)
    {
        throw std::logic_error("Размер должен быть положительным");
    }
    num_rows = static_cast<size_t>(num_rows);
    num_columns = static_cast<size_t>(num_columns);
    this->num_rows = num_rows;
    this->num_columns = num_columns;
    my_matrix = new int*[num_rows];
    for (size_t i = 0; i < num_rows; i++)
    {
        my_matrix[i] = one_dimension_arr(num_columns).get_arr();
    }
}

two_dimension_arr::~two_dimension_arr()
{
    for (auto i = 0; i < num_rows; i++)
    {
        delete[] my_matrix[i];
    }
    delete[] this->my_matrix;
}

two_dimension_arr::two_dimension_arr(const two_dimension_arr &matrix)
{
    this->num_rows = matrix.num_rows;
    this->num_columns = matrix.num_columns;
    this->my_matrix = new int*[num_rows];   
    for (size_t i = 0; i < num_rows; ++i)
    {
        this->my_matrix[i] = one_dimension_arr(num_rows).get_arr();
        for (int j = 0; j < num_columns; ++j)
        {
            this->my_matrix[i][j] = matrix.my_matrix[i][j];
        }
    }
}

size_t two_dimension_arr::get_num_rows()
{
    return num_rows;
}

size_t two_dimension_arr::get_num_columns()
{
    one_dimension_arr arr = one_dimension_arr(num_columns);
    return arr.get_num_el();
}


two_dimension_arr::two_dimension_arr(two_dimension_arr &&other) noexcept
{
    swap(*this,other);
}   

two_dimension_arr two_dimension_arr::operator=(const two_dimension_arr &other)
{
        if (this == &other)
    {
        return *this;
    }
    two_dimension_arr n_arr(other);
    swap(*this, n_arr);
    return *this;
}

two_dimension_arr two_dimension_arr::operator=(two_dimension_arr &&other) noexcept
{
    if (this == &other)
    {
        return *this;
    }
    std::swap(this->num_columns, other.num_columns);
    std::swap(this->num_rows, other.num_rows);
    std::swap(this->my_matrix, other.my_matrix);
    return *this;
}

void swap(two_dimension_arr &lha, two_dimension_arr &rha)
{
    for (size_t i = 0; i < lha.num_rows; i++)
    {
        std::swap(lha.my_matrix[i], rha.my_matrix[i]);
    }
    std::swap(lha.num_columns, rha.num_columns);
    std::swap(lha.num_rows, rha.num_rows);
    std::swap(lha.my_matrix, rha.my_matrix);
}

int *two_dimension_arr::operator[](int num_rows)
{
    return my_matrix[num_rows];
}

std::ostream& operator<<(std::ostream &os, two_dimension_arr &my_matrix)
{
    size_t num_rows = my_matrix.get_num_rows();
    size_t num_columns = my_matrix.get_num_columns();
    std::stringstream result_string;
    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_columns; j++)
        {
            result_string << my_matrix[i][j] << " ";
        }
        result_string << "\n";
    }
    return os << result_string.str();
}

