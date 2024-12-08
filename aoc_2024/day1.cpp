#include "helper_functions.h"
#include <cstdlib>
#include <sstream>
#include <algorithm>


int main(int argc, char *argv[]) {
    std::vector<std::string> line_vec;
    std::cout << "Input file name: " << argv[1] << std::endl;
    read_file_into_vec(line_vec, argv[1]);

    std::vector<int> left_int;
    std::vector<int> right_int;

    std::string delimiter = "   ";

    for (std::string single_line: line_vec) {
        std::stringstream ss(single_line);
        size_t pos = single_line.find(delimiter);
        left_int.push_back(std::stoi(single_line.substr(0, pos)));
        right_int.push_back(std::stoi(single_line.erase(0, pos + delimiter.length())));
    }

    std::stable_sort(left_int.begin(), left_int.end());
    std::stable_sort(right_int.begin(), right_int.end());

    int sum = 0;
    for (int index = 0; index < left_int.size(); index++)
        sum += std::abs(right_int[index] - left_int[index]);

    std::cout << sum << std::endl;

    return 0;
}
