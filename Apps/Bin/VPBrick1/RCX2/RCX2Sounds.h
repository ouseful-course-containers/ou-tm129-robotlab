//RCX2Sounds.h - RCX2 Bug sound macros
//////////////////////////////////////
//Last edit: 06/04/00
//
//////////////////////////////////////

macro sound_1 {sound 1}
macro sound_2 {sound 2}
macro sound_3 {sound 3}
macro sound_4 {sound 4}
macro sound_5 {sound 5}
macro sound_6 {sound 6}
macro sound_7 {tone 3401 for 5 wait 10 tone 3401 for 20 wait 20}
macro sound_8 {tone 1420 for 3 tone 1302 for 3 
			   tone 1202 for 3 tone 1116 for 3 
			   tone 1008 for 3 tone 893 for 3 
			   tone 801 for 3 tone 710 for 3 wait 3 
			   tone 601 for 3 tone 504 for 3 wait 30}
macro sound_9 {tone 40 for 3 tone 61 for 3 
			   tone 89 for 3 tone 130 for 3 
			   tone 217 for 3 wait 15}
macro sound_10 {clear sound}
macro sound_11 {tone 521 for 5 tone 579 for 5 wait 10}
macro sound_12 {tone 579 for 5 tone 521 for 5 wait 10}
macro sound_13 {tone 710 for 5 tone 781 for 5 wait 10}
macro sound_14 {tone 781 for 5 tone 710 for 5 wait 10}
macro sound_15 {tone 2093 for 6 tone 2349 for 6 wait 12}
macro sound_16 {tone 1319 for 6 tone 1175 for 6 wait 12}
macro sound_17 {tone 262 for 6 tone 294 for 6 wait 12}
macro sound_18 {tone 659 for 3 tone 698 for 3 
			    tone 740 for 3 tone 784 for 3 wait 12}
macro sound_19 {sound_18 wait 10 sound_18}
macro sound_20 {tone 2349 for 6 wait 10 tone 2093 for 6 wait 10 tone 2349 for 6 wait 6}
macro sound_21 {tone 2093 for 8 wait 10 tone 2093 for 4 wait 6 
				tone 2093 for 4 wait 6 tone 2349 for 11 wait 11}
macro sound_22 {tone 36 for 5 wait 10 tone 36 for 5 wait 5}
macro sound_23 {tone 295 for 5 wait 8 tone 260 for 5 wait 8 tone 295 for 5 wait 5}
macro sound_24 {tone 260 for 6 wait 8 tone 260 for 3 wait 5 
				tone 260 for 3 wait 5 tone 295 for 10 wait 10}
macro sound_25 {tone 494 for 35 wait 40 tone 440 for 15 wait 20 
				tone 880 for 15 wait 15}
macro sound_26 {tone 521 for 20 wait 30 tone 521 for 10 wait 15 
				tone 521 for 10 wait 30 tone 579 for 50 wait 70 
				tone 651 for 20 wait 30 tone 579 for 20 wait 30 
				tone 651 for 20 wait 30 tone 781 for 70 wait 70}
macro sound_27 {tone 220 for 50 wait 70 tone 440 for 50 wait 70 
				tone 391 for 40 wait 60 tone 347 for 20 
				tone 329 for 10 wait 40 tone 295 for 30 wait 40
				tone 263 for 70 wait 70}
macro sound_28 {tone 223 for 10 wait 15 tone 240 for 10 wait 15 
				tone 260 for 10 wait 15 tone 284 for 10 wait 10}

/////////////////////////////////////////////////////////////////
//Scout system sounds

macro systemSound_6 {tone 3401 for 5 wait 10 tone 3401 for 20 wait 20}
macro systemSound_7 {tone 1420 for 3 tone 1302 for 3 
					 tone 1202 for 3 tone 1116 for 3 
					 tone 1008 for 3 tone 893 for 3 
					 tone 801 for 3 tone 710 for 3 wait 3 
					 tone 601 for 3 tone 504 for 3 wait 30}
