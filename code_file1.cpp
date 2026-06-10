#include <iostream>
#include <filesystem>
#include "functions.h"
#include <string>
#include <vector>
#include <algorithm>

namespace fs = std::filesystem;

void Analysis::FileCount(const fs::path& path) {
    int count = 0;
    for(const auto& file : fs::directory_iterator(path))
    {
        if(fs::is_regular_file(file))
        {
            count++;
        }
    }
    std::cout << "Total file in " << fs::current_path() << ": " << count << "\n";
}

void Analysis::TreeFileCount(const fs::path& path) {
    int count = 0;
    for(const auto& file : fs::recursive_directory_iterator(path))
    {
        if(fs::is_regular_file(file))
        {
            count++;
        }
    }
    std::cout << "Total file including sub folder in " << fs::current_path() << ": " << count << "\n";
}

void Analysis::CountExt(const fs::path& path) {
    int count = 0;
    std::string Ext; std::getline(std::cin, Ext);
    for(const auto& file : fs::directory_iterator(path))
    {
        if(file.path().extension() == Ext)
        {
            count++;
        }
    }
    std::cout << "Total files by extension " << Ext << " in " << fs::current_path() << ": " << count << "\n";
}

void Analysis::TreeCountExt(const fs::path& path)  {
    int count = 0;
    std::string Ext; std::getline(std::cin, Ext);
    for(const auto& file : fs::recursive_directory_iterator(path))
    {
        if(file.path().extension() == Ext)
        {
            count++;
        }
    }
    std::cout << "Total files by extension with " << Ext << " including sub-folder in " << fs::current_path() << ": " << count << "\n";
}

void Analysis::ListAllFile(const fs::path& path)  {
    int count = 0;
    struct FileInfo {
        std::string filename;
        uintmax_t filesize;
    };
    std::vector<FileInfo>files;
    for(const auto& file : fs::directory_iterator(path))
    {
        if(fs::is_regular_file(file))
        {
            files.push_back({file.path().filename().string(), fs::file_size(file)});
            count++;
        }
    }
    if(count == 0)  {
            std::cout << "No file found";
    }
    std::sort(files.begin(), files.end(), [](const FileInfo a, const FileInfo b)
    {
        return a.filesize > b.filesize;
    });
    
    std::cout << "filename" << "           " << "size\n";

    for(const auto& file : files)
    {
        if(file.filesize >= 1000 && file.filesize <= 999999)
       {
           uintmax_t size = file.filesize / 1000;
           std::cout << file.filename << "           " << size << "kb\n";
        }
        else if(file.filesize >= 1000000 && file.filesize <= 999999999)
        {
            uintmax_t size = file.filesize / 1000000;
           std::cout << file.filename << "           " << size << "mb\n";
        }
        else if(file.filesize >= 1000000000)
        {
            uintmax_t size = file.filesize / 1000000000;
            std::cout << file.filename << "           " << size << "gb\n";
        }
        else
        {
           std::cout << file.filename << "           " << file.filesize << " bytes\n";
        }   
    } 
} 

void Analysis::TreeListAllFile(const fs::path& path)  {
    int count = 0;
    struct FileInfo {
        std::string filename;
        uintmax_t filesize;
    };
    std::vector<FileInfo>files;
    for(const auto& file : fs::recursive_directory_iterator(path))
    {
        if(fs::is_regular_file(file))
        {
            files.push_back({file.path().filename().string(), fs::file_size(file)});
            count++;
        }
    }
    if(count == 0)  {
            std::cout << "No file found";
    }
    std::sort(files.begin(), files.end(), [](const FileInfo a, const FileInfo b)
    {
        return a.filesize > b.filesize;
    });
    
    std::cout << "filename" << "            " << "size\n";

    for(const auto& file : files)
    {
        if(file.filesize >= 1000 && file.filesize <= 999999)
       {
           uintmax_t size = file.filesize / 1000;
           std::cout << file.filename << "           " << size << "kb\n";
        }
        else if(file.filesize >= 1000000 && file.filesize <= 999999999)
        {
            uintmax_t size = file.filesize / 1000000;
           std::cout << file.filename << "           " << size << "mb\n";
        }
        else if(file.filesize >= 1000000000)
        {
            uintmax_t size = file.filesize / 1000000000;
            std::cout << file.filename << "           " << size << "gb\n";
        }
        else
        {
           std::cout << file.filename << "           " << file.filesize << " bytes\n";
        }   
    } 
}


void Analysis::GetDirSize(const fs::path& path)  {
    uintmax_t Size = 0;
    for(const auto& file : fs::recursive_directory_iterator(path)) {
        if(fs::is_regular_file(file)) {
            Size += fs::file_size(file);
        }
    }
    if(Size >= 1000 && Size <= 999999)
      {
         uintmax_t size = Size / 1000;
         std::cout << size << "kb\n";
      }
      else if(Size >= 1000000 && Size <= 999999999)
      {
          uintmax_t size = Size / 1000000;
          std::cout << size << "mb\n";
      }
      else if(Size >= 1000000000)
      {
          uintmax_t size = Size / 1000000000;
          std::cout << size << "gb\n";
      }
      else
      {
         std::cout << Size << " bytes\n";
      }  
}


