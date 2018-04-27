//scout.h

//output ports
  output A on 1
  output B on 2
  output C on 3

//ROM subroutines & parameter constants
//  (all parameters [in] only, except for GetAverageLight & GetMotorStatus)

  sub subMotorDrive = 3			// MotorDrive(nMotors)
	const md_AFwd_BFwd = 0
	const md_ARwd_BRwd = 1
	const md_AFwd_BRwd = 2
	const md_ARwd_BFwd = 3
	const md_AFwd_BOff = 4
	const md_ARwd_BOff = 5
	const md_AOff_BFwd = 6
	const md_AOff_BRwd = 7
	const md_AOff_BOff = 8
	const md_CFwd = 9
	const md_CRwd = 10
	const md_COff = 11

  sub subBasicMotion = 4		// BasicMotion(nMotion, nTime)
	const bm_Forward = 1
	const bm_ZigZag = 2
	const bm_CircleRight = 3
	const bm_CircleLeft = 4
	const bm_LoopA = 5
	const bm_LoopB = 6
	const bm_LoopAB = 7

  sub subAvoid = 5				// Avoid(nAvoid, nTime)
	const avoid_Left = 0
	const avoid_Right = 1

  sub subMovement = 6			// Movement(nMovement, nTime)
	const mov_Dance = 0
	const mov_Bug = 1
	const mov_Robo = 2
	const mov_LasVegas = 3

  sub subGetAverageLight = 7	// GetAverageLight([out] nAverage)
  sub subAutoAdjustLight = 8	// AutoAdjustLight(nCenter, nThreshold, nHysteresis)

  sub subSeek = 9				// Seek(nSeek, nTime)
	const seek_Dark = 0
	const seek_Light = 1

  sub subFindBright = 10		// FindBright(nLimit, nSamples)

  sub subGetMotorStatus = 11	// GetMotorStatus([out] nMotor1Status, [out] nMotor2Status)
  sub subMotor2Sound = 12		// Motor2Sound(nMotor1Status, nMotor2Status)
    const motor_off = 0
	const motor_fwd = 1
	const motor_rwd = 2

  sub subLightGeiger = 13		// LightGeiger(nLimit)
  sub subFwd = 14				// Fwd(nTime)
  sub subRwd = 15				// Rwd(nTime)
  sub subSpinRight = 16			// SpinRight(nTime)
  sub subSpinLeft = 17			// SpinLeft(nTime)
  sub subFwdTurnRight = 18		// FwdTurnRight(nTime)
  sub subRwdTurnLeft = 19		// RwdTurnRight(nTime)
  sub subFwdTurnLeft = 20		// FwdTurnLeft(nTime)
  sub subRwdTurnRight = 21		// RwdTurnRight(nTime)
  sub subZigZag = 22			// ZigZag(nSteps, nTime)
  sub subCircleRight = 23		// CircleRight(nSteps, nTime)
  sub subCircleLeft = 24		// CircleLeft(nSteps, nTime)
  sub subAvoidRight = 25		// AvoidRight(nWait)
  sub subAvoidLeft = 26			// AvoidLeft(nWait)
  sub subBugShake = 27			// BugShake(nWait)
  sub subLoopAB = 28			// LoopAB(nWait)
  sub subGetSemaphore = 29		// GetSemaphore(nSemaphore)
  sub subInitSystem = 32		// InitSystem()

//sound sets: "sound = <ss>"
  const ssBasic = 1
  const ssBug = 2
  const ssAlarm = 3
  const ssRobo = 4
  const ssScience = 5

//system sounds:
  const sClick = 1
  const sBeep = 2
  const sSweepDown = 3
  const sSweepUp = 4
  const sError = 5
  const sSweepFast = 6
  const sRemote = 7
  const sTBD1 = 8
  const sTBD2 = 9
  const sNone = 10
  const sLeftPressed = 11
  const sLeftReleased = 12
  const sRightPressed = 13
  const sRightReleased = 14
  const sBright = 15
  const sNormal = 16
  const sDark = 17
  const sBlink1 = 18
  const sBlink2 = 19
  const sCounter0 = 20
  const sCounter1 = 21
  const sTimer0 = 22
  const sTimer1 = 23
  const sTimer2 = 24
  const sMessage = 25
  const sSpecial1 = 26
  const sSpecial2 = 27
  const sSpecial3 = 28

//end of Scout.h
