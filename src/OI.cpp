// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"

#include "Commands/ConveyorStopperOn.h"
#include "Commands/autoShoot.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/ArmOff.h"
#include "Commands/ArmOn.h"
#include "Commands/ArmReverse.h"
#include "Commands/AutoShoot.h"
#include "Commands/AutonomousCommands.h"
#include "Commands/ConveyorOff.h"
#include "Commands/ConveyorOn.h"
#include "Commands/ConveyorReverse.h"
#include "Commands/ConveyorStopperOn.h"
#include "Commands/Delay.h"
#include "Commands/IntakeOff.h"
#include "Commands/IntakeOn.h"
#include "Commands/IntakeReverse.h"
#include "Commands/IntakeSwitch.h"
#include "Commands/SensorsDetectFrisbee.h"
#include "Commands/Shift.h"
#include "Commands/ShooterOff.h"
#include "Commands/ShooterOn.h"
#include "Commands/StopperSwitch.h"
#include "Commands/TankDrive.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	coDriver = new Joystick(1);
	
	cLeftBumper = new JoystickButton(coDriver, 5);
	cLeftBumper->WhenReleased(new IntakeSwitch());
	cButtonBack = new JoystickButton(coDriver, 7);
	cButtonBack->WhileHeld(new IntakeReverse());
	cButtonStart = new JoystickButton(coDriver, 8);
	cButtonStart->WhileHeld(new ConveyorReverse());
	cRightBumper = new JoystickButton(coDriver, 6);
	cRightBumper->WhileHeld(new ShooterOn());
	cButtonY = new JoystickButton(coDriver, 4);
	cButtonY->WhileHeld(new ArmOn());
	cButtonB = new JoystickButton(coDriver, 2);
	cButtonB->WhileHeld(new ArmReverse());
	driver = new Joystick(0);
	
	dLeftStick = new JoystickButton(driver, 9);
	dLeftStick->WhenReleased(new Shift());
	dRightBumper = new JoystickButton(driver, 6);
	dRightBumper->WhileHeld(new ShooterOn());
	dButtonX = new JoystickButton(driver, 3);
	dButtonX->WhileHeld(new ConveyorOn());
	dButtonA = new JoystickButton(driver, 1);
	dButtonA->WhileHeld(new IntakeOn());
	dButtonY = new JoystickButton(driver, 4);
	dButtonY->WhileHeld(new ArmOn());
	dButtonB = new JoystickButton(driver, 2);
	dButtonB->WhileHeld(new ArmReverse());
	dRightStick = new JoystickButton(driver, 10);
	dRightStick->WhenReleased(new StopperSwitch());
	dButtonBack = new JoystickButton(driver, 7);
	dButtonBack->WhileHeld(new IntakeReverse());
	dButtonStart = new JoystickButton(driver, 8);
	dButtonStart->WhileHeld(new ConveyorReverse());
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("ArmOff", new ArmOff());

	SmartDashboard::PutData("ArmOn", new ArmOn());

	SmartDashboard::PutData("ArmReverse", new ArmReverse());

	SmartDashboard::PutData("AutonomousCommands", new AutonomousCommands());

	SmartDashboard::PutData("AutoShoot", new AutoShoot());

	SmartDashboard::PutData("ConveyorOff", new ConveyorOff());

	SmartDashboard::PutData("ConveyorOn", new ConveyorOn());

	SmartDashboard::PutData("ConveyorReverse", new ConveyorReverse());

	SmartDashboard::PutData("ConveyorStopperOn", new ConveyorStopperOn());

	SmartDashboard::PutData("Delay", new Delay());

	SmartDashboard::PutData("IntakeOff", new IntakeOff());

	SmartDashboard::PutData("IntakeOn", new IntakeOn());

	SmartDashboard::PutData("IntakeReverse", new IntakeReverse());

	SmartDashboard::PutData("IntakeSwitch", new IntakeSwitch());

	SmartDashboard::PutData("SensorsDetectFrisbee", new SensorsDetectFrisbee());

	SmartDashboard::PutData("Shift", new Shift());

	SmartDashboard::PutData("ShooterOff", new ShooterOff());

	SmartDashboard::PutData("ShooterOn", new ShooterOn());

	SmartDashboard::PutData("StopperSwitch", new StopperSwitch());

	SmartDashboard::PutData("TankDrive", new TankDrive());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getcoDriver() {
	return coDriver;
}

Joystick* OI::getdriver() {
	return driver;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
