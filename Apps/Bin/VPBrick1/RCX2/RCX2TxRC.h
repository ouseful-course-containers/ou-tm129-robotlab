//RCX2TxRC.h

//uart[] indices:

//	uart[11] & uart[12] reserved for RC messages

	const iTxRC_LoByte = 11
	const iTxRC_HiByte = 12
		const cTxRC_Channel1 = 0x50
		const cTxRC_Channel2 = 0x60
		const cTxRC_Channel3 = 0x70

		const cTxRC_Off = 0x00
		const cTxRC_Fd = 0x07
		const cTxRC_Bk = 0x0f

	const iTxRCType = 16
		const cTxRCType = 0		//uart[iTxRCType] values

	const iTxRCBaud = 17
		const cTxRCBaud4800 = 7	//uart[iTxRCBaud] values


//macros

macro TxRC_Init
{
	uart[iTxRCType] = cTxRCType
	uart[iTxRCBaud] = cTxRCBaud4800
}


macro TxRC_Msg(nChannel, nLeft, nRight)
{
	uart[iTxRC_LoByte] = nChannel + nLeft
	uart[iTxRC_HiByte] = (nRight * 16) + ((0 - nRight - nLeft - (nChannel / 16)) & 0x0f)
}


macro TxRC_Send
{
	send uart iTxRC_LoByte,2
}


//end of RCX2TxRC.h
