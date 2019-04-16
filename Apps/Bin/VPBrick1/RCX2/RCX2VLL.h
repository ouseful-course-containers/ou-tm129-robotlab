//RCX2VLL.h - RCX2 VLL macros

//////////////////////////////////////
//Each VLL command consists of:
//	vll_start, 3 checksum bits (vll_0 | vll_1), 7 data bits, and vll_stop
//
//  VLL output must be ON for at least 400mS (wait 40) before vll_start

macro vll_start(v) {off v wait 2}
macro vll_stop(v) {on v for 2 wait 6 on v wait 12}
macro vll_0(v) {on v for 4 wait 2}
macro vll_1(v) {on v for 2 wait 4}

/////////////////////////////////////////////////////////////////
//MicroScout direct (immediate) VLL commands

macro ms_Fwd(v) {vll_start(v) vll_1(v) vll_1(v) vll_1(v)  //111 0000000
				 vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_stop(v)}
macro ms_Rwd(v) {vll_start(v) vll_1(v) vll_1(v) vll_0(v)  //110 0000001
				 vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_stop(v)}
macro ms_Stop_Motors(v) {vll_start(v) vll_0(v) vll_1(v) vll_1(v)  //011 0001010
						 vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_1(v) vll_0(v) vll_stop(v)}

macro ms_Beep1(v) {vll_start(v) vll_0(v) vll_1(v) vll_0(v)  //010 0000100
				   vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_stop(v)}
macro ms_Beep2(v) {vll_start(v) vll_0(v) vll_0(v) vll_1(v)  //001 0000101
				   vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_1(v) vll_stop(v)}
macro ms_Beep3(v) {vll_start(v) vll_0(v) vll_0(v) vll_0(v)  //000 0000110
				   vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_0(v) vll_stop(v)}
macro ms_Beep4(v) {vll_start(v) vll_1(v) vll_1(v) vll_1(v)  //111 0000111
				   vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_1(v) vll_stop(v)}
macro ms_Beep5(v) {vll_start(v) vll_1(v) vll_0(v) vll_1(v)  //101 0001000
				   vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_stop(v)}

macro ms_Run_Script(v) {vll_start(v) vll_1(v) vll_0(v) vll_0(v)  //100 0100001
						vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_stop(v)}

macro ms_Delete_Script(v) {vll_start(v) vll_0(v) vll_1(v) vll_1(v)  //011 0100010
						   vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_stop(v)}

/////////////////////////////////////////////////////////////////
//MicroScout VLL scripting commands

macro ms_Script_Fwd05(v) {vll_start(v) vll_0(v) vll_1(v) vll_0(v)  //010 0010000
						  vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_stop(v)}

macro ms_Script_Fwd10(v) {vll_start(v) vll_0(v) vll_0(v) vll_1(v)  //001 0010001
						  vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_stop(v)}

macro ms_Script_Fwd20(v) {vll_start(v) vll_0(v) vll_0(v) vll_0(v)  //000 0010010
						  vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_stop(v)}

macro ms_Script_Fwd50(v) {vll_start(v) vll_1(v) vll_1(v) vll_1(v)  //111 0010011
						  vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_stop(v)}

macro ms_Script_Rwd05(v) {vll_start(v) vll_1(v) vll_0(v) vll_1(v)  //101 0010100
						  vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_stop(v)}

macro ms_Script_Rwd10(v) {vll_start(v) vll_1(v) vll_0(v) vll_0(v)  //100 0010101
						  vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_1(v) vll_0(v) vll_1(v) vll_stop(v)}

macro ms_Script_Rwd20(v) {vll_start(v) vll_0(v) vll_1(v) vll_1(v)  //011 0010110
						  vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_1(v) vll_1(v) vll_0(v) vll_stop(v)}

macro ms_Script_Rwd50(v) {vll_start(v) vll_0(v) vll_1(v) vll_0(v)  //010 0010111
						  vll_0(v) vll_0(v) vll_1(v) vll_0(v) vll_1(v) vll_1(v) vll_1(v) vll_stop(v)}

macro ms_Script_Beep1(v) {vll_start(v) vll_0(v) vll_0(v) vll_0(v)  //000 0011000
						  vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_stop(v)}

macro ms_Script_Beep2(v) {vll_start(v) vll_1(v) vll_1(v) vll_1(v)  //111 0011001
						  vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_0(v) vll_0(v) vll_1(v) vll_stop(v)}

macro ms_Script_Beep3(v) {vll_start(v) vll_1(v) vll_1(v) vll_0(v)  //110 0011010
						  vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_0(v) vll_1(v) vll_0(v) vll_stop(v)}

macro ms_Script_Beep4(v) {vll_start(v) vll_1(v) vll_0(v) vll_1(v)  //101 0011011
						  vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_0(v) vll_1(v) vll_1(v) vll_stop(v)}

macro ms_Script_Beep5(v) {vll_start(v) vll_0(v) vll_1(v) vll_1(v)  //011 0011100
						  vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_1(v) vll_0(v) vll_0(v) vll_stop(v)}

macro ms_Script_WaitLight(v) {vll_start(v) vll_0(v) vll_1(v) vll_0(v)  //010 0011101
							  vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_1(v) vll_0(v) vll_1(v) vll_stop(v)}

macro ms_Script_SeekLight(v) {vll_start(v) vll_0(v) vll_0(v) vll_1(v)  //001 0011110
							  vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_1(v) vll_1(v) vll_0(v) vll_stop(v)}

macro ms_Script_Code(v) {vll_start(v) vll_0(v) vll_0(v) vll_0(v)  //000 0011111
						 vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_1(v) vll_1(v) vll_1(v) vll_stop(v)}

macro ms_Script_KeepAlive(v) {vll_start(v) vll_1(v) vll_0(v) vll_1(v)  //101 0100000
							  vll_0(v) vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_0(v) vll_stop(v)}

/////////////////////////////////////////////////////////////////
//switch-box VLL commands

macro vll_Switch_Next(v) {vll_start(v) vll_1(v) vll_0(v) vll_0(v)  //100 1000110
						  vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_0(v) vll_stop(v)}

macro vll_Switch_Reset(v) {vll_start(v) vll_1(v) vll_0(v) vll_1(v)  //011 1000111
						   vll_1(v) vll_0(v) vll_0(v) vll_0(v) vll_1(v) vll_1(v) vll_1(v) vll_stop(v)}

/////////////////////////////////////////////////////////////////
