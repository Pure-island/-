.data
	s1: .space 4000
	s2: .space 4000
	s3: .space 4000
	space: .asciiz " "
	nn: .asciiz "\n"
.text
	# $t1-n $t2-m $t3-i $t4-j $t5-t $t6-top
	li $v0 5
	syscall
	move $t1, $v0
	li $v0 5
	syscall
	move $t2, $v0
	
	la $t6,s1
	
	li $t3 0
loop1:
	beq $t3,$t1,done1
	li $t4 0
loop2:
	beq $t4,$t2,done2
	li $v0 5
	syscall
	move $t5, $v0
	beq $t5, $0, notZero
	sw $t3, 0($t6)
	sw $t4, 4000($t6)
	sw $t5, 8000($t6)
	addi $t6, $t6, 4
notZero:
	addi $t4, $t4,1
	j loop2
done2:
	addi $t3, $t3,1
	j loop1
done1:
	
	la $t7, s1
while:
	beq $t6, $t7,doneWhile
	addi $t6,$t6,-4
	li $v0,1
	lw $a0,0($t6)
	addi $a0,$a0,1
	syscall
	li $v0,4
	la $a0,space
	syscall
	li $v0,1
	lw $a0,4000($t6)
	addi $a0,$a0,1
	syscall
	li $v0,4
	la $a0,space
	syscall
	li $v0,1
	lw $a0,8000($t6)
	syscall
	li $v0,4
	la $a0,nn
	syscall
	j while
doneWhile:
	
	li $v0,10
	syscall
	
	
	
	
	
	