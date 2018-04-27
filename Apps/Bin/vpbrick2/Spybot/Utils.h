//Utils.h
//Spybot ROM utility subroutines & parameters

//This header gives access to utility subroutines in the Spybot ROM, for use 
//in stand-alone Spybot programs that do not wish make use of the ROM engine.
//
//DO NOT USE with Globals.h or any other Spybot mission header
//
//May be used with Spybot.h
//
///////////////////////////////////////

	sub Disp = 42					//Disp(nDisplay)

	sub BasicMove = 43				//BasicMove(nMove, nTime)
		const cBasicMove = 0x0100
		const cRandomMove = 0x0200
		const cFancyMove = 0x0300
		const cSlowDownMove = 0x0400
		const cSpeedUpMove = 0x0500

		const cMoveMask = 0x00ff
		const cMoveTypeMask = 0xff00

		const moveNone = -1
		const moveForward = cBasicMove + 1
		const moveBackward = cBasicMove + 2
		const moveSpinLeft = cBasicMove + 3
		const moveSpinRight = cBasicMove + 4
		const moveTurnLeft = cBasicMove + 5
		const moveTurnRight = cBasicMove + 6
		const moveAvoidLeft = cBasicMove + 7
		const moveAvoidRight = cBasicMove + 8
		const moveRest = cBasicMove + 9
		const moveStop = cBasicMove + 10

		const moveRandomForward = cRandomMove + 1
		const moveRandomBackward = cRandomMove + 2
		const moveRandomSpinLeft = cRandomMove + 3
		const moveRandomSpinRight = cRandomMove + 4
		const moveRandomTurnLeft = cRandomMove + 5
		const moveRandomTurnRight = cRandomMove + 6
		const moveRandomRest = cRandomMove + 7

		const moveZigZag = cFancyMove + 1
		const moveShake = cFancyMove + 2
		const moveScan = cFancyMove + 3
		const moveStep = cFancyMove + 4
		const moveStepBack = cFancyMove + 5
		const moveSearch = cFancyMove + 6
		const moveFakeLeft = cFancyMove + 7
		const moveFakeRight = cFancyMove + 8
		const moveBugForward = cFancyMove + 9
		const moveLazy = cFancyMove + 10
		const moveWalk = cFancyMove + 11
		const moveWalkBack = cFancyMove + 12
		const moveDance = cFancyMove + 13

		const moveForwardSlowDown = cSlowDownMove + 1
		const moveBackwardSlowDown = cSlowDownMove + 2
		const moveSpinLeftSlowDown = cSlowDownMove + 3
		const moveSpinRightSlowDown = cSlowDownMove + 4

		const moveForwardSpeedUp = cSpeedUpMove + 1
		const moveBackwardSpeedUp = cSpeedUpMove + 2
		const moveSpinLeftSpeedUp = cSpeedUpMove + 3
		const moveSpinRightSpeedUp = cSpeedUpMove + 4

	sub Action = 44					//Action(nSound, nDisplay, nMovement, nRepeat, nTime)

	sub RandomMove = 46				//RandomMove(nMove, nTime)

	sub FancyMove = 47				//FancyMove(nMove, nTime)

	sub SlowDownMove = 48			//SlowDownMove(nMove, nTime)

	sub SpeedUpMove = 49			//SpeedUpMove(nMove, nTime)

	sub Sum2Mem = 50				//Sum2Mem(nMem, nValue)

	sub Sum4Mem = 51				//Sum4Mem(nMem, nValue)

//end of Utils.h
