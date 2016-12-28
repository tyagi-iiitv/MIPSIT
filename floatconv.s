# Float and double converter
# Written by Tobias Harms, 5 June 2001

	.globl fptodp
	.ent fptodp

fptodp:	srl  $2, $4, 23			#move exp and s
		andi $2, $2, 0xff		#mask exp
		addi $2, $2, -127		#remove excess-127
		addi $2, $2, 1023   	#add excess-1023
		sll  $2, $2, 20			#move exp to bit pos 20
		
		srl	 $3, $4, 16
		andi $3, $3, 0x8000		#mask s
		sll	 $3, $3, 16
		or	 $2, $2, $3			#move s to destreg
		
		andi $3, $4, 0x7 		#mask low bits of sig
		sll  $3, $3, 29			#move sig
		
		srl	 $4, $4, 3			#move high bits of sig
		and $4, $4, 0xfffff	#mask sig
		or  $2, $2, $4			#move sig to destreg
		
		add $5,$0,$0
		jr $31
.end fptodp