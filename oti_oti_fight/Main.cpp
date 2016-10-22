
#include <Siv3D.hpp>
#include <HamFramework.hpp>

#include "GameScene.h"
#include "TitleScene.h"

void Main() {
    Window::Resize(1400, 1050);
    oti_oti_fight::MyApp manager;

    manager.add<oti_oti_fight::TitleScene>(L"TitleScene");

    while (System::Update()) {
        manager.updateAndDraw();
    }
}
