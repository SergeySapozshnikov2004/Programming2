#include "Exercise.h"
#include "two_dimension_arr.h"
#include "Print.h"
#include <sstream>
#include <iostream>


Print::Print(two_dimension_arr matrix): my_matrix(matrix){}

void Print::task_1()
{
    
     std::ostream& os << my_matrix;
}

