//Spybot.h
//Spybot firmware header

//output ports
	output right on 1
	output left on 2

//sensors
	sensor bumper on 1
	sensor opto on 2

	bumper is switch as boolean
	opto is light as percent

	const cMaxWorldEntries = 16

//target & find[nIndex,..] values
	const cNoTarget = 255

//LED, world, target, ping & message table indices
	const iShortID = 1		//world & target (R/O)
	const iLinkID = 2		//target (R/O) & link (R/W)

	const iRange = 3		//world & target (R/O)
		const cNowhere = 0			//world[nBot,iRange] & target[iRange] values
		const cAnywhere = 1
		const cThere = 2
		const cHere = 3

	const iDirection = 4	//world & target (R/O)
		const cLeft = 0			//world[nBot,iDirection] & target[iDirection] values
		const cLeftOfCentre = 1		//here zone only
		const cCentre = 2
		const cRightOfCentre = 3	//here zone only
		const cRight = 4

	const iAspect = 5		//world & target (R/O)
		const cFrontLeft = 0		//world[nBot,iAspect] & target[iAspect] values
		const cFront = 1
		const cFrontRight = 2
		const cBackRight = 3
		const cBack = 4
		const cBackLeft = 5

	const iInfo = 6			//target (R/O) & ping (R/W)
	const iNote	= 7			//world (R/W)

	const iInterval = 9		//ping (R/W) - 10 ms steps
		const cDisablePings = 0		//ping[iInterval] values
		const cMinPingInterval = 10
		const cDefaultPingInterval = 25
		const cMaxPingInterval = 255

	const iMyID = 10		//ping (R/O)

	const iHiByte = 18		//message (R/W)
	const iLoByte = 19		//message (R/W)

	const iRxChannel = 20	//message (R/Once) & link
		const iRxIR = 1			//message[iRxChannel] values
		const iRxPC = 2

		const iRCChannelAll = 0	//link[iRxChannel] & link[iTxChannel] values
		const iRCChannel1 = 1
		const iRCChannel2 = 2
		const iRCChannel3 = 3

	const iLock = 51	//message (R/W)
		const cUnlock = 0	//message[iLock] values
		const cLockIR = 1
		const cLockPC = 2

	const iConvertIndex = 53	//message (R/O)
	const iIndex = 21		//message (R/W)
		const cLinkcast = 0x40
		const cBroadcast = 0x80
		const cInvalidRxIndex = 0x20

	const iCommand = 22		//message (R/W)
		const cCommandController = 0x40	//message[iRxIR,iCommand] values

	const iTxType = 23		//message (R/W)
		const cTxTypeSpybot = 0	//message[iTxType] values
		const cTxTypeRCX = 1
		const cTxTypeRC = 2
		const cTxTypeUser = 3

	const iTxBaud = 24		//message (R/W)
		const cTxBaud2400 = 0	//message[iTxBaud] values
		const cTxBaud4800 = 1
		const cTxBaud9600 = 3

	const iTxChannel = 25	//message (R/W) & link
		const cTxChannelFrontLeft = 0	//message[iTxChannel] values
		const cTxChannelFrontRight = 1
		const cTxChannelBack = 2
		const cTxChannelHighPower = 3
		const cTxChannelPC = 4

	const iFound = 45		//message (R/O)

	const iUserPreamblePos = 47	//message (R/W)
	const iUserPreambleLen = 48	//message (R/W)
	const iUserChecksum = 49	//message (R/W)
		const cNoChecksum = 0
		const cSumChecksum = 0x04
		const cZeroSumChecksum = 0x08

	const iUserBiPhase = 50	//message (R/W)
		const cNoBiPhase = 0
		const cBiPhase = 1

	const iDisplay = 27		//LED (R/W)
		const cRed1	= 0x01		//led[iDisplay] & led[iDisplayBlink] values
		const cRed2	= 0x02
		const cRed3	= 0x04
		const cGreen1 = 0x08
		const cGreen2 = 0x10
		const cGreen3 = 0x20
		const cYellow = 0x40
		const cRedGreenLEDs = cRed1+cRed2+cRed3+cGreen1+cGreen2+cGreen3

	const iDisplayBlink = 28
	const iDisplayBlinkInterval = 29	//LED (R/W) - 10mS steps, 0-255
	const iFullScale = 30
	const iFullBlink = 31
	const iFullBlinkInterval = 32		//LED (R/W) - 10mS steps, 0-255
	const iRedScale = 33
	const iRedBlink = 34
	const iGreenScale = 35
	const iGreenBlink = 36
	const iYellowWarn = 37
	const iYellowBlink = 38
	const iYellowBlinkInterval = 39		//LED (R/W) - 10mS steps, 0-255
	const iVLL = 40
	const iVLLBlink = 41
	const iVLLBlinkInterval = 42		//LED (R/W) - 10mS steps, 0-255

