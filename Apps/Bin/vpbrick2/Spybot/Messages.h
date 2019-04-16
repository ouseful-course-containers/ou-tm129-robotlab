//Messages.h
//bot message communications constants

//command protocol: <nBot>, <command>, <hiByte>, <loByte>
	const cCommandTypeMask = 0x00f0
	const cNoCommand = 0

//game command protocol:
	const cCommandTypeGame = 0x10
		const cCommandStart		= cCommandTypeGame
		const cGameCommand		= cCommandTypeGame + 1
		const cCommandGetVar	= cCommandTypeGame + 2
		const cCommandValue		= cCommandTypeGame + 3
		const cCommandWin		= cCommandTypeGame + 4
		const cCommandLose		= cCommandTypeGame + 5
		const cCommandBlink		= cCommandTypeGame + 6
		const cCommandGive		= cCommandTypeGame + 7
		const cCommandTake		= cCommandTypeGame + 8

	const cCommandFromRCX2		= 0x1f

//fire command protocol: <nBot>, 0x20 + <fireCommand>, <param1>, <param2>
//		param1: target aspect (ie front, back, front left...)
//		param2: strength
	const cCommandTypeFire = 0x20
		const cCommandFireLaser			= cCommandTypeFire + 1
		const cCommandFireSpinner		= cCommandTypeFire + 2
		const cCommandFireElectroNet	= cCommandTypeFire + 3

//react to special ability command protocol: <nBot>, 0x30 + <species>, <param1>, <param2>
//		param1: range
//		param2: strength/time
	const cCommandTypeReactTo = 0x30
		const cCommandReactToSnaptrax		= cCommandTypeReactTo + cSpeciesSnaptrax
		const cCommandReactToGigaMesh		= cCommandTypeReactTo + cSpeciesGigaMesh
		const cCommandReactToTechnojaw		= cCommandTypeReactTo + cSpeciesTechnojaw
		const cCommandReactToShadowstrike	= cCommandTypeReactTo + cSpeciesShadowstrike

//activate token in another bot tell protocol: <nBot>, 0x40 + <species>, <param1>, <param2>
//		param1: 0
//		param2: time
	const cCommandTypeTell = 0x40
		const cCommandMagnet		= cCommandTypeTell + 1
		const cCommandRepulse		= cCommandTypeTell + 2
		const cCommandFlashBlind	= cCommandTypeTell + 3
		const cCommandFreeze		= cCommandTypeTell + 4
		const cCommandSlow			= cCommandTypeTell + 5
		const cCommandReverse		= cCommandTypeTell + 6
		const cCommandDizzy			= cCommandTypeTell + 7
		const cCommandTakeControl	= cCommandTypeTell + 8


//user commands
	const cCommandTypeUser = 0x50


	const cCommandTypeSpare = 0x60


//VLL
	const cCommandTypeVLL = 0x70


//end of Messages.h
