SYSTYPE Conveyor
UNITS Feet Seconds
SYSDEF limit Infinite timeout 60 Seconds confname Config1
FLAGS System NoColor
	Text NoColor Sections GTemplate NoColor SectionNames NoColor Direction NoColor Stations NoColor StationNames NoColor
	Transfers NoColor Loads NoColor Photoeyes NoColor PhotoeyeNames NoColor FixedInterval NoColor
CONVDEF UserId 7
	NEXTSEC name sec1 type DefaultSection
	NEXTSTA name QE type DefaultStation
	NEXTTRAN name tran1 type DefaultTransfer
	NEXTMOTOR name motor1 type DefaultMotor
	NEXTPHOTOEYE name photoeye1 type DefaultPhotoeye
	ALTERNATE NONE EXTRASECTIONWIDTH 0 Feet
CONVTOL minang 450 maxang 1350
CONVMOTORTYPE name DefaultMotor
CONVSECTIONTYPE name DefaultSection width 4 Feet vel 1 Feet Seconds acc 1 Feet Seconds Seconds dec 1 Feet Seconds Seconds accum load stopsize 1 0 Feet movesize 1 0 Feet inductsize 1 0 Feet fixed 0 Feet align centered_in_interval nav 1
CONVSTATIONTYPE name DefaultStation raise 0 Seconds lower 0 Seconds dist 0 Feet release norestriction align leading cap Infinite
CONVPHOTOEYETYPE name DefaultPhotoeye blocktimeout 5 Seconds cleartimeout 5 Seconds
CONVTRANSFERTYPE name DefaultTransfer inductsize 1 0 Feet aheadinductsize 1 0 Feet speedadjust Origin starttime 0 Seconds finishtime 0 Seconds style double movemethod movesection
