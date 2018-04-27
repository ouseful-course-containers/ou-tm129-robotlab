//Globals.h
//constants, vars, timers, counters, subs & parameters


	const cSystemSerialNumber = 267


//standard metabolic variable limits
	const cMax = 1000
	const cMin = 0


//globals
	var nGotoSemaphore
	const cMaxGotoSemaphoreRetries = 50  //approx. 25 seconds

	var nGotoState
	var nState
		const cGameOverState = -1
		const cOutOfGameState = -2
		const cStartState = 0

	const cStartBlinkRate = 1600  //mS

	var nZone
		const cOuter = cAnywhere
		const cMiddle = cThere
		const cInner = cHere
		const cContact = cHere + 1


//game & state watchers
	var nGameWatchers
	counter nGameWatcher

	var nStateWatchers
	counter nStateWatcher


//ping[iInfo]
	//bits 0 & 1 game state, bits 2-4 mode (0-7), bits 5-7 state (0-7)
	const cPingGameMask = 0x03
		const cPingNotPlayingGame	= 0x00
		const cPingPlayingGame		= 0x01
		const cPingWonGame			= 0x02
		const cPingLostGame			= 0x03

	const cPingModeMask = 0x1c
	const cPingMode = 0x04

	const cPingStateMask = 0xe0
	const cPingState = 0x20


//end game
	var nEndGame  //BUG in engine/PBGameInfo - always = cContinueGame
		const cContinueGame		= 0x0000
		const cAllBotsLost		= 0x0001
		const cAnotherBotWon	= 0x0002

	timer tGameTimer
	timer tStateTimer


//global speed (see SetMaxPower)
	var nSpeed  //cSlowSpeed..cFastSpeed
		const cFastSpeed = 3
		const cNormalSpeed = 2
		const cSlowSpeed = 1


//BioClock
	timer tTickTimer
	counter nBioTick


//Watchers & tasks
	const cBumpWatcher = 1
	const cPowerUpTask = 2
	const cBuiltInPostWatcher = 3
	const cStateBeadTask = cBuiltInPostWatcher + 8
	const cWorldWatcher = 4
	const cBuiltInBumpWatcher = 5
	const cControllerTask = 7


//Watcher & task priorities
	const cBumpPriority = 2
	const cMainTaskPriority = 3
	const cControllerTaskPriority = 4
	const cStateBeadTaskPriority = 5
	const cWorldWatcherPriority = 6
	const cMainTaskDisplayPriority = 7


//Bead control, status & flags
	var nStatus
	var nEvents
		const cMainTaskBead			= 0x0001  //task 0 & 8 (main)
		const cBumpTaskBead			= 0x0002  //task 1 (cBumpWatcher)
		const cStateTaskBead		= 0x0004  //task 3 & 11 (cStateBeadTask)
		const cControllerTaskBead	= 0x0008  //task 7 (cControllerMessage)
		const cTickEvent			= 0x0010
		const cWorldEvent			= 0x0020
		const cTargetEvent			= 0x0040
		const cPostEvent			= 0x0080
		const cLockTarget			= 0x0100
		const cRunBeads				= 0x0200
		const cExtStateValue		= 0x0400
		const cEventSounds			= 0x0800
		const cBumpEvent			= 0x1000
		const cBlinkEvent			= 0x2000
		const cDisplayAction		= 0x4000
		const cSuspendStateBeads	= 0x8000

		const cWorldEventsMask		= cTargetEvent + cWorldEvent

		const cMaxStopStateBeadTaskRetries = 500


//opto sensor calibration
	var nCalibratedLight


//Message buffer
	var nMessageSemaphore
	const cMaxMessageSemaphoreRetries = 20  //approx. 10 seconds

	var nMessage  //bits 0-7 command, bits 8-15 index
	var nMessageValue  //bits 0-7 loByte, bits 8-15 hiByte

	const cMessageCommandMask = 0x00ff
	const cMessageIndex = 0x0100

	var nControllerButton


