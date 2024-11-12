#ifndef READ_FILE
#define READ_FILE
#include <fstream>
#include <string>
#include <unordered_map>
#include <iostream>


std::string read_file_from_path(const std::string path);
void fill_umap_with_char_freq(const std::string path, std::unordered_map<std::string, int>& umap);

#endif
