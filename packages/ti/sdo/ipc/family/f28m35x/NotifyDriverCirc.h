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
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     FUNCTION SELECTORS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__include
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__include

#ifndef __nested__
#define __nested__
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/ipc/family/f28m35x/package/package.defs.h>

#include <ti/sdo/ipc/notifyDrivers/IInterrupt.h>
#include <ti/sdo/ipc/Notify.h>
#include <ti/sdo/utils/MultiProc.h>
#include <ti/sdo/ipc/interfaces/INotifyDriver.h>
#include <xdc/runtime/Assert.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* EventEntry */
struct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_EventEntry {
    volatile xdc_Bits32 eventid;
    volatile xdc_Bits32 payload;
};


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsEnabled ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsIncluded ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsMask ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__gateObj ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__gatePrms ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__id;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__id ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerDefined ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerObj ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn0 ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn1 ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn2 ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn4 ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn8 ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__startupDoneFxn ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__count;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__count ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__heap;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__heap ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__sizeof ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__table;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__table ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__table__C;

/* A_notSupported */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_A_notSupported (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_A_notSupported__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_A_notSupported;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_A_notSupported ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_A_notSupported__C;

/* numMsgs */
#ifdef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs__D
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs__D)
#else
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs__C;
#endif

/* localIntId */
#ifdef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId__D
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId__D)
#else
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId__C;
#endif

/* remoteIntId */
#ifdef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId__D
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId__D)
#else
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId__C;
#endif

/* maxIndex */
#ifdef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex__D
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex__D)
#else
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex__C;
#endif

/* modIndex */
#ifdef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex__D
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex__D)
#else
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex__C;
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_Ptr readAddr;
    xdc_Ptr writeAddr;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Struct {
    const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Fxns__* __fxns;
    ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_EventEntry* __f0;
    xdc_Bits32* __f1;
    xdc_Bits32* __f2;
    ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_EventEntry* __f3;
    xdc_Bits32* __f4;
    xdc_Bits32* __f5;
    xdc_Bits32 __f6;
    ti_sdo_ipc_Notify_Handle __f7;
    xdc_UInt16 __f8;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*registerEvent)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle, xdc_UInt32);
    xdc_Void (*unregisterEvent)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle, xdc_UInt32);
    xdc_Int (*sendEvent)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle, xdc_UInt32, xdc_UInt32, xdc_Bool);
    xdc_Void (*disable)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle);
    xdc_Void (*enable)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle);
    xdc_Void (*disableEvent)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle, xdc_UInt32);
    xdc_Void (*enableEvent)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle, xdc_UInt32);
    xdc_Void (*setNotifyHandle)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle, xdc_Ptr);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Fxns__ ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_startup( state ) (-1)

/* Instance_init__F */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_init__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_init")
__extern void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_init__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object*, const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* );

/* Instance_finalize__F */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_finalize__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_finalize")
__extern void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_finalize__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* );

/* Instance_init__R */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_init__R, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_init")
__extern void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_init__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object*, const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* );

/* Instance_finalize__R */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_finalize__R, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_finalize")
__extern void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_finalize__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* );

/* Handle__label__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle__label__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle__label")
__extern xdc_runtime_Types_Label* ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__startupDone__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__startupDone")
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__create__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__create")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__delete__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__delete")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__destruct__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__destruct")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__get__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__get")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__first__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__first")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__next__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__next")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params__init__S, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params__init")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* registerEvent__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent__E( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* __inst, xdc_UInt32 eventId );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId );

/* unregisterEvent__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent__E( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* __inst, xdc_UInt32 eventId );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId );

/* sendEvent__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent__E( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId, xdc_UInt32 payload, xdc_Bool waitClear );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* __inst, xdc_UInt32 eventId, xdc_UInt32 payload, xdc_Bool waitClear );
__extern xdc_Int ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId, xdc_UInt32 payload, xdc_Bool waitClear );

/* disable__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable__E( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* __inst );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst );

/* enable__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable__E( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* __inst );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst );

/* disableEvent__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent__E( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* __inst, xdc_UInt32 eventId );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId );

/* enableEvent__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent__E( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* __inst, xdc_UInt32 eventId );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_UInt32 eventId );

/* setNotifyHandle__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle__E( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_Ptr driverHandle );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle__F( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* __inst, xdc_Ptr driverHandle );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle__R( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle __inst, xdc_Ptr driverHandle );

/* sharedMemReq__E */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq__E, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq")
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq__E( const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* params );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq__F, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq")
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq__F( const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* params );
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq__R( const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* params );

/* intEnable__I */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intEnable ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intEnable__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intEnable__I, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intEnable")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intEnable__I( void );

/* intDisable__I */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intDisable ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intDisable__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intDisable__I, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intDisable")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intDisable__I( void );

