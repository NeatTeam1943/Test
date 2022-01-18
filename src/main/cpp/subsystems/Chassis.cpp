// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Chassis.h"

Chassis::Chassis(){
    this->m_leftMotor1.SetInverted(true);
    this->m_leftMotor2.SetInverted(true);
}

// This method will be called once per scheduler run
void Chassis::Periodic() {}

void Chassis::ArcadeDrive(double xSpeed, double zRotation, bool squareInputs = true)
{
    this->m_drive.ArcadeDrive(xSpeed, zRotation, squareInputs);
}