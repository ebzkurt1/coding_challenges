#include "helper_functions.h"


void read_file_into_vec(std::vector<std::string>& out_vec, const std::string& file_name) {
    std::ifstream file(file_name);
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            out_vec.push_back(line);
        }
        file.close();
    } else {
        std::cerr << "Unable to open the file: " << file_name << std::endl;
    }
}
