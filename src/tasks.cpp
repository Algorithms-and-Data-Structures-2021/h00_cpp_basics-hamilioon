#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    int swap_arg;
    if (lhs and rhs ) {
        swap_arg = *lhs;
        *lhs = *rhs;
        *rhs = swap_arg;

    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {

    if (num_rows > 0 && num_cols > 0) {

        int **arr = new int *[num_rows];
        for (int i = 0; i < num_rows; i++){
            arr[i] = new int [num_cols];
        }
        for (int i = 0; i < num_rows; i++){
            for (int j = 0; j < num_cols; j++){
                arr[i][j] = init_value;
            }
        }
        return arr;
    }
    else {
        return nullptr;
    }
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if ((arr_2d_source == nullptr) || (arr_2d_target == nullptr) || (num_rows <= 0) || (num_cols <= 0)) {
        return false;
    } else {
        for (int i = 0; i < num_rows; i++) {
            copy(arr_2d_source[i],arr_2d_source[i]+ num_cols, arr_2d_target[i]);
        }
    } return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    // напишите код здесь ...
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    // напишите код здесь ...
}

// Задание 6
int *find_max_element(int *arr, int size) {
    // напишите код здесь ...
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    // напишите код здесь ...
    return {};
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    // напишите код здесь ...
    return {};
}