//Tokens
	var nActiveToken
	var nMessageToken

	//nActiveToken: time (0-255) bits 0-7, token type (1-255) bits 8-15
	const cTokenTimeMask = 0x00ff
	const cTokenTypeMask = 0xff00
	const cTokenType = 0x0100

	const cNoToken = 0

	//timed tokens
		const cShieldsToken		= 1 * cTokenType
		const cReflectToken		= 2 * cTokenType
		const cMagnetToken		= 3 * cTokenType
		const cCloakToken		= 4 * cTokenType
		const cQuadDamageToken	= 5 * cTokenType
		const cRepulseToken		= 6 * cTokenType
		const cFlashBlindToken	= 7 * cTokenType

	//speed & motor control tokens
		const cTurboToken		= 16 * cTokenType
		const cFreezeToken		= 17 * cTokenType
		const cSlowToken		= 18 * cTokenType
		const cReverseToken		= 19 * cTokenType
		const cDizzyToken		= 20 * cTokenType

		const cMindControl		= 21 * cTokenType
		const cMindControlLink1	= 22 * cTokenType
		const cMindControlLink2	= 23 * cTokenType
		const cMindControlLink3	= 24 * cTokenType

	//one-shot tokens
		const cBoostToken		= 32 * cTokenType

		const cUserToken		= 64 * cTokenType
	//..reserved
		const cExtraTokens		= 128 * cTokenType

	//nToken table entries: count (0-63) bits 0-5, bead index (1-1023) bits 6-15
	const cTokenCountMask = 0x003f
	const cTokenBeadMask = 0xffc0
	const cTokenBead = 0x0040


//Target
	var nTargetType
	var nStateTargetType
		const cStateTarget		= -1
		const cNothing			= 0
		const cAnything			= 1
		const cAnyController	= 2
		const cAnyBot			= 3
		const cMyController		= 4
		const cNotMyController	= 5

		const cTargetID			= 12  //ID is hi byte of nTargetType
		const cTargetTeamID		= 13  //ID is hi byte of nTargetType
		const cTargetNote		= 14  //iNote is hi byte of nTargetType


//sound effects (0 to 63)
	const sndNone = -1

	const sndKeyPressSound		= 0
	const sndPowerOn			= 1
	const sndSweepDown			= 2
	const sndSweepUp			= 3
	const sndBuh				= 4
	const sndHurrah				= 5

	const sndShocked			= 6
	const sndFireLaser			= 7
	const sndFireElectroNet		= 8
	const sndFireSpinner		= 9
	const sndHitByLaser			= 10
	const sndHitByElectroNet	= 11
	const sndHitBySpinner		= 12

	const sndTag				= 13
	const sndCrash				= 14
	const sndFight				= 15
	const sndGotIt				= 16
	const sndGeneralAlert		= 17
	const sndOutOfEnergyAlert	= 18
	const sndLowEnergyAlert		= 19
	const sndScoreAlert			= 20
	const sndTimeAlert			= 21
	const sndProximityAlert		= 22
	const sndDangerAlert		= 23
	const sndBombAlert			= 24

	const sndFinalCountdown		= 25
	const sndTickTock			= 26
	const sndGoto				= 27
	const sndScan				= 28
	const sndPointTo			= 29

	const sndActivateShields	= 30	//0.75 seconds
	const sndActivateReflect	= 31	//0.79 seconds
	const sndActivateCloak		= 32	//1.81 seconds
	const sndActivateFlashBlind	= 33	//0.95 seconds

	const sndMagnet				= 34	//5.88 seconds
	const sndQuadDamage			= 35	//2.26 seconds
	const sndRepulse			= 36	//5.2 seconds
	const sndTurbo				= 37	//2.4 seconds
	const sndFreeze				= 38	//4.8 seconds
	const sndSlow				= 39	//2.9 seconds
	const sndReverse			= 40	//4.9 seconds
	const sndDizzy				= 41	//5.4 seconds
	const sndBoost				= 42	//2.28 seconds

	const sndDeactivateShields	= 43	//1.05 seconds
	const sndDeactivateReflect	= 44	//0.3 seconds
	const sndDeactivateCloak	= 45	//1.1 seconds

	const sndReflect			= 46
	const sndExplosion			= 47
	const sndBigExplosion		= 48
	const sndPlaceBomb			= 49
	const sndHitByWind			= 50

	const sndOuch				= 51
	const sndGeiger				= 52
	const sndWhistle			= 53

	const sndImIt				= 54
	const sndHelp				= 55
	const sndSiren				= 56
	const sndBurnt				= 57
	const sndGrinded			= 58
	const sndSmacked			= 59
	const sndTrillUp			= 60
	const sndTrillDown			= 61
	const sndYell				= 62
	const sndWhisper			= 63


