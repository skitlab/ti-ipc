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
 *     CREATE ARGS
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

#ifndef ti_sdo_ipc_family_f28m35x_TransportCirc__include
#define ti_sdo_ipc_family_f28m35x_TransportCirc__include

#ifndef __nested__
#define __nested__
#define ti_sdo_ipc_family_f28m35x_TransportCirc__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_ipc_family_f28m35x_TransportCirc___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/ipc/family/f28m35x/package/package.defs.h>

#include <ti/sysbios/knl/Swi.h>
#include <ti/sdo/ipc/interfaces/IMessageQTransport.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Status */
typedef ti_sdo_ipc_interfaces_IMessageQTransport_Status ti_sdo_ipc_family_f28m35x_TransportCirc_Status;

/* Reason */
typedef ti_sdo_ipc_interfaces_IMessageQTransport_Reason ti_sdo_ipc_family_f28m35x_TransportCirc_Reason;

/* ErrFxn */
typedef ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn ti_sdo_ipc_family_f28m35x_TransportCirc_ErrFxn;

/* S_SUCCESS */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_S_SUCCESS ti_sdo_ipc_interfaces_IMessageQTransport_S_SUCCESS

/* E_FAIL */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_E_FAIL ti_sdo_ipc_interfaces_IMessageQTransport_E_FAIL

/* E_ERROR */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_E_ERROR ti_sdo_ipc_interfaces_IMessageQTransport_E_ERROR

/* Reason_FAILEDPUT */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Reason_FAILEDPUT ti_sdo_ipc_interfaces_IMessageQTransport_Reason_FAILEDPUT

/* Reason_INTERNALERR */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Reason_INTERNALERR ti_sdo_ipc_interfaces_IMessageQTransport_Reason_INTERNALERR

/* Reason_PHYSICALERR */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Reason_PHYSICALERR ti_sdo_ipc_interfaces_IMessageQTransport_Reason_PHYSICALERR

/* Reason_FAILEDALLOC */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Reason_FAILEDALLOC ti_sdo_ipc_interfaces_IMessageQTransport_Reason_FAILEDALLOC


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sdo_ipc_family_f28m35x_TransportCirc_Args__create {
    xdc_UInt16 procId;
} ti_sdo_ipc_family_f28m35x_TransportCirc_Args__create;


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsEnabled ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsIncluded ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsMask ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__gateObj ti_sdo_ipc_family_f28m35x_TransportCirc_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__gatePrms ti_sdo_ipc_family_f28m35x_TransportCirc_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__id;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__id ti_sdo_ipc_family_f28m35x_TransportCirc_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerDefined ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerObj ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn0 ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn1 ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn2 ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn4 ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn8 ti_sdo_ipc_family_f28m35x_TransportCirc_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__startupDoneFxn ti_sdo_ipc_family_f28m35x_TransportCirc_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Object__count;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Object__count ti_sdo_ipc_family_f28m35x_TransportCirc_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Object__heap;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Object__heap ti_sdo_ipc_family_f28m35x_TransportCirc_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Object__sizeof ti_sdo_ipc_family_f28m35x_TransportCirc_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Object__table;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Object__table ti_sdo_ipc_family_f28m35x_TransportCirc_Object__table__C;

/* errFxn */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_errFxn (ti_sdo_ipc_family_f28m35x_TransportCirc_errFxn__C)
typedef ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn CT__ti_sdo_ipc_family_f28m35x_TransportCirc_errFxn;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_errFxn ti_sdo_ipc_family_f28m35x_TransportCirc_errFxn__C;

/* notifyEventId */
#ifdef ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId__D
#define ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId (ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId__D)
#else
#define ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId (ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId__C)
typedef xdc_UInt16 CT__ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId__C;
#endif

/* numMsgs */
#ifdef ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs__D
#define ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs (ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs__D)
#else
#define ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs (ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs__C;
#endif

/* maxMsgSizeInBytes */
#ifdef ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes__D
#define ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes (ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes__D)
#else
#define ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes (ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes__C;
#endif

/* maxIndex */
#ifdef ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex__D
#define ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex (ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex__D)
#else
#define ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex (ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex__C;
#endif

/* msgSize */
#ifdef ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize__D
#define ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize (ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize__D)
#else
#define ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize (ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize;
__extern __FAR__ const CT__ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize__C;
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_ipc_family_f28m35x_TransportCirc_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_UInt priority;
    xdc_Bool openFlag;
    xdc_Ptr readAddr;
    xdc_Ptr writeAddr;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_ipc_family_f28m35x_TransportCirc_Struct {
    const ti_sdo_ipc_family_f28m35x_TransportCirc_Fxns__* __fxns;
    xdc_Ptr* __f0;
    xdc_Bits32* __f1;
    xdc_Bits32* __f2;
    xdc_Ptr* __f3;
    xdc_Bits32* __f4;
    xdc_Bits32* __f5;
    xdc_SizeT __f6;
    xdc_UInt16 __f7;
    xdc_UInt16 __f8;
    ti_sysbios_knl_Swi_Struct __f9;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_ipc_family_f28m35x_TransportCirc_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*setErrFxn)(ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn);
    xdc_Int (*getStatus)(ti_sdo_ipc_family_f28m35x_TransportCirc_Handle);
    xdc_Bool (*put)(ti_sdo_ipc_family_f28m35x_TransportCirc_Handle, xdc_Ptr);
    xdc_Bool (*control)(ti_sdo_ipc_family_f28m35x_TransportCirc_Handle, xdc_UInt, xdc_UArg);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_ipc_family_f28m35x_TransportCirc_Fxns__ ti_sdo_ipc_family_f28m35x_TransportCirc_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Module_startup( state ) (-1)

/* Instance_init__F */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_init__F, "ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_init")
__extern int ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_init__F( ti_sdo_ipc_family_f28m35x_TransportCirc_Object*, xdc_UInt16 procId, const ti_sdo_ipc_family_f28m35x_TransportCirc_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__F */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_finalize__F, "ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_finalize")
__extern void ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_finalize__F( ti_sdo_ipc_family_f28m35x_TransportCirc_Object* , int );

/* Instance_init__R */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_init__R, "ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_init")
__extern int ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_init__R( ti_sdo_ipc_family_f28m35x_TransportCirc_Object*, xdc_UInt16 procId, const ti_sdo_ipc_family_f28m35x_TransportCirc_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__R */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_finalize__R, "ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_finalize")
__extern void ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_finalize__R( ti_sdo_ipc_family_f28m35x_TransportCirc_Object* , int );

/* Handle__label__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Handle__label__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Handle__label")
__extern xdc_runtime_Types_Label* ti_sdo_ipc_family_f28m35x_TransportCirc_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Module__startupDone__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Module__startupDone")
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_TransportCirc_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Object__create__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__create")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_TransportCirc_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Object__delete__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__delete")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Object__destruct__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__destruct")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Object__get__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__get")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_TransportCirc_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Object__first__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__first")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_TransportCirc_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Object__next__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__next")
__extern xdc_Ptr ti_sdo_ipc_family_f28m35x_TransportCirc_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_Params__init__S, "ti_sdo_ipc_family_f28m35x_TransportCirc_Params__init")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* setErrFxn__E */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn__E, "ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn__E( ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn errFxn );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn__F, "ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn__F( ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn errFxn );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn__R( ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn errFxn );

/* getStatus__E */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus__E, "ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus__E( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle __inst );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus__F, "ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus")
__extern xdc_Int ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus__F( ti_sdo_ipc_family_f28m35x_TransportCirc_Object* __inst );
__extern xdc_Int ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus__R( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle __inst );

/* put__E */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_put ti_sdo_ipc_family_f28m35x_TransportCirc_put__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_put__E, "ti_sdo_ipc_family_f28m35x_TransportCirc_put")
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_TransportCirc_put__E( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle __inst, xdc_Ptr msg );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_put__F, "ti_sdo_ipc_family_f28m35x_TransportCirc_put")
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_TransportCirc_put__F( ti_sdo_ipc_family_f28m35x_TransportCirc_Object* __inst, xdc_Ptr msg );
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_TransportCirc_put__R( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle __inst, xdc_Ptr msg );

/* control__E */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_control ti_sdo_ipc_family_f28m35x_TransportCirc_control__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_control__E, "ti_sdo_ipc_family_f28m35x_TransportCirc_control")
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_TransportCirc_control__E( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle __inst, xdc_UInt cmd, xdc_UArg cmdArg );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_control__F, "ti_sdo_ipc_family_f28m35x_TransportCirc_control")
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_TransportCirc_control__F( ti_sdo_ipc_family_f28m35x_TransportCirc_Object* __inst, xdc_UInt cmd, xdc_UArg cmdArg );
__extern xdc_Bool ti_sdo_ipc_family_f28m35x_TransportCirc_control__R( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle __inst, xdc_UInt cmd, xdc_UArg cmdArg );

/* close__E */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_close ti_sdo_ipc_family_f28m35x_TransportCirc_close__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_close__E, "ti_sdo_ipc_family_f28m35x_TransportCirc_close")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_close__E( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle* handle );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_close__F, "ti_sdo_ipc_family_f28m35x_TransportCirc_close")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_close__F( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle* handle );
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_close__R( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle* handle );

/* sharedMemReq__E */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq__E
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq__E, "ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq")
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq__E( const ti_sdo_ipc_family_f28m35x_TransportCirc_Params* params );
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq__F, "ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq")
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq__F( const ti_sdo_ipc_family_f28m35x_TransportCirc_Params* params );
__extern xdc_SizeT ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq__R( const ti_sdo_ipc_family_f28m35x_TransportCirc_Params* params );

/* swiFxn__I */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_swiFxn ti_sdo_ipc_family_f28m35x_TransportCirc_swiFxn__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_swiFxn__I, "ti_sdo_ipc_family_f28m35x_TransportCirc_swiFxn")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_swiFxn__I( xdc_UArg arg );

/* notifyFxn__I */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_notifyFxn ti_sdo_ipc_family_f28m35x_TransportCirc_notifyFxn__I
xdc__CODESECT(ti_sdo_ipc_family_f28m35x_TransportCirc_notifyFxn__I, "ti_sdo_ipc_family_f28m35x_TransportCirc_notifyFxn")
__extern xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_notifyFxn__I( xdc_UInt16 procId, xdc_UInt16 lineId, xdc_UInt32 eventId, xdc_UArg arg, xdc_UInt32 payload );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* getStatus_{FxnT,fxnP} */
typedef xdc_Int (*ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus_FxnT)(void*);
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus_FxnT ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus_FxnT)ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus; 
}

/* put_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_ipc_family_f28m35x_TransportCirc_put_FxnT)(void*, xdc_Ptr);
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_put_FxnT ti_sdo_ipc_family_f28m35x_TransportCirc_put_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_put_FxnT)ti_sdo_ipc_family_f28m35x_TransportCirc_put; 
}

/* control_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_ipc_family_f28m35x_TransportCirc_control_FxnT)(void*, xdc_UInt, xdc_UArg);
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_control_FxnT ti_sdo_ipc_family_f28m35x_TransportCirc_control_fxnP( void )
{
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_control_FxnT)ti_sdo_ipc_family_f28m35x_TransportCirc_control; 
}


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_ipc_interfaces_IMessageQTransport_Module ti_sdo_ipc_family_f28m35x_TransportCirc_Module_upCast( void )
{
    return (ti_sdo_ipc_interfaces_IMessageQTransport_Module)&ti_sdo_ipc_family_f28m35x_TransportCirc_Module__FXNS__C;
}

/* Module_to_ti_sdo_ipc_interfaces_IMessageQTransport */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Module_to_ti_sdo_ipc_interfaces_IMessageQTransport ti_sdo_ipc_family_f28m35x_TransportCirc_Module_upCast

/* Handle_upCast */
static inline ti_sdo_ipc_interfaces_IMessageQTransport_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_upCast( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle i )
{
    return (ti_sdo_ipc_interfaces_IMessageQTransport_Handle)i;
}

/* Handle_to_ti_sdo_ipc_interfaces_IMessageQTransport */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_to_ti_sdo_ipc_interfaces_IMessageQTransport ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_upCast

