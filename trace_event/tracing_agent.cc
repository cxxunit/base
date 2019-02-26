// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/trace_event/tracing_agent.h"

namespace base {
namespace trace_event {

TracingAgent::~TracingAgent() {}

bool TracingAgent::SupportsExplicitClockSync() {
  return false;
}

void TracingAgent::RecordClockSyncMarker(
    int sync_id,
    const RecordClockSyncMarkerCallback& callback) {
  DCHECK(SupportsExplicitClockSync());
}


}  // namespace trace_event
}  // namespace base
