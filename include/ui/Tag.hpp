#pragma once

#include "../Macros.hpp"
#include <cocos2d.h>
#include <GUI/CCControlExtension/CCScale9Sprite.h>
#include <Geode/DefaultInclude.hpp>
#include <Geode/loader/Mod.hpp>
#include <optional>

namespace better_edit {
    class BE_DLL Tag : public cocos2d::CCNode {
    protected:
        bool init(std::string const& text, std::optional<std::string> const& icon);

    public:
        static Tag* create(std::string const& text, std::optional<std::string> const& icon = std::nullopt);
    };
}