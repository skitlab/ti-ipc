/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     FUNCTION DECLARATIONS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_ipc_family_f28m35x_IpcMgr__include
#define ti_sdo_ipc_family_f28m35x_IpcMgr__include

#ifndef __nested__
#define __nested__
#define ti_sdo_ipc_family_f28m35x_IpcMgr__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_ipc_family_f28m35x_IpcMgr___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/sdo/ipc/family/f28m35x/package/package.defs.h>

#include <xdc/runtime/IModule.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Assert.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* NOFETCH */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_NOFETCH (1)

/* NODMAWRITE */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_NODMAWRITE (2)

/* NOCPUWRITE */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_NOCPUWRITE (4)


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* MWRALLOW */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_MWRALLOW (0x400FB980)

/* MEMCNF */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_MEMCNF (0x400FB930)

/* MSxMSEL */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_MSxMSEL (0x400FB210)

/* MSxSRCR */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_MSxSRCR (0x400FB220)

/* C28RTESTINIT */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_C28RTESTINIT (0x4920)

/* C28RINITDONE */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_C28RINITDONE (0x4930)

/* MTOCRTESTINIT */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_MTOCRTESTINIT (0x400FB260)

/* MTOCRINITDONE */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_MTOCRINITDONE (0x400FB288)


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsEnabled ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsIncluded ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsMask ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__gateObj ti_sdo_ipc_family_f28m35x_IpcMgr_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__gatePrms ti_sdo_ipc_family_f28m35x_IpcMgr_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__id;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__id ti_sdo_ipc_family_f28m35x_IpcMgr_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerDefined ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerObj ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn0 ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn1 ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn2 ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn4 ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn8 ti_sdo_ipc_family_f28m35x_IpcMgr_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__startupDoneFxn ti_sdo_ipc_family_f28m35x_IpcMgr_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Object__count;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Object__count ti_sdo_ipc_family_f28m35x_IpcMgr_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Object__heap;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Object__heap ti_sdo_ipc_family_f28m35x_IpcMgr_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Object__sizeof ti_sdo_ipc_family_f28m35x_IpcMgr_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Object__table;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Object__table ti_sdo_ipc_family_f28m35x_IpcMgr_Object__table__C;

