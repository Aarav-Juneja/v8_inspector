// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8InspectorSessionClient_h
#define V8InspectorSessionClient_h

#include "platform/inspector_protocol/Platform.h"

#include <v8.h>

namespace blink {

class PLATFORM_EXPORT V8InspectorSessionClient {
public:
    virtual ~V8InspectorSessionClient() { }
    virtual void resumeStartup() = 0;
};

} // namespace blink

#endif // V8InspectorSessionClient_h
