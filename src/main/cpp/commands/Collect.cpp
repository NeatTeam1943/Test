// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Collect.h"

Collect::Collect(Collecting *collectong) : m_collectong{collectong}
{
  // Use addRequirements() here to declare subsystem dependencies.
  // this->m_collectong = collectong;
}

// Called when the command is initially scheduled.
void Collect::Initialize()
{
  this->m_collectong->Move(0);
}

// Called repeatedly when this Command is scheduled to run][]
void Collect::Execute()
{
  this->m_collectong->Move(collecting::kPooooooooooooower);
}

// Called once the command ends or is interrupted.
void Collect::End(bool interrupted)
{
  this->m_collectong->Move(0);
}

// Returns true when the command should end.
bool Collect::IsFinished()
{
  return false;
}
