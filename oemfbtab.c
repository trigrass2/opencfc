
/******************************************************************************
 *  (c) 2003 infoteam Software GmbH, D-91088 Bubenreuth, Tel. +49-9131-7800-0
 *
 *  PROJECT: OpenPCS runtime system
 *
 *  DESCRIPTION:    table of funtion pointer of firmware FB
 *
 *****************************************************************************/
/*#define SMARTPLC_TRACE         */

#include    "oem/config.h"        /* configuration defines */
#include    "oem/odk_prj.h"
#include    "smartplc/odk_plc.h"
#include    "smartplc/lzs.h"
#include    "smartplc/iec_fb.h"    /* infoteam firmware */
#include    "oem/oem_fb.h"        /* OEM firmware*/
#include    "smartplc/external.h"





/*--------------------------------------------------------------------------- */
/*  tables with function pointers to firmware fb                             */
/*--------------------------------------------------------------------------- */


/* Hint:        The position of a fb address in the table corresponds
                with the index entry in hardware description file.
                The entry group tells the compiler which table should be
                used
                    0    = StandardFBTab_g
                    1    = InfoteamFBTab_g
                    2    = Oem1FBTab_g
                    3    = Oem2FBTab_g
                Table 0 and 1 should not be modified by the OEM. The OEM
                should place its firmware FBs to the Table 2 and 3. This
                ensures that the OEM has not to rearrange his FB index, when
                a new version of the runtime system is deliverd
*/
/*
 *    tLzsIecFB  LZSCONST  StandardFBTab_g[] =
 *
 * see stdfbtab.c
 */

/*
 *    tLzsIecFB  LZSCONST  InfoteamFBTab_g[] =
 *
 * see stdfbtab.c
 */

#if 1
tLzsIecFB  LZSCONST  Oem1FBTab_g[] =
{
   LZSNULL,         /* Index=0    *** RESERVED for oem fb GETSYSTEMDATEANDTIME *** */
   LZSNULL,         /* Index=1    *** RESERVED for oem fb SETSYSTEMDATEANDTIME *** */
   LZSNULL,          /* Index=2    *** RESERVED for CE oem function block *** */
   LZSNULL,		/* Index=3 */
   LZSNULL,  	/* Index=4 */
   LZSNULL,		/* Index=5 */
   LZSNULL,  	/* Index=6 */
   LZSNULL,		/* Index=7 */
   LZSNULL,  	/* Index=8 */
   LZSNULL,		/* Index=9 */
   LZSNULL,		/* Index=10 */
   LZSNULL,  	/* Index=11 */
   LZSNULL,		/* Index=12 */
   LZSNULL,  	/* Index=13 */
   LZSNULL,  	/* Index=14 */
   LZSNULL,		/* Index=15 */
   LZSNULL,  	/* Index=16 */
   LZSNULL,		/* Index=17 */
   LZSNULL,		/* Index=18 */
   LZSNULL,  	/* Index=19 */
   LZSNULL,		/* Index=20 */
   LZSNULL,		/* Index=21 */
   LZSNULL,  	/* Index=22 */
   LZSNULL,		/* Index=23 */
   LZSNULL,  	/* Index=24 */
   LZSNULL,		/* Index=25 */
   LZSNULL,  	/* Index=26 */
   LZSNULL,		/* Index=27 */
   LZSNULL,		/* Index=28 */
   LZSNULL,  	/* Index=29 */
   LZSNULL,		/* Index=30 */
   LZSNULL,		/* Index=31 */
   LZSNULL,  	/* Index=32 */
   LZSNULL,		/* Index=33 */
   LZSNULL,  	/* Index=34 */
   LZSNULL,		/* Index=35 */
   LZSNULL,  	/* Index=36 */
   LZSNULL,		/* Index=37 */
   LZSNULL,		/* Index=38 */
   LZSNULL,  	/* Index=39 */
   LZSNULL,		/* Index=40 */
   LZSNULL,		/* Index=41 */
   LZSNULL,  	/* Index=42 */
   LZSNULL,		/* Index=43 */
   LZSNULL,  	/* Index=44 */
   LZSNULL,		/* Index=45 */
   LZSNULL,  	/* Index=46 */
   LZSNULL,		/* Index=47 */
   LZSNULL,		/* Index=48 */
   LZSNULL,  	/* Index=49 */
   LZSNULL,		/* Index=50 */
   LZSNULL,		/* Index=51 */
   LZSNULL,  	/* Index=52 */
   LZSNULL,		/* Index=53 */
   LZSNULL,  	/* Index=54 */
   LZSNULL,		/* Index=55 */
   LZSNULL,  	/* Index=56 */
   LZSNULL,		/* Index=57 */
   LZSNULL,  	/* Index=58 */
   LZSNULL,		/* Index=59 */
   LZSNULL,		/* Index=60 */
   LZSNULL,  	/* Index=61 */
   LZSNULL,		/* Index=62 */
   LZSNULL,  	/* Index=63 */
   LZSNULL,		/* Index=64 */
   LZSNULL,		/* Index=65 */
   LZSNULL,  	/* Index=66 */
   LZSNULL,		/* Index=67 */
   LZSNULL,  	/* Index=68 */
   LZSNULL,		/* Index=69 */
   LZSNULL,  	/* Index=70 */
   LZSNULL,		/* Index=71 */
   LZSNULL,		/* Index=72 */
   LZSNULL,  	/* Index=73 */
   LZSNULL,		/* Index=74 */
   LZSNULL,  	/* Index=75 */
   LZSNULL,		/* Index=76 */
   LZSNULL,		/* Index=77 */
   LZSNULL,  	/* Index=78 */
   LZSNULL,		/* Index=79 */
   LZSNULL,  	/* Index=80 */
   LZSNULL,		/* Index=81 */
   LZSNULL,  	/* Index=82 */
   LZSNULL,		/* Index=83 */
   LZSNULL,		/* Index=84 */
   LZSNULL,  	/* Index=85 */
   LZSNULL,		/* Index=86 */
   LZSNULL,  	/* Index=87 */
   LZSNULL,		/* Index=88 */
   LZSNULL,		/* Index=89 */
   LZSNULL,  	/* Index=90 */
   LZSNULL, 	/* Index=91 */
   LZSNULL,  	/* Index=92 */
   LZSNULL,		/* Index=93 */
   LZSNULL,  	/* Index=94 */
   LZSNULL,		/* Index=95 */
   LZSNULL,		/* Index=96 */
   LZSNULL,  	/* Index=97 */
   LZSNULL,		/* Index=98 */
   LZSNULL,  	/* Index=99 */
   LZSNULL,		/* Index=100 */
   LZSNULL,		/* Index=101 */
   LZSNULL,  	/* Index=102 */
   LZSNULL,		/* Index=103 */
   LZSNULL,  	/* Index=104 */
   LZSNULL,		/* Index=105 */
   LZSNULL,  	/* Index=106 */
   LZSNULL,		/* Index=107 */
   LZSNULL,		/* Index=108 */
   LZSNULL,  	/* Index=109 */
   LZSNULL,		/* Index=110 */
   LZSNULL,  	/* Index=111 */
   LZSNULL,		/* Index=112 */
   LZSNULL,		/* Index=113 */
   LZSNULL,  	/* Index=114 */
   LZSNULL,		/* Index=115 */
   LZSNULL,  	/* Index=116 */
   LZSNULL,		/* Index=117 */
   LZSNULL,  	/* Index=118 */
   LZSNULL,		/* Index=119 */
   LZSNULL,		/* Index=120 */
   LZSNULL,  	/* Index=121 */
   LZSNULL,		/* Index=122 */
   LZSNULL,  	/* Index=123 */
   LZSNULL,		/* Index=124 */
   LZSNULL,		/* Index=125 */
   LZSNULL,  	/* Index=126 */
   LZSNULL,		/* Index=127 */
   LZSNULL,  	/* Index=128 */
   LZSNULL,		/* Index=129 */
   LZSNULL,  	/* Index=130 */
   LZSNULL,		/* Index=131 */
   LZSNULL,		/* Index=132 */
   LZSNULL,  	/* Index=133 */
   LZSNULL,		/* Index=134 */
   LZSNULL,		/* Index=135 */
   LZSNULL,  	/* Index=136 */
   LZSNULL,		/* Index=137 */
   LZSNULL,  	/* Index=138 */
   LZSNULL,		/* Index=139 */
   LZSNULL,     /* Index=140 */
   LZSNULL,		/* Index=141 */
   LZSNULL,  	/* Index=142 */
   LZSNULL,  	/* Index=143 */
   LZSNULL,  	/* Index=144 */
   LZSNULL,		/* Index=145 */
   LZSNULL,		/* Index=146 */
   LZSNULL,  	/* Index=147 */
   LZSNULL,		/* Index=148 */
   LZSNULL,	  	/* Index=149 */
   LZSNULL,     /* Index=150 */
   LZSNULL,		/* Index=151 */
   LZSNULL,  	/* Index=152 */
   LZSNULL,  	/* Index=153 */
   LZSNULL,  	/* Index=154 */
   LZSNULL,		/* Index=155 */
   LZSNULL,		/* Index=156 */
   LZSNULL,  	/* Index=157 */
   LZSNULL,		/* Index=158 */
   LZSNULL,  	/* Index=159 */
   LZSNULL,		/* Index=160 */
   LZSNULL,		/* Index=161 */
   LZSNULL,  	/* Index=162 */
   LZSNULL,		/* Index=163 */
   LZSNULL,  	/* Index=164 */
   LZSNULL,		/* Index=165 */
   LZSNULL,  	/* Index=166 */
   LZSNULL,		/* Index=167 */
   LZSNULL,		/* Index=168 */
   LZSNULL,		/* Index=169 */
   LZSNULL,		/* Index=170 */
   LZSNULL,		/* Index=171 */
   LZSNULL,  	/* Index=172 */
   LZSNULL,		/* Index=173 */
   LZSNULL,  	/* Index=174 */
   LZSNULL,		/* Index=175 */
   LZSNULL,  	/* Index=176 */
   LZSNULL,		/* Index=177 */
   LZSNULL,		/* Index=178 */
   LZSNULL,  	/* Index=179 */
   LZSNULL,		/* Index=180 */
   LZSNULL,		/* Index=181 */
   LZSNULL,  	/* Index=182 */
   LZSNULL,		/* Index=183 */
   LZSNULL,  	/* Index=184 */
   LZSNULL,		/* Index=185 */
   LZSNULL,  	/* Index=186 */
   LZSNULL,		/* Index=187 */
   LZSNULL,		/* Index=188 */
   LZSNULL,  	/* Index=189 */
   LZSNULL,		/* Index=190 */
   LZSNULL,		/* Index=191 */
   LZSNULL,  	/* Index=192 */
   LZSNULL,		/* Index=193 */
   LZSNULL,  	/* Index=194 */
   LZSNULL,		/* Index=195 */
   LZSNULL,  	/* Index=196 */
   LZSNULL,		/* Index=197 */
   LZSNULL,		/* Index=198 */
   LZSNULL,  	/* Index=199 */
   LZSNULL,		/* Index=200 */
   LZSNULL,  	/* Index=201 */
   LZSNULL,		/* Index=202 */
   LZSNULL,		/* Index=203 */
   LZSNULL,  	/* Index=204 */
   LZSNULL,		/* Index=205 */
   LZSNULL,  	/* Index=206 */
   LZSNULL,		/* Index=207 */
   LZSNULL,		/* Index=208 */
   LZSNULL,  	/* Index=209 */
   LZSNULL,		/* Index=210 */
   LZSNULL,		/* Index=211 */
   LZSNULL,  	/* Index=212 */
   LZSNULL,		/* Index=213 */
   LZSNULL,  	/* Index=214 */
   LZSNULL,		/* Index=215 */
   LZSNULL,  	/* Index=216 */
   LZSNULL,		/* Index=217 */
   LZSNULL,		/* Index=218 */
   LZSNULL,  	/* Index=219 */
   LZSNULL,		/* Index=220 */
   LZSNULL,		/* Index=221 */
   LZSNULL,  	/* Index=222 */
   LZSNULL,		/* Index=223 */
   LZSNULL,  	/* Index=224 */
   LZSNULL,		/* Index=225 */
   LZSNULL,  	/* Index=226 */
   LZSNULL,		/* Index=227 */
   LZSNULL,		/* Index=228 */
   LZSNULL,  	/* Index=229 */
   LZSNULL,		/* Index=230 */
   LZSNULL,		/* Index=231 */
   LZSNULL,  	/* Index=232 */
   LZSNULL,		/* Index=233 */
   LZSNULL,  	/* Index=234 */
   LZSNULL,		/* Index=235 */
   LZSNULL,  	/* Index=236 */
   LZSNULL,		/* Index=237 */
   LZSNULL,		/* Index=238 */
   LZSNULL,  	/* Index=239 */
   LZSNULL,	/* Index=240 */
   LZSNULL,	/* Index=241 */
   LZSNULL,  	/* Index=242 */
   LZSNULL,	/* Index=243 */
   LZSNULL,	/* Index=244 */
   LZSNULL,	/* Index=245 */

};

/*tLzsIecFB  LZSCONST  Oem2FBTab_g[] =
{
	LZSNULL,	*//*Index = 0 --- UNUSED*//*
	LZSNULL,	*//*Index = 1*//*
	LZSNULL,	*//*Index = 2*//*
	LZSNULL,	*//*Index = 3*//*
	LZSNULL,	*//*Index = 4*//*
    LZSNULL,		*//*Index = 5*//*
    LZSNULL,	*//*Index = 6*//*
    LZSNULL,	*//*Index = 7*//*
    LZSNULL,	*//*Index = 8*//*

};                                           */

tLzsIecFB  LZSCONST  Oem2FBTab_g[] =
{
	LZSNULL,	/*Index = 0 --- UNUSED*/
	LZSNULL,	/*Index = 1*/
	LZSNULL,	/*Index = 2*/
	LZSNULL,	/*Index = 3*/
	LZSNULL,	/*Index = 4*/
        LZSNULL,		/*Index = 5*/
        LZSNULL,	/*Index = 6*/
        LZSNULL,	/*Index = 7*/
        LZSNULL,	/*Index = 8*/
        LZSNULL	,       /*Index = 9*/
        LZSNULL,	        /*Index = 10*/
        LZSNULL,	 /*Index = 11*/
        LZSNULL,	/*Index = 12*/
        LZSNULL,	        /*Index = 13*/
        LZSNULL,	 /*Index = 14*/
        LZSNULL,	 /*Index = 15*/
        LZSNULL,	 /*Index = 16*/
        LZSNULL,	 /*Index = 17*/
        LZSNULL,	 /*Index = 18*/
        LZSNULL,	 /*Index = 19*/
        LZSNULL,	 /*Index = 20*/
        LZSNULL,	 /*Index = 21*/
        LZSNULL,	 /*Index = 22*/
        LZSNULL,	 /*Index = 23*/
        LZSNULL,         /*Index = 24*/
        LZSNULL,         /*Index = 25*/
        LZSNULL,         /*Index = 26*/
        LZSNULL,         /*Index = 27*/
        LZSNULL,         /*Index = 28*/
        LZSNULL,         /*Index = 29*/
        LZSNULL,         /*Index = 30*/
        LZSNULL,         /*Index = 31*/
        LZSNULL,         /*Index = 32*/
        LZSNULL,         /*Index = 33*/
        LZSNULL,         /*Index = 34*/
        LZSNULL,         /*Index = 35*/
        LZSNULL,         /*Index = 36*/
        LZSNULL,         /*Index = 37*/
        LZSNULL,         /*Index = 38*/
        LZSNULL,         /*Index = 39*/
        LZSNULL,         /*Index = 40*/
        LZSNULL,         /*Index = 41*/
        LZSNULL,         /*Index = 42*/
        LZSNULL,         /*Index = 43*/
        LZSNULL,         /*Index = 44*/
        LZSNULL,         /*Index = 45*/
        LZSNULL,         /*Index = 46*/
        LZSNULL,         /*Index = 47*/
        LZSNULL,         /*Index = 48*/
        LZSNULL,         /*Index = 49*/
        LZSNULL,         /*Index = 50*/
        LZSNULL,         /*Index = 51*/
        LZSNULL,         /*Index = 52*/
        LZSNULL,         /*Index = 53*/
        LZSNULL,         /*Index = 54*/
        LZSNULL,         /*Index = 55*/
        LZSNULL,         /*Index = 56*/
        LZSNULL,         /*Index = 57*/
        LZSNULL,         /*Index = 58*/
        LZSNULL,         /*Index = 59*/
        LZSNULL,         /*Index = 60*/
        LZSNULL,         /*Index = 61*/
        LZSNULL,         /*Index = 62*/
        LZSNULL,         /*Index = 63*/
        LZSNULL,         /*Index = 64*/
        LZSNULL,         /*Index = 65*/
        LZSNULL,         /*Index = 66*/
        FB_ADD_I,         /*Index = 67*/
        LZSNULL,         /*Index = 68*/
        LZSNULL,         /*Index = 69*/
        LZSNULL,         /*Index = 70*/
        LZSNULL,         /*Index = 71*/
        LZSNULL,         /*Index = 72*/
        LZSNULL,         /*Index = 73*/
        LZSNULL,         /*Index = 74*/
        LZSNULL,         /*Index = 75*/
        LZSNULL,         /*Index = 76*/
		LZSNULL,	/*Index = 77*/
		LZSNULL,	/*Index = 78*/
		LZSNULL,	/*Index = 79*/
		LZSNULL,	/*Index = 80*/
		LZSNULL,	/*Index = 81*/
		LZSNULL,	/*Index = 82*/
		LZSNULL,	/*Index = 83*/
		LZSNULL,	/*Index = 84*/
		LZSNULL,	/*Index = 85*/
		LZSNULL,	/*Index = 86*/
		LZSNULL,	/*Index = 87*/
		LZSNULL,	/*Index = 88*/
		LZSNULL,	/*Index = 89*/
		LZSNULL,	/*Index = 90*/
		LZSNULL,	/*Index = 91*/
		LZSNULL,	/*Index = 92*/
		LZSNULL,	/*Index = 93*/
		LZSNULL,	/*Index = 94*/
		LZSNULL,	/*Index = 95*/
		LZSNULL,	/*Index = 96*/
		LZSNULL,	/*Index = 97*/
		LZSNULL,	/*Index = 98*/
		LZSNULL,	/*Index = 99*/
		LZSNULL,	/*Index = 100*/
		LZSNULL,	/*Index = 101*/
		LZSNULL,	/*Index = 102*/
		LZSNULL,	/*Index = 103*/
		LZSNULL,	/*Index = 104*/
		LZSNULL,	/*Index = 105*/
		LZSNULL,	/*Index = 106*/
		LZSNULL,	/*Index = 107*/
		LZSNULL,	/*Index = 108*/
		LZSNULL,	/*Index = 109*/
		LZSNULL,	/*Index = 110*/
		LZSNULL,	/*Index = 111*/
		LZSNULL,	/*Index = 112*/
		LZSNULL,	/*Index = 113*/
		LZSNULL,	/*Index = 114*/
		LZSNULL,	/*Index = 115*/
		LZSNULL,	/*Index = 116*/
		LZSNULL,	/*Index = 117*/
		LZSNULL,	/*Index = 118*/
		LZSNULL,	/*Index = 119*/
		LZSNULL,	/*Index = 120*/
		LZSNULL,	/*Index = 121*/
		LZSNULL,	/*Index = 122*/
		LZSNULL,	/*Index = 123*/
		LZSNULL,	/*Index = 124*/
		LZSNULL,	/*Index = 125*/
		LZSNULL,	/*Index = 126*/
		LZSNULL,	/*Index = 127*/
		LZSNULL,	/*Index = 128*/
		LZSNULL,	/*Index = 129*/
		LZSNULL,	/*Index = 130*/
		LZSNULL,	/*Index = 131*/
		LZSNULL,	/*Index = 132*/
		LZSNULL,	/*Index = 133*/
		LZSNULL,	/*Index = 134*/
		LZSNULL,	/*Index = 135*/
		LZSNULL,	/*Index = 136*/
		LZSNULL,	/*Index = 137*/
		LZSNULL,	/*Index = 138*/
		LZSNULL,	/*Index = 139*/
		LZSNULL,	/*Index = 140*/
		LZSNULL,	/*Index = 141*/
		LZSNULL,	/*Index = 142*/
		LZSNULL,	/*Index = 143*/
		LZSNULL,	/*Index = 144*/
		LZSNULL,	/*Index = 145*/
		LZSNULL,	/*Index = 146*/
		LZSNULL,	/*Index = 147*/
		LZSNULL,	/*Index = 148*/
		LZSNULL,	/*Index = 149*/
		LZSNULL,	/*Index = 150*/
		LZSNULL,	/*Index = 151*/
		LZSNULL,	/*Index = 152*/
		LZSNULL,	/*Index = 153*/
		LZSNULL,	/*Index = 154*/
		LZSNULL,	/*Index = 155*/
		LZSNULL,	/*Index = 156*/
		LZSNULL,	/*Index = 157*/
		LZSNULL,	/*Index = 158*/
		LZSNULL,	/*Index = 159*/
		LZSNULL,	/*Index = 160*/
		LZSNULL,	/*Index = 161*/
		LZSNULL,	/*Index = 162*/
		LZSNULL,	/*Index = 163*/
		LZSNULL,	/*Index = 164*/
		LZSNULL,	/*Index = 165*/
		LZSNULL,	/*Index = 166*/
		LZSNULL,	/*Index = 167*/
		LZSNULL,	/*Index = 168*/
		LZSNULL,	/*Index = 169*/
		LZSNULL,	/*Index = 170*/
		LZSNULL,	/*Index = 171*/
		LZSNULL,	/*Index = 172*/
		LZSNULL,	/*Index = 173*/
		LZSNULL,	/*Index = 174*/
		LZSNULL,	/*Index = 175*/
		LZSNULL,	/*Index = 176*/
		LZSNULL,	/*Index = 177*/
		LZSNULL,	/*Index = 178*/
		LZSNULL,	/*Index = 179*/
		LZSNULL,	/*Index = 180*/
		LZSNULL,	/*Index = 181*/
		LZSNULL,	/*Index = 182*/
		LZSNULL,	/*Index = 183*/
		LZSNULL,	/*Index = 184*/
		LZSNULL,	/*Index = 185*/
		LZSNULL,	/*Index = 186*/
		LZSNULL,	/*Index = 187*/
		LZSNULL,	/*Index = 188*/
		LZSNULL,	/*Index = 189*/
		LZSNULL,	/*Index = 190*/
		LZSNULL,	/*Index = 191*/
		LZSNULL,	/*Index = 192*/
		LZSNULL,	/*Index = 193*/
		LZSNULL,	/*Index = 194*/
		LZSNULL,	/*Index = 195*/
		LZSNULL,	/*Index = 196*/
		LZSNULL,	/*Index = 197*/
		LZSNULL,	/*Index = 198*/
		LZSNULL,	/*Index = 199*/
		LZSNULL,		/*Index = 200*/
		LZSNULL,	/*Index = 201*/
		LZSNULL,	/*Index = 202*/
		LZSNULL,	/*Index = 203*/
		LZSNULL,	/*Index = 204*/
		LZSNULL,	/*Index = 205*/
		LZSNULL,	/*Index = 206*/
		LZSNULL,	/*Index = 207*/
		LZSNULL,	/*Index = 208*/
		LZSNULL,	/*Index = 209*/
		LZSNULL,	/*Index = 210*/
		LZSNULL,	/*Index = 211*/
		LZSNULL,	/*Index = 212*/
		LZSNULL,	/*Index = 213*/
		LZSNULL,	/*Index = 214*/
		LZSNULL,	/*Index = 215*/
		LZSNULL,	/*Index = 216*/
		LZSNULL,	/*Index = 217*/
		LZSNULL,	/*Index = 218*/
		LZSNULL,	/*Index = 219*/
		LZSNULL,	/*    ---SKK INSERT 20100105-----Index = 220*/
		LZSNULL,	/*Index = 221*/
		LZSNULL,	/*Index = 222*/
		LZSNULL,	/*Index = 223*/
		LZSNULL,	/*Index = 224*/
		   LZSNULL,		/* Index=225 */
		   LZSNULL,  	    /* Index=226 */
		   LZSNULL,		/* Index=227 */
		   LZSNULL,		/* Index=228 */
		   LZSNULL,  	/* Index=229 */
		   LZSNULL,		/* Index=230 */
		   LZSNULL,  	/* Index=231 */
		   LZSNULL,		/* Index=232 */
		   LZSNULL,		/* Index=233 */
		   LZSNULL,  	/* Index=234 */
		   LZSNULL,		/* Index=235 */
		   LZSNULL,		/* Index=236 */
		   LZSNULL,  	/* Index=237 */
		   LZSNULL,		/* Index=238 */
		   LZSNULL,  	/* Index=239 */
		   LZSNULL,		/* Index=240 */
		   LZSNULL,  	/* Index=241*/
		   LZSNULL,		/* Index=242 */
		   LZSNULL,		/* Index=243 */
		   LZSNULL,  	/* Index=244 */
		   LZSNULL,		/* Index=245 */
		   LZSNULL,		/* Index=246 */
		   LZSNULL,  	/* Index=247 */
		   LZSNULL,		/* Index=248 */
		   LZSNULL,  	/* Index=249 */
		   LZSNULL,		/* Index=250 */
		   LZSNULL,  	/* Index=251 */
		   LZSNULL,		/* Index=252 */
		   LZSNULL,		/* Index=253 */
		   LZSNULL,  	/* Index=254 */
		   LZSNULL,		/* Index=255 */
		   LZSNULL,		/* Index=256 */
		   LZSNULL,  	/* Index=257 */
		   LZSNULL,		/* Index=258 */
		   LZSNULL,	/*Index = 259*/
		LZSNULL,	/*Index = 260*/
		LZSNULL,	/*Index = 261*/
		LZSNULL,	/*Index = 262*/
		LZSNULL,	/*Index = 263*/
		LZSNULL,	/*Index = 264*/
		LZSNULL,	/*Index = 265*/
		LZSNULL,	/*Index = 266*/
		LZSNULL,	/*Index = 267*/
		LZSNULL,	/*Index = 268*/
		LZSNULL,	/*Index = 269*/
		LZSNULL,	/*Index = 270*/
		LZSNULL,	/*Index = 271*/
		LZSNULL,	/*Index = 272*/
		LZSNULL,	/*Index = 273*/
		LZSNULL,	/*Index = 274*/
		LZSNULL,	/*Index = 275*/
		LZSNULL,	/*Index = 276*/
		LZSNULL,	/*Index = 277*/
		LZSNULL,	/*Index = 278*/
		LZSNULL,	/*Index = 279*/
		LZSNULL,	/*Index = 280*/
		LZSNULL,	/*Index = 281*/
		LZSNULL,	/*Index = 282*/
		LZSNULL,		/*Index = 283*/
		LZSNULL,/*Index = 284*/
		LZSNULL,	/*Index = 285*/
		LZSNULL,	/*Index = 286*/
		LZSNULL,	/*Index = 287*/
		LZSNULL,	/*Index = 288*/
		LZSNULL,	/*Index = 289*/
		LZSNULL,	/*Index = 290*/
		LZSNULL,	/*Index = 291*/
		LZSNULL,	/*Index = 292*/
		LZSNULL,	/*Index = 293*/
		LZSNULL,	/*Index = 294*/
		LZSNULL,	/*Index = 295*/
		LZSNULL,	/*Index = 296*/
		LZSNULL,	/*Index = 297*/
		LZSNULL,	/*Index = 298*/
		LZSNULL,	/*Index = 299*/
		LZSNULL,	/*Index = 300*/
		LZSNULL,	/*Index = 301*/
		LZSNULL,	/*Index = 302*/
		LZSNULL,	/*Index = 303*/
		LZSNULL,	/*Index = 304*/
		LZSNULL,	/*Index = 305*/
		LZSNULL,	/*Index = 306*/
		LZSNULL,	/*Index = 307*/
		LZSNULL,	/*Index = 308*/
		LZSNULL,	/*Index = 309*/
		LZSNULL,	/*Index = 310*/
		LZSNULL,	/*Index = 311*/
		LZSNULL,	/*Index = 312*/
		LZSNULL,	/*Index = 313*/
		LZSNULL,	/*Index = 314*/
		LZSNULL,	/*Index = 315*/
		LZSNULL,	/*Index = 316*/
		LZSNULL,	/*Index = 317*/
		LZSNULL,	/*Index = 318*/
		LZSNULL,	/*Index = 319*/
		LZSNULL,	/*Index = 320*/
		LZSNULL,	/*Index = 321*/
		LZSNULL,	/*Index = 322*/
		LZSNULL,	/*Index = 323*/
		LZSNULL,	/*Index = 324*/
		LZSNULL,	/*Index = 325*/
		LZSNULL,	/*Index = 326*/
		LZSNULL,	/*Index = 327*/
		LZSNULL,	/*Index = 328*/
		LZSNULL,	/*Index = 329*/
		LZSNULL,	/*Index = 330*/
		LZSNULL,	/*Index = 331*/
		LZSNULL,	/*Index = 332*/
		LZSNULL,	/*Index = 333*/
		LZSNULL,	/*Index = 334*/
		LZSNULL,	/*Index = 335*/
		LZSNULL,	/*Index = 336*/
		LZSNULL,	/*Index = 337*/
		LZSNULL,	/*Index = 338*/
		LZSNULL,	/*Index = 339*/
		LZSNULL,	/*Index = 340*/
		LZSNULL,	/*Index = 341*/
		LZSNULL,	/*Index = 342*/
		LZSNULL,	/*Index = 343*/
		LZSNULL,	/*Index = 344*/
		LZSNULL,	/*Index = 345*/
		LZSNULL,	/*Index = 346*/
		LZSNULL,	/*Index = 347*/
		LZSNULL,	/*Index = 348*/
		LZSNULL,	/*Index = 349*/
		LZSNULL,	/*Index = 350*/
		LZSNULL,	/*Index = 351*/
		LZSNULL,	/*Index = 352*/
		LZSNULL,	/*Index = 353*/
		LZSNULL,	/*Index = 354*/
		LZSNULL,	/*Index = 355*/
		LZSNULL,	/*Index = 356*/
		LZSNULL,	/*Index = 357*/
		LZSNULL,	/*Index = 358*/
		LZSNULL,	/*Index = 359*/
		LZSNULL,	/*Index = 360*/
		LZSNULL,	/*Index = 361*/
		LZSNULL,	/*Index = 362*/
		LZSNULL,	/*Index = 363*/
		LZSNULL,	/*Index = 364*/
		LZSNULL,	/*Index = 365*/
		LZSNULL,	/*Index = 366*/
		LZSNULL,	/*Index = 367*/
		LZSNULL,	/*Index = 368*/
		LZSNULL,	/*Index = 369*/
		LZSNULL,	/*Index = 370*/
		LZSNULL,	/*Index = 371*/
		LZSNULL,	/*Index = 372*/
		LZSNULL,	/*Index = 373*/
		LZSNULL,	/*Index = 374*/
		LZSNULL,	/*Index = 375*/
		LZSNULL,	/*Index = 376*/
		LZSNULL,	/*Index = 377*/
		LZSNULL,	/*Index = 378*/
		LZSNULL,	/*Index = 379*/
		LZSNULL,	/*Index = 380, SKK insert 2010-04-13*/
    LZSNULL,		/*Index = 381*/
    LZSNULL,		/*Index = 382*/
    LZSNULL,		/*Index = 383*/
    LZSNULL,		/*Index = 384*/
    LZSNULL,		/*Index = 385*/
    LZSNULL,		/*Index = 386*/
    LZSNULL,		/*Index = 387*/
    LZSNULL,		/*Index = 388*/
    LZSNULL,		/*Index = 389*/
    LZSNULL,		/*Index = 390*/
    LZSNULL,		/*Index = 391*/
    LZSNULL,		/*Index = 392*/
    LZSNULL,		/*Index = 393*/
    LZSNULL,		/*Index = 394*/
		LZSNULL,	/*Index = 395*/
		LZSNULL,	/*Index = 396*/
		LZSNULL,	/*Index = 397*/
		LZSNULL,	/*Index = 398*/
		LZSNULL,	/*Index = 399*/
		LZSNULL,	/*Index = 400*/
		LZSNULL,	/*Index = 401*/
		LZSNULL,	/*Index = 402*/
		LZSNULL,	/*Index = 403*/
		LZSNULL,	/*Index = 404*/
		LZSNULL,	/*Index = 405*/
		LZSNULL,	/*Index = 406*/
		LZSNULL,	/*Index = 407*/
		LZSNULL,	/*Index = 408*/
		LZSNULL,	/*Index = 409*/
		LZSNULL,	/*Index = 410*/
		LZSNULL,	/*Index = 411*/
		LZSNULL,	/*Index = 412*/
		LZSNULL,	/*Index = 413*/
		LZSNULL,	/*Index = 414*/
		LZSNULL,	/*Index = 415*/
		LZSNULL,	/*Index = 416*/
		LZSNULL,	/*Index = 417*/
		LZSNULL,	/*Index = 418*/
		LZSNULL,	/*Index = 419*/
		LZSNULL ,	/*Index = 420*/
		LZSNULL,	/*Index = 421*/
		LZSNULL,	/*Index = 422*/
		LZSNULL ,	/*Index = 423*/
		LZSNULL,	/*Index = 424*/
		LZSNULL,	/*Index = 425*/
		LZSNULL,	/*Index = 426*/
		LZSNULL,	/*Index = 427*/
		LZSNULL,	/*Index = 428*/
		LZSNULL,	/*Index = 429*/
		LZSNULL,	/*Index = 430*/
		LZSNULL,	/*Index = 431*/
		LZSNULL,	/*Index = 432*/
		LZSNULL,	/*Index = 433*/
		LZSNULL,	/*Index = 434*/
		LZSNULL,	/*Index = 435*/
		LZSNULL,	/*Index = 436*/
		LZSNULL,	/*Index = 437*/
		LZSNULL,	/*Index = 438*/
		LZSNULL,	/*Index = 439*/
		LZSNULL,	/*Index = 440*/
		LZSNULL,	/*Index = 441*/
		LZSNULL,	/*Index = 442*/
		LZSNULL,	/*Index = 443*/
		LZSNULL,	/*Index = 444*/
		LZSNULL,	/*Index = 445*/
		LZSNULL,	/*Index = 446*/
		LZSNULL,	/*Index = 447*/
		LZSNULL,	/*Index = 448*/
	LZSNULL,	/*Index = 449*/
	LZSNULL,	/*Index = 450*/
    LZSNULL,			/*Index = 451*/
    LZSNULL,		/*Index = 452*/
    LZSNULL,			/*Index = 453*/
    LZSNULL,		/*Index = 454*/
    LZSNULL,		/*Index = 455*/
    LZSNULL,		/*Index = 456*/
    LZSNULL,		/*Index = 457*/
    LZSNULL,		/*Index = 458*/
    LZSNULL,		/*Index = 459*/
};
#endif
extern tLzsIecFB LZSCONST* sysBKLoadOemFBTable(int* size);
void  LzsSetOEMFBTable (void)
{
	int setOk=0;
/* This function will be called on startup to initialize firmware function
   block jump table.
*/
#if 1

	if(sysBKLoadOemFBTable)
	{
		int size=0;
		tLzsIecFB * p=(tLzsIecFB *)sysBKLoadOemFBTable(&size);
		if(p&&size>0)
		{
			LZSWORD sz=(LZSWORD)size;
			  wFBTabEntrys_l[2] = sz;  /* determine number of table entries */
			  fpIecFBTab_l[2]   = p;
			  setOk=1;
		}
	}
/*如果没有正确安装则使用默认的*/
	if(setOk==0)
	{

		  wFBTabEntrys_l[2]    = sizeof(Oem1FBTab_g) / sizeof(tLzsIecFB);  /* determine number of table entries */
		   fpIecFBTab_l[2]   = (tLzsIecFB LZSCONST*)&Oem1FBTab_g;
	}
   wFBTabEntrys_l[3]    = sizeof(Oem2FBTab_g) / sizeof(tLzsIecFB);  /* determine number of table entries */
   fpIecFBTab_l[3]   = (tLzsIecFB LZSCONST*)&Oem2FBTab_g;
#endif
}

