#pragma once

#include "GifReader.hpp"
#include "MrbObject.hpp"

//----------------------------------------------------------
namespace siv3druby {
class MrbGifReader
    : public MrbObject<GifReader>
{
public:
    static void Init(mrb_state *mrb);

private:
    static mrb_value initialize(mrb_state *mrb, mrb_value self);
};
}
