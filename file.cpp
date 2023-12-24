#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("HAHAAH.text");

  // Write to the file
  MyFile << "LOWKEY ADMIRRING YOU FROM AFAR!";

  // Close the file
  MyFile.close();
}