lui $1,12172
ori $1,$1,64378
lui $2,40268
ori $2,$2,65345
lui $3,22075
ori $3,$3,59710
lui $4,52131
ori $4,$4,53110
lui $5,29493
ori $5,$5,26784
lui $6,60439
ori $6,$6,39004
mthi $1
mtlo $2
sec0:
	nop
	nop
	nop
	bgez $4,yes0
	nop
no0:addiu $k1,$k1,1
yes0:addiu $k0,$k0,1

sec1:
	nop
	nop
	subu $4,$4,$3
	bgez $4,yes1
	nop
no1:addiu $k1,$k1,1
yes1:addiu $k0,$k0,1

sec2:
	nop
	nop
	sltiu $4,$5,-12858
	bgez $4,yes2
	nop
no2:addiu $k1,$k1,1
yes2:addiu $k0,$k0,1

sec3:
	nop
	nop
	mfhi $4
	bgez $4,yes3
	nop
no3:addiu $k1,$k1,1
yes3:addiu $k0,$k0,1

sec4:
	nop
	nop
	lhu $4,8($0)
	bgez $4,yes4
	nop
no4:addiu $k1,$k1,1
yes4:addiu $k0,$k0,1

sec5:
	nop
	sltu $4,$0,$3
	nop
	bgez $4,yes5
	nop
no5:addiu $k1,$k1,1
yes5:addiu $k0,$k0,1

sec6:
	nop
	addu $4,$5,$6
	subu $4,$3,$2
	bgez $4,yes6
	nop
no6:addiu $k1,$k1,1
yes6:addiu $k0,$k0,1

sec7:
	nop
	or $4,$3,$0
	andi $4,$3,41912
	bgez $4,yes7
	nop
no7:addiu $k1,$k1,1
yes7:addiu $k0,$k0,1

sec8:
	nop
	xor $4,$2,$4
	mfhi $4
	bgez $4,yes8
	nop
no8:addiu $k1,$k1,1
yes8:addiu $k0,$k0,1

sec9:
	nop
	and $4,$1,$3
	lbu $4,6($0)
	bgez $4,yes9
	nop
no9:addiu $k1,$k1,1
yes9:addiu $k0,$k0,1

sec10:
	nop
	andi $4,$5,17518
	nop
	bgez $4,yes10
	nop
no10:addiu $k1,$k1,1
yes10:addiu $k0,$k0,1

sec11:
	nop
	addiu $4,$2,-13656
	nor $4,$2,$2
	bgez $4,yes11
	nop
no11:addiu $k1,$k1,1
yes11:addiu $k0,$k0,1

sec12:
	nop
	ori $4,$5,4923
	xori $4,$1,13504
	bgez $4,yes12
	nop
no12:addiu $k1,$k1,1
yes12:addiu $k0,$k0,1

sec13:
	nop
	sltiu $4,$0,-29575
	mflo $4
	bgez $4,yes13
	nop
no13:addiu $k1,$k1,1
yes13:addiu $k0,$k0,1

sec14:
	nop
	ori $4,$0,15411
	lw $4,12($0)
	bgez $4,yes14
	nop
no14:addiu $k1,$k1,1
yes14:addiu $k0,$k0,1

sec15:
	nop
	mfhi $4
	nop
	bgez $4,yes15
	nop
no15:addiu $k1,$k1,1
yes15:addiu $k0,$k0,1

sec16:
	nop
	mflo $4
	or $4,$4,$4
	bgez $4,yes16
	nop
no16:addiu $k1,$k1,1
yes16:addiu $k0,$k0,1

sec17:
	nop
	mfhi $4
	xori $4,$3,24680
	bgez $4,yes17
	nop
no17:addiu $k1,$k1,1
yes17:addiu $k0,$k0,1

sec18:
	nop
	mfhi $4
	mflo $4
	bgez $4,yes18
	nop
no18:addiu $k1,$k1,1
yes18:addiu $k0,$k0,1

sec19:
	nop
	mfhi $4
	lb $4,10($0)
	bgez $4,yes19
	nop
no19:addiu $k1,$k1,1
yes19:addiu $k0,$k0,1

sec20:
	nop
	lhu $4,2($0)
	nop
	bgez $4,yes20
	nop
no20:addiu $k1,$k1,1
yes20:addiu $k0,$k0,1

