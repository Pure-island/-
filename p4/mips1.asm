locus:
ori $a0,$0,111
ori $a1,$0,222
ori $0,$0,33

lui $a2,123
nop

addu $s0,$a0,$a2
subu $s1,$a1,$a0

beq $a1,$a0,locus
beq $s1,$a0,locus1
addu $s0,$s0,$s0
locus1:

sw $a0,0($0)
sw $a1,4($0)
lw $t0,0($0)
lw $t1,4($0)

jal locus2
addu $s0,$s0,$s0
locus2:
addu $s5,$s0,$s0
jr $ra
