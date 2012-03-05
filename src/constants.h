/*
 * Copyright (C) 2011 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ART_SRC_CONSTANTS_H_
#define ART_SRC_CONSTANTS_H_

#include <iosfwd>

namespace art {

enum InstructionSet {
  kNone,
  kArm,
  kThumb2,
  kX86,
  kMips
};

std::ostream& operator<<(std::ostream& os, const InstructionSet& rhs);

enum InvokeType {
  kStatic, kDirect, kVirtual, kSuper, kInterface,
  kMaxInvokeType = kInterface
};

std::ostream& operator<<(std::ostream& os, const InvokeType& rhs);

}  // namespace art

#include "constants_x86.h"
#include "constants_arm.h"

#endif  // ART_SRC_CONSTANTS_H_
