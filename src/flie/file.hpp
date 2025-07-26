#include <iostream>
#include <fstream>
#include <string>
class FileOutput
{
private:
  std::ofstream File;
public:
  FileOutput(std::string FileName)
  {
    File.open(FileName);
    if (!File.is_open()) 
    {
      throw std::runtime_error("无法打开文件: " + FileName );
    }
  }
  ~FileOutput()
  {
    File.flush();
    File.close();
  }
  void write(std::string Str)
  {
    File << Str;
    File.put("\n");
  }
  void flush()
  {
    File.flush();
  }
  FileOutput(FileOutput const &Other) = delete;
  FileOutput &operator=(FileOutput const &Other) = delete;
  FileOutput(FileOutput &&Other) = delete;
  FileOutput &operator=(FileOutput &&Other) = delete;
};