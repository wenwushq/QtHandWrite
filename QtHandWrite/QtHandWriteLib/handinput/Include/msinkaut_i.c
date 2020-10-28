//-------------------------------------------------------------------------- 
// 
//  Copyright (c) Microsoft Corporation.  All rights reserved. 
// 
//  File: msinkaut_i.c 
//      Microsoft Tablet PC API definitions 
// 
//-------------------------------------------------------------------------- 
	
 	
 	

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0347 */
/* Compiler settings for msinkaut.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)

#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_MSINKAUTLib,0x7D868ACD,0x1A5D,0x4a47,0xA2,0x47,0xF3,0x97,0x41,0x35,0x30,0x12);


MIDL_DEFINE_GUID(IID, IID_IInkRectangle,0x9794FF82,0x6071,0x4717,0x8A,0x8B,0x6A,0xC7,0xC6,0x4A,0x68,0x6E);


MIDL_DEFINE_GUID(IID, IID_IInkExtendedProperty,0xDB489209,0xB7C3,0x411D,0x90,0xF6,0x15,0x48,0xCF,0xFF,0x27,0x1E);


MIDL_DEFINE_GUID(IID, IID_IInkExtendedProperties,0x89F2A8BE,0x95A9,0x4530,0x8B,0x8F,0x88,0xE9,0x71,0xE3,0xE2,0x5F);


MIDL_DEFINE_GUID(IID, IID_IInkDrawingAttributes,0xBF519B75,0x0A15,0x4623,0xAD,0xC9,0xC0,0x0D,0x43,0x6A,0x80,0x92);


MIDL_DEFINE_GUID(IID, IID_IInkTransform,0x615F1D43,0x8703,0x4565,0x88,0xE2,0x82,0x01,0xD2,0xEC,0xD7,0xB7);


MIDL_DEFINE_GUID(IID, IID_IInkGesture,0x3BDC0A97,0x04E5,0x4e26,0xB8,0x13,0x18,0xF0,0x52,0xD4,0x1D,0xEF);


MIDL_DEFINE_GUID(IID, IID_IInkCursor,0xAD30C630,0x40C5,0x4350,0x84,0x05,0x9C,0x71,0x01,0x2F,0xC5,0x58);


MIDL_DEFINE_GUID(IID, IID_IInkCursors,0xA248C1AC,0xC698,0x4e06,0x9E,0x5C,0xD5,0x7F,0x77,0xC7,0xE6,0x47);


MIDL_DEFINE_GUID(IID, IID_IInkCursorButton,0x85EF9417,0x1D59,0x49b2,0xA1,0x3C,0x70,0x2C,0x85,0x43,0x08,0x94);


MIDL_DEFINE_GUID(IID, IID_IInkCursorButtons,0x3671CC40,0xB624,0x4671,0x9F,0xA0,0xDB,0x11,0x9D,0x95,0x2D,0x54);


MIDL_DEFINE_GUID(IID, IID_IInkTablet,0x2DE25EAA,0x6EF8,0x42d5,0xAE,0xE9,0x18,0x5B,0xC8,0x1B,0x91,0x2D);


MIDL_DEFINE_GUID(IID, IID_IInkTablets,0x112086D9,0x7779,0x4535,0xA6,0x99,0x86,0x2B,0x43,0xAC,0x18,0x63);


MIDL_DEFINE_GUID(IID, IID_IInkStrokeDisp,0x43242FEA,0x91D1,0x4a72,0x96,0x3E,0xFB,0xB9,0x18,0x29,0xCF,0xA2);


MIDL_DEFINE_GUID(IID, IID_IInkStrokes,0xF1F4C9D8,0x590A,0x4963,0xB3,0xAE,0x19,0x35,0x67,0x1B,0xB6,0xF3);


MIDL_DEFINE_GUID(IID, IID_IInkCustomStrokes,0x7E23A88F,0xC30E,0x420f,0x9B,0xDB,0x28,0x90,0x25,0x43,0xF0,0xC1);


MIDL_DEFINE_GUID(IID, DIID__IInkStrokesEvents,0xF33053EC,0x5D25,0x430a,0x92,0x8F,0x76,0xA6,0x49,0x1D,0xDE,0x15);


MIDL_DEFINE_GUID(IID, IID_IInkDisp,0x9D398FA0,0xC4E2,0x4fcd,0x99,0x73,0x97,0x5C,0xAA,0xF4,0x7E,0xA6);


MIDL_DEFINE_GUID(IID, DIID__IInkEvents,0x427B1865,0xCA3F,0x479a,0x83,0xA9,0x0F,0x42,0x0F,0x2A,0x00,0x73);


MIDL_DEFINE_GUID(IID, IID_IInkRenderer,0xE6257A9C,0xB511,0x4f4c,0xA8,0xB0,0xA7,0xDB,0xC9,0x50,0x6B,0x83);


MIDL_DEFINE_GUID(IID, IID_IInkCollector,0xF0F060B5,0x8B1F,0x4a7c,0x89,0xEC,0x88,0x06,0x92,0x58,0x8A,0x4F);


MIDL_DEFINE_GUID(IID, DIID__IInkCollectorEvents,0x11A583F2,0x712D,0x4fea,0xAB,0xCF,0xAB,0x4A,0xF3,0x8E,0xA0,0x6B);


MIDL_DEFINE_GUID(IID, IID_IInkOverlay,0xb82a463b,0xc1c5,0x45a3,0x99,0x7c,0xde,0xab,0x56,0x51,0xb6,0x7a);


MIDL_DEFINE_GUID(IID, DIID__IInkOverlayEvents,0x31179b69,0xe563,0x489e,0xb1,0x6f,0x71,0x2f,0x1e,0x8a,0x06,0x51);


MIDL_DEFINE_GUID(IID, IID_IInkPicture,0xe85662e0,0x379a,0x40d7,0x9b,0x5c,0x75,0x7d,0x23,0x3f,0x99,0x23);


MIDL_DEFINE_GUID(IID, DIID__IInkPictureEvents,0x60ff4fee,0x22ff,0x4484,0xac,0xc1,0xd3,0x08,0xd9,0xcd,0x7e,0xa3);


MIDL_DEFINE_GUID(IID, IID_IInkRecognizer,0x782BF7CF,0x034B,0x4396,0x8A,0x32,0x3A,0x18,0x33,0xCF,0x6B,0x56);


MIDL_DEFINE_GUID(IID, IID_IInkRecognizers,0x9CCC4F12,0xB0B7,0x4a8b,0xBF,0x58,0x4A,0xEC,0xA4,0xE8,0xCE,0xFD);


MIDL_DEFINE_GUID(IID, DIID__IInkRecognitionEvents,0x17BCE92F,0x2E21,0x47FD,0x9D,0x33,0x3C,0x6A,0xFB,0xFD,0x8C,0x59);


MIDL_DEFINE_GUID(IID, IID_IInkRecognizerContext,0xC68F52F9,0x32A3,0x4625,0x90,0x6C,0x44,0xFC,0x23,0xB4,0x09,0x58);


MIDL_DEFINE_GUID(IID, IID_IInkRecognitionResult,0x3BC129A8,0x86CD,0x45ad,0xBD,0xE8,0xE0,0xD3,0x2D,0x61,0xC1,0x6D);


MIDL_DEFINE_GUID(IID, IID_IInkRecognitionAlternate,0xB7E660AD,0x77E4,0x429b,0xAD,0xDA,0x87,0x37,0x80,0xD1,0xFC,0x4A);


MIDL_DEFINE_GUID(IID, IID_IInkRecognitionAlternates,0x286A167F,0x9F19,0x4c61,0x9D,0x53,0x4F,0x07,0xBE,0x62,0x2B,0x84);


MIDL_DEFINE_GUID(IID, IID_IInkRecognizerGuide,0xD934BE07,0x7B84,0x4208,0x91,0x36,0x83,0xC2,0x09,0x94,0xE9,0x05);


MIDL_DEFINE_GUID(IID, IID_IInkWordList,0x76BA3491,0xCB2F,0x406b,0x99,0x61,0x0E,0x0C,0x4C,0xDA,0xAE,0xF2);


MIDL_DEFINE_GUID(CLSID, CLSID_InkDisp,0x937C1A34,0x151D,0x4610,0x9C,0xA6,0xA8,0xCC,0x9B,0xDB,0x5D,0x83);


MIDL_DEFINE_GUID(CLSID, CLSID_InkOverlay,0x65d00646,0xcde3,0x4a88,0x91,0x63,0x67,0x69,0xf0,0xf1,0xa9,0x7d);


MIDL_DEFINE_GUID(CLSID, CLSID_InkPicture,0x04a1e553,0xfe36,0x4fde,0x86,0x5e,0x34,0x41,0x94,0xe6,0x94,0x24);


MIDL_DEFINE_GUID(CLSID, CLSID_InkCollector,0x43FB1553,0xAD74,0x4ee8,0x88,0xE4,0x3E,0x6D,0xAA,0xC9,0x15,0xDB);


MIDL_DEFINE_GUID(CLSID, CLSID_InkDrawingAttributes,0xD8BF32A2,0x05A5,0x44c3,0xB3,0xAA,0x5E,0x80,0xAC,0x7D,0x25,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRectangle,0x43B07326,0xAAE0,0x4B62,0xA8,0x3D,0x5F,0xD7,0x68,0xB7,0x35,0x3C);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRenderer,0x9C1CC6E4,0xD7EB,0x4eeb,0x90,0x91,0x15,0xA7,0xC8,0x79,0x1E,0xD9);


MIDL_DEFINE_GUID(CLSID, CLSID_InkTransform,0xE3D5D93C,0x1663,0x4A78,0xA1,0xA7,0x22,0x37,0x5D,0xFE,0xBA,0xEE);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRecognizers,0x9FD4E808,0xF6E6,0x4e65,0x98,0xD3,0xAA,0x39,0x05,0x4C,0x12,0x55);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRecognizerContext,0xAAC46A37,0x9229,0x4fc0,0x8C,0xCE,0x44,0x97,0x56,0x9B,0xF4,0xD1);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRecognizerGuide,0x8770D941,0xA63A,0x4671,0xA3,0x75,0x28,0x55,0xA1,0x8E,0xBA,0x73);


MIDL_DEFINE_GUID(CLSID, CLSID_InkTablets,0x6E4FCB12,0x510A,0x4d40,0x93,0x04,0x1D,0xA1,0x0A,0xE9,0x14,0x7C);


MIDL_DEFINE_GUID(CLSID, CLSID_InkWordList,0x9DE85094,0xF71F,0x44f1,0x84,0x71,0x15,0xA2,0xFA,0x76,0xFC,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_InkStrokes,0x48F491BC,0x240E,0x4860,0xB0,0x79,0xA1,0xE9,0x4D,0x3D,0x2C,0x86);


MIDL_DEFINE_GUID(IID, IID_IInk,0x03F8E511,0x43A1,0x11D3,0x8B,0xB6,0x00,0x80,0xC7,0xD6,0xBA,0xD5);


MIDL_DEFINE_GUID(IID, IID_IInkLineInfo,0x9C1C5AD6,0xF22F,0x4DE4,0xB4,0x53,0xA2,0xCC,0x48,0x2E,0x7C,0x33);


MIDL_DEFINE_GUID(IID, IID_ISketchInk,0xB4563688,0x98EB,0x4646,0xB2,0x79,0x44,0xDA,0x14,0xD4,0x57,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_Ink,0x13DE4A42,0x8D21,0x4C8E,0xBF,0x9C,0x8F,0x69,0xCB,0x06,0x8F,0xCA);


MIDL_DEFINE_GUID(CLSID, CLSID_SketchInk,0xF0291081,0xE87C,0x4E07,0x97,0xDA,0xA0,0xA0,0x37,0x61,0xE5,0x86);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/


#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0347 */
/* Compiler settings for msinkaut.idl:
    Oicf, W1, Zp8, env=Win64 (32b run,appending)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if defined(_M_IA64) || defined(_M_AMD64)

#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_MSINKAUTLib,0x7D868ACD,0x1A5D,0x4a47,0xA2,0x47,0xF3,0x97,0x41,0x35,0x30,0x12);


MIDL_DEFINE_GUID(IID, IID_IInkRectangle,0x9794FF82,0x6071,0x4717,0x8A,0x8B,0x6A,0xC7,0xC6,0x4A,0x68,0x6E);


MIDL_DEFINE_GUID(IID, IID_IInkExtendedProperty,0xDB489209,0xB7C3,0x411D,0x90,0xF6,0x15,0x48,0xCF,0xFF,0x27,0x1E);


MIDL_DEFINE_GUID(IID, IID_IInkExtendedProperties,0x89F2A8BE,0x95A9,0x4530,0x8B,0x8F,0x88,0xE9,0x71,0xE3,0xE2,0x5F);


MIDL_DEFINE_GUID(IID, IID_IInkDrawingAttributes,0xBF519B75,0x0A15,0x4623,0xAD,0xC9,0xC0,0x0D,0x43,0x6A,0x80,0x92);


MIDL_DEFINE_GUID(IID, IID_IInkTransform,0x615F1D43,0x8703,0x4565,0x88,0xE2,0x82,0x01,0xD2,0xEC,0xD7,0xB7);


MIDL_DEFINE_GUID(IID, IID_IInkGesture,0x3BDC0A97,0x04E5,0x4e26,0xB8,0x13,0x18,0xF0,0x52,0xD4,0x1D,0xEF);


MIDL_DEFINE_GUID(IID, IID_IInkCursor,0xAD30C630,0x40C5,0x4350,0x84,0x05,0x9C,0x71,0x01,0x2F,0xC5,0x58);


MIDL_DEFINE_GUID(IID, IID_IInkCursors,0xA248C1AC,0xC698,0x4e06,0x9E,0x5C,0xD5,0x7F,0x77,0xC7,0xE6,0x47);


MIDL_DEFINE_GUID(IID, IID_IInkCursorButton,0x85EF9417,0x1D59,0x49b2,0xA1,0x3C,0x70,0x2C,0x85,0x43,0x08,0x94);


MIDL_DEFINE_GUID(IID, IID_IInkCursorButtons,0x3671CC40,0xB624,0x4671,0x9F,0xA0,0xDB,0x11,0x9D,0x95,0x2D,0x54);


MIDL_DEFINE_GUID(IID, IID_IInkTablet,0x2DE25EAA,0x6EF8,0x42d5,0xAE,0xE9,0x18,0x5B,0xC8,0x1B,0x91,0x2D);


MIDL_DEFINE_GUID(IID, IID_IInkTablets,0x112086D9,0x7779,0x4535,0xA6,0x99,0x86,0x2B,0x43,0xAC,0x18,0x63);


MIDL_DEFINE_GUID(IID, IID_IInkStrokeDisp,0x43242FEA,0x91D1,0x4a72,0x96,0x3E,0xFB,0xB9,0x18,0x29,0xCF,0xA2);


MIDL_DEFINE_GUID(IID, IID_IInkStrokes,0xF1F4C9D8,0x590A,0x4963,0xB3,0xAE,0x19,0x35,0x67,0x1B,0xB6,0xF3);


MIDL_DEFINE_GUID(IID, IID_IInkCustomStrokes,0x7E23A88F,0xC30E,0x420f,0x9B,0xDB,0x28,0x90,0x25,0x43,0xF0,0xC1);


MIDL_DEFINE_GUID(IID, DIID__IInkStrokesEvents,0xF33053EC,0x5D25,0x430a,0x92,0x8F,0x76,0xA6,0x49,0x1D,0xDE,0x15);


MIDL_DEFINE_GUID(IID, IID_IInkDisp,0x9D398FA0,0xC4E2,0x4fcd,0x99,0x73,0x97,0x5C,0xAA,0xF4,0x7E,0xA6);


MIDL_DEFINE_GUID(IID, DIID__IInkEvents,0x427B1865,0xCA3F,0x479a,0x83,0xA9,0x0F,0x42,0x0F,0x2A,0x00,0x73);


MIDL_DEFINE_GUID(IID, IID_IInkRenderer,0xE6257A9C,0xB511,0x4f4c,0xA8,0xB0,0xA7,0xDB,0xC9,0x50,0x6B,0x83);


MIDL_DEFINE_GUID(IID, IID_IInkCollector,0xF0F060B5,0x8B1F,0x4a7c,0x89,0xEC,0x88,0x06,0x92,0x58,0x8A,0x4F);


MIDL_DEFINE_GUID(IID, DIID__IInkCollectorEvents,0x11A583F2,0x712D,0x4fea,0xAB,0xCF,0xAB,0x4A,0xF3,0x8E,0xA0,0x6B);


MIDL_DEFINE_GUID(IID, IID_IInkOverlay,0xb82a463b,0xc1c5,0x45a3,0x99,0x7c,0xde,0xab,0x56,0x51,0xb6,0x7a);


MIDL_DEFINE_GUID(IID, DIID__IInkOverlayEvents,0x31179b69,0xe563,0x489e,0xb1,0x6f,0x71,0x2f,0x1e,0x8a,0x06,0x51);


MIDL_DEFINE_GUID(IID, IID_IInkPicture,0xe85662e0,0x379a,0x40d7,0x9b,0x5c,0x75,0x7d,0x23,0x3f,0x99,0x23);


MIDL_DEFINE_GUID(IID, DIID__IInkPictureEvents,0x60ff4fee,0x22ff,0x4484,0xac,0xc1,0xd3,0x08,0xd9,0xcd,0x7e,0xa3);


MIDL_DEFINE_GUID(IID, IID_IInkRecognizer,0x782BF7CF,0x034B,0x4396,0x8A,0x32,0x3A,0x18,0x33,0xCF,0x6B,0x56);


MIDL_DEFINE_GUID(IID, IID_IInkRecognizers,0x9CCC4F12,0xB0B7,0x4a8b,0xBF,0x58,0x4A,0xEC,0xA4,0xE8,0xCE,0xFD);


MIDL_DEFINE_GUID(IID, DIID__IInkRecognitionEvents,0x17BCE92F,0x2E21,0x47FD,0x9D,0x33,0x3C,0x6A,0xFB,0xFD,0x8C,0x59);


MIDL_DEFINE_GUID(IID, IID_IInkRecognizerContext,0xC68F52F9,0x32A3,0x4625,0x90,0x6C,0x44,0xFC,0x23,0xB4,0x09,0x58);


MIDL_DEFINE_GUID(IID, IID_IInkRecognitionResult,0x3BC129A8,0x86CD,0x45ad,0xBD,0xE8,0xE0,0xD3,0x2D,0x61,0xC1,0x6D);


MIDL_DEFINE_GUID(IID, IID_IInkRecognitionAlternate,0xB7E660AD,0x77E4,0x429b,0xAD,0xDA,0x87,0x37,0x80,0xD1,0xFC,0x4A);


MIDL_DEFINE_GUID(IID, IID_IInkRecognitionAlternates,0x286A167F,0x9F19,0x4c61,0x9D,0x53,0x4F,0x07,0xBE,0x62,0x2B,0x84);


MIDL_DEFINE_GUID(IID, IID_IInkRecognizerGuide,0xD934BE07,0x7B84,0x4208,0x91,0x36,0x83,0xC2,0x09,0x94,0xE9,0x05);


MIDL_DEFINE_GUID(IID, IID_IInkWordList,0x76BA3491,0xCB2F,0x406b,0x99,0x61,0x0E,0x0C,0x4C,0xDA,0xAE,0xF2);


MIDL_DEFINE_GUID(CLSID, CLSID_InkDisp,0x937C1A34,0x151D,0x4610,0x9C,0xA6,0xA8,0xCC,0x9B,0xDB,0x5D,0x83);


MIDL_DEFINE_GUID(CLSID, CLSID_InkOverlay,0x65d00646,0xcde3,0x4a88,0x91,0x63,0x67,0x69,0xf0,0xf1,0xa9,0x7d);


MIDL_DEFINE_GUID(CLSID, CLSID_InkPicture,0x04a1e553,0xfe36,0x4fde,0x86,0x5e,0x34,0x41,0x94,0xe6,0x94,0x24);


MIDL_DEFINE_GUID(CLSID, CLSID_InkCollector,0x43FB1553,0xAD74,0x4ee8,0x88,0xE4,0x3E,0x6D,0xAA,0xC9,0x15,0xDB);


MIDL_DEFINE_GUID(CLSID, CLSID_InkDrawingAttributes,0xD8BF32A2,0x05A5,0x44c3,0xB3,0xAA,0x5E,0x80,0xAC,0x7D,0x25,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRectangle,0x43B07326,0xAAE0,0x4B62,0xA8,0x3D,0x5F,0xD7,0x68,0xB7,0x35,0x3C);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRenderer,0x9C1CC6E4,0xD7EB,0x4eeb,0x90,0x91,0x15,0xA7,0xC8,0x79,0x1E,0xD9);


MIDL_DEFINE_GUID(CLSID, CLSID_InkTransform,0xE3D5D93C,0x1663,0x4A78,0xA1,0xA7,0x22,0x37,0x5D,0xFE,0xBA,0xEE);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRecognizers,0x9FD4E808,0xF6E6,0x4e65,0x98,0xD3,0xAA,0x39,0x05,0x4C,0x12,0x55);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRecognizerContext,0xAAC46A37,0x9229,0x4fc0,0x8C,0xCE,0x44,0x97,0x56,0x9B,0xF4,0xD1);


MIDL_DEFINE_GUID(CLSID, CLSID_InkRecognizerGuide,0x8770D941,0xA63A,0x4671,0xA3,0x75,0x28,0x55,0xA1,0x8E,0xBA,0x73);


MIDL_DEFINE_GUID(CLSID, CLSID_InkTablets,0x6E4FCB12,0x510A,0x4d40,0x93,0x04,0x1D,0xA1,0x0A,0xE9,0x14,0x7C);


MIDL_DEFINE_GUID(CLSID, CLSID_InkWordList,0x9DE85094,0xF71F,0x44f1,0x84,0x71,0x15,0xA2,0xFA,0x76,0xFC,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_InkStrokes,0x48F491BC,0x240E,0x4860,0xB0,0x79,0xA1,0xE9,0x4D,0x3D,0x2C,0x86);


MIDL_DEFINE_GUID(IID, IID_IInk,0x03F8E511,0x43A1,0x11D3,0x8B,0xB6,0x00,0x80,0xC7,0xD6,0xBA,0xD5);


MIDL_DEFINE_GUID(IID, IID_IInkLineInfo,0x9C1C5AD6,0xF22F,0x4DE4,0xB4,0x53,0xA2,0xCC,0x48,0x2E,0x7C,0x33);


MIDL_DEFINE_GUID(IID, IID_ISketchInk,0xB4563688,0x98EB,0x4646,0xB2,0x79,0x44,0xDA,0x14,0xD4,0x57,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_Ink,0x13DE4A42,0x8D21,0x4C8E,0xBF,0x9C,0x8F,0x69,0xCB,0x06,0x8F,0xCA);


MIDL_DEFINE_GUID(CLSID, CLSID_SketchInk,0xF0291081,0xE87C,0x4E07,0x97,0xDA,0xA0,0xA0,0x37,0x61,0xE5,0x86);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* defined(_M_IA64) || defined(_M_AMD64)*/

