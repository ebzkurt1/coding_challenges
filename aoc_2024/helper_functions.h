#include <fstream>
#include <iostream>
#include <string>
#include <vector>


void read_file_into_vec(std::vector<std::string>& out_vec, const std::string& file_name);


template <typename T>
void print_vec(std::vector<T>& vec){
    for (T element: vec)
        std::cout << element << std::endl;
}
