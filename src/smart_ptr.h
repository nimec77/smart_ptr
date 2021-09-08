//
// Created by comrade77 on 08.09.2021.
//

#ifndef SMART_PTR_SRC_SMART_PTR_H_
#define SMART_PTR_SRC_SMART_PTR_H_

#include <iostream>
#include <handle_helper.h>

class SmartPtr {
 public:
  using HandlePtr = handle_helper::HandlePtr;

  static HandlePtr GetToken() noexcept;

  static std::string_view GetHandleInfo(HandlePtr handle_ptr) noexcept;
};

#endif //SMART_PTR_SRC_SMART_PTR_H_
