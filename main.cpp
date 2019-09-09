#include <iostream>

int main() {
  std::cout << "JairunDiemert: diemertJairun" << std::endl;
  for(int i = 0; i < 100; i++){
    std::cout << i + 1 << " ";
    if (((i + 1) % 5) == 0){
      std::cout << std::endl;
    }
  }
}
