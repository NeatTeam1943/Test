// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once
#include <frc/motorcontrol/VictorSP.h>
#include <frc2/command/SubsystemBase.h>
#include "Constants.h"
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>

class Chassis : public frc2::SubsystemBase
{
public:
  Chassis();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  void ArcadeDrive(double xSpeed, double zRotation, bool squareInputs);

private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

  frc::VictorSP m_leftMotor1{chassis::kLeftMotorPort1};
  frc::VictorSP m_leftMotor2{chassis::kLeftMotorPort2};
  frc::VictorSP m_rightMotor1{chassis::kRightMotorPort1};
  frc::VictorSP m_rightMotor2{chassis::kRightMotorPort2};

  frc::MotorControllerGroup m_left{m_leftMotor1, m_leftMotor2};
  frc::MotorControllerGroup m_right{m_rightMotor1, m_rightMotor2};

  frc::DifferentialDrive m_drive{m_left, m_right};

  // m_memberName
  // kConstName
  // FunctionOrClass
};