sec21:
	nop
	lh $4,10($0)
	sltu $4,$5,$5
	bgez $4,yes21
	nop
no21:addiu $k1,$k1,1
yes21:addiu $k0,$k0,1

sec22:
	nop
	lbu $4,7($0)
	addiu $4,$4,-1340
	bgez $4,yes22
	nop
no22:addiu $k1,$k1,1
yes22:addiu $k0,$k0,1

sec23:
	nop
	lw $4,16($0)
	mflo $4
	bgez $4,yes23
	nop
no23:addiu $k1,$k1,1
yes23:addiu $k0,$k0,1

sec24:
	nop
	lbu $4,1($0)
	lb $4,14($0)
	bgez $4,yes24
	nop
no24:addiu $k1,$k1,1
yes24:addiu $k0,$k0,1

sec25:
	subu $4,$0,$3
	nop
	nop
	bgez $4,yes25
	nop
no25:addiu $k1,$k1,1
yes25:addiu $k0,$k0,1

sec26:
	or $4,$4,$6
	nop
	nor $4,$2,$3
	bgez $4,yes26
	nop
no26:addiu $k1,$k1,1
yes26:addiu $k0,$k0,1

sec27:
	nor $4,$2,$3
	nop
	ori $4,$3,21322
	bgez $4,yes27
	nop
no27:addiu $k1,$k1,1
yes27:addiu $k0,$k0,1

sec28:
	addu $4,$1,$6
	nop
	mfhi $4
	bgez $4,yes28
	nop
no28:addiu $k1,$k1,1
yes28:addiu $k0,$k0,1

sec29:
	sltu $4,$2,$6
	nop
	lh $4,12($0)
	bgez $4,yes29
	nop
no29:addiu $k1,$k1,1
yes29:addiu $k0,$k0,1

sec30:
	addu $4,$3,$4
	subu $4,$4,$4
	nop
	bgez $4,yes30
	nop
no30:addiu $k1,$k1,1
yes30:addiu $k0,$k0,1

sec31:
	xor $4,$5,$1
	or $4,$5,$1
	and $4,$5,$1
	bgez $4,yes31
	nop
no31:addiu $k1,$k1,1
yes31:addiu $k0,$k0,1

sec32:
	nor $4,$6,$0
	sltu $4,$3,$4
	lui $4,7785
	bgez $4,yes32
	nop
no32:addiu $k1,$k1,1
yes32:addiu $k0,$k0,1

sec33:
	sltu $4,$3,$4
	and $4,$5,$2
	mflo $4
	bgez $4,yes33
	nop
no33:addiu $k1,$k1,1
yes33:addiu $k0,$k0,1

sec34:
	sltu $4,$6,$4
	and $4,$3,$5
	lh $4,0($0)
	bgez $4,yes34
	nop
no34:addiu $k1,$k1,1
yes34:addiu $k0,$k0,1

sec35:
	nor $4,$2,$2
	addiu $4,$3,-23384
	nop
	bgez $4,yes35
	nop
no35:addiu $k1,$k1,1
yes35:addiu $k0,$k0,1

sec36:
	nor $4,$4,$5
	lui $4,14616
	xor $4,$0,$4
	bgez $4,yes36
	nop
no36:addiu $k1,$k1,1
yes36:addiu $k0,$k0,1

sec37:
	addu $4,$5,$6
	andi $4,$3,14127
	slti $4,$3,-11936
	bgez $4,yes37
	nop
no37:addiu $k1,$k1,1
yes37:addiu $k0,$k0,1

sec38:
	sltu $4,$4,$4
	sltiu $4,$6,-31564
	mfhi $4
	bgez $4,yes38
	nop
no38:addiu $k1,$k1,1
yes38:addiu $k0,$k0,1

sec39:
	sltu $4,$3,$5
	addiu $4,$2,22834
	lbu $4,11($0)
	bgez $4,yes39
	nop
no39:addiu $k1,$k1,1
yes39:addiu $k0,$k0,1

sec40:
	sltu $4,$3,$3
	mflo $4
	nop
	bgez $4,yes40
	nop
no40:addiu $k1,$k1,1
yes40:addiu $k0,$k0,1

sec41:
	addu $4,$4,$4
	mflo $4
	subu $4,$3,$5
	bgez $4,yes41
	nop
no41:addiu $k1,$k1,1
yes41:addiu $k0,$k0,1

