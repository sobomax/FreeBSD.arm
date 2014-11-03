#include <machine/asm.h>

.ident	"$FreeBSD: head/lib/libc/arm/gen/_ctx_start.S 270882 2014-08-31 17:21:51Z ian $"
ENTRY(_ctx_start)
	mov	lr, pc
	mov	pc, r4
	mov	r0, r5
	bl	_C_LABEL(ctx_done)
	bl	_C_LABEL(abort)
END(_ctx_start)