macro systemSound_8 {tone 40 for 3 tone 61 for 3 
					 tone 89 for 3 tone 130 for 3 
					 tone 217 for 3 wait 15}

macro snd_KeyClick {sound 1}
macro snd_BeepBeep {sound 2}
macro snd_SweepDown {sound 3}
macro snd_SweepUp {sound 4}
macro snd_Error {sound 5}
macro snd_Hurrah {sound 6}

macro snd_Remote {sound_7}
macro snd_EnterSAMode {sound_8}
macro snd_KeyError {sound_9}
macro snd_NoSound {sound_10}
macro snd_Touch1Pressed {sound_11}
macro snd_Touch1Released {sound_12}
macro snd_Touch2Pressed {sound_13}
macro snd_Touch2Released {sound_14}
macro snd_EnterLight {sound_15}
macro snd_EnterNormal {sound_16}
macro snd_EnterDark {sound_17}
macro snd_Click {sound_18}
macro snd_DoubleClick {sound_19}
macro snd_Counter0Limit {sound_20}
macro snd_Counter1Limit {sound_21}
macro snd_Timer0Limit {sound_22}
macro snd_Timer1Limit {sound_23}
macro snd_Timer2Limit {sound_24}
macro snd_Message {sound_25}
macro snd_Special1 {sound_26}
macro snd_Special2 {sound_27}
macro snd_Special3 {sound_28}

/////////////////////////////////////////////////////////////////
//Candidate sounds to be selected for RIS 2.0

//Scout basic soundset #1 (tb_10 to tb_27 are sounds 10 - 27)

macro tb_10 {tone 521 for 5 tone 579 for 5 wait 10}
macro tb_11 {tone 579 for 5 tone 521 for 5 wait 10}
macro tb_12 {tone 710 for 5 tone 781 for 5 wait 10}
macro tb_13 {tone 781 for 5 tone 710 for 5 wait 10}
macro tb_14 {tone 2101 for 5 tone 2358 for 5 wait 10}
macro tb_15 {tone 1302 for 5 tone 1157 for 5 wait 10}
macro tb_16 {tone 260 for 5 tone 295 for 5 wait 10}
macro tb_17 {tone 659 for 3 tone 698 for 3 
			 tone 740 for 3 tone 784 for 3 wait 12}
macro tb_18 {tb_17 wait 10 tb_17}
macro tb_19 {tone 2358 for 5 wait 8 tone 2101 for 5 wait 8 tone 2358 for 5 wait 5}
macro tb_20 {tone 2101 for 6 wait 8 tone 2101 for 3 wait 5
			 tone 2101 for 3 wait 5 tone 2358 for 10 wait 10}
macro tb_21 {tone 33 for 5 wait 8 tone 33 for 5 wait 5}
macro tb_22 {tone 295 for 5 wait 8 tone 260 for 5 wait 8 tone 295 for 5 wait 5}
macro tb_23 {tone 260 for 6 wait 8 tone 260 for 3 wait 5 
			 tone 260 for 3 wait 5 tone 295 for 10 wait 10}
macro tb_24 {tone 494 for 35 wait 40 tone 440 for 15 wait 20 
			 tone 880 for 15 wait 15}
macro tb_25 {tone 521 for 20 wait 30 tone 521 for 10 wait 15 
			 tone 521 for 10 wait 30 tone 579 for 50 wait 70 
			 tone 651 for 20 wait 30 tone 579 for 20 wait 30 
			 tone 651 for 20 wait 30 tone 781 for 70 wait 70}
macro tb_26 {tone 220 for 50 wait 70 tone 440 for 50 wait 70 
			 tone 391 for 40 wait 60 tone 347 for 20 
			 tone 329 for 10 wait 40 tone 295 for 30 wait 40
			 tone 263 for 70 wait 70}
