SYSTYPE AGVS
UNITS Meters Seconds
SYSDEF limit Infinite timeout 60 Seconds confname Config1
FLAGS System NoColor
	Text NoColor Paths GTemplate NoColor PathNames NoColor Direction NoColor ControlPoints NoColor ControlPointNames NoColor
	Transfers NoColor Vehicles NoColor
AGVSDEF secname caminho13 name cp16 UserId 2 cpcap Infinite cprel distance 0 Feet ALTERNATE NONE ResumeSpeedWhenClaimed
		vel 0 Infinite Feet Seconds
		crabvel 0 Infinite Feet Seconds
		sprvel 0 Infinite Feet Seconds
		crvvel 0 Infinite Feet Seconds
AGVSTOL minang 450 maxang 1350
GPATH name caminho1 piece begx -24 begy 15 begz 10.5 endx -6 endy 15 endz 10.5 upz 1
GPATH name caminho2 piece begx -5 begy 14 begz 10.5 endx -5 endy 4 endz 10.5 upz 1
GPATH name caminho3 piece begx -6 begy 5 begz 10.5 endx -24 endy 5 endz 10.5 upz 1
GPATH name caminho4 piece begx -25 begy 4 begz 10.5 endx -25 endy 14 endz 10.5 upz 1
GPATH name caminho6 piece cenx -6 ceny 14 cenz 10.5 begx -6 begy 15 begz 10.5 upz 1 angle -900
GPATH name caminho7 piece cenx -6 ceny 6 cenz 10.5 begx -5 begy 6 begz 10.5 upz 1 angle -900
GPATH name caminho8 piece cenx -24 ceny 6 cenz 10.5 begx -24 begy 5 begz 10.5 upz 1 angle -900
GPATH name caminho9 piece cenx -24 ceny 14 cenz 10.5 begx -25 begy 14 begz 10.5 upz 1 angle -900
GPATH name caminho10 piece begx -6 begy 3 begz 10.5 endx -24 endy 3 endz 10.5 upz 1
GPATH name caminho11 piece cenx -6 ceny 4 cenz 10.5 begx -5 begy 4 begz 10.5 upz 1 angle -900
GPATH name caminho12 piece cenx -24 ceny 4 cenz 10.5 begx -24 begy 3 begz 10.5 upz 1 angle -900
CPOINT name cp_Maq2 at caminho1 9
CPOINT name cp_Maq3 at caminho1 14
CPOINT name cp_Saisa at caminho2 4
CPOINT name cp_Entrada at caminho4 6
CPOINT name cp_Maq1 at caminho1 4
CPOINT name cpStart at caminho3 10
CPOINT name cp_Park at caminho10 10
NAMELST name start
NAMELST name start item cpStart 
WORKLST name cpStart Sequential item cp_Maq3 
 Sequential item cp_Maq2 
 Sequential item cp_Maq1 
 Sequential item cp_Entrada 
PARKLST name cp_Entrada Sequential item cp_Park 
WORKLST name cp_Maq1 Sequential item cp_Maq3 
 Sequential item cp_Maq2 
 Sequential item cp_Maq1 
 Sequential item cp_Entrada 
PARKLST name cp_Maq1 Sequential item cp_Park 
WORKLST name cp_Maq2 Sequential item cp_Maq3 
 Sequential item cp_Maq2 
 Sequential item cp_Maq1 
 Sequential item cp_Entrada 
PARKLST name cp_Maq2 Sequential item cp_Park 
WORKLST name cp_Maq3 Sequential item cp_Maq3 
 Sequential item cp_Maq2 
 Sequential item cp_Maq1 
 Sequential item cp_Entrada 
PARKLST name cp_Maq3 Sequential item cp_Park 
WORKLST name cp_Park Sequential item cp_Maq3 
 Sequential item cp_Maq2 
 Sequential item cp_Maq1 
 Sequential item cp_Entrada 
WORKLST name cp_Saisa Sequential item cp_Maq3 
 Sequential item cp_Maq2 
 Sequential item cp_Maq1 
 Sequential item cp_Entrada 
PARKLST name cp_Saisa Sequential item cp_Park 
AGVSVEH type DefVehicle cap 1 pickup 15 Seconds setdown 15 Seconds numveh 3 start start
Stacking OTT_LDDISP figcurspeed 100 figmaxspeed 100
 display picpos begx -12 begy 5 begz 10.5 endx -11.5 endy 5 endz 10.5 upz 0.5 scx 0.5 scy 0.5 scz 0.5
 template Feet
700 1
9 9 0 1 0 agvK_cell
1
700 21
9 9 0 1 0 AGVset
0  0  2.5
0 0 0 90
	1.00	1.00	1.00
