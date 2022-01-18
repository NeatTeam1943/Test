// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Collecting.h"

Collecting::Collecting(){
    this->m_motor.SetInverted(true);
};

// This method will be called once per scheduler run
void Collecting::Periodic() {}

void Collecting::Move(double power)
{
    this->m_motor.Set(power);
}