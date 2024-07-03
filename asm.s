
ex3-extern.o:	file format mach-o 64-bit x86-64


Disassembly of section __TEXT,__text:

0000000000000000 <_main>:
       0: 55                           	pushq	%rbp
       1: 48 89 e5                     	movq	%rsp, %rbp
       4: 48 83 ec 20                  	subq	$32, %rsp
       8: c7 45 fc 00 00 00 00         	movl	$0, -4(%rbp)
       f: c7 45 f8 0a 00 00 00         	movl	$10, -8(%rbp)
      16: 48 8d 45 f8                  	leaq	-8(%rbp), %rax
      1a: 48 89 45 f0                  	movq	%rax, -16(%rbp)
      1e: 48 8b 7d f0                  	movq	-16(%rbp), %rdi
      22: e8 00 00 00 00               	callq	0x27 <_main+0x27>
      27: 48 8b 45 f0                  	movq	-16(%rbp), %rax
      2b: 8b 30                        	movl	(%rax), %esi
      2d: 48 8d 3d 14 00 00 00         	leaq	20(%rip), %rdi  # 48 <_main+0x48>
      34: b0 00                        	movb	$0, %al
      36: e8 00 00 00 00               	callq	0x3b <_main+0x3b>
      3b: 31 c9                        	xorl	%ecx, %ecx
      3d: 89 45 ec                     	movl	%eax, -20(%rbp)
      40: 89 c8                        	movl	%ecx, %eax
      42: 48 83 c4 20                  	addq	$32, %rsp
      46: 5d                           	popq	%rbp
      47: c3                           	retq