macro tb_27 {tone 223 for 10 wait 15 tone 240 for 10 wait 15 
			 tone 260 for 10 wait 15 tone 284 for 10 wait 10}

/////////////////////////////////////////////////////////////////
//Scout bug sounds (tb_30 to tb_47 are sounds 10 - 27)

macro tb_30 {tone 5000 for 1 wait 8 tone 4032 for 1 wait 8
			 tone 4545 for 1 wait 3 tone 4545 for 2 wait 3
			 tone 4545 for 1 wait 1}
macro tb_31 {tone 4545 for 1 wait 8 tone 4032 for 1 wait 8
			 tone 5000 for 1 wait 3 tone 5000 for 2 wait 3
			 tone 5000 for 1 wait 1}
macro tb_32 {tone 4032 for 1 wait 8 tone 2976 for 1 wait 8
			 tone 3472 for 1 wait 3 tone 3472 for 2 wait 3
			 tone 3472 for 1 wait 1}
macro tb_33 {tone 3472 for 1 wait 8 tone 2976 for 1 wait 8
			 tone 4032 for 1 wait 3 tone 4032 for 2 wait 3
			 tone 4032 for 1 wait 1}
macro tb_34 {tone 5952 for 1 wait 8 tone 5000 for 1 wait 8
			 tone 5435 for 1 wait 3 tone 5435 for 2 wait 3
			 tone 5435 for 1 wait 1}
macro tb_35 {tone 3846 for 1 wait 8 tone 3846 for 1 wait 8
			 tone 3846 for 1 wait 3 tone 3333 for 2 wait 3
			 tone 4386 for 1 wait 1}
macro tb_36 {tone 3472 for 1 wait 8 tone 2500 for 1 wait 8
			 tone 2976 for 1 wait 3 tone 2976 for 2 wait 3
			 tone 2976 for 1 wait 1}
macro tb_37 {tone 3472 for 2 tone 4032 for 2 
			 tone 5000 for 2 tone 5435 for 2 wait 8}
macro tb_38 {tb_37 wait 6 tb_37}
macro tb_39 {tone 5952 for 1 wait 8 tone 5000 for 1 wait 8  //same as 14???
			 tone 5435 for 1 wait 3 tone 5435 for 2 wait 3
			 tone 5435 for 1 wait 1}
macro tb_40 {tone 5000 for 1 wait 5 tone 5000 for 1 wait 3 
			 tone 5000 for 1 wait 3 tone 5952 for 1 wait 1}
macro tb_41 {tone 33 for 5 wait 8 tone 33 for 3 wait 3}
macro tb_42 {tone 3472 for 1 wait 8 tone 2500 for 1 wait 8
			 tone 2976 for 1 wait 3 tone 2976 for 2 wait 3
			 tone 2976 for 1 wait 1}
macro tb_43 {tone 2500 for 1 wait 5 tone 2500 for 1 wait 3
			 tone 2500 for 1 wait 3 tone 3472 for 1 wait 1}
macro tb_44 {tone 3846 for 8 tone 3472 for 8 tone 3846 for 8 
			 tone 2976 for 10 wait 12 tone 2976 for 10 
			 tone 5952 for 12 wait 12}
macro tb_45 {repeat 2 {repeat 4 {tone 5000 for 1 wait 5 tone 4386 for 1 wait 8} 
					   repeat 5 {tone 4808 for 1 wait 2}
					   wait 5}
			 repeat 4 {tone 4032 for 1 wait 2}
			 repeat 2 {tone 4386 for 1 wait 5 tone 4808 for 1 wait 8}}