/* A_internal */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_A_internal (ti_sdo_ipc_family_f28m35x_IpcMgr_A_internal__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_ipc_family_f28m35x_IpcMgr_A_internal;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_A_internal ti_sdo_ipc_family_f28m35x_IpcMgr_A_internal__C;

/* A_invParam */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_A_invParam (ti_sdo_ipc_family_f28m35x_IpcMgr_A_invParam__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_ipc_family_f28m35x_IpcMgr_A_invParam;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_A_invParam ti_sdo_ipc_family_f28m35x_IpcMgr_A_invParam__C;

/* A_notEnoughMemory */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_A_notEnoughMemory (ti_sdo_ipc_family_f28m35x_IpcMgr_A_notEnoughMemory__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_ipc_family_f28m35x_IpcMgr_A_notEnoughMemory;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_A_notEnoughMemory ti_sdo_ipc_family_f28m35x_IpcMgr_A_notEnoughMemory__C;

/* A_nullArgument */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_A_nullArgument (ti_sdo_ipc_family_f28m35x_IpcMgr_A_nullArgument__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_ipc_family_f28m35x_IpcMgr_A_nullArgument;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_A_nullArgument ti_sdo_ipc_family_f28m35x_IpcMgr_A_nullArgument__C;

/* E_internal */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_E_internal (ti_sdo_ipc_family_f28m35x_IpcMgr_E_internal__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_ipc_family_f28m35x_IpcMgr_E_internal;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_E_internal ti_sdo_ipc_family_f28m35x_IpcMgr_E_internal__C;

/* ipcSetFlag */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag (ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag (ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag__C)
typedef xdc_UInt32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag__C;
#endif

/* messageQSize */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize (ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize (ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize__C)
typedef xdc_UInt32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize__C;
#endif

/* messageQEventId */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId (ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId (ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId__C)
typedef xdc_UInt16 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId__C;
#endif

/* nameServerEventId */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId (ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId (ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId__C)
typedef xdc_UInt16 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId__C;
#endif

/* numNotifyMsgs */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs (ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs (ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs__C)
typedef xdc_UInt32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs__C;
#endif

/* numMessageQMsgs */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs (ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs (ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs__C)
typedef xdc_UInt32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs__C;
#endif

/* sharedMemoryEnable */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable (ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable (ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable__C)
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable__C;
#endif

/* sharedMemoryOwnerMask */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask (ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask (ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask__C)
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask__C;
#endif

/* sharedMemoryAccess */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess (ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess__C)
typedef xdc_Bits32 __T1_ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess;
typedef xdc_Bits32 __ARRAY1_ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess[8];
typedef __ARRAY1_ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess __TA_ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess;
typedef __TA_ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess CT__ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess__C;

/* readAddr */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_readAddr (ti_sdo_ipc_family_f28m35x_IpcMgr_readAddr__C)
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_IpcMgr_readAddr;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_readAddr ti_sdo_ipc_family_f28m35x_IpcMgr_readAddr__C;

/* writeAddr */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_writeAddr (ti_sdo_ipc_family_f28m35x_IpcMgr_writeAddr__C)
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_IpcMgr_writeAddr;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_writeAddr ti_sdo_ipc_family_f28m35x_IpcMgr_writeAddr__C;

/* sharedMemSizeUsed */
#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed__D
#define ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed (ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed__D)
#else
#define ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed (ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed__C)
typedef xdc_UInt32 CT__ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed__C;
#endif


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup__E, "ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup__F, "ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup__F( xdc_Int state );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup__R, "ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup__R( xdc_Int state );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_IpcMgr_Module__startupDone__S, "ti_sdo_ipc_family_f28m35x_IpcMgr_Module__startupDone")
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_IpcMgr_Module__startupDone__S( void );

/* init__I */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_init ti_sdo_ipc_family_f28m35x_IpcMgr_init__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_IpcMgr_init__I, "ti_sdo_ipc_family_f28m35x_IpcMgr_init")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_IpcMgr_init__I( void );

/* notifyCircAttach__I */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_notifyCircAttach ti_sdo_ipc_family_f28m35x_IpcMgr_notifyCircAttach__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_IpcMgr_notifyCircAttach__I, "ti_sdo_ipc_family_f28m35x_IpcMgr_notifyCircAttach")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_IpcMgr_notifyCircAttach__I( xdc_UInt16 remoteProcId, xdc_Ptr writeAddr, xdc_Ptr readAddr );

/* nameServerAttach__I */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerAttach ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerAttach__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerAttach__I, "ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerAttach")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerAttach__I( xdc_UInt16 remoteProcId, xdc_Ptr writeAddr, xdc_Ptr readAddr );

/* transportCircAttach__I */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_transportCircAttach ti_sdo_ipc_family_f28m35x_IpcMgr_transportCircAttach__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_IpcMgr_transportCircAttach__I, "ti_sdo_ipc_family_f28m35x_IpcMgr_transportCircAttach")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_IpcMgr_transportCircAttach__I( xdc_UInt16 remoteProcId, xdc_Ptr writeAddr, xdc_Ptr readAddr );


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startupDone() ti_sdo_ipc_family_f28m35x_IpcMgr_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_Object_heap() ti_sdo_ipc_family_f28m35x_IpcMgr_Object__heap__C

/* Module_heap */
#define ti_sdo_ipc_family_f28m35x_IpcMgr_Module_heap() ti_sdo_ipc_family_f28m35x_IpcMgr_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_ipc_family_f28m35x_IpcMgr_Module__id ti_sdo_ipc_family_f28m35x_IpcMgr_Module_id( void ) 
{
    return ti_sdo_ipc_family_f28m35x_IpcMgr_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_ipc_family_f28m35x_IpcMgr_Module_hasMask( void ) 
{
    return ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_ipc_family_f28m35x_IpcMgr_Module_getMask( void ) 
{
    return ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsMask__C != NULL ? *ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_ipc_family_f28m35x_IpcMgr_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsMask__C != NULL) *ti_sdo_ipc_family_f28m35x_IpcMgr_Module__diagsMask__C = mask;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_ipc_family_f28m35x_IpcMgr__top__
#undef __nested__
#endif

#endif /* ti_sdo_ipc_family_f28m35x_IpcMgr__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_ipc_family_f28m35x_IpcMgr__internalaccess))

#ifndef ti_sdo_ipc_family_f28m35x_IpcMgr__include_state
#define ti_sdo_ipc_family_f28m35x_IpcMgr__include_state


#endif /* ti_sdo_ipc_family_f28m35x_IpcMgr__include_state */

#endif

/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_ipc_family_f28m35x_IpcMgr__nolocalnames)

#ifndef ti_sdo_ipc_family_f28m35x_IpcMgr__localnames__done
#define ti_sdo_ipc_family_f28m35x_IpcMgr__localnames__done

/* module prefix */
#define IpcMgr_NOFETCH ti_sdo_ipc_family_f28m35x_IpcMgr_NOFETCH
#define IpcMgr_NODMAWRITE ti_sdo_ipc_family_f28m35x_IpcMgr_NODMAWRITE
#define IpcMgr_NOCPUWRITE ti_sdo_ipc_family_f28m35x_IpcMgr_NOCPUWRITE
#define IpcMgr_MWRALLOW ti_sdo_ipc_family_f28m35x_IpcMgr_MWRALLOW
#define IpcMgr_MEMCNF ti_sdo_ipc_family_f28m35x_IpcMgr_MEMCNF
#define IpcMgr_MSxMSEL ti_sdo_ipc_family_f28m35x_IpcMgr_MSxMSEL
#define IpcMgr_MSxSRCR ti_sdo_ipc_family_f28m35x_IpcMgr_MSxSRCR
#define IpcMgr_C28RTESTINIT ti_sdo_ipc_family_f28m35x_IpcMgr_C28RTESTINIT
#define IpcMgr_C28RINITDONE ti_sdo_ipc_family_f28m35x_IpcMgr_C28RINITDONE
#define IpcMgr_MTOCRTESTINIT ti_sdo_ipc_family_f28m35x_IpcMgr_MTOCRTESTINIT
#define IpcMgr_MTOCRINITDONE ti_sdo_ipc_family_f28m35x_IpcMgr_MTOCRINITDONE
#define IpcMgr_A_internal ti_sdo_ipc_family_f28m35x_IpcMgr_A_internal
#define IpcMgr_A_invParam ti_sdo_ipc_family_f28m35x_IpcMgr_A_invParam
#define IpcMgr_A_notEnoughMemory ti_sdo_ipc_family_f28m35x_IpcMgr_A_notEnoughMemory
#define IpcMgr_A_nullArgument ti_sdo_ipc_family_f28m35x_IpcMgr_A_nullArgument
#define IpcMgr_E_internal ti_sdo_ipc_family_f28m35x_IpcMgr_E_internal
#define IpcMgr_ipcSetFlag ti_sdo_ipc_family_f28m35x_IpcMgr_ipcSetFlag
#define IpcMgr_messageQSize ti_sdo_ipc_family_f28m35x_IpcMgr_messageQSize
#define IpcMgr_messageQEventId ti_sdo_ipc_family_f28m35x_IpcMgr_messageQEventId
#define IpcMgr_nameServerEventId ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerEventId
#define IpcMgr_numNotifyMsgs ti_sdo_ipc_family_f28m35x_IpcMgr_numNotifyMsgs
#define IpcMgr_numMessageQMsgs ti_sdo_ipc_family_f28m35x_IpcMgr_numMessageQMsgs
#define IpcMgr_sharedMemoryEnable ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryEnable
#define IpcMgr_sharedMemoryOwnerMask ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryOwnerMask
#define IpcMgr_sharedMemoryAccess ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemoryAccess
#define IpcMgr_readAddr ti_sdo_ipc_family_f28m35x_IpcMgr_readAddr
#define IpcMgr_writeAddr ti_sdo_ipc_family_f28m35x_IpcMgr_writeAddr
#define IpcMgr_sharedMemSizeUsed ti_sdo_ipc_family_f28m35x_IpcMgr_sharedMemSizeUsed
#define IpcMgr_Module_name ti_sdo_ipc_family_f28m35x_IpcMgr_Module_name
#define IpcMgr_Module_id ti_sdo_ipc_family_f28m35x_IpcMgr_Module_id
#define IpcMgr_Module_startup ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startup
#define IpcMgr_Module_startupDone ti_sdo_ipc_family_f28m35x_IpcMgr_Module_startupDone
#define IpcMgr_Module_hasMask ti_sdo_ipc_family_f28m35x_IpcMgr_Module_hasMask
#define IpcMgr_Module_getMask ti_sdo_ipc_family_f28m35x_IpcMgr_Module_getMask
#define IpcMgr_Module_setMask ti_sdo_ipc_family_f28m35x_IpcMgr_Module_setMask
#define IpcMgr_Object_heap ti_sdo_ipc_family_f28m35x_IpcMgr_Object_heap
#define IpcMgr_Module_heap ti_sdo_ipc_family_f28m35x_IpcMgr_Module_heap

#endif /* ti_sdo_ipc_family_f28m35x_IpcMgr__localnames__done */
#endif
/*
 *  @(#) ti.sdo.ipc.family.f28m35x; 1, 0, 0, 0,; 11-7-2012 13:09:35; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

