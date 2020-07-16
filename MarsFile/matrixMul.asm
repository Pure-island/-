.data
mat_a: .space 1024
mat_b: .space 1024
mat_c: .space 1024
spa: .asciiz " "
nnn: .asciiz "\n"
.macro mat_add(%ans,%i,%j,%locus)
	mul $t9,%i,64
	add $t9,$t9,%locus
	mul $t8,%j,4
	add %ans,$t8,$t9
.end_macro

.text
	#s0=n,s1=i,s2=j,s3=k,s4=a,s5=b,s6=c
	la $s4, mat_a
	la $s5, mat_b
	la $s6, mat_c
	li $v0,5
	syscall
	move $s0,$v0
	
	move $s1,$0
for11:
	beq $s1,$s0,end11
	move $s2,$0
for12:
	beq $s2,$s0,end12
	mat_add($t0,$s1,$s2,$s4)
	li $v0,5
	syscall
	sw $v0,0($t0)
	addi $s2,$s2,1
	j for12
end12:
	addi $s1,$s1,1
	j for11
end11:

	move $s1,$0
for21:
	beq $s1,$s0,end21
	move $s2,$0
for22:
	beq $s2,$s0,end22
	mat_add($t0,$s1,$s2,$s5)
	li $v0,5
	syscall
	sw $v0,0($t0)
	addi $s2,$s2,1
	j for22
end22:
	addi $s1,$s1,1
	j for21
end21:

	move $s1,$0
for31:
	beq $s1,$s0,end31
	move $s2,$0
for32:
	beq $s2,$s0,end32
	move $t4,$0
	mat_add($t0,$s1,$s2,$s6)
	move $s3,$0
for33:
	beq $s3,$s0,end33
	mat_add($t1,$s1,$s3,$s4)
	mat_add($t2,$s3,$s2,$s5)
	lw $t1,0($t1)
	lw $t2,0($t2)
	mul $t1,$t1,$t2
	add $t4,$t4,$t1
	addi $s3,$s3,1
	j for33
end33:
	sw $t4,0($t0)
	addi $s2,$s2,1
	j for32
end32:
	addi $s1,$s1,1
	j for31
end31:

	move $s1,$0
for41:
	beq $s1,$s0,end41
	move $s2,$0
for42:
	beq $s2,$s0,end42
	mat_add($t0,$s1,$s2,$s6)
	lw $a0,0($t0)	
	li $v0,1
	syscall
	la $a0,spa
	li $v0,4
	syscall
	addi $s2,$s2,1
	j for42
end42:
	la $a0,nnn
	li $v0,4
	syscall
	addi $s1,$s1,1
	j for41
end41:
	
	li $v0,10
	syscall



