//IDs
	const cNoID	= 0

	const cControllerID1 = 1
	const cControllerID2 = 2
	const cControllerID3 = 3
	const cControllerID4 = 4
	const cControllerID5 = 5
	const cControllerID6 = 6

	const cPCID = 7

	const cMinBotID = 8
	const cMaxBotID = 255


//EEPROM memory map (256 bytes, 0x00 to 0xff)
	const eMotorControl			= 0x00	//1 byte
	const eSpecies				= 0x01	//1 byte
	const eLongID				= 0x02	//4 bytes
	const eUserLevel			= 0x06	//1 byte
	const eDefaultPingRate		= 0x07	//1 byte

	const eRuns					= 0x08	//2 bytes (lo/hi)
	const eWins					= 0x0a	//2 bytes
	const eLoses				= 0x0c	//2 bytes
	const ePoints				= 0x0e	//2 bytes
	const ePlaySeconds			= 0x10	//2 bytes
	const eTotalPlayTime		= 0x12	//4 bytes (lo..hi)
	const eMaxBots				= 0x16	//1 byte
	const eMissionID			= 0x17	//1 byte
	const eMissionsPlayed		= 0x18	//4 bytes (1 bit per mission)

	const eMissionPoints		= 0x1c	//2 bytes (lo/hi)
	const eHighScore			= 0x1e	//2 bytes (lo/hi)

	const eRobotName			= 0x20	//32 bytes
	const eBirthDate			= 0x40	//6 bytes (dd/mm/yy)

	const eBotData				= 0x46	//1 byte
	const eStatus				= 0x47	//1 byte

	const eFirstToken			= 0x48	//2 bytes per token (hi/lo)
	const eLastToken			= 0x80 - 2
		const cMaxTokens		= 1 + (eLastToken - eFirstToken) / 2
	//spare: 0x80 - 0xff


//MotorControl (eeprom[eMotorControl]):
	//bits 0-2 normal speed global power (0-7), 
	//bits 3-5 slow speed global power (0-7),
	//bit 6 left motor direction (1=forward, 0=backward)
	//bit 7 right motor direction (1=forward, 0=backward)
	const cNormalSpeedMask = 0x07
		//suggested cNormalSpeed values (1-8):
		//	Gigamesh		7
		//	Snaptrax		7
		//	Shadowstrike	7
		//	Technojaw		6
	const cSlowSpeedMask = 0x38
		//suggested cSlowSpeed values (1-8):
		//	Gigamesh		5
		//	Snaptrax		5
		//	Shadowstrike	4
		//	Technojaw		3
	const cLeftMotorDirection = 0x40
	const cRightMotorDirection = 0x80
		//suggested eeprom[eMotorControl] values:
		//	Gigamesh		0x26
		//	Snaptrax		0xe6
		//	Shadowstrike	0x1e
		//	Technojaw		0x15


//Species (eeprom[eSpecies] values)
	const cSpeciesGigamesh		= 1  //3806: Gigamesh G60 (blue)
	const cSpeciesSnaptrax		= 2  //3807: Snaptrax S45 (red)
	const cSpeciesShadowstrike	= 3  //3808: Shadowstrike S70 (purple)
	const cSpeciesTechnojaw		= 4  //3809: Technojaw T55 (green)


//Status (eeprom[eStatus] values)
	const cStatusInitialising	= 0x01  //bit 0 set while initialising
	const cStatusDownloading	= 0x02  //bit 1 set while downloading
	const cStatusLocked			= 0x04  //bit 2 set = locked
	//bits 3-7 spare


//Controller
	const cControllerButton1 = 0x0100
	const cControllerButton2 = 0x0200
	const cControllerButton3 = 0x0001
	const cControllerButton4 = 0x0101
	const cControllerButton5 = 0x0201


//Battery voltage
	const cBatteryMax = 4600
	const cBatteryLow = 3400
	const cBatteryMin = 2700


//end of Spybot.h
