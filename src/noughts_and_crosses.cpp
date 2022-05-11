#include "noughts_and_crosses.hpp"
#include "../lib/p6/include/p6/p6.h"

void draw_board(int size, p6::Context& ctx)
{
    // ###############################################################################
    ctx.fill = {p6::NamedColor::PaleChestnut};
    ctx.square(p6::BottomLeftCorner{-1.f, -1.f},
               p6::Radius{1.f / static_cast<float>(size)});

    ctx.square(p6::BottomLeftCorner{-1.f, 1.f / static_cast<float>(size)},
               p6::Radius{1.f / static_cast<float>(size)});

    ctx.square(p6::BottomLeftCorner{-1.f, -1.f / static_cast<float>(size)},
               p6::Radius{1.f / static_cast<float>(size)});

    // ###############################################################################
    ctx.fill = {p6::NamedColor::PaleBrown};
    ctx.square(p6::BottomLeftCorner{-1.f / static_cast<float>(size), -1.f},
               p6::Radius{1.f / static_cast<float>(size)});

    ctx.square(p6::BottomLeftCorner{-1.f / static_cast<float>(size), -1.f / static_cast<float>(size)},
               p6::Radius{1.f / static_cast<float>(size)});

    ctx.square(p6::BottomLeftCorner{-1.f / static_cast<float>(size), 1.f / static_cast<float>(size)},
               p6::Radius{1.f / static_cast<float>(size)});

    // ###############################################################################
    ctx.fill = {p6::NamedColor::PaleCopper};
    ctx.square(p6::BottomLeftCorner{1.f / static_cast<float>(size), -1.f},
               p6::Radius{1.f / static_cast<float>(size)});

    ctx.square(p6::BottomLeftCorner{1.f / static_cast<float>(size), -1.f / static_cast<float>(size)},
               p6::Radius{1.f / static_cast<float>(size)});

    ctx.square(p6::BottomLeftCorner{1.f / static_cast<float>(size), 1.f / static_cast<float>(size)},
               p6::Radius{1.f / static_cast<float>(size)});
    // ###############################################################################

    ctx.fill = {p6::NamedColor::PurpleHeart};

    std::vector<glm::vec2> vec = {
        glm::vec2(-1.f, -1.f),
        glm::vec2(-1.f, 1.f / static_cast<float>(size)),
        glm::vec2(-1.f, -1.f / static_cast<float>(size)),
    };
    for (size_t x = 0; x < vec.size(); x++) {
        ctx.square(p6::BottomLeftCorner{vec[x]},
                   p6::Radius{1.f / static_cast<float>(size)});
    }
}

void noughts_and_crosses()
{
    auto ctx   = p6::Context{{720, 720, "Noughts and Crosses"}};
    ctx.update = [&]() {
        ctx.background({p6::hex(0xFFFFFF)});
        ctx.stroke = {p6::hex(0xFFFFFF)};
        // ctx.fill   = {p6::NamedColor::PurpleHeart};
        draw_board(3, ctx);
    };
    ctx.start();
}
