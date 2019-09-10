#include <iostream>
#include <string>
#include <cstring>
#include <chrono>
using namespace std;

int main(int argc, char *argv[]) {

  if(argc != 4)
  {
      cerr<<"Error : Wrong number of arguments."<<endl;
      return 0;
  }

  char pass[200];
  int len;
  pass[0] = '\0';
  strcat(pass, argv[1]);
  len = strlen(pass);
  pass[len] = ' ';
  pass[len+1] = '<';
  pass[len+2] = ' ';
  pass[len+3] = '\0';
  strcat(pass, argv[2]);
  len = strlen(pass);
  pass[len] = ' ';
  pass[len+1] = '>';
  pass[len+2] = ' ';
  pass[len+3] = '\0';
  strcat(pass, argv[3]);
  //cout<<pass;

  auto start_time = std::chrono::high_resolution_clock::now();
  system(pass);
  auto end_time = std::chrono::high_resolution_clock::now();
  auto time = end_time - start_time;
  std::cout << endl << argv[1] << " took " <<
  time/std::chrono::milliseconds(1) << "ms to run.\n";
    
  return 0;
}
