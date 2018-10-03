// Copyright 2011 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#pragma once

#include <string>
#include "VideoCommon/VideoBackendBase.h"

namespace DX11
{
class VideoBackend : public VideoBackendBase
{
  bool Initialize(void* display_handle, void* window_handle) override;
  void Shutdown() override;

  std::string GetName() const override;
  std::string GetDisplayName() const override;

  void InitBackendInfo() override;
};
}  // namespace DX11
