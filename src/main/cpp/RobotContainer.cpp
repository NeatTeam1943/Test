// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

RobotContainer::RobotContainer() {
  // Initialize all of your commands and subsystems here
this->m_chassis.SetDefaultCommand(frc2::RunCommand([this] {
  double power = this->m_controller.GetLeftY();
  if (power < 0.1 && power > -0.1)
    power = 0;
  this->m_chassis.ArcadeDrive(
    power,
    -this->m_controller.GetLeftX(),
    !this->m_controller.GetLeftStickButton()
  );
}, {&this->m_chassis}));

  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  m_aButton.WhileHeld(m_collect);
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return nullptr;
}
