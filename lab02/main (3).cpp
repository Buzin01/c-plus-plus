#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>
#include "matrix.h"
using namespace std;

bool read_matrix(matrix& m, char* filename)
{
  std::cout << filename << '\n';
  std::ifstream in;
  in.open(filename, std::ios::in);
  if (in.good())
  {
    int width, height;
    in >> height >> width;
    m.set_width(width);
    m.set_height(height);
    double value;
    for (int i = 0; i < height; i++)
      for (int j = 0; j < width; j++)
      {
        in >> value;
        m.set_value(i, j, value);
      }
  }
  else
  {
    in.close();
    std::cout << "Error! Cannot open file " << filename << "\n";
    return false;
  }
  in.close();
  return true;
}

int main(int argc, char* argv[])
{
  matrix* matrices = new matrix[argc - 1];
  for (int i = 1; i < argc; i++)
  {
    read_matrix(matrices[i - 1], argv[i]);
    matrices[i - 1].print();
  }
  matrices->print();

  matrix test = matrices[0];

  test.print();
  test = test + 3;

  test.print();
  test = test.transpose();

  delete[] matrices;

  return 0;
}