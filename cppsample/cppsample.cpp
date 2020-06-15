// cppsample.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <filesystem>
#include <fstream>
#include "mygraphics.h"

namespace fs = std::filesystem;

int main(int argc, char* argv[])
{
    if (argc > 0) {
        GraphicsFile* cg = new GraphicsFile(argv[0]);

        cg ->Exist();
    }
}