//sounds in e2prom
	const sndSpeciesStart		= 64
	const sndWin				= 65
	const sndLose				= 66
	const sndOutOfGame			= 67
	const sndMissionStart		= 68

	const sndMission1			= 69
	const sndMission2			= 70
	const sndMission3			= 71
	const sndMission4			= 72
	const sndMission5			= 73

	const sndUser1				= 74
	const sndUser2				= 75
	const sndUser3				= 76
	const sndUser4				= 77
	const sndUser5				= 78
	const sndUser6				= 79


//alert sound (used by Alert_Bead)
	var nAlert
	const cNoAlert = -1


//LED display effects (0 to 7)
	const ledNone			= -1
	const ledScan			= 0
	const ledSparkle		= 1
	const ledFlash			= 2
	const ledRedToGreen		= 3
	const ledGreenToRed		= 4
	const ledPointForward	= 5
	const ledAlarm			= 6
	const ledThinking		= 7


//LED display effects in e2prom
	const ledMission1		= 8
	const ledMission2		= 9

	const ledUser1			= 10
	const ledUser2			= 11
	const ledUser3			= 12
	const ledUser4			= 13
	const ledUser5			= 14
	const ledUser6			= 15


//display mode
	var nDisplayMode
		const cDisplayState = 1
		const cDisplayRandom = 2
		const cDisplayNothing = 3

		const cDisplayVars = 0x10
			const cDisplayOneVar = cDisplayVars + 1
			const cDisplayTwoVar = cDisplayVars + 2
			const cDisplayGameTimeRemaining = cDisplayVars + 3

		const cDisplayTarget = 0x20
			const cDisplayRadar = cDisplayTarget + 1
			const cDisplayProximity = cDisplayTarget + 2

		const cDisplayAnimation = 0x30  //uses 0x30 to 0x3f


//Most bots encountered during this game
	var nMaxBots	//BUG in engine/PBGameInfo - always 0


//Library subs & parameters 
//in Engine.h
	sub MainSub = 0
	sub CheckPost = 1
	sub GotoNewState = 2
	sub RequestGoto = 3				//RequestGoto(nNewState)
	sub GetGotoSemaphore = 4
	sub GetMessageSemaphore = 5
	sub StopStateBeadTask = 6
	sub StartStateBeadTask = 7		//StartStateBeadTask(nNewState, nNewZone)
	sub UpdateEndGame = 8			//DO NOT USE - BUG in engine/PBGameInfo
	sub CalibrateLight = 9			//CalibrateLight(nLight, nTimes)
	sub AdjustBlink = 10			//AdjustBlink(nLight, nThresholdPercent, nHysteresis, nTime)
	sub ResetEngine = 11
	sub GetStateValue = 12			//GetStateValue(nIndex, nValue)
	sub ResetMotors = 13
	sub SetMaxPower = 14
	sub SetPings = 15				//SetPings(nVisibility)
		const cStealthVisibility = 0
		const cLowVisibility = 1
		const cNormalVisibility = 2
		const cHighVisibility = 3
	sub SelectTarget = 16
	sub UpdateDisplayTarget = 17
	sub SetDisplay = 18				//SetDisplay(nMode)
	sub UpdateDisplayTick = 19
	sub ClearTokens = 20
	sub FindBeadToken = 21			//FindBeadToken(cTokenIndex, pToken, nValue)
	sub FindFreeToken = 22			//FindFreeToken(pToken)
	sub CheckTokenTick = 23
	function IsTokenActive = 24		//IsTokenActive(nTokenType)
	sub ActivateToken = 25			//ActivateToken(nTokenType)
	sub TokenTick = 26				//TokenTick(nTokenType)
	sub DeactivateToken = 27		//DeactivateToken(nTokenType)
	sub WriteToken = 28				//WriteToken(pToken, nValue)

