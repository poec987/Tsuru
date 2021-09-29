#pragma once

#include <agl/texturedata.h>

namespace agl {

class RenderTargetColor { // Size: 0x154
public:
    RenderTargetColor();

    void initRegs_() const;
    void invalidateGPUCache() const;
    void onApplyTextureData_();

    // This function does not appear in the MK8 AGL symbols, is it real?
    void applyTextureData(TextureData& textureData);

    // Begin inlined struct
    TextureData base;
    u32 _9C;
    u32 viewMip;
    u32 viewFirstSlice;
    // End inlined struct
    u8 _A8;
    u32 auxBufferSize;
    u32 auxBufferAlign;
    u32 _B4;
    GX2ColorBuffer colorBuffer;
};

static_assert(sizeof(RenderTargetColor) == 0x154, "agl::RenderTargetColor size mismatch");

}
