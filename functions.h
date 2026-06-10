#pragma once
#include <filesystem>

namespace fs = std::filesystem;

class Analysis
{
public:
    static void FileCount(const fs::path& path);
    static void TreeFileCount(const fs::path& path);
    
    static void CountExt(const fs::path& path);
    static void TreeCountExt(const fs::path& path);
    
    static void LargestFiles(const fs::path& path);
    static void TreeLargestFiles(const fs::path& path);
    
    static void GetDirSize(const fs::path& path);
    
    static void SmallestFiles(const fs::path& path);
    static void TreeSmallestFiles(const fs::path& path);
};
