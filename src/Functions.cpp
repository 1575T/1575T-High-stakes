#include "main.h"
#include "subsystems.hpp"

void intake_move()
{
    first_intake.move(127);
    second_intake.move(127);
}

void intake_stop()
{
first_intake.move(0);
second_intake.move(0);
}

void intake_rev()
{
    first_intake.move(-127);
    second_intake.move(-127);
}

void doinker_rev()
{
    doinker.toggle();
}