/* Handle_downCast */
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_downCast( ti_sdo_ipc_interfaces_IMessageQTransport_Handle i )
{
    ti_sdo_ipc_interfaces_IMessageQTransport_Handle i2 = (ti_sdo_ipc_interfaces_IMessageQTransport_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_ipc_family_f28m35x_TransportCirc_Module__FXNS__C ? (ti_sdo_ipc_family_f28m35x_TransportCirc_Handle)i : 0;
}

/* Handle_from_ti_sdo_ipc_interfaces_IMessageQTransport */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_from_ti_sdo_ipc_interfaces_IMessageQTransport ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Module_startupDone() ti_sdo_ipc_family_f28m35x_TransportCirc_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Object_heap() ti_sdo_ipc_family_f28m35x_TransportCirc_Object__heap__C

/* Module_heap */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Module_heap() ti_sdo_ipc_family_f28m35x_TransportCirc_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_ipc_family_f28m35x_TransportCirc_Module__id ti_sdo_ipc_family_f28m35x_TransportCirc_Module_id( void ) 
{
    return ti_sdo_ipc_family_f28m35x_TransportCirc_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_ipc_family_f28m35x_TransportCirc_Module_hasMask( void ) 
{
    return ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_ipc_family_f28m35x_TransportCirc_Module_getMask( void ) 
{
    return ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsMask__C != NULL ? *ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_ipc_family_f28m35x_TransportCirc_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsMask__C != NULL) *ti_sdo_ipc_family_f28m35x_TransportCirc_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_ipc_family_f28m35x_TransportCirc_Params_init( ti_sdo_ipc_family_f28m35x_TransportCirc_Params* prms ) 
{
    if (prms) {
        ti_sdo_ipc_family_f28m35x_TransportCirc_Params__init__S(prms, 0, sizeof(ti_sdo_ipc_family_f28m35x_TransportCirc_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_ipc_family_f28m35x_TransportCirc_Params_copy( ti_sdo_ipc_family_f28m35x_TransportCirc_Params* dst, const ti_sdo_ipc_family_f28m35x_TransportCirc_Params* src ) 
{
    if (dst) {
        ti_sdo_ipc_family_f28m35x_TransportCirc_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sdo_ipc_family_f28m35x_TransportCirc_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Object_count() ti_sdo_ipc_family_f28m35x_TransportCirc_Object__count__C

/* Object_sizeof */
#define ti_sdo_ipc_family_f28m35x_TransportCirc_Object_sizeof() ti_sdo_ipc_family_f28m35x_TransportCirc_Object__sizeof__C

/* Object_get */
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_Object_get( ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_State* oarr, int i ) 
{
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_Handle)ti_sdo_ipc_family_f28m35x_TransportCirc_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_Object_first( void )
{
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_Handle)ti_sdo_ipc_family_f28m35x_TransportCirc_Object__first__S();
}

/* Object_next */
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_Object_next( ti_sdo_ipc_family_f28m35x_TransportCirc_Object* obj )
{
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_Handle)ti_sdo_ipc_family_f28m35x_TransportCirc_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_label( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_ipc_family_f28m35x_TransportCirc_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_name( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_ipc_family_f28m35x_TransportCirc_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_create( xdc_UInt16 procId, const ti_sdo_ipc_family_f28m35x_TransportCirc_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_ipc_family_f28m35x_TransportCirc_Args__create __args;
    __args.procId = procId;
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_Handle)ti_sdo_ipc_family_f28m35x_TransportCirc_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sdo_ipc_family_f28m35x_TransportCirc_Params), __eb);
}

/* construct */
static inline void ti_sdo_ipc_family_f28m35x_TransportCirc_construct( ti_sdo_ipc_family_f28m35x_TransportCirc_Struct* __obj, xdc_UInt16 procId, const ti_sdo_ipc_family_f28m35x_TransportCirc_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_ipc_family_f28m35x_TransportCirc_Args__create __args;
    __args.procId = procId;
    ti_sdo_ipc_family_f28m35x_TransportCirc_Object__create__S(__obj, sizeof (ti_sdo_ipc_family_f28m35x_TransportCirc_Struct), &__args, (const xdc_UChar*)__prms, sizeof(ti_sdo_ipc_family_f28m35x_TransportCirc_Params), __eb);
}

/* delete */
static inline void ti_sdo_ipc_family_f28m35x_TransportCirc_delete( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle* instp )
{
    ti_sdo_ipc_family_f28m35x_TransportCirc_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sdo_ipc_family_f28m35x_TransportCirc_destruct( ti_sdo_ipc_family_f28m35x_TransportCirc_Struct* obj )
{
    ti_sdo_ipc_family_f28m35x_TransportCirc_Object__destruct__S(obj);
}

/* handle */
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_handle( ti_sdo_ipc_family_f28m35x_TransportCirc_Struct* str )
{
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_Handle)str;
}

/* struct */
static inline ti_sdo_ipc_family_f28m35x_TransportCirc_Struct* ti_sdo_ipc_family_f28m35x_TransportCirc_struct( ti_sdo_ipc_family_f28m35x_TransportCirc_Handle inst )
{
    return (ti_sdo_ipc_family_f28m35x_TransportCirc_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_ipc_family_f28m35x_TransportCirc__top__
#undef __nested__
#endif

#endif /* ti_sdo_ipc_family_f28m35x_TransportCirc__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_ipc_family_f28m35x_TransportCirc__internalaccess))

#ifndef ti_sdo_ipc_family_f28m35x_TransportCirc__include_state
#define ti_sdo_ipc_family_f28m35x_TransportCirc__include_state

/* Object */
struct ti_sdo_ipc_family_f28m35x_TransportCirc_Object {
    const ti_sdo_ipc_family_f28m35x_TransportCirc_Fxns__* __fxns;
    xdc_Ptr* putBuffer;
    xdc_Bits32* putReadIndex;
    xdc_Bits32* putWriteIndex;
    xdc_Ptr* getBuffer;
    xdc_Bits32* getReadIndex;
    xdc_Bits32* getWriteIndex;
    xdc_SizeT allocSize;
    xdc_UInt16 remoteProcId;
    xdc_UInt16 priority;
    char __dummy;
};

/* Instance_State_swiObj */
__extern __FAR__ const xdc_SizeT ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_State_swiObj__O;
static inline ti_sysbios_knl_Swi_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_State_swiObj(ti_sdo_ipc_family_f28m35x_TransportCirc_Object* obj)
{
    return (ti_sysbios_knl_Swi_Handle)(((char*)obj) + ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_State_swiObj__O);
}

#endif /* ti_sdo_ipc_family_f28m35x_TransportCirc__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_ipc_family_f28m35x_TransportCirc__nolocalnames)

#ifndef ti_sdo_ipc_family_f28m35x_TransportCirc__localnames__done
#define ti_sdo_ipc_family_f28m35x_TransportCirc__localnames__done

/* module prefix */
#define TransportCirc_Instance ti_sdo_ipc_family_f28m35x_TransportCirc_Instance
#define TransportCirc_Handle ti_sdo_ipc_family_f28m35x_TransportCirc_Handle
#define TransportCirc_Module ti_sdo_ipc_family_f28m35x_TransportCirc_Module
#define TransportCirc_Object ti_sdo_ipc_family_f28m35x_TransportCirc_Object
#define TransportCirc_Struct ti_sdo_ipc_family_f28m35x_TransportCirc_Struct
#define TransportCirc_Status ti_sdo_ipc_family_f28m35x_TransportCirc_Status
#define TransportCirc_Reason ti_sdo_ipc_family_f28m35x_TransportCirc_Reason
#define TransportCirc_ErrFxn ti_sdo_ipc_family_f28m35x_TransportCirc_ErrFxn
#define TransportCirc_Instance_State ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_State
#define TransportCirc_S_SUCCESS ti_sdo_ipc_family_f28m35x_TransportCirc_S_SUCCESS
#define TransportCirc_E_FAIL ti_sdo_ipc_family_f28m35x_TransportCirc_E_FAIL
#define TransportCirc_E_ERROR ti_sdo_ipc_family_f28m35x_TransportCirc_E_ERROR
#define TransportCirc_Reason_FAILEDPUT ti_sdo_ipc_family_f28m35x_TransportCirc_Reason_FAILEDPUT
#define TransportCirc_Reason_INTERNALERR ti_sdo_ipc_family_f28m35x_TransportCirc_Reason_INTERNALERR
#define TransportCirc_Reason_PHYSICALERR ti_sdo_ipc_family_f28m35x_TransportCirc_Reason_PHYSICALERR
#define TransportCirc_Reason_FAILEDALLOC ti_sdo_ipc_family_f28m35x_TransportCirc_Reason_FAILEDALLOC
#define TransportCirc_errFxn ti_sdo_ipc_family_f28m35x_TransportCirc_errFxn
#define TransportCirc_notifyEventId ti_sdo_ipc_family_f28m35x_TransportCirc_notifyEventId
#define TransportCirc_numMsgs ti_sdo_ipc_family_f28m35x_TransportCirc_numMsgs
#define TransportCirc_maxMsgSizeInBytes ti_sdo_ipc_family_f28m35x_TransportCirc_maxMsgSizeInBytes
#define TransportCirc_maxIndex ti_sdo_ipc_family_f28m35x_TransportCirc_maxIndex
#define TransportCirc_msgSize ti_sdo_ipc_family_f28m35x_TransportCirc_msgSize
#define TransportCirc_Instance_State_swiObj ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_State_swiObj
#define TransportCirc_Params ti_sdo_ipc_family_f28m35x_TransportCirc_Params
#define TransportCirc_setErrFxn ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn
#define TransportCirc_getStatus ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus
#define TransportCirc_getStatus_fxnP ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus_fxnP
#define TransportCirc_getStatus_FxnT ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus_FxnT
#define TransportCirc_put ti_sdo_ipc_family_f28m35x_TransportCirc_put
#define TransportCirc_put_fxnP ti_sdo_ipc_family_f28m35x_TransportCirc_put_fxnP
#define TransportCirc_put_FxnT ti_sdo_ipc_family_f28m35x_TransportCirc_put_FxnT
#define TransportCirc_control ti_sdo_ipc_family_f28m35x_TransportCirc_control
#define TransportCirc_control_fxnP ti_sdo_ipc_family_f28m35x_TransportCirc_control_fxnP
#define TransportCirc_control_FxnT ti_sdo_ipc_family_f28m35x_TransportCirc_control_FxnT
#define TransportCirc_close ti_sdo_ipc_family_f28m35x_TransportCirc_close
#define TransportCirc_sharedMemReq ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq
#define TransportCirc_Module_name ti_sdo_ipc_family_f28m35x_TransportCirc_Module_name
#define TransportCirc_Module_id ti_sdo_ipc_family_f28m35x_TransportCirc_Module_id
#define TransportCirc_Module_startup ti_sdo_ipc_family_f28m35x_TransportCirc_Module_startup
#define TransportCirc_Module_startupDone ti_sdo_ipc_family_f28m35x_TransportCirc_Module_startupDone
#define TransportCirc_Module_hasMask ti_sdo_ipc_family_f28m35x_TransportCirc_Module_hasMask
#define TransportCirc_Module_getMask ti_sdo_ipc_family_f28m35x_TransportCirc_Module_getMask
#define TransportCirc_Module_setMask ti_sdo_ipc_family_f28m35x_TransportCirc_Module_setMask
#define TransportCirc_Object_heap ti_sdo_ipc_family_f28m35x_TransportCirc_Object_heap
#define TransportCirc_Module_heap ti_sdo_ipc_family_f28m35x_TransportCirc_Module_heap
#define TransportCirc_construct ti_sdo_ipc_family_f28m35x_TransportCirc_construct
#define TransportCirc_create ti_sdo_ipc_family_f28m35x_TransportCirc_create
#define TransportCirc_handle ti_sdo_ipc_family_f28m35x_TransportCirc_handle
#define TransportCirc_struct ti_sdo_ipc_family_f28m35x_TransportCirc_struct
#define TransportCirc_Handle_label ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_label
#define TransportCirc_Handle_name ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_name
#define TransportCirc_Instance_init ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_init
#define TransportCirc_Object_count ti_sdo_ipc_family_f28m35x_TransportCirc_Object_count
#define TransportCirc_Object_get ti_sdo_ipc_family_f28m35x_TransportCirc_Object_get
#define TransportCirc_Object_first ti_sdo_ipc_family_f28m35x_TransportCirc_Object_first
#define TransportCirc_Object_next ti_sdo_ipc_family_f28m35x_TransportCirc_Object_next
#define TransportCirc_Object_sizeof ti_sdo_ipc_family_f28m35x_TransportCirc_Object_sizeof
#define TransportCirc_Params_copy ti_sdo_ipc_family_f28m35x_TransportCirc_Params_copy
#define TransportCirc_Params_init ti_sdo_ipc_family_f28m35x_TransportCirc_Params_init
#define TransportCirc_Instance_finalize ti_sdo_ipc_family_f28m35x_TransportCirc_Instance_finalize
#define TransportCirc_delete ti_sdo_ipc_family_f28m35x_TransportCirc_delete
#define TransportCirc_destruct ti_sdo_ipc_family_f28m35x_TransportCirc_destruct
#define TransportCirc_Module_upCast ti_sdo_ipc_family_f28m35x_TransportCirc_Module_upCast
#define TransportCirc_Module_to_ti_sdo_ipc_interfaces_IMessageQTransport ti_sdo_ipc_family_f28m35x_TransportCirc_Module_to_ti_sdo_ipc_interfaces_IMessageQTransport
#define TransportCirc_Handle_upCast ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_upCast
#define TransportCirc_Handle_to_ti_sdo_ipc_interfaces_IMessageQTransport ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_to_ti_sdo_ipc_interfaces_IMessageQTransport
#define TransportCirc_Handle_downCast ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_downCast
#define TransportCirc_Handle_from_ti_sdo_ipc_interfaces_IMessageQTransport ti_sdo_ipc_family_f28m35x_TransportCirc_Handle_from_ti_sdo_ipc_interfaces_IMessageQTransport

#endif /* ti_sdo_ipc_family_f28m35x_TransportCirc__localnames__done */
#endif
/*
 *  @(#) ti.sdo.ipc.family.f28m35x; 1, 0, 0, 0,; 11-7-2012 13:09:36; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