/* intSend__I */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intSend ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intSend__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intSend__I, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intSend")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intSend__I( void );

/* intClear__I */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intClear ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intClear__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intClear__I, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intClear")
__extern xdc_UInt ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intClear__I( void );

/* isr__I */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_isr ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_isr__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_isr__I, "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_isr")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_isr__I( xdc_UArg arg );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* registerEvent_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent_FxnT)(void*, xdc_UInt32);
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent_FxnT)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent; 
}

/* unregisterEvent_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent_FxnT)(void*, xdc_UInt32);
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent_FxnT)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent; 
}

/* sendEvent_{FxnT,fxnP} */
typedef xdc_Int (*ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent_FxnT)(void*, xdc_UInt32, xdc_UInt32, xdc_Bool);
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent_FxnT)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent; 
}

/* disable_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable_FxnT)(void*);
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable_FxnT)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable; 
}

/* enable_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable_FxnT)(void*);
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable_FxnT)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable; 
}

/* disableEvent_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent_FxnT)(void*, xdc_UInt32);
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent_FxnT)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent; 
}

/* enableEvent_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent_FxnT)(void*, xdc_UInt32);
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent_FxnT)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent; 
}

/* setNotifyHandle_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle_FxnT)(void*, xdc_Ptr);
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle_FxnT)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle; 
}


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_ipc_interfaces_INotifyDriver_Module ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_upCast( void )
{
    return (ti_sdo_ipc_interfaces_INotifyDriver_Module)&ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__FXNS__C;
}

/* Module_to_ti_sdo_ipc_interfaces_INotifyDriver */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_to_ti_sdo_ipc_interfaces_INotifyDriver ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_upCast

/* Handle_upCast */
static inline ti_sdo_ipc_interfaces_INotifyDriver_Handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_upCast( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle i )
{
    return (ti_sdo_ipc_interfaces_INotifyDriver_Handle)i;
}

/* Handle_to_ti_sdo_ipc_interfaces_INotifyDriver */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_to_ti_sdo_ipc_interfaces_INotifyDriver ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_upCast

