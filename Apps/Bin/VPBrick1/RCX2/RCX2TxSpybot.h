//RCX2TxSpybot.h

//uart[] indices:

//	uart[0] - uart[6] reserved for bot messages;
//	uart[7] & uart[8] reserved for controller messages;
//	uart[9] & uart[10] reserved for controller ping messages,
//	uart[11] & uart[12] reserved for RC messages (#include<RCX2TxRC.h>)

	const iTxBotMode = 0
		const cTxBotModeTargetID = 0x88	//uart[iTxBotMode] values
		const cTxBotModeLinkcast = 0x89
		const cTxBotModeBroadcast = 0x8a

	const iMyID = 1
	const iTargetID = 2
		const cNoID	= 0	//uart[iMyID] & uart[iTargetID] values

		const cControllerID1 = 1
		const cControllerID2 = 2
		const cControllerID3 = 3
		const cControllerID4 = 4
		const cControllerID5 = 5
		const cControllerID6 = 6

		const cPCID = 7

		const cMinBotID = 8
		const cMaxBotID = 255

	const iCommand = 3
		const cCommandFromRCX2 = 0x1f	//uart[iCommand] values

	const iHiByte = 4
	const iLoByte = 5

	const iTxSpybotCommandChecksum = 6

	const iTxControllerCommandMode = 7
	const iTxControllerPingMode = 9
		const cTxControllerCommand = 0x90	//uart[iTxControllerCommandMode] & uart[iTxControllerPingMode] values

	const iTxSpybotControllerMessage = 8
		const cTxButton1 = 0x01		//uart[iTxSpybotControllerMessage] values
		const cTxButton2 = 0x02
		const cTxButton3 = 0x03
		const cTxButton4 = 0x04
		const cTxButton5 = 0x05
		const cTxRCX1 = 0x06	//RCX to Spybot specific
		const cTxRCX2 = 0x07
		const cTxRCX3 = 0x08
		const cTxRCX4 = 0x09
		const cTxRCX5 = 0x0a
		const cTxRCX6 = 0x0b
		const cTxRCX7 = 0x0c
		const cTxRCX8 = 0x0d

	const iTxSpybotControllerPing = 10

	const iTxSpybotType = 16
		const cTxSpybotType = 0	//uart[iTxSpybotType] values

	const iTxSpybotBaud = 17
		const cTxSpybotBaud4800 = 7	//uart[iTxSpybotBaud] values


//macros

macro TxSpybot_Init
{
	uart[iTxSpybotType] = cTxSpybotType
	uart[iTxSpybotBaud] = cTxSpybotBaud4800
}


macro TxSpybot_MsgBroadcastBot(nMyID, nHiByte, nLoByte)
{
	uart[iTxBotMode] = cTxBotModeBroadcast

	uart[iMyID] = nMyID
	uart[iTargetID] = cNoID

	uart[iCommand] = cCommandFromRCX2
	uart[iHiByte] = nHiByte
	uart[iLoByte] = nLoByte

	uart[iTxSpybotCommandChecksum] = 0 - uart[iTxBotMode] - uart[iMyID] - uart[iTargetID] - uart[iCommand] - uart[iHiByte] - uart[iLoByte]
}


macro TxSpybot_SendBotMsg
{
	send uart iTxBotMode,7
}


macro TxSpybot_MsgControllerButton(nMyID, nMsg)
{
	uart[iTxControllerCommandMode] = cTxControllerCommand + nMyID
	uart[iTxSpybotControllerMessage] = (nMsg * 16) + ((0 - (uart[iTxControllerCommandMode] / 16) - uart[iTxControllerCommandMode] - nMsg) & 0x0f)
}


macro TxSpybot_SendControllerCommandMsg
{
	send uart iTxControllerCommandMode,2
}


macro TxSpybot_MsgControllerPing(nID)
{
	uart[iTxControllerPingMode] = cTxControllerCommand + nID
	uart[iTxSpybotControllerPing] = (0 - (uart[iTxControllerPingMode] / 16) - uart[iTxControllerPingMode]) & 0x0f
}


macro TxSpybot_SendControllerPingMsg
{
	send uart iTxControllerPingMode,2
}


//end of RCX2TxSpybot.h