sec42:
	slt $4,$3,$6
	mflo $4
	xori $4,$4,30660
	bgez $4,yes42
	nop
no42:addiu $k1,$k1,1
yes42:addiu $k0,$k0,1

sec43:
	slt $4,$5,$4
	mfhi $4
	mflo $4
	bgez $4,yes43
	nop
no43:addiu $k1,$k1,1
yes43:addiu $k0,$k0,1

sec44:
	subu $4,$3,$1
	mfhi $4
	lhu $4,6($0)
	bgez $4,yes44
	nop
no44:addiu $k1,$k1,1
yes44:addiu $k0,$k0,1

sec45:
	xor $4,$6,$5
	lhu $4,2($0)
	nop
	bgez $4,yes45
	nop
no45:addiu $k1,$k1,1
yes45:addiu $k0,$k0,1

sec46:
	sltu $4,$1,$3
	lhu $4,8($0)
	slt $4,$2,$0
	bgez $4,yes46
	nop
no46:addiu $k1,$k1,1
yes46:addiu $k0,$k0,1

sec47:
	subu $4,$2,$3
	lw $4,4($0)
	addiu $4,$4,-27614
	bgez $4,yes47
	nop
no47:addiu $k1,$k1,1
yes47:addiu $k0,$k0,1

sec48:
	sltu $4,$2,$5
	lhu $4,6($0)
	mfhi $4
	bgez $4,yes48
	nop
no48:addiu $k1,$k1,1
yes48:addiu $k0,$k0,1

sec49:
	addu $4,$3,$4
	lw $4,8($0)
	lbu $4,9($0)
	bgez $4,yes49
	nop
no49:addiu $k1,$k1,1
yes49:addiu $k0,$k0,1

sec50:
	addiu $4,$3,21178
	nop
	nop
	bgez $4,yes50
	nop
no50:addiu $k1,$k1,1
yes50:addiu $k0,$k0,1

sec51:
	slti $4,$4,30960
	nop
	or $4,$3,$1
	bgez $4,yes51
	nop
no51:addiu $k1,$k1,1
yes51:addiu $k0,$k0,1

sec52:
	andi $4,$3,35263
	nop
	addiu $4,$4,23826
	bgez $4,yes52
	nop
no52:addiu $k1,$k1,1
yes52:addiu $k0,$k0,1

sec53:
	ori $4,$3,48622
	nop
	mfhi $4
	bgez $4,yes53
	nop
no53:addiu $k1,$k1,1
yes53:addiu $k0,$k0,1

sec54:
	ori $4,$1,17884
	nop
	lbu $4,9($0)
	bgez $4,yes54
	nop
no54:addiu $k1,$k1,1
yes54:addiu $k0,$k0,1

sec55:
	ori $4,$3,30574
	sltu $4,$2,$6
	nop
	bgez $4,yes55
	nop
no55:addiu $k1,$k1,1
yes55:addiu $k0,$k0,1

sec56:
	xori $4,$4,51353
	nor $4,$1,$2
	xor $4,$3,$6
	bgez $4,yes56
	nop
no56:addiu $k1,$k1,1
yes56:addiu $k0,$k0,1

sec57:
	lui $4,20151
	slt $4,$2,$3
	sltiu $4,$3,15026
	bgez $4,yes57
	nop
no57:addiu $k1,$k1,1
yes57:addiu $k0,$k0,1

sec58:
	lui $4,46201
	xor $4,$3,$3
	mfhi $4
	bgez $4,yes58
	nop
no58:addiu $k1,$k1,1
yes58:addiu $k0,$k0,1

sec59:
	slti $4,$3,4260
	nor $4,$3,$2
	lh $4,14($0)
	bgez $4,yes59
	nop
no59:addiu $k1,$k1,1
yes59:addiu $k0,$k0,1

sec60:
	slti $4,$4,9765
	ori $4,$1,45625
	nop
	bgez $4,yes60
	nop
no60:addiu $k1,$k1,1
yes60:addiu $k0,$k0,1

sec61:
	addiu $4,$3,25335
	ori $4,$1,17981
	sltu $4,$3,$2
	bgez $4,yes61
	nop
no61:addiu $k1,$k1,1
yes61:addiu $k0,$k0,1

