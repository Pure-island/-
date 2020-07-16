loca:
ori $s0,$s0,3
sw $s0,4($0)
nop
beq $s0,$0,loca
addu $s1,$s0,$s0
subu $s2,$s1,$s0
lw $s0,3($0)
beq $s0,$0,loca