//in Interaction.h:
	sub ProcessPostEvent = 32
	sub ResetMessages = 33
	sub SendMessage = 34			//SendMessage(nIndex, nCommand, nHiByte, nLoByte)
//	sub Spare = 35
	sub ProcessVLLEvent	= 36
	sub SendRCXMessage = 37			//SendRCXMessage(nMessage)
	sub SendAllRangeMessage = 38	//SendAllRangeMessage(nMessage, nData)
	sub ProcessBlinkEvent = 39

//in Utils.h:
	sub EnterBead = 40
	sub ExitBead = 41
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
//	sub Spare = 45
	sub RandomMove = 46				//RandomMove(nMove, nTime)
	sub FancyMove = 47				//FancyMove(nMove, nTime)
	sub SlowDownMove = 48			//SlowDownMove(nMove, nTime)
	sub SpeedUpMove = 49			//SpeedUpMove(nMove, nTime)
	sub Sum2Mem = 50				//Sum2Mem(nMem, nValue)
	sub Sum4Mem = 51				//Sum4Mem(nMem, nValue)

//in Beads.h:
	sub Action_Bead = 64			//Action_Bead(nSound, nDisplay, nMovement, nRepeat, nTime)
	sub Goto_Bead = 65				//Goto_Bead(nNewState)
	sub Send_Bead = 66				//Send_Bead(nTarget, nMessage, nHiByte, nLoByte)
	sub GameResult_Bead = 67		//GameResult_Bead(nPingGameResult)
	sub Fx_Bead = 68				//Fx_Bead(nFx, nTimes)
		const fxShudder = 0
		const fxShocked = 1
		const fxFireAtBot = 2
		const fxTwitter = 3
	sub VarOp_Bead = 69				//VarOp_Bead(pVar, nOperation, nValue)
		const varSet = 0
		const varInc = 1
		const varDec = 2
		const varMul = 3
		const varDiv = 4
		const varRnd = 5
	sub MemOp_Bead = 70				//MemOp_Bead(nMem, nOperation, nValue)
		const memSet = varSet
		const memInc = varInc
		const memDec = varDec
		const memMul = varMul
		const memDiv = varDiv
		const memRnd = varRnd
	sub MotorTick_Bead = 71			//MotorTick_Bead(pVar, nStep, cMotorOnThreshold)
	sub RestTick_Bead = 72			//RestTick_Bead(pVar, nStep)
	sub TimedToken_Bead = 73		//TimedToken_Bead(nTokenIndex, nTokenType, nMax, nTime)
	sub BoostToken_Bead = 74		//BoostToken_Bead(nTokenIndex, nMax, pVar, nBoost, nSound)
	sub TellToken_Bead = 75			//TellToken_Bead(nTokenIndex, nTarget, nMax, nMessage, nHiByte, nLoByte, nSound)
	sub OutOfGame_Bead = 76
	sub Fire_Bead = 77				//Fire_Bead(nMessage, nFireType, pVar, nCost, nStrength, nSound, nWait)
		const fireTypeAnywhere = 0
		const fireTypeThereWide = 1
		const fireTypeThereNarrow = 2
		const fireTypeHereWide = 3
		const fireTypeHereNarrow = 4
	sub CalibrateLight_Bead = 78	//CalibrateLight_Bead(nSamples)
	sub AdjustBlink_Bead = 79		//AdjustBlink_Bead(nLight, nThresholdPercent, nHysteresis, nTime)
	sub PointToLight_Bead = 80		//PointToLight_Bead(nSeek, nTime)
		const seekDark = 0
		const seekBright = 1
	sub PointToward_Bead = 81		//PointToward_Bead(nTimes)
	sub PointTo_Bead = 82			//PointTo_Bead(nTimes)
	sub TurnAway_Bead = 83			//TurnAway_Bead(nTimes)
	sub Advance_Bead = 84			//Advance_Bead(nExitZone, nTimes)
	sub Retreat_Bead = 85			//Retreat_Bead(nRetreatZone, nTimes)
	sub GetBehind_Bead = 86			//GetBehind_Bead(nExitZone, nTimes)