2
700 17
9 9 0 1 0 Geom1
6
310 21
9 9 0 1 0 Base1
0  0  -0.5
0	0.00	0.00	0.00
	1.00	1.00	1.00
4.5 3 4 2.5 0.5 0 0
310 21
9 9 0 1 0 Base2
0  0  -2.5
0	0.00	0.00	0.00
	1.00	1.00	1.00
5.5 4 5.5 4 2 0 0
700 21
9 9 0 1 0 Bump1
0  0  -2.5
0	0.00	0.00	0.00
	1.00	1.00	1.00
4
310 21
9 9 0 1 0 one
-2  0  0
0	0.00	0.00	0.00
	1.00	1.00	1.00
8 0.0750000029802322 8 0.0750000029802322 0.800000011920929 0 0
310 21
9 9 0 1 0 three
-1.76999998092651  4.15999984741211  0
0 0 0 -52
	1.00	1.00	1.00
0.649999976158142 0.0750000029802322 0.649999976158142 0.0750000029802322 0.800000011920929 0 0
310 21
9 9 0 1 0 two
-1.76999998092651  -4.15999984741211  0
0 0 0 52
	1.00	1.00	1.00
0.649999976158142 0.0750000029802322 0.649999976158142 0.0750000029802322 0.800000011920929 0 0
310 21
9 9 0 1 0 four
0  4.34999990463257  0
0 0 0 90
	1.00	1.00	1.00
3.07999992370605 0.0750000029802322 3.07999992370605 0.0750000029802322 0.800000011920929 0 0
700 21
9 9 0 1 0 Bump2
0  0  -2.5
0 0 0 180
	1.00	1.00	1.00
4
310 21
9 9 0 1 0 one
-2  0  0
0	0.00	0.00	0.00
	1.00	1.00	1.00
8 0.0750000029802322 8 0.0750000029802322 0.800000011920929 0 0
310 21
9 9 0 1 0 three
-1.76999998092651  4.15999984741211  0
0 0 0 -52
	1.00	1.00	1.00
0.649999976158142 0.0750000029802322 0.649999976158142 0.0750000029802322 0.800000011920929 0 0
310 21
9 9 0 1 0 two
-1.76999998092651  -4.15999984741211  0
0 0 0 52
	1.00	1.00	1.00
0.649999976158142 0.0750000029802322 0.649999976158142 0.0750000029802322 0.800000011920929 0 0
310 21
9 9 0 1 0 four
0  4.34999990463257  0
0 0 0 90
	1.00	1.00	1.00
3.07999992370605 0.0750000029802322 3.07999992370605 0.0750000029802322 0.800000011920929 0 0
310 5
4 4 0 1 0 Base3_Blue
0  0  -0.870000004768372
0	0.00	0.00	0.00
	1.00	1.00	1.00
5.5 4 5.5 4 0.100000001490116 0 0
700 51
9 9 0 1 1 Lift_Joint
2
10 -0.33 0.45 0 0
0  0  0
0 0 0 0
1  1  1
0
1
310 17
9 9 0 1 1 Top
6 3.5 6 3.5 0.333000004291534 0 0
700 39
1 1 0 1 0 Link1
	0
	0	0	0	0	1
	0.00	0.00	0.00
0	0.00	0.00	0.00
	1.00	1.00	1.00
	0
0  0  0
0 0 0 0
1  1  1
0  0  0.349999994039536
0	0.00	0.00	0.00
	1.00	1.00	1.00
0
end
			load Default 
				accel	0 1 Feet Seconds Seconds
				decel	0 1 Feet Seconds Seconds
				vel	0 3 Feet Seconds
				crvvel	0 3 Feet Seconds
				sprvel	0 3 Feet Seconds
				rvel	0 3 Feet Seconds
				rcrvvel	0 3 Feet Seconds
				rsprvel	0 3 Feet Seconds
				crabvel	0 3 Feet Seconds
				rotate	0 2 Seconds
				brakedist	0 4.5 Feet
				stopdist	0 0 Feet
			load Empty 
				accel	1 0 Feet Seconds Seconds
				decel	1 0 Feet Seconds Seconds
				vel	1 0 Feet Seconds
				crvvel	1 0 Feet Seconds
				sprvel	1 0 Feet Seconds
				rvel	1 0 Feet Seconds
				rcrvvel	1 0 Feet Seconds
				rsprvel	1 0 Feet Seconds
				crabvel	1 0 Feet Seconds
				rotate	1 0 Seconds
				brakedist	1 0 Feet
				stopdist	1 0 Feet