sec62:
	xori $4,$2,40621
	xori $4,$4,8645
	sltiu $4,$1,10312
	bgez $4,yes62
	nop
no62:addiu $k1,$k1,1
yes62:addiu $k0,$k0,1

sec63:
	slti $4,$4,698
	lui $4,33276
	mfhi $4
	bgez $4,yes63
	nop
no63:addiu $k1,$k1,1
yes63:addiu $k0,$k0,1

sec64:
	xori $4,$0,20585
	sltiu $4,$3,-30941
	lbu $4,1($0)
	bgez $4,yes64
	nop
no64:addiu $k1,$k1,1
yes64:addiu $k0,$k0,1

sec65:
	andi $4,$0,20051
	mflo $4
	nop
	bgez $4,yes65
	nop
no65:addiu $k1,$k1,1
yes65:addiu $k0,$k0,1

sec66:
	andi $4,$3,10765
	mflo $4
	subu $4,$2,$4
	bgez $4,yes66
	nop
no66:addiu $k1,$k1,1
yes66:addiu $k0,$k0,1

sec67:
	xori $4,$4,47354
	mflo $4
	ori $4,$5,16150
	bgez $4,yes67
	nop
no67:addiu $k1,$k1,1
yes67:addiu $k0,$k0,1

sec68:
	ori $4,$1,39972
	mflo $4
	mflo $4
	bgez $4,yes68
	nop
no68:addiu $k1,$k1,1
yes68:addiu $k0,$k0,1

sec69:
	ori $4,$6,12589
	mflo $4
	lhu $4,2($0)
	bgez $4,yes69
	nop
no69:addiu $k1,$k1,1
yes69:addiu $k0,$k0,1

sec70:
	sltiu $4,$2,7822
	lb $4,0($0)
	nop
	bgez $4,yes70
	nop
no70:addiu $k1,$k1,1
yes70:addiu $k0,$k0,1

sec71:
	andi $4,$4,17713
	lh $4,16($0)
	or $4,$2,$1
	bgez $4,yes71
	nop
no71:addiu $k1,$k1,1
yes71:addiu $k0,$k0,1

sec72:
	ori $4,$2,55457
	lw $4,8($0)
	ori $4,$4,50710
	bgez $4,yes72
	nop
no72:addiu $k1,$k1,1
yes72:addiu $k0,$k0,1

sec73:
	addiu $4,$4,-18932
	lbu $4,2($0)
	mfhi $4
	bgez $4,yes73
	nop
no73:addiu $k1,$k1,1
yes73:addiu $k0,$k0,1

sec74:
	lui $4,57595
	lh $4,14($0)
	lhu $4,6($0)
	bgez $4,yes74
	nop
no74:addiu $k1,$k1,1
yes74:addiu $k0,$k0,1

sec75:
	mfhi $4
	nop
	nop
	bgez $4,yes75
	nop
no75:addiu $k1,$k1,1
yes75:addiu $k0,$k0,1

sec76:
	mflo $4
	nop
	subu $4,$3,$2
	bgez $4,yes76
	nop
no76:addiu $k1,$k1,1
yes76:addiu $k0,$k0,1

sec77:
	mfhi $4
	nop
	addiu $4,$1,17322
	bgez $4,yes77
	nop
no77:addiu $k1,$k1,1
yes77:addiu $k0,$k0,1

sec78:
	mflo $4
	nop
	mfhi $4
	bgez $4,yes78
	nop
no78:addiu $k1,$k1,1
yes78:addiu $k0,$k0,1

sec79:
	mflo $4
	nop
	lhu $4,12($0)
	bgez $4,yes79
	nop
no79:addiu $k1,$k1,1
yes79:addiu $k0,$k0,1

sec80:
	mfhi $4
	subu $4,$3,$6
	nop
	bgez $4,yes80
	nop
no80:addiu $k1,$k1,1
yes80:addiu $k0,$k0,1

sec81:
	mflo $4
	subu $4,$4,$3
	and $4,$0,$2
	bgez $4,yes81
	nop
no81:addiu $k1,$k1,1
yes81:addiu $k0,$k0,1

sec82:
	mfhi $4
	nor $4,$4,$6
	xori $4,$3,17210
	bgez $4,yes82
	nop
no82:addiu $k1,$k1,1
yes82:addiu $k0,$k0,1

