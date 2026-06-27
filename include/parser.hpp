#pragma once
#include "vector.hpp"
#include "types.hpp"
#include <string>

struct ImagemInfo {
    int w;
    int h;
    bool is_color; // true = PPM, false = PGM
};

ImagemInfo read_image(const std::string& path, sc::vector<Pixel>& pixels);
void salvar_binario(const std::string& caminho, const sc::vector<Pixel>& vetor, int w, int h);