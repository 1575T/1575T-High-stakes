#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/adi.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');

inline pros::Motor fishtail(-13);

inline pros::ADIPneumatics mogo_clamp('A',false);

inline pros::ADIPneumatics doinker('B',true);

inline pros::Motor first_intake(-21);

inline pros::Motor second_intake(-2);
