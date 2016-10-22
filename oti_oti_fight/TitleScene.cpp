#include "TitleScene.h"

namespace oti_oti_fight {

void TitleScene::init() {
    font = Font(30, Typeface::Medium);
    menuFont = Font(20, Typeface::Medium);

    menuOffset = 360;
    menuInterval = 50;

    menuTexts = {GlowText(menuFont, L"NEW GAME", 10),
                 GlowText(menuFont, L"EXIT", 10)};
}
void TitleScene::update() {
    if (Input::MouseL.clicked) {
        if (menuTexts[0].regionCenter(menuOffset).mouseOver) {
            changeScene(L"GameScene");
        } else if (menuTexts[1]
                       .regionCenter(menuOffset + menuInterval)
                       .mouseOver) {
            System::Exit();
        }
    }
}
void TitleScene::draw() const {
    font(L"おちおちファイト").drawCenter(100);
    int32 i = 0;

    for (const auto& text : menuTexts) {
        const bool mouseOver =
            text.regionCenter(menuOffset + i * menuInterval).mouseOver;

        text.drawCenter(menuOffset + i * menuInterval,
                        AlphaF(mouseOver ? 1.0 : 0.0),
                        AlphaF(mouseOver ? 1.0 : 0.9));

        ++i;
    }
}

}  // namespace oti_oti_fight