macro tb_46 {repeat 6 {tone 4808 for 1 wait 2}
			 tone 4630 for 1 wait 12
			 tone 4808 for 1 wait 3 
			 tone 5000 for 1 wait 3 
			 tone 4630 for 1 wait 10 
			 tone 4808 for 1 wait 3 
			 tone 5000 for 1 wait 3 
			 tone 5000 for 1 wait 10 
			 tone 4386 for 1 wait 8 
			 tone 4545 for 1 wait 8 
			 tone 5435 for 1 wait 8 
			 tone 4545 for 1 wait 3 
			 tone 5435 for 1 wait 3 
			 tone 4808 for 1 wait 8 
			 tone 4386 for 1 wait 3 
			 tone 5000 for 1 wait 8 
			 tone 4386 for 1 wait 8 
			 tone 4545 for 1 wait 8 
			 tone 5435 for 1 wait 8 
			 tone 4545 for 1 wait 3 
			 tone 5435 for 1 wait 3 
			 tone 4808 for 1 wait 8 
			 repeat 9 {tone 4386 for 1 wait 8} 
			 tone 5435 for 1 wait 8 tone 4808 for 1 wait 2 tone 4386 for 1}
macro tb_47 {tone 3846 for 5 wait 7 tone 4167 for 5 wait 7 
			 tone 4545 for 5 wait 7 tone 5000 for 5 wait 5}

/////////////////////////////////////////////////////////////////
//Scout alarm sounds (tb_50 to tb_67 are sounds 10 - 27)

macro tb_50 {tone 1838 for 5 tone 1302 for 5 wait 10}
macro tb_51 {tone 1302 for 5 tone 1838 for 5 wait 10}
macro tb_52 {tone 2232 for 10 tone 1736 for 10 tone 1202 for 10 wait 30}
macro tb_53 {tone 1202 for 10 tone 1736 for 10 tone 2232 for 10 wait 30}
macro tb_54 {tone 2500 for 3 tone 2703 for 3 tone 2907 for 6 wait 12}
macro tb_55 {tone 1302 for 25 wait 25}
macro tb_56 {tone 2907 for 3 tone 2703 for 3 tone 2500 for 6 wait 12}
macro tb_57 {tone 1302 for 2 tone 1420 for 2 
			 tone 1563 for 2 tone 1736 for 2 
			 tone 1953 for 2 tone 2232 for 2 wait 12}
macro tb_58 {tb_57 tb_57}
macro tb_59 {tone 2222 for 10 tone 2358 for 10
			 tone 2500 for 10 tone 2646 for 10
			 tone 2500 for 10 tone 2358 for 10 wait 60}
macro tb_60 {tone 2222 for 10 tone 2358 for 10
			 tone 2500 for 10 tone 2646 for 10 wait 40}
macro tb_61 {tone 33 for 5 wait 8 tone 33 for 3 wait 3}
macro tb_62 {tone 710 for 10 tone 762 for 10 
			 tone 801 for 10 tone 845 for 10 
			 tone 801 for 10  tone 762 for 10 wait 60}
macro tb_63 {tone 710 for 10 tone 762 for 10 
			 tone 801 for 10 tone 845 for 10 wait 40}
macro tb_64 {tone 947 for 35 wait 40 tone 845 for 15 wait 20 
			 tone 1645 for 15 wait 15}
macro tb_65 {tone 1984 for 10 tone 2110 for 10 
			 tone 2232 for 10 tone 2358 for 10 
			 tone 2475 for 10 tone 2604 for 10 wait 60 
			 tone 2732 for 10 tone 2604 for 10 
			 tone 2475 for 10 tone 2358 for 10 
			 tone 2232 for 10 tone 2110 for 10 
			 tone 1984 for 10 wait 70}
macro tb_66 {tone 665 for 30 wait 40 tone 523 for 30 wait 30}
macro tb_67 {tone 1302 for 6 tone 1420 for 2 
			 tone 1563 for 6 tone 1736 for 2 
			 tone 1953 for 6 tone 2232 for 2 wait 24}


/////////////////////////////////////////////////////////////////
//Scout robo sounds (tb_70 to tb_87 are sounds 10 - 27)

macro tb_70 {tone 2778 for 5 wait 6 tone 3472 for 7 wait 9 tone 2033 for 9 wait 9}
macro tb_71 {tone 3906 for 6 wait 7 tone 2033 for 3 wait 5 tone 2778 for 7 wait 7}
macro tb_72 {tone 3472 for 5 wait 6 tone 1969 for 7 wait 9 tone 2381 for 9 wait 9}
macro tb_73 {tone 2381 for 6 wait 7 tone 2778 for 3 wait 5 tone 3472 for 7 wait 7}
macro tb_74 {tone 3472 for 6 wait 7 tone 2778 for 3 wait 5 tone 3906 for 7 wait 7}
macro tb_75 {tone 2703 for 6 wait 7 tone 2463 for 3 wait 5 tone 2551 for 7 wait 7}
macro tb_76 {tone 2033 for 6 wait 7 tone 2381 for 3 wait 5 tone 1969 for 7 wait 7}
macro tb_77 {tone 2778 for 7 wait 2 tone 2381 for 5 wait 6 
			 tone 3906 for 8 wait 10 tone 3472 for 5 wait 5}
macro tb_78 {tb_77 wait 10 tb_77}
macro tb_79 {tone 2778 for 5 wait 6 tone 3472 for 7 wait 9
			 tone 2778 for 9 wait 12 tone 3906 for 5 wait 6 
			 tone 3472 for 7 wait 7}
macro tb_80 {tone 3906 for 3 wait 4 tone 2778 for 9 wait 11 
			 tone 3472 for 6 wait 9 tone 3906 for 6 wait 6}
macro tb_81 {tone 33 for 5 wait 8 tone 33 for 3 wait 3}
macro tb_82 {tone 1969 for 5 wait 6 tone 2033 for 7 wait 9 
			 tone 1969 for 9 wait 12 tone 2381 for 5 wait 6 
			 tone 2033 for 7 wait 7}
macro tb_83 {tone 2381 for 3 wait 4 tone 1969 for 9 wait 11 
			 tone 2033 for 6 wait 9 tone 2033 for 7 wait 10
			 tone 2381 for 6 wait 6}
macro tb_84 {tone 2381 for 20 wait 25 tone 2033 for 13 wait 16 
			 tone 1969 for 10 wait 15 tone 3906 for 15 wait 15}
macro tb_85 {tone 2778 for 20 wait 30 tone 2033 for 20 wait 40 
			 tone 3472 for 7 wait 9 tone 2381 for 9 wait 10 
			 tone 2778 for 10 wait 12 tone 2033 for 7 wait 9 
			 tone 3906 for 9 wait 10 tone 3472 for 7 wait 27 
			 tone 3906 for 10 wait 20 tone 3906 for 10 wait 20 
			 tone 3906 for 10 wait 30 tone 2778 for 7 wait 9 
			 tone 3906 for 9 wait 10 tone 3472 for 10 wait 12 
			 tone 2033 for 7 wait 9 tone 2381 for 9 wait 10 
			 tone 1969 for 7 wait 9 tone 3906 for 9 wait 10 
			 tone 2033 for 7 wait 7}
macro tb_86 {tone 2778 for 5 wait 6 tone 3472 for 7 wait 9 
			 tone 2033 for 9 wait 12 tone 3906 for 5 wait 6 
			 tone 1959 for 7 wait 9 tone 2381 for 9 wait 9}
macro tb_87 {tone 2778 for 10 wait 15 tone 3906 for 10 wait 15 
			 tone 2033 for 10 wait 5 tone 2381 for 10 wait 10}


/////////////////////////////////////////////////////////////////
//Scout science sounds (tb_90 to tb_107 are sounds 10 - 27)

