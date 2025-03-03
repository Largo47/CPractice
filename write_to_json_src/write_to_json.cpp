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
  /*
  json src_file{R"({
    "movie": "Star Wars",
    "released": true,
    "year": 1977
  })"_json};
  */
  std::fstream File;
  //File.open(R"(..\.vscode\tasks.json)", std::ios::in);
  //Script throws errors when trying to parse nested ..\.vscode\tasks.json, but works when parsing a single layer test file 
  File.open(R"(example.json)", std::ios::in);
  json src_file{json::parse(File)};
  File.close();

  File.open(R"(tasks.json)", std::ios::out);
  File << src_file;
  File.close();
}
