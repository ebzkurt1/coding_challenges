#include "read_file.h"


std::string read_file_from_path (const std::string path) {
    std::ifstream file(path);
    std::string full_file_string = "";
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            full_file_string += line;
            full_file_string += '\n';
        }
        file.close();
    }
    return full_file_string;
}


void fill_umap_with_char_freq(const std::string path, std::unordered_map<std::string, int>& umap) {
    std::ifstream file(path);
    char ch;
    std::fstream fin(path, std::fstream::in);
    while (fin >> std::noskipws >> ch) {
        std::cout << ch;
        std::cout << '\n';
    }
}
