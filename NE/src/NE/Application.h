#pragma once

#include "Core.h"

namespace NE {
    class NE_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    // To be defined in CLIENT
    Application* CreateApplication();

}
