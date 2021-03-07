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
void reverse_1d_array(vector<int>  &arr) {
    vector<int> vec;
    for (int elem = arr.size() - 1; elem != -1 ; elem--) {
        int temp = arr[elem];
        vec.push_back(arr[elem]);
    }
    for (int elem = 0; elem < arr.size() ; elem++) {
        arr[elem] = vec[elem];
    }

}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if ((arr_begin != nullptr) || (arr_end != nullptr)){
        vector<int> vec;

        for (int *i = arr_end; i >= arr_begin; i-- ) {
            int temp = *i;
            vec.push_back(temp);
        }

        int k = 0;
        for (int *i = arr_begin; i <= arr_end ; i++) {
            *i = vec[k];
            k++;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    if ((arr != nullptr) and (size > 0)) {

        int *max_elem = arr;
        for (int *i = arr; i < arr + size ; i++) {
            if (*i > *max_elem) {
                max_elem = i;
            }
        }
        return max_elem;
    }
    else {
        return nullptr;
    }

}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> pacanski_vector;
    for(int i = 0; i <= arr.size() - 1; i++){
        if(arr[i] % 2 == 1 or arr[i] % 2 == -1){
            pacanski_vector.push_back(arr[i]);
        }
    }
    return pacanski_vector;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {

    vector<int> pacanski_vector;

    for (int i = 0; i < arr_a.size(); i++) {
        bool flag = false;
        for (int j = 0; j < arr_b.size(); j++) {
            if (arr_a[i] == arr_b[j]){
                pacanski_vector.push_back(arr_a[i]);
                flag = true;
                break;
            }
        }
        if (flag){
            continue;
        }
    }
    return pacanski_vector;
}
