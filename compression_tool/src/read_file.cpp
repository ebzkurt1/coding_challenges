#include "read_file.h"
#include <unordered_map>


bool check_key(std::unordered_map<char, int>& umap, char key) {
    if (umap.find(key) == umap.end())
        return false;
    return true;
}


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


void fill_umap_with_char_freq(const std::string path, std::unordered_map<char, int>& umap) {
    std::ifstream file(path);
    char ch;
    std::fstream fin(path, std::fstream::in);
    while (fin >> std::noskipws >> ch) {
        if (check_key(umap, ch)) {
            umap[ch] += 1;
        } else {
            umap.insert({ch, 1});
        }
    }
    for (auto i: umap)
        std::cout << (char)i.first << ": " << i.second << '\n';
}
