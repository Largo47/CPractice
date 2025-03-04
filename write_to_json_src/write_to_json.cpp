/*
Tool that modifies tasks.json file used by compiler to add .cpp that I'm currently working on ar arguments.
USAGE
  write_to_json.exe <script1> <script2> <...>

PROGRESS
1. Write into JSON file  DONE
2. Parse from JSON file and copy to another JSON file INPROGRESS
3. Take 1 parameter, Parse json, update with parameter values, save into file 
4. -,,-, but take n parameters

*/
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

int main() {
  using namespace nlohmann::literals;

  //json o1 = R"( {"tasks": [ {"args": [ "-fdiagnostics-color=always", "-g", "${fileDirname}\\write_to_json.cpp", "${fileDirname}\\json.hpp", "-o", "${fileDirname}\\executables\\${fileBasenameNoExtension}.exe"] } ] } )"_json;
  //doesn't work
  std::fstream File;
  File.open(R"(tasks.json)", std::ios::in);
  json src_file{json::parse(File)};
  File.close();
  //src_file.update(o1, true);
  File.open(R"(tasks.json)", std::ios::out);
  File << std::setw(4) << src_file;
  File.close();
}
