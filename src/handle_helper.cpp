//
// Created by comrade77 on 08.09.2021.
//

#include "handle_helper.h"

namespace handle_helper {
HandlePtr MakeHandleUniquePtr(HANDLE handle) {
  if (handle == (HANDLE) INVALID_HANDLE_VALUE || handle == nullptr) {
    return nullptr;
  }

  return HandlePtr(handle);
}

}
