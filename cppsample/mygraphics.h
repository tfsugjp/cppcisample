#pragma once

#include <windows.h>
#include <iostream>


class GraphicsFile
{
    std::string FileName;

public:
    GraphicsFile(char* sourceFile)
    {
        FileName = sourceFile;
    }

    void Load();
    bool Exist()
    {
        WIN32_FIND_DATAA lpFile;

        ZeroMemory(&lpFile, sizeof(WIN32_FIND_DATAA));

        HANDLE hFile = FindFirstFileA(FileName.c_str(), &lpFile);
        if (hFile == INVALID_HANDLE_VALUE) {
            return false;
        }

        return true;
    }
};