//	sub Spare = 86
	sub BasicMovement_Bead = 87		//BasicMovement_Bead(nMovement, nTime)
	sub Set_Bead = 88				//Set_Bead(nProperty, nValue)
		const setGameMode = 0
		const setSpeed = 1
		const setVisibility = 2
		const setTargetType = 3
		const setTargetTypeID = 4
		const setTargetTypeTeamID = 5
		const setTargetTypeNote = 6
		const setEnableStatus = 7
		const setDisableStatus = 8
		const setSuspendStateBeads = 9
		const setResumeStateBeads = 10
		const setDisplayMode = 11
		const setRCDisable = 12
		const setRCChannel = 13
		const setTargetNote = 14
	sub TwoTone_Bead = 89			//TwoTone_Bead(nHiTone, nLoTone, nTimes)
	sub Alert_Bead = 90				//Alert_Bead(nSndAlert, nTime, nBlinkRate)
	sub SlidingTone_Bead = 91		//SlidingTone_Bead(nTone, nStep, nTimes)
	sub Alarm_Bead = 92				//Alarm_Bead(nSound, nYellowWarn, nBlinkRate)
	sub PlayTone_Bead = 93			//PlayTone_Bead(nTone)
	sub PlaySound_Bead = 94			//PlaySound_Bead(nSound, nTime)
	sub LED_Bead = 95				//LED_Bead(nLED, nBlink, nInterval, nTime)
	sub Display_Bead = 96			//Display_Bead(nDisplay, nTime)
	sub CountDown_Bead = 97			//CountDown_Bead(nCount, nDir, nStep)
		const countDirDown = 0
		const countDirUp = 1
	sub SendAllRangeToken_Bead = 98	//SendAllRangeToken_Bead(cTokenIndex, nMax, nMessage, nStrength, nSound)
	sub DeactivateToken_Bead = 99	//DeactivateToken_Bead(nTokenType)
	sub Bump_Bead = 100				//Bump_Bead(nTime)
	sub VLL_Bead = 101				//VLL_Bead(nVLL)
	sub PlaySounds_Bead = 102		//PlaySounds_Bead(nSound1, nTime1, nSound2, nTime2, nSound3, nTime3)
	sub SendAbility_Bead = 103		//SendAbility_Bead(nStrength)
	sub AdjustSounds_Bead = 104		//AdjustSounds_Bead(nFrequencyPercent, nTimePercent)
	sub PlayLongTone_Bead = 105		//PlayLongTone_Bead(nTone)
	sub DisplayFor_Bead = 106		//DisplayFor_Bead(nDisplay, nTicks)
	sub SendID_Bead = 107			//SendID_Bead(nShortID, nMessage, nHiByte, nLoByte)
	sub RandomMovement_Bead = 108	//RandomMovement_Bead(nMovement, nTime)
	sub FancyMovement_Bead = 109	//FancyMovement_Bead(nMovement, nRepeat, nTime)
	sub SlowDownMovement_Bead = 110	//SlowDownMovement_Bead(nMovement, nTime)
	sub SpeedUpMovement_Bead = 111	//SpeedUpMovement_Bead(nMovement, nTime)
	sub SendRCX_Bead = 112			//SendRCX_Bead(nMessage)
	sub Wait_Bead = 113				//Wait_Bead(nTime)
	sub TokenMessage_Bead = 114		//TokenMessage_Bead(nTokenType, nTime)


//Game subroutines
	sub sInitGame = 128				//sInitGame
	sub sGetDisplay = 129			//sGetDisplay(pVar1, pVar2)
	sub sPollGameWatcher = 130		//sPollGameWatcher
	sub sPollStateWatcher = 131		//sPollStateWatcher
	sub sInitState = 132			//sInitState(nState)
	sub sProcessControllerMessage = 133
	sub sProcessVLLMessage = 134
	sub sProcessBotMessage = 135
	sub sUpdateMetabolism = 136		//sUpdateMetabolism
	sub sExtension = 137			//sExtension(nExtension, nParam)
		const extActivateToken = 1
		const extTokenTick = 2
		const extDeactivateToken = 3
		const extDisplay = 4
		const extGetStateValue = 5
		const extSelectTarget = 6
	sub sGetPoints = 138			//sGetPoints(nPoints)
	sub sSpecialAbility = 139		//sSpecialAbility
	sub sBumpAction = 140


//end of Globals.h
