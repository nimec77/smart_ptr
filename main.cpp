#include <iostream>
#include <smart_ptr.h>

int main() {
  std::cout << "Hello, World!" << std::endl;
  auto handle_ = SmartPtr::GetToken();
  std::cout << "GetToken: " << handle_ << std::endl;
  const auto info_ = SmartPtr::GetHandleInfo(std::move(handle_));
  std::cout << "GetHandleInfo: " << info_ << std::endl;
  return 0;
}
