#include "read_file.h"
#include <iostream>




int main (int argc, char *argv[]) {
    if (argc <= 1) {
        std::cout << "Wrong use, give a txt file!!!" << '\n';
        return 1;
    }
    std::unordered_map<char, int> umap;
    fill_umap_with_char_freq(argv[1], umap);


    return 0;
}
