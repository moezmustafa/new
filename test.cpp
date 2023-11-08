
#include <iostream>
#include <fstream>

int main() {
  std::ofstream file("example.txt");
  if (file.is_open()) {
    file << "Rayaan";
    file.close();
    std::cout << "File created and written to successfully!\n";
  } else {
    std::cout << "Error creating file!\n";
  }
  return 0;
}
