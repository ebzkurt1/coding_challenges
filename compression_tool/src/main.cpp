#include "read_file.h"
#include <iostream>




int main () {
    std::cout << "Hello" << '\n';
    std::string file_path = "test.txt";
    std::string full_file = read_file_from_path(file_path);
    std::cout << full_file << '\n';

    std::unordered_map<std::string, int> umap;
    fill_umap_with_char_freq(file_path, umap);


    return 0;
}
