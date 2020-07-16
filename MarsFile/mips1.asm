.data
	run: .asciiz"1\n"
	norun: .asciiz"0\n"
.text
	li	$v0,5
	syscall
	move $t0, $v0
	move $t1, $v0
	
	andi $t1, 0x00000003
	beq $t1, $0, runyear

norunyear:

	la $a0, norun
	li $v0,4
	syscall
	j end
	
runyear:
	li $t2,100
	div $t0, $t2
	mfhi $t3
	li $t4,400
	div $t0, $t4
	mfhi $t5
	beq $t5, $0, runyeark
	beq $t3, $0, norunyear
runyeark:
	la $a0, run
	li $v0,4
	syscall
	
end:
	li	$v0,10
	syscall    