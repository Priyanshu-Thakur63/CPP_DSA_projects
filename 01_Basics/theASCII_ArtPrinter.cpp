#include<iostream>
#include<string>

void drawCat(){
  std::cout << " /\\\\_/\\\\ \n";
  std::cout << "( o.o )\n";
  std::cout << " > ^ < \n";
}

void drawRocket(){

}

void printBanner(const std::string& title){

}
int main(){
  printBanner("My ASCII Art Collection");

  drawCat();
  drawRocket();

  std::cout<<"Art exhibit complete\n";
  return 0;

}