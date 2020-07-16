.data
symbol: .space 40
array: .space 40
nn: .asciiz "\n"
spa: .asciiz " "
.macro add_arr(%ans,%i,%locus)
	mul %ans,%i,4
	add %ans,%ans,%locus
.end_macro

.text
#s0=n,s1=index
	li $v0,5
	syscall
	move $s0,$v0
	move $s1,$0
	jal full_array
	
	li $v0,10
	syscall
	
full_array:
	#t0=i	
	blt $s1,$s0,end_if1
	move $t0,$0
for1:
	beq $t0,$s0,end_for1
	la $t2,array
	add_arr($t1,$t0,$t2)
	lw $a0,0($t1)
	li $v0,1
	syscall
	la $a0,spa
	li $v0,4
	syscall
	addi $t0,$t0,1
	j for1
end_for1:
	la $a0,nn
	li $v0,4
	syscall
	jr $ra
end_if1:
	
	move $t0,$0
for2:
	beq $t0,$s0,end_for2
	la $t2,symbol
	add_arr($t1,$t0,$t2)
	lw $t1,0($t1)
	bne $t1,$0,end_if2
	li $t9,1
	la $t2,symbol
	add_arr($t1,$t0,$t2)
	sw $t9,0($t1)
	la $t2,array
	add_arr($t1,$s1,$t2)
	addi $t9,$t0,1
	sw $t9,0($t1)
	
	sw $t0,0($sp)
	addi $sp,$sp,-4
	sw $ra,0($sp)
	addi $sp,$sp,-4
	addi $s1,$s1,1
	jal full_array
	addi $s1,$s1,-1
	addi $sp,$sp,4
	lw $ra,0($sp)
	addi $sp,$sp,4
	lw $t0,0($sp)
	la $t2,symbol
	add_arr($t1,$t0,$t2)
	sw $0,0($t1)
end_if2:
	addi $t0,$t0,1
	j for2
end_for2:
	jr $ra

















































































































































































