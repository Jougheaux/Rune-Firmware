#pragma once
#include <stdint.h>

enum wheelState_t {
    IDLE,
    ACCELERATING,
    STEADY,
    SLOWING,
    PREREV
};

enum pusherState_t {
    RUNNING,
    STOPPED
};

enum pusherSafetyTimeout_t {
    WAITING,
    NONE
};