#include<iostream>
#include<limits>
int main(){
  // The default - signed int
  int signed_positive_val = 20000000;
  int signed_negative_val = 20000000;

  std::cout << "----Signed Integer----\n";
  std::cout << "A Positive Signed integer : " << signed_positive_val << std::endl;
  std::cout << "A Negative Signed Integer : " << signed_negative_val << std::endl;
  std::cout << "Max value for a signed int on this system :" << std::numeric_limits<int>::max() << std::endl;
  std::cout << "Min value for a signed int on this system :" << std::numeric_limits<int>::min() << std::endl << std::endl;


  // ---------unsigned int------------
  unsigned int inventoryCount = 4294967295;
  std::cout << "----Unsigned int----\n";
  std::cout << "Number of items in the inventory :" << inventoryCount << std::endl;
  std::cout << "Max value of a unsigned int on this system :" << std::numeric_limits<unsigned int>::max() << std::endl;
  std::cout << "Min value of a unsigned int on this system :" << std::numeric_limits<unsigned int>::min() << std::endl << std::endl;

  // Pitfall: Unsigned Integer Underflow (a common bug!)
  unsigned int items = 3;
  std::cout << "We have " << items << " items.\n";
  items = items - 1;
  std::cout << "Used one. Now we have " << items << " items.\n";
  items = items - 1;
  std::cout << "Used another. Now we have " << items << " items.\n";
  items = items - 1;
  std::cout << "Used the last one. Now we have " << items << " items.\n";
  items = items - 1; // Subtracting 1 from 0
  std::cout << "What happens if we use one more? We now have: " << items << " items!!!\n";
  return 0;
}