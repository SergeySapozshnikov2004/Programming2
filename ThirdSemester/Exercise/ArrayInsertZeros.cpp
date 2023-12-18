#include "ArrayInsertZeros.h"

ArrayInsertZeros::ArrayInsertZeros(two_dimension_arr matrix): my_matrix(matrix){}

int **ArrayInsertZeros::task_2()
{
    size_t num_rows = my_matrix.get_num_rows();
    size_t num_columns = my_matrix.get_num_columns();
    size_t new_num_rows = num_rows; 
        for (size_t i = 0; i < num_rows; i++)
        {
            if(my_matrix[i][0] % 3 == 0)
            {
                new_num_rows += 1;
            }
        }

    int** new_arr = new int*[new_num_rows];
    for (size_t k = 0; k < new_num_rows; k++)
    {
        new_arr[k] = new int[num_columns];
    }
    
    size_t i_rem = 0; 
    for (size_t i = 0; i < num_rows; i++)
    {
        if (my_matrix[i][0] % 3 == 0)
            {
                for(size_t k = 0; k < num_columns; k++)
                {
                    new_arr[i_rem][k] = 0;
                    new_arr[i_rem + 1][k] = new_arr[i][k];                    
                }
                i_rem++;
            }
            else
            {
                for(size_t k = 0; k < num_columns; k++)
                {
                    new_arr[i_rem][k] = new_arr[i][k];
                }
            }
            i_rem++;    
    }
    return new_arr;
}