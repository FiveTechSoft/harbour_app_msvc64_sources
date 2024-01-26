/*
 * Harbour 3.2.0dev (r2004201301)
 * Microsoft Visual C 19.21.27702 (64-bit)
 * Generated C source from "..\harbour\contrib\hbwin\oleauto.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( WIN_OLEAUTO );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_STATIC( WIN_OLEAUTO___ENUMSTART );
HB_FUNC_STATIC( WIN_OLEAUTO___ENUMSKIP );
HB_FUNC_STATIC( WIN_OLEAUTO___ENUMSTOP );
HB_FUNC_EXTERN( WIN_OLEAUTO___OPINDEX );
HB_FUNC_EXTERN( WIN_OLEAUTO___ONERROR );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( __OLEENUMCREATE );
HB_FUNC_EXTERN( __OBJCLONE );
HB_FUNC_EXTERN( __OLEENUMNEXT );
HB_FUNC( WIN_OLEGETACTIVEOBJECT );
HB_FUNC_EXTERN( __OLEGETACTIVEOBJECT );
HB_FUNC( WIN_OLECREATEOBJECT );
HB_FUNC_EXTERN( __OLECREATEOBJECT );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OLEAUTO )
{ "WIN_OLEAUTO", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_OLEAUTO )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN_OLEAUTO___ENUMSTART", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_OLEAUTO___ENUMSTART )}, NULL },
{ "WIN_OLEAUTO___ENUMSKIP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_OLEAUTO___ENUMSKIP )}, NULL },
{ "WIN_OLEAUTO___ENUMSTOP", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_OLEAUTO___ENUMSTOP )}, NULL },
{ "WIN_OLEAUTO___OPINDEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_OLEAUTO___OPINDEX )}, NULL },
{ "SETONERROR", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN_OLEAUTO___ONERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( WIN_OLEAUTO___ONERROR )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "__OLEENUMCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OLEENUMCREATE )}, NULL },
{ "__HOBJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__HOBJENUM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJCLONE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJCLONE )}, NULL },
{ "___HOBJENUM", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ENUMBASE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ENUMSKIP", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OLEENUMNEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OLEENUMNEXT )}, NULL },
{ "CLASSH", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ENUMVALUE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN_OLEGETACTIVEOBJECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_OLEGETACTIVEOBJECT )}, NULL },
{ "__OLEGETACTIVEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OLEGETACTIVEOBJECT )}, NULL },
{ "___HOBJ", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WIN_OLECREATEOBJECT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WIN_OLECREATEOBJECT )}, NULL },
{ "__OLECREATEOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OLECREATEOBJECT )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OLEAUTO, "..\\harbour\\contrib\\hbwin\\oleauto.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OLEAUTO
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OLEAUTO )
   #include "hbiniseg.h"
#endif

HB_FUNC( WIN_OLEAUTO )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,33,0,36,51,0,103,1,0,100,8,
		29,146,1,176,1,0,104,1,0,12,1,29,135,1,
		166,73,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,12,119,105,110,95,111,108,101,65,117,116,111,
		0,4,0,0,108,0,112,3,80,2,36,53,0,48,
		4,0,95,2,100,100,95,1,121,72,121,72,121,72,
		106,7,95,95,104,79,98,106,0,4,1,0,9,112,
		5,73,36,54,0,48,4,0,95,2,100,100,95,1,
		121,72,121,72,121,72,106,11,95,95,104,79,98,106,
		69,110,117,109,0,4,1,0,9,112,5,73,36,55,
		0,48,4,0,95,2,100,100,95,1,121,72,121,72,
		121,72,106,8,95,95,104,83,105,110,107,0,4,1,
		0,9,112,5,73,36,56,0,48,4,0,95,2,100,
		100,95,1,121,72,121,72,121,72,106,8,95,95,99,
		97,114,103,111,0,4,1,0,9,112,5,73,36,58,
		0,48,5,0,95,2,106,12,95,95,101,110,117,109,
		83,116,97,114,116,0,108,6,95,1,121,72,121,72,
		121,72,112,3,73,36,59,0,48,5,0,95,2,106,
		11,95,95,101,110,117,109,83,107,105,112,0,108,7,
		95,1,121,72,121,72,121,72,112,3,73,36,60,0,
		48,5,0,95,2,106,11,95,95,101,110,117,109,83,
		116,111,112,0,108,8,95,1,121,72,121,72,121,72,
		112,3,73,36,62,0,48,5,0,95,2,106,3,91,
		93,0,108,9,95,1,121,72,112,3,73,36,64,0,
		48,10,0,95,2,108,11,112,1,73,36,66,0,48,
		12,0,95,2,112,0,73,167,14,0,0,176,13,0,
		104,1,0,95,2,20,2,168,48,14,0,95,2,112,
		0,80,3,176,15,0,95,3,106,10,73,110,105,116,
		67,108,97,115,115,0,12,2,28,12,48,16,0,95,
		3,164,146,1,0,73,95,3,110,7,48,14,0,103,
		1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_OLEAUTO___ENUMSTART )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,36,69,0,102,80,3,36,73,0,176,17,
		0,176,18,0,48,19,0,95,3,112,0,95,2,12,
		2,165,80,4,12,1,31,75,36,74,0,176,17,0,
		48,20,0,95,3,112,0,12,1,31,14,36,76,0,
		176,21,0,95,3,12,1,80,3,36,78,0,48,22,
		0,95,3,95,4,112,1,73,36,80,0,48,23,0,
		96,1,0,95,3,112,1,73,36,81,0,48,24,0,
		95,3,96,1,0,95,2,112,2,110,7,36,84,0,
		9,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_OLEAUTO___ENUMSKIP )
{
	static const HB_BYTE pcode[] =
	{
		13,2,2,36,93,0,176,25,0,48,20,0,102,112,
		0,96,3,0,48,26,0,102,112,0,12,3,80,4,
		36,95,0,48,27,0,96,1,0,95,4,112,1,73,
		36,97,0,95,3,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( WIN_OLEAUTO___ENUMSTOP )
{
	static const HB_BYTE pcode[] =
	{
		36,102,0,48,22,0,102,100,112,1,73,36,104,0,
		7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WIN_OLEGETACTIVEOBJECT )
{
	static const HB_BYTE pcode[] =
	{
		149,2,0,36,113,0,176,17,0,176,29,0,164,123,
		1,0,165,80,2,12,1,31,25,36,114,0,176,0,
		0,12,0,80,1,36,115,0,48,30,0,95,1,95,
		2,112,1,73,36,118,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC( WIN_OLECREATEOBJECT )
{
	static const HB_BYTE pcode[] =
	{
		149,2,0,36,125,0,176,17,0,176,32,0,164,123,
		1,0,165,80,2,12,1,31,25,36,126,0,176,0,
		0,12,0,80,1,36,127,0,48,30,0,95,1,95,
		2,112,1,73,36,130,0,95,1,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,33,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}
