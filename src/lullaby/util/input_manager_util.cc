/*
Copyright 2017 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "lullaby/util/input_manager_util.h"

#include "lullaby/base/input_manager.h"

namespace lull {
Sqt GetHmdSqt(Registry* registry) {
  auto* input_manager = registry->Get<InputManager>();
  return Sqt(input_manager->GetDofPosition(lull::InputManager::kHmd),
             input_manager->GetDofRotation(lull::InputManager::kHmd),
             mathfu::kOnes3f);
}
}  // namespace lull