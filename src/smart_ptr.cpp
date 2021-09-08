//
// Created by comrade77 on 08.09.2021.
//

#include "smart_ptr.h"

using HandlePtr = SmartPtr::HandlePtr;

HandlePtr SmartPtr::GetToken() noexcept {
  const auto handle_ = reinterpret_cast<HANDLE>(1);

  return HandlePtr(handle_);
}

std::string_view SmartPtr::GetHandleInfo(HandlePtr handle_ptr) noexcept {
  std::cout << "SmartPtr::GetHandleInfo: " << handle_ptr << std::endl;
  return "Token Info";
}