/* Handle_downCast */
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_downCast( ti_sdo_ipc_interfaces_INotifyDriver_Handle i )
{
    ti_sdo_ipc_interfaces_INotifyDriver_Handle i2 = (ti_sdo_ipc_interfaces_INotifyDriver_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__FXNS__C ? (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle)i : 0;
}

/* Handle_from_ti_sdo_ipc_interfaces_INotifyDriver */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_from_ti_sdo_ipc_interfaces_INotifyDriver ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_startupDone() ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_heap() ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__heap__C

/* Module_heap */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_heap() ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__id ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_id( void ) 
{
    return ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_hasMask( void ) 
{
    return ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_getMask( void ) 
{
    return ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsMask__C != NULL ? *ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsMask__C != NULL) *ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params_init( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* prms ) 
{
    if (prms) {
        ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params__init__S(prms, 0, sizeof(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params_copy( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* dst, const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* src ) 
{
    if (dst) {
        ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_count() ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__count__C

/* Object_sizeof */
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_sizeof() ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__sizeof__C

/* Object_get */
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_get( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_State* oarr, int i ) 
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_first( void )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__first__S();
}

/* Object_next */
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_next( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object* obj )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_label( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_name( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_create( const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle)ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params), __eb);
}

/* construct */
static inline void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_construct( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Struct* __obj, const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params* __prms )
{
    ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__create__S(__obj, sizeof (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Struct), 0, (const xdc_UChar*)__prms, sizeof(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params), NULL);
}

/* delete */
static inline void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_delete( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle* instp )
{
    ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_destruct( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Struct* obj )
{
    ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__destruct__S(obj);
}

/* handle */
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_handle( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Struct* str )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle)str;
}

/* struct */
static inline ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Struct* ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_struct( ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle inst )
{
    return (ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__top__
#undef __nested__
#endif

#endif /* ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__internalaccess))

#ifndef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__include_state
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__include_state

/* Object */
struct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object {
    const ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Fxns__* __fxns;
    ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_EventEntry* putBuffer;
    xdc_Bits32* putReadIndex;
    xdc_Bits32* putWriteIndex;
    ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_EventEntry* getBuffer;
    xdc_Bits32* getReadIndex;
    xdc_Bits32* getWriteIndex;
    xdc_Bits32 evtRegMask;
    ti_sdo_ipc_Notify_Handle notifyHandle;
    xdc_UInt16 remoteProcId;
};

#endif /* ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__nolocalnames)

#ifndef ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__localnames__done
#define ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__localnames__done

/* module prefix */
#define NotifyDriverCirc_Instance ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance
#define NotifyDriverCirc_Handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle
#define NotifyDriverCirc_Module ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module
#define NotifyDriverCirc_Object ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object
#define NotifyDriverCirc_Struct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Struct
#define NotifyDriverCirc_EventEntry ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_EventEntry
#define NotifyDriverCirc_Instance_State ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_State
#define NotifyDriverCirc_A_notSupported ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_A_notSupported
#define NotifyDriverCirc_numMsgs ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_numMsgs
#define NotifyDriverCirc_localIntId ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_localIntId
#define NotifyDriverCirc_remoteIntId ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_remoteIntId
#define NotifyDriverCirc_maxIndex ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_maxIndex
#define NotifyDriverCirc_modIndex ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_modIndex
#define NotifyDriverCirc_Params ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params
#define NotifyDriverCirc_registerEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent
#define NotifyDriverCirc_registerEvent_fxnP ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent_fxnP
#define NotifyDriverCirc_registerEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent_FxnT
#define NotifyDriverCirc_unregisterEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent
#define NotifyDriverCirc_unregisterEvent_fxnP ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent_fxnP
#define NotifyDriverCirc_unregisterEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent_FxnT
#define NotifyDriverCirc_sendEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent
#define NotifyDriverCirc_sendEvent_fxnP ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent_fxnP
#define NotifyDriverCirc_sendEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent_FxnT
#define NotifyDriverCirc_disable ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable
#define NotifyDriverCirc_disable_fxnP ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable_fxnP
#define NotifyDriverCirc_disable_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable_FxnT
#define NotifyDriverCirc_enable ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable
#define NotifyDriverCirc_enable_fxnP ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable_fxnP
#define NotifyDriverCirc_enable_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable_FxnT
#define NotifyDriverCirc_disableEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent
#define NotifyDriverCirc_disableEvent_fxnP ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent_fxnP
#define NotifyDriverCirc_disableEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent_FxnT
#define NotifyDriverCirc_enableEvent ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent
#define NotifyDriverCirc_enableEvent_fxnP ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent_fxnP
#define NotifyDriverCirc_enableEvent_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent_FxnT
#define NotifyDriverCirc_setNotifyHandle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle
#define NotifyDriverCirc_setNotifyHandle_fxnP ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle_fxnP
#define NotifyDriverCirc_setNotifyHandle_FxnT ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle_FxnT
#define NotifyDriverCirc_sharedMemReq ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq
#define NotifyDriverCirc_Module_name ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_name
#define NotifyDriverCirc_Module_id ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_id
#define NotifyDriverCirc_Module_startup ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_startup
#define NotifyDriverCirc_Module_startupDone ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_startupDone
#define NotifyDriverCirc_Module_hasMask ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_hasMask
#define NotifyDriverCirc_Module_getMask ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_getMask
#define NotifyDriverCirc_Module_setMask ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_setMask
#define NotifyDriverCirc_Object_heap ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_heap
#define NotifyDriverCirc_Module_heap ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_heap
#define NotifyDriverCirc_construct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_construct
#define NotifyDriverCirc_create ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_create
#define NotifyDriverCirc_handle ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_handle
#define NotifyDriverCirc_struct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_struct
#define NotifyDriverCirc_Handle_label ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_label
#define NotifyDriverCirc_Handle_name ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_name
#define NotifyDriverCirc_Instance_init ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_init
#define NotifyDriverCirc_Object_count ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_count
#define NotifyDriverCirc_Object_get ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_get
#define NotifyDriverCirc_Object_first ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_first
#define NotifyDriverCirc_Object_next ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_next
#define NotifyDriverCirc_Object_sizeof ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object_sizeof
#define NotifyDriverCirc_Params_copy ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params_copy
#define NotifyDriverCirc_Params_init ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params_init
#define NotifyDriverCirc_Instance_finalize ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Instance_finalize
#define NotifyDriverCirc_delete ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_delete
#define NotifyDriverCirc_destruct ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_destruct
#define NotifyDriverCirc_Module_upCast ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_upCast
#define NotifyDriverCirc_Module_to_ti_sdo_ipc_interfaces_INotifyDriver ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module_to_ti_sdo_ipc_interfaces_INotifyDriver
#define NotifyDriverCirc_Handle_upCast ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_upCast
#define NotifyDriverCirc_Handle_to_ti_sdo_ipc_interfaces_INotifyDriver ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_to_ti_sdo_ipc_interfaces_INotifyDriver
#define NotifyDriverCirc_Handle_downCast ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_downCast
#define NotifyDriverCirc_Handle_from_ti_sdo_ipc_interfaces_INotifyDriver ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle_from_ti_sdo_ipc_interfaces_INotifyDriver

#endif /* ti_sdo_ipc_family_f28m35x_NotifyDriverCirc__localnames__done */
#endif
/*
 *  @(#) ti.sdo.ipc.family.f28m35x; 1, 0, 0, 0,; 11-7-2012 13:09:36; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

