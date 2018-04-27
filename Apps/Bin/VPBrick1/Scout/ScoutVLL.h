//ScoutVLL.h - Scout VLL macros

/////////////////////////////////////////////////////////////////
//MicroScout direct (immediate) VLL commands

macro ms_Fwd(v) {assert(v=3) vll 0}
macro ms_Rwd(v) {assert(v=3) vll 1}
macro ms_Stop_Motors(v) {assert(v=3) vll 10}

macro ms_Beep1(v) {assert(v=3) vll 4}
macro ms_Beep2(v) {assert(v=3) vll 5}
macro ms_Beep3(v) {assert(v=3) vll 6}
macro ms_Beep4(v) {assert(v=3) vll 7}
macro ms_Beep5(v) {assert(v=3) vll 8}

macro ms_Run_Script(v) {assert(v=3) vll 33}
macro ms_Delete_Script(v) {assert(v=3) vll 34}

/////////////////////////////////////////////////////////////////
//MicroScout VLL scripting commands

macro ms_Script_Fwd05(v) {assert(v=3) vll 16}  //forward 0.5 secs.
macro ms_Script_Fwd10(v) {assert(v=3) vll 17}
macro ms_Script_Fwd20(v) {assert(v=3) vll 18}
macro ms_Script_Fwd50(v) {assert(v=3) vll 19}

macro ms_Script_Rwd05(v) {assert(v=3) vll 20}  //backward 0.5 secs.
macro ms_Script_Rwd10(v) {assert(v=3) vll 21}
macro ms_Script_Rwd20(v) {assert(v=3) vll 22}
macro ms_Script_Rwd50(v) {assert(v=3) vll 23}

macro ms_Script_Beep1(v) {assert(v=3) vll 24}
macro ms_Script_Beep2(v) {assert(v=3) vll 25}
macro ms_Script_Beep3(v) {assert(v=3) vll 26}
macro ms_Script_Beep4(v) {assert(v=3) vll 27}
macro ms_Script_Beep5(v) {assert(v=3) vll 28}

macro ms_Script_WaitLight(v) {assert(v=3) vll 29}  //used in program 4
macro ms_Script_SeekLight(v) {assert(v=3) vll 30}  //used in program 3
macro ms_Script_Code(v) {assert(v=3) vll 31}  //used in program 7
macro ms_Script_KeepAlive(v) {assert(v=3) vll 32}  //pause ~12 secs (used in program 5)

/////////////////////////////////////////////////////////////////
//switch-box VLL commands (TBA)

macro vll_Switch_Next(v) {assert(v=3) vll 70}
macro vll_Switch_Reset(v) {assert(v=3) vll 71}

/////////////////////////////////////////////////////////////////
