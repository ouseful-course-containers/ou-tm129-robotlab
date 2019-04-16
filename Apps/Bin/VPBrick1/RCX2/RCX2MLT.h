//RCX2MLT.h - RCX2 macro lookup table
//////////////////////////////////////////
//Last edit: 10/04/00
//
//////////////////////////////////////////
//Global initialisation

macro bbs_GlobalReset(nMotors) {
	off nMotors
	dir nMotors [ ]
	power nMotors 8

	global on nMotors
	global dir nMotors [ ]
	global power nMotors 8

	sound on  //not a small block
	clear message
	randomize  //not a small block
}

//////////////////////////////////////////
//Special macros

macro bb_PlayNote(nFreq, nTime, nPause) {
	tone nFreq for nTime
	wait nPause
}


macro bb_MotorControl(nForward, nBackward, nMotors, nTime) {
	dir nForward nBackward
	on nMotors
	wait nTime
	float nMotors
}


macro bb_Stop(nMotors) {
	off nMotors
}


//////////////////////////////////////////
//Two motor macros

macro bb_Forward(nLeft, nRight, nTime) {
	dir [nLeft nRight] [ ]
	on [nLeft nRight]
	wait nTime
	float [nLeft nRight]
}


macro bb_TurnLeft(nLeft, nRight, nTime) {
	dir [nLeft nRight] [ ]
	off nLeft
	on nRight 
	wait nTime
	float [nLeft nRight]
}


macro bb_TurnRight(nLeft, nRight, nTime) {
	dir [nLeft nRight] [ ]
	off nRight
	on nLeft
	wait nTime
	float [nLeft nRight]
}


macro bb_Backward(nLeft, nRight, nTime) {
	dir [ ] [nLeft nRight]
	on [nLeft nRight]
	wait nTime
	float [nLeft nRight]
}


macro bb_SpinLeft(nLeft, nRight, nTime) {
	dir nRight nLeft
	on [nLeft nRight]
	wait nTime
	float [nLeft nRight]
}


macro bb_SpinRight(nLeft, nRight, nTime) {
	dir nLeft nRight
	on [nLeft nRight]
	wait nTime
	float [nLeft nRight]
}


macro bb_ZigZag(nLeft, nRight, nRepeat, nTime) {
	dir [nLeft nRight] [ ]
	repeat nRepeat {
		on nLeft for nTime
		on nRight for nTime
	}
	float [nLeft nRight]
}


macro bb_Shake(nLeft, nRight, nRepeat, nTime) {
	repeat nRepeat {
		dir [nRight] [nLeft]
		on [nRight nLeft]
		wait nTime
		dir [nLeft] [nRight]
		on [nRight nLeft]
		wait nTime
	}
	float [nLeft nRight]
}


macro bb_RandomMove(nLeft, nRight, nTime, vRandomMove) {
//declare vRandomMove as a local or global
	vRandomMove = random 1 to 4
	if vRandomMove > 2 {
		if vRandomMove > 3 {
			dir [nRight] [nLeft]
		} else {
			dir [nLeft] [nRight]
		}
		on nLeft
	} else {
		if vRandomMove = 2 {
			dir [nLeft] [nRight]
		} else {
			dir [nRight] [nLeft]
		}
		on nRight
	}

	wait nTime
	float [nLeft nRight]
}


macro bb_Dance(nLeft, nRight, nRepeat, nTime) {
	repeat nRepeat {
		dir [nLeft nRight] [ ]
		on [nLeft nRight]
		wait nTime
		dir [] [nLeft nRight]
		wait nTime
		wait nTime
		dir [nLeft nRight] [ ]
		wait nTime
		wait nTime
		dir [ ] [nLeft nRight]
		wait nTime

		dir [nLeft] [nRight]
		wait nTime
		dir [nRight] [nLeft]
		wait nTime
		wait nTime
		dir [nLeft] [nRight]
		wait nTime
		wait nTime
		dir [nRight] [nLeft]
		wait nTime
		off [nLeft nRight]
	}
}


macro bb_PointToLight(nLeft, nRight, nLight, nTime, vStep, vPeakStep, vOldLight, vNewLight) {
//declare vStep, vPeakStep, vOldLight & vNewLight as locals or globals
	vStep = 20
	vPeakStep = 20
	dir nRight nLeft
	wait 60
	vOldLight = nLight
	on [nLeft nRight]
	repeat 20 {
		vStep -= 1
		sound 1
		wait nTime
		vNewLight = nLight
		if vNewLight > vOldLight {
			vOldLight = vNewLight
			vPeakStep = vStep
		}
	}

	off [nLeft nRight]
	dir nLeft nRight
	wait 60
	on [nLeft nRight]
	repeat vPeakStep {
		sound 1
		wait nTime
	}
	off [nLeft nRight]
	wait 60
}


macro bb_PointToDark(nLeft, nRight, nLight, nTime, vStep, vPeakStep, vOldLight, vNewLight) {
//declare vStep, vPeakStep, vOldLight & vNewLight as locals or globals
	vStep = 20
	vPeakStep = 20
	dir nRight nLeft
	wait 60
	vOldLight = nLight
	on [nLeft nRight]
	repeat 20 {
		vStep -= 1
		sound 1
		wait nTime
		vNewLight = nLight
		if vNewLight < vOldLight {
			vOldLight = vNewLight
			vPeakStep = vStep
		}
	}

	off [nLeft nRight]
	dir nLeft nRight
	wait 60
	on [nLeft nRight]
	repeat vPeakStep {
		sound 1
		wait nTime
	}
	off [nLeft nRight]
	wait 60
}


//////////////////////////////////////////
//Pro-challenge & Inventorbot (single motor) macros

//Inventorbot

macro bb_MoveArm(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor for nTime
}


macro bb_RotateLeft(nMotor, nTime) {
	dir [ ] [nMotor]
	on nMotor for nTime
}


macro bb_RotateRight(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor for nTime
}


//Fred

macro bb_RaiseGlasses(nMotor, nTime) {
	dir [ ] [nMotor]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_LowerGlasses(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor
	wait nTime
	float nMotor
}


//Robotic Arm

macro bb_RaiseArm(nMotor, nTime) {
	dir [ ] [nMotor]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_LowerArm(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor
	wait nTime
	float nMotor
}


//Safe/vault

macro bb_OpenDoor(nMotor, nTime) {
	dir [ ] [nMotor]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_CloseDoor(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_TrayIn(nMotor, nTime) {
	dir [ ] [nMotor]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_TrayOut(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor
	wait nTime
	float nMotor
}


//Candy sorter

macro bb_Dispense(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_DropOff(nMotor, nTime) {
	dir [ ] [nMotor]
	on nMotor
	wait nTime
	float nMotor
}


//DeliveryBot

macro bb_GoForward(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_BackTurn(nMotor, nTime) {
	dir [ ] [nMotor]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_Load(nMotor, nTime) {
	dir [ ] [nMotor]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_Unload(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor
	wait nTime
	float nMotor
}

