//ScoutMLT.h - Scout macro lookup table
//////////////////////////////////////////

macro bb_Forward(nLeft, nRight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subFwd(nTime)
}


macro bb_TurnLeft(nLeft, nRight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subFwdTurnLeft(nTime)
}


macro bb_TurnRight(nLeft, nRight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subFwdTurnRight(nTime)
}


macro bb_Backward(nLeft, nRight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subRwd(nTime)
}


macro bb_SpinLeft(nLeft, nRight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subSpinLeft(nTime)
}


macro bb_SpinRight(nLeft, nRight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subSpinRight(nTime)
}


macro bb_ZigZag(nLeft, nRight, nRepeat, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subZigZag(nRepeat,nTime)
}


macro bb_Shake(nLeft, nRight, nRepeat, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	assert(nRepeat = 5)
	subMovement(mov_Dance,nTime)
}


macro bb_Dance(nLeft, nRight, nRepeat, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	assert(nRepeat = 5)
	subMovement(mov_Bug,nTime)
}


macro bb_Bug(nLeft, nRight, nRepeat, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	assert(nRepeat = 5)
	subMovement(mov_Bug,nTime)
}


macro bb_RandomMove(nLeft, nRight, nRepeat, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	assert(nRepeat = 3)
	subMovement(mov_Robo,nTime)
}


macro bb_CircleLeft(nLeft, nRight, nRepeat, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	assert(nRepeat = 3)
	repeat nRepeat {
		subBasicMotion(bm_CircleLeft,nTime)
	}
}


macro bb_CircleRight(nLeft, nRight, nRepeat, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	assert(nRepeat = 3)
	repeat nRepeat {
		subBasicMotion(bm_CircleRight,nTime)
	}
}


macro bb_PointToLight(nLeft, nRight, nLight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	assert(nLight = 3)
	subSeek(seek_Light,nTime)
}


macro bb_PointToDark(nLeft, nRight, nLight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	assert(nLight = 3)
	subSeek(seek_Dark,nTime)
}


macro bb_AvoidLeft(nLeft, nRight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subAvoidLeft(nTime)
}


macro bb_AvoidRight(nLeft, nRight, nTime) {
	assert(nLeft = 1)
	assert(nRight = 2)
	subAvoidRight(nTime)
}


//TODO: bb_Flip

//////////////////////////////////////////
//back & forth (single motor drive) macros

macro bb_bf_Forward(nMotor, nTime) {
	dir [nMotor] [ ]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_bf_Backward(nMotor, nTime) {
	dir [] [nMotor]
	on nMotor
	wait nTime
	float nMotor
}


macro bb_bf_Shake(nMotor, nRepeat, nTime) {
	dir [nMotor] [ ]
	on nMotor
	repeat nRepeat {
		wait nTime
		reverse nMotor
	}
	float nMotor
}


macro bb_bf_RandomMove(nMotor, nRepeat, nTime) {
	local lvRandom

	repeat nRepeat {
		lvRandom = random 100
		if lvRandom < 50 {
			lvRandom = random 100
			if lvRandom < 50 {
				dir [nMotor] [ ]
			}
			else {
				dir [ ] [nMotor]
			}
			on nMotor
		}
		else {
			off nMotor
		}
		wait nTime * random 16 to 40
	}
	float nMotor
}

