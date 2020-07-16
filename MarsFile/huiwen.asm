.data
arr_a: .space 400
.macro add_a(%i)
	mul $t9,%i,4
	add $t9,$t9,$s3
.end_macro
.text
	#s0=i,s1=n,s2=flag,s3=a[]
	li $s2,1
	la $s3,arr_a
	li $v0,5
	syscall
	move $s1,$v0
	
	move $s0,$0
for1:
	beq $s0,$s1,for1_end
	li $v0,12
	syscall
	add_a($s0)
	sw $v0,0($t9)
	addi $s0,$s0,1
	j for1
for1_end:
	
	move $s0,$0
for2:
	beq $s0,$s1,for2_end
	add_a($s0)
	lw $t0,0($t9)
	sub $t1,$s1,$s0
	subi $t1,$t1,1
	add_a($t1)
	lw $t1,0($t9)
	beq $t0,$t1,endif
	li $s2,0
endif:
	addi $s0,$s0,1
	j for2
for2_end:
	
	li $t0,1
	bne $s2,$t0,else
	li $a0,1
	j end
else:
	li $a0,0
end:
	li $v0,1
	syscall
	li $v0,10
	syscall
