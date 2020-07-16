.data
	a:.space 2560
	track:.space 320
.text
	#t0=n,t1=m,t3=left,t4=i,t5=temp,t6=des,t7=a,t8=track
	#s7=ans
	
	la $t7,a
	la $t8,track
	
	li $v0,5
	syscall
	move $t0,$v0
	li $v0,5
	syscall
	move $t1,$v0  #scanf("%d%d",&n,&m);
	
	move $t3,$t0	  #left=n;
	
	li $a0,1
	bne $t0,$a0,yj
	li $v0,1
	syscall
	li $v0,10
	syscall
yj:

	li $t4,0
for1:
	beq $t4,$t1,for1Done
	li $v0,5
	syscall
	move $t5,$v0
	li $v0,5
	syscall
	move $t6,$v0  #scanf("%d%d",&temp,&des);
	
	li $a0,1
	mul $t9,$t5,32
	add $t9,$t7,$t9
	mul $a1,$t6,4
	add $t9,$a1,$t9
	sw $a0,0($t9)  #a[temp][des]=1;
	
	li $a0,1
	mul $t9,$t6,32
	add $t9,$t7,$t9
	mul $a1,$t5,4
	add $t9,$a1,$t9
	sw $a0,0($t9)   #a[des][temp]=1;
	
	addi $t4,$t4,1
	j for1
for1Done:
	
	jal func
	
	li $v0,1
	move $a0,$s7
	syscall   #printf("%d",ans);
	
	li $v0,10
	syscall
	
func:
	addi $t3,$t3,-1  #left--;
	
	li $s6,1
	mul $s5,$a0,4
	add $s5,$t8,$s5
	sw $s6,0($s5)  #track[t]=1;
	
	bne $t3,$0,endif
	mul $t9,$a0,32
	add $t9,$t7,$t9
	lw $t9,4($t9)
	bne  $t9,1,endif
	li $s7,1 
endif: 	        #		if(left==0){
				#			if(a[t][1]==1) 
				#				ans=1;
				#		}
work:
	
	
	li $t4,1
	move $s3,$t0
	addi $s3,$s3,1
for2:
	beq $t4,$s3,for2end
	mul $t9,$a0,32
	add $t9,$t7,$t9
	mul $s1,$t4,4
	add $t9,$s1,$t9
	lw $t9,0($t9)
	bne $t9,1,endif2
	mul $t9,$t4,4
	add $t9,$t8,$t9
	lw $t9,0($t9)
	bne $t9,0,endif2
	sw $ra,0($sp)
	addi $sp,$sp,-4
	sw $a0,0($sp)
	addi $sp,$sp,-4
	move $a0,$t4
	sw $t4,0($sp)
	addi $sp,$sp,-4
	jal func
	addi $sp,$sp,4
	lw $t4,0($sp)
	addi $sp,$sp,4
	lw $a0,0($sp)
	addi $sp,$sp,4
	lw $ra,0($sp)
	
endif2:
	addi $t4,$t4,1
	j for2
for2end:
	addi $t3,$t3,1
	li $s6,0
	mul $s5,$a0,4
	add $s5,$t8,$s5
	sw $s6,0($s5)
	jr $ra
	
	
	
	
	
	
	
	
	
