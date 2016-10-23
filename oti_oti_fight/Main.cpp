
//  Copyright 2016 odanado
//  Licensed under the MIT License.

#include <Siv3D.hpp>
#include <HamFramework.hpp>

#include "GameScene.h"
#include "TitleScene.h"

void Main() {
    Window::Resize(800, 600);
    oti_oti_fight::MyApp manager;

    // manager.add<oti_oti_fight::TitleScene>(L"TitleScene");
    manager.add<oti_oti_fight::GameScene>(L"GameScene");

    while (System::Update()) {
        manager.updateAndDraw();
    }
}