sec83:
	mfhi $4
	sltu $4,$3,$2
	mflo $4
	bgez $4,yes83
	nop
no83:addiu $k1,$k1,1
yes83:addiu $k0,$k0,1

sec84:
	mflo $4
	addu $4,$4,$3
	lb $4,15($0)
	bgez $4,yes84
	nop
no84:addiu $k1,$k1,1
yes84:addiu $k0,$k0,1

sec85:
	mfhi $4
	andi $4,$1,60386
	nop
	bgez $4,yes85
	nop
no85:addiu $k1,$k1,1
yes85:addiu $k0,$k0,1

sec86:
	mfhi $4
	xori $4,$1,26279
	sltu $4,$4,$4
	bgez $4,yes86
	nop
no86:addiu $k1,$k1,1
yes86:addiu $k0,$k0,1

sec87:
	mfhi $4
	addiu $4,$2,256
	addiu $4,$5,21378
	bgez $4,yes87
	nop
no87:addiu $k1,$k1,1
yes87:addiu $k0,$k0,1

sec88:
	mfhi $4
	lui $4,13944
	mfhi $4
	bgez $4,yes88
	nop
no88:addiu $k1,$k1,1
yes88:addiu $k0,$k0,1

sec89:
	mflo $4
	sltiu $4,$2,-11138
	lw $4,16($0)
	bgez $4,yes89
	nop
no89:addiu $k1,$k1,1
yes89:addiu $k0,$k0,1

sec90:
	mflo $4
	mflo $4
	nop
	bgez $4,yes90
	nop
no90:addiu $k1,$k1,1
yes90:addiu $k0,$k0,1

sec91:
	mfhi $4
	mfhi $4
	nor $4,$4,$1
	bgez $4,yes91
	nop
no91:addiu $k1,$k1,1
yes91:addiu $k0,$k0,1

sec92:
	mflo $4
	mflo $4
	addiu $4,$2,3161
	bgez $4,yes92
	nop
no92:addiu $k1,$k1,1
yes92:addiu $k0,$k0,1

sec93:
	mflo $4
	mflo $4
	mfhi $4
	bgez $4,yes93
	nop
no93:addiu $k1,$k1,1
yes93:addiu $k0,$k0,1

sec94:
	mfhi $4
	mfhi $4
	lbu $4,15($0)
	bgez $4,yes94
	nop
no94:addiu $k1,$k1,1
yes94:addiu $k0,$k0,1

sec95:
	mfhi $4
	lbu $4,14($0)
	nop
	bgez $4,yes95
	nop
no95:addiu $k1,$k1,1
yes95:addiu $k0,$k0,1

sec96:
	mflo $4
	lhu $4,6($0)
	slt $4,$2,$3
	bgez $4,yes96
	nop
no96:addiu $k1,$k1,1
yes96:addiu $k0,$k0,1

sec97:
	mflo $4
	lw $4,12($0)
	slti $4,$1,9391
	bgez $4,yes97
	nop
no97:addiu $k1,$k1,1
yes97:addiu $k0,$k0,1

sec98:
	mflo $4
	lw $4,8($0)
	mflo $4
	bgez $4,yes98
	nop
no98:addiu $k1,$k1,1
yes98:addiu $k0,$k0,1

sec99:
	mflo $4
	lw $4,8($0)
	lbu $4,11($0)
	bgez $4,yes99
	nop
no99:addiu $k1,$k1,1
yes99:addiu $k0,$k0,1

sec100:
	lhu $4,14($0)
	nop
	nop
	bgez $4,yes100
	nop
no100:addiu $k1,$k1,1
yes100:addiu $k0,$k0,1

sec101:
	lhu $4,6($0)
	nop
	xor $4,$6,$3
	bgez $4,yes101
	nop
no101:addiu $k1,$k1,1
yes101:addiu $k0,$k0,1

sec102:
	lbu $4,4($0)
	nop
	addiu $4,$4,17005
	bgez $4,yes102
	nop
no102:addiu $k1,$k1,1
yes102:addiu $k0,$k0,1

sec103:
	lb $4,12($0)
	nop
	mfhi $4
	bgez $4,yes103
	nop
no103:addiu $k1,$k1,1
yes103:addiu $k0,$k0,1

sec104:
	lbu $4,16($0)
	nop
	lhu $4,14($0)
	bgez $4,yes104
	nop
