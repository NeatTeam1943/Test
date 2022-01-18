// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include "Constants.h"
#include <frc/motorcontrol/VictorSP.h>

class Collecting : public frc2::SubsystemBase
{
public:
  Collecting();

  void Periodic() override;

  void Move(double power);

private:
  frc::VictorSP m_motor{collecting::kMotorPort};
};
