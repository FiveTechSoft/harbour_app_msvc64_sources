/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.21.27702 (64-bit)
 * Generated C source from "harbour\sources\vm\harbinit.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( CLIPPER520 );
HB_FUNC( CLIPPER530 );
HB_FUNC( __HBVMINIT );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC( __SETHELPK );
HB_FUNC_EXTERN( SETKEY );
HB_FUNC_EXTERN( __XHELP );
HB_FUNC( SYSINIT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HARBINIT )
{ "CLIPPER520", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( CLIPPER520 )}, NULL },
{ "CLIPPER530", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CLIPPER530 )}, NULL },
{ "__HBVMINIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __HBVMINIT )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "__SETHELPK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( __SETHELPK )}, NULL },
{ "SETKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETKEY )}, NULL },
{ "__XHELP", {HB_FS_PUBLIC}, {HB_FUNCNAME( __XHELP )}, NULL },
{ "SYSINIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SYSINIT )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_HARBINIT, "harbour\\sources\\vm\\harbinit.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_HARBINIT
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_HARBINIT )
   #include "hbiniseg.h"
#endif

HB_FUNC( CLIPPER520 )
{
	static const HB_BYTE pcode[] =
	{
		36,53,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( CLIPPER530 )
{
	static const HB_BYTE pcode[] =
	{
		36,59,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( __HBVMINIT )
{
	static const HB_BYTE pcode[] =
	{
		36,72,0,4,0,0,176,4,0,108,3,20,1,81,
		3,0,36,74,0,176,5,0,20,0,36,76,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( __SETHELPK )
{
	static const HB_BYTE pcode[] =
	{
		36,81,0,176,7,0,92,28,89,19,0,3,0,0,
		0,176,8,0,95,1,95,2,95,3,12,3,6,20,
		2,36,83,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( SYSINIT )
{
	static const HB_BYTE pcode[] =
	{
		7
	};

	hb_vmExecute( pcode, symbols );
}