no104:addiu $k1,$k1,1
yes104:addiu $k0,$k0,1

sec105:
	lh $4,2($0)
	sltu $4,$3,$4
	nop
	bgez $4,yes105
	nop
no105:addiu $k1,$k1,1
yes105:addiu $k0,$k0,1

sec106:
	lhu $4,14($0)
	xor $4,$0,$0
	or $4,$5,$2
	bgez $4,yes106
	nop
no106:addiu $k1,$k1,1
yes106:addiu $k0,$k0,1

sec107:
	lbu $4,11($0)
	sltu $4,$3,$1
	addiu $4,$3,-15642
	bgez $4,yes107
	nop
no107:addiu $k1,$k1,1
yes107:addiu $k0,$k0,1

sec108:
	lb $4,12($0)
	sltu $4,$3,$6
	mfhi $4
	bgez $4,yes108
	nop
no108:addiu $k1,$k1,1
yes108:addiu $k0,$k0,1

sec109:
	lb $4,3($0)
	xor $4,$0,$3
	lhu $4,14($0)
	bgez $4,yes109
	nop
no109:addiu $k1,$k1,1
yes109:addiu $k0,$k0,1

sec110:
	lb $4,6($0)
	lui $4,54222
	nop
	bgez $4,yes110
	nop
no110:addiu $k1,$k1,1
yes110:addiu $k0,$k0,1

sec111:
	lb $4,13($0)
	sltiu $4,$3,-2884
	subu $4,$0,$3
	bgez $4,yes111
	nop
no111:addiu $k1,$k1,1
yes111:addiu $k0,$k0,1

sec112:
	lb $4,2($0)
	lui $4,28727
	sltiu $4,$5,-4633
	bgez $4,yes112
	nop
no112:addiu $k1,$k1,1
yes112:addiu $k0,$k0,1

sec113:
	lhu $4,4($0)
	slti $4,$1,11623
	mfhi $4
	bgez $4,yes113
	nop
no113:addiu $k1,$k1,1
yes113:addiu $k0,$k0,1

sec114:
	lw $4,12($0)
	andi $4,$4,54302
	lh $4,10($0)
	bgez $4,yes114
	nop
no114:addiu $k1,$k1,1
yes114:addiu $k0,$k0,1

sec115:
	lh $4,4($0)
	mflo $4
	nop
	bgez $4,yes115
	nop
no115:addiu $k1,$k1,1
yes115:addiu $k0,$k0,1

sec116:
	lbu $4,4($0)
	mfhi $4
	or $4,$4,$1
	bgez $4,yes116
	nop
no116:addiu $k1,$k1,1
yes116:addiu $k0,$k0,1

sec117:
	lb $4,14($0)
	mfhi $4
	xori $4,$5,53240
	bgez $4,yes117
	nop
no117:addiu $k1,$k1,1
yes117:addiu $k0,$k0,1

sec118:
	lb $4,14($0)
	mfhi $4
	mfhi $4
	bgez $4,yes118
	nop
no118:addiu $k1,$k1,1
yes118:addiu $k0,$k0,1

sec119:
	lbu $4,11($0)
	mfhi $4
	lhu $4,0($0)
	bgez $4,yes119
	nop
no119:addiu $k1,$k1,1
yes119:addiu $k0,$k0,1

sec120:
	lbu $4,9($0)
	lb $4,10($0)
	nop
	bgez $4,yes120
	nop
no120:addiu $k1,$k1,1
yes120:addiu $k0,$k0,1

sec121:
	lw $4,16($0)
	lbu $4,16($0)
	nor $4,$1,$0
	bgez $4,yes121
	nop
no121:addiu $k1,$k1,1
yes121:addiu $k0,$k0,1

sec122:
	lb $4,6($0)
	lb $4,2($0)
	addiu $4,$2,-24638
	bgez $4,yes122
	nop
no122:addiu $k1,$k1,1
yes122:addiu $k0,$k0,1

sec123:
	lh $4,4($0)
	lw $4,0($0)
	mflo $4
	bgez $4,yes123
	nop
no123:addiu $k1,$k1,1
yes123:addiu $k0,$k0,1

sec124:
	lh $4,14($0)
	lhu $4,6($0)
	lb $4,10($0)
	bgez $4,yes124
	nop
no124:addiu $k1,$k1,1
yes124:addiu $k0,$k0,1

