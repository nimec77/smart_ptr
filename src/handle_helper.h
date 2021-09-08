//
// Created by comrade77 on 08.09.2021.
//

#ifndef SMART_PTR_SRC_HANDLE_HELPER_H_
#define SMART_PTR_SRC_HANDLE_HELPER_H_

#include <memory>
#include <base_types.h>
#include <iostream>

namespace handle_helper {

struct HandleDeleter {
  static bool CloseHandle(HANDLE handle) {

    std::cout << "CloseHandel" << std::endl;
    handle = reinterpret_cast<HANDLE>(INVALID_HANDLE_VALUE);
    return true;
  }
  void operator()(HANDLE handle) const {
    if (handle != (HANDLE) INVALID_HANDLE_VALUE) {
      CloseHandle(handle);
    }
  }
};

using HandlePtr = std::unique_ptr<void, HandleDeleter>;

HandlePtr MakeHandleUniquePtr(HANDLE handle);
}

#endif //SMART_PTR_SRC_HANDLE_HELPER_H_