macro tb_90 {tone 2000 for 3 wait 4 tone 2083 for 2 wait 3 tone 2500 for 1 wait 1}
macro tb_91 {tone 2500 for 1 wait 2 tone 2083 for 2 wait 3 tone 2000 for 3 wait 3}
macro tb_92 {tone 2273 for 3 wait 4 tone 2381 for 2 wait 1 tone 2941 for 1 wait 1}
macro tb_93 {tone 2941 for 1 wait 2 tone 2381 for 2 wait 1 tone 2273 for 3 wait 3}
macro tb_94 {tone 2083 for 5 tone 4464 for 5 tone 6250 for 3 wait 13}
macro tb_95 {tone 2083 for 5 wait 10 tone 2083 for 9 wait 9}
macro tb_96 {tone 440 for 5 tone 893 for 5 tone 1359 for 3 wait 13}
macro tb_97 {tone 1008 for 6 tone 2083 for 10 tone 4464 for 6 wait 22}
macro tb_98 {tb_97 wait 10 tb_97}
macro tb_99 {tone 1008 for 6 wait 16 tone 4464 for 6 wait 16 
			 tone 1008 for 6 wait 16 tone 4464 for 6 wait 6}
macro tb_100 {tone 4464 for 20 wait 25 tone 1008 for 10 wait 16 
			  tone 1645 for 6 wait 12 tone 2083 for 6 wait 6}
macro tb_101 {tone 33 for 5 wait 8 tone 33 for 3 wait 3}
macro tb_102 {tone 401 for 6 wait 16 tone 1645 for 6 wait 16 
			  tone 401 for 6 wait 16 tone 1645 for 6 wait 6}
macro tb_103 {tone 1645 for 20 wait 25 tone 401 for 10 wait 16 
			  tone 651 for 6 wait 12 tone 822 for 6 wait 6}
macro tb_104 {tone 2083 for 8 wait 10 tone 4464 for 5 wait 7 tone 6250 for 5 wait 5}
macro tb_105 {repeat 3 {tone 2083 for 15 wait 20}
			  tone 4464 for 6 wait 9 tone 2841 for 6 wait 9 
			  tone 1008 for 6 wait 9 tone 1953 for 15 wait 20 
			  tone 4464 for 6 wait 9 tone 6250 for 4 wait 4}
macro tb_106 {repeat 2 {tone 4464 for 10 wait 15 tone 6250 for 5 wait 30} 
			  tone 2083 for 40 wait 60 tone 4464 for 5 wait 30 
			  tone 2841 for 10 wait 15 tone 1008 for 5 wait 30 
			  tone 1953 for 40 wait 60 tone 4464 for 10 wait 15 
			  tone 6250 for 5 wait 5}
macro tb_107 {tone 1008 for 15 wait 20 tone 2083 for 15 wait 20 
			  tone 4464 for 10 wait 15 tone 6250 for 5 wait 5}

/////////////////////////////////////////////////////////////////
//Tune blocks

macro tb_Hey {tb_17}
macro tb_What {tb_19}
macro tb_WhatsThat {tb_20}
macro tb_Ribbet {tb_21}
macro tb_ImOK {tb_24}
macro tb_Celebration {tb_25}
macro tb_ThatsAll {tb_26}
macro tb_HereWeGo {tb_27}

macro tb_TweetiePie {tb_45}

macro tb_Figaro {tb_52}
macro tb_AllOk {tb_53}
macro tb_Bleep {tb_54}
macro tb_HereWeGoAgain {tb_59}

macro tb_Siren {tb_66}

macro tb_CodeOk {tb_77}
macro tb_GoodCode {tb_86}

macro tb_Blip {tb_96}
macro tb_OkeyDokey {tb_99}

macro tb_DingDong {}
macro tb_Cool {}
macro tb_Fifth {repeat 3 {tone 659 for 15 wait 20} tone 494 for 30 wait 60
				repeat 3 {tone 494 for 15 wait 20} tone 330 for 30 wait 60}
macro tb_Mumble {repeat random 5 to 15 {tone random 40 to 100 for 1 wait 1}}
macro tb_Twitter {repeat 20 {tone random 2000 to 4000 for 1 wait 1}}

/////////////////////////////////////////////////////////////////
