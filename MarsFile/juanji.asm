.data
mat_a: .space 1600
mat_b: .space 1600
mat_c: .space 1600
spa: .asciiz " "
ent: .asciiz "\n"
.macro mat_add(%ans,%i,%j,%locus)
	sll $t9,%i,6
	add $t9,$t9,%locus
	sll $t8,%j,2
	add %ans,$t8,$t9
.end_macro
.text
#s0=i,s1=j,s2=ii,s3=jj
#s4=m1,s5=n1,s6=m2,s7=n2,t0=temp
	li $v0,5
	syscall
	move $s4,$v0
	li $v0,5
	syscall
	move $s5,$v0
	li $v0,5
	syscall
	move $s6,$v0
	li $v0,5
	syscall
	move $s7,$v0  #scanf("%d%d%d%d",&m1,&n1,&m2,&n2);
	
	
	move $s0,$0
afor1:
	beq $s0,$s4,afor1end
	move $s1,$0
afor2:
	beq $s1,$s5,afor2end
	li $v0,5
	syscall
	la $t1,mat_a
	mat_add($t1,$s0,$s1,$t1)
	sw $v0,0($t1)
	addi $s1,$s1,1
	j afor2
afor2end:
	addi $s0,$s0,1
	j afor1
afor1end:
	
	
	move $s0,$0
bfor1:
	beq $s0,$s6,bfor1end
	move $s1,$0
bfor2:
	beq $s1,$s7,bfor2end
	li $v0,5
	syscall
	la $t1,mat_b
	mat_add($t1,$s0,$s1,$t1)
	sw $v0,0($t1)
	addi $s1,$s1,1
	j bfor2
bfor2end:
	addi $s0,$s0,1
	j bfor1
bfor1end:
	
	
	sub $t2,$s4,$s6
	sub $t3,$s5,$s7
	addi $t2,$t2,1
	addi $t3,$t3,1
	move $s0,$0
for1:
	beq $s0,$t2,for1end
	move $s1,$0
for2:
	beq $s1,$t3,for2end
	#move $t0,$0
	mul $t0,$0,$0
	move $s2,$0
for3:
	beq $s2,$s6,for3end
	move $s3,$0
for4:
	beq $s3,$s7,for4end
	la $t1,mat_b
	mat_add($t1,$s2,$s3,$t1)
	lw $t1,0($t1)
	la $t4,mat_a
	add $t5,$s0,$s2
	add $t6,$s1,$s3
	mat_add($t4,$t5,$t6,$t4)
	lw $t4,0($t4)
	madd $t1,$t4
	addi $s3,$s3,1
	j for4
for4end:
	addi $s2,$s2,1
	j for3
for3end:
	li $v0, 35
    mfhi $a0
    syscall
	li $v0,35
	mflo $a0
	syscall
	li $v0,4
	la $a0,spa
	syscall
	addi $s1,$s1,1
	j for2
for2end:
	li $v0,4
	la $a0,ent
	syscall
	addi $s0,$s0,1
	j for1
for1end:
	
	li $v0,10
	syscall
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	