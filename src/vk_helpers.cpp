#include <vk_helpers.h>

const char* SDL_EventTypeToString(Uint32 type)
{
    switch (type) {
        case SDL_QUIT:
            return "SDL_QUIT";
        case SDL_WINDOWEVENT:
            return "SDL_WINDOWEVENT";
        case SDL_KEYDOWN:
            return "SDL_KEYDOWN";
        case SDL_KEYUP:
            return "SDL_KEYUP";
        case SDL_MOUSEMOTION:
            return "SDL_MOUSEMOTION";
        case SDL_MOUSEBUTTONDOWN:
            return "SDL_MOUSEBUTTONDOWN";
        case SDL_MOUSEBUTTONUP:
            return "SDL_MOUSEBUTTONUP";
        case SDL_MOUSEWHEEL:
            return "SDL_MOUSEWHEEL";
        default:
            return "UNKNOWN_EVENT";
    }
}