#pragma once


#include <Siv3D.hpp>
#include <HamFramework.hpp>

#include "GameData.h"
#include "GlowText.h"

namespace oti_oti_fight {
class TitleScene : public MyApp::Scene {
 public:
    void init() override;
    void update() override;
    void draw() const override;

 private:
    Font font;
    Font menuFont;
    int32 menuOffset;
    int32 menuInterval;
    Array<GlowText> menuTexts;
};

}  // namespace oti_oti_fight
