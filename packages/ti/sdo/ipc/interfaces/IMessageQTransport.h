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
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION STUBS
 *     FUNCTION SELECTORS
 *     
 *     EPILOGUE
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_ipc_interfaces_IMessageQTransport__include
#define ti_sdo_ipc_interfaces_IMessageQTransport__include

#ifndef __nested__
#define __nested__
#define ti_sdo_ipc_interfaces_IMessageQTransport__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_ipc_interfaces_IMessageQTransport___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/ipc/interfaces/package/package.defs.h>

#include <xdc/runtime/IModule.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Status */
enum ti_sdo_ipc_interfaces_IMessageQTransport_Status {
    ti_sdo_ipc_interfaces_IMessageQTransport_S_SUCCESS = 0,
    ti_sdo_ipc_interfaces_IMessageQTransport_E_FAIL = -1,
    ti_sdo_ipc_interfaces_IMessageQTransport_E_ERROR = -2
};
typedef enum ti_sdo_ipc_interfaces_IMessageQTransport_Status ti_sdo_ipc_interfaces_IMessageQTransport_Status;

/* Reason */
enum ti_sdo_ipc_interfaces_IMessageQTransport_Reason {
    ti_sdo_ipc_interfaces_IMessageQTransport_Reason_FAILEDPUT,
    ti_sdo_ipc_interfaces_IMessageQTransport_Reason_INTERNALERR,
    ti_sdo_ipc_interfaces_IMessageQTransport_Reason_PHYSICALERR,
    ti_sdo_ipc_interfaces_IMessageQTransport_Reason_FAILEDALLOC
};
typedef enum ti_sdo_ipc_interfaces_IMessageQTransport_Reason ti_sdo_ipc_interfaces_IMessageQTransport_Reason;

/* ErrFxn */
typedef xdc_Void (*ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn)(ti_sdo_ipc_interfaces_IMessageQTransport_Reason, ti_sdo_ipc_interfaces_IMessageQTransport_Handle, xdc_Ptr, xdc_UArg);


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sdo_ipc_interfaces_IMessageQTransport_Args__create {
    xdc_UInt16 procId;
} ti_sdo_ipc_interfaces_IMessageQTransport_Args__create;


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_ipc_interfaces_IMessageQTransport_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_UInt priority;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_ipc_interfaces_IMessageQTransport_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*setErrFxn)(ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn);
    xdc_Int (*getStatus)(void*);
    xdc_Bool (*put)(void*, xdc_Ptr);
    xdc_Bool (*control)(void*, xdc_UInt, xdc_UArg);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Interface__BASE__C */
__extern const xdc_runtime_Types_Base ti_sdo_ipc_interfaces_IMessageQTransport_Interface__BASE__C;


/*
 * ======== FUNCTION STUBS ========
 */

/* create */
static inline ti_sdo_ipc_interfaces_IMessageQTransport_Handle ti_sdo_ipc_interfaces_IMessageQTransport_create( ti_sdo_ipc_interfaces_IMessageQTransport_Module __mod, xdc_UInt16 procId, const ti_sdo_ipc_interfaces_IMessageQTransport_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_ipc_interfaces_IMessageQTransport_Args__create __args;
    __args.procId = procId;
    return (ti_sdo_ipc_interfaces_IMessageQTransport_Handle) __mod->__sysp->__create(0, 0, &__args, (const xdc_UChar*)__prms, sizeof (ti_sdo_ipc_interfaces_IMessageQTransport_Params), __eb);
}

/* delete */
static inline void ti_sdo_ipc_interfaces_IMessageQTransport_delete( ti_sdo_ipc_interfaces_IMessageQTransport_Handle* instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}

/* Handle_to_Module */
static inline ti_sdo_ipc_interfaces_IMessageQTransport_Module ti_sdo_ipc_interfaces_IMessageQTransport_Handle_to_Module( ti_sdo_ipc_interfaces_IMessageQTransport_Handle inst )
{
    return inst->__fxns;
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_ipc_interfaces_IMessageQTransport_Handle_label( ti_sdo_ipc_interfaces_IMessageQTransport_Handle inst, xdc_runtime_Types_Label* lab )
{
    return inst->__fxns->__sysp->__label(inst, lab);
}

/* Module_id */
static inline xdc_runtime_Types_ModuleId ti_sdo_ipc_interfaces_IMessageQTransport_Module_id( ti_sdo_ipc_interfaces_IMessageQTransport_Module mod )
{
    return mod->__sysp->__mid;
}

/* setErrFxn */
static inline xdc_Void ti_sdo_ipc_interfaces_IMessageQTransport_setErrFxn( ti_sdo_ipc_interfaces_IMessageQTransport_Module __inst, ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn errFxn )
{
    __inst->setErrFxn(errFxn);
}

/* getStatus */
static inline xdc_Int ti_sdo_ipc_interfaces_IMessageQTransport_getStatus( ti_sdo_ipc_interfaces_IMessageQTransport_Handle __inst )
{
    return __inst->__fxns->getStatus((void*)__inst);
}

/* put */
static inline xdc_Bool ti_sdo_ipc_interfaces_IMessageQTransport_put( ti_sdo_ipc_interfaces_IMessageQTransport_Handle __inst, xdc_Ptr msg )
{
    return __inst->__fxns->put((void*)__inst, msg);
}

/* control */
static inline xdc_Bool ti_sdo_ipc_interfaces_IMessageQTransport_control( ti_sdo_ipc_interfaces_IMessageQTransport_Handle __inst, xdc_UInt cmd, xdc_UArg cmdArg )
{
    return __inst->__fxns->control((void*)__inst, cmd, cmdArg);
}


/*
 * ======== FUNCTION SELECTORS ========
 */

/* setErrFxn_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_ipc_interfaces_IMessageQTransport_setErrFxn_FxnT)(ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn);
static inline ti_sdo_ipc_interfaces_IMessageQTransport_setErrFxn_FxnT ti_sdo_ipc_interfaces_IMessageQTransport_setErrFxn_fxnP( ti_sdo_ipc_interfaces_IMessageQTransport_Module __inst )
{
    return (ti_sdo_ipc_interfaces_IMessageQTransport_setErrFxn_FxnT)__inst->setErrFxn;
}

/* getStatus_{FxnT,fxnP} */
typedef xdc_Int (*ti_sdo_ipc_interfaces_IMessageQTransport_getStatus_FxnT)(void*);
static inline ti_sdo_ipc_interfaces_IMessageQTransport_getStatus_FxnT ti_sdo_ipc_interfaces_IMessageQTransport_getStatus_fxnP( ti_sdo_ipc_interfaces_IMessageQTransport_Handle __inst )
{
    return (ti_sdo_ipc_interfaces_IMessageQTransport_getStatus_FxnT)__inst->__fxns->getStatus;
}

/* put_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_ipc_interfaces_IMessageQTransport_put_FxnT)(void*, xdc_Ptr);
static inline ti_sdo_ipc_interfaces_IMessageQTransport_put_FxnT ti_sdo_ipc_interfaces_IMessageQTransport_put_fxnP( ti_sdo_ipc_interfaces_IMessageQTransport_Handle __inst )
{
    return (ti_sdo_ipc_interfaces_IMessageQTransport_put_FxnT)__inst->__fxns->put;
}

/* control_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_ipc_interfaces_IMessageQTransport_control_FxnT)(void*, xdc_UInt, xdc_UArg);
static inline ti_sdo_ipc_interfaces_IMessageQTransport_control_FxnT ti_sdo_ipc_interfaces_IMessageQTransport_control_fxnP( ti_sdo_ipc_interfaces_IMessageQTransport_Handle __inst )
{
    return (ti_sdo_ipc_interfaces_IMessageQTransport_control_FxnT)__inst->__fxns->control;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_ipc_interfaces_IMessageQTransport__top__
#undef __nested__
#endif

#endif /* ti_sdo_ipc_interfaces_IMessageQTransport__include */


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_ipc_interfaces_IMessageQTransport__nolocalnames)

#ifndef ti_sdo_ipc_interfaces_IMessageQTransport__localnames__done
#define ti_sdo_ipc_interfaces_IMessageQTransport__localnames__done

/* module prefix */
#define IMessageQTransport_Instance ti_sdo_ipc_interfaces_IMessageQTransport_Instance
#define IMessageQTransport_Handle ti_sdo_ipc_interfaces_IMessageQTransport_Handle
#define IMessageQTransport_Module ti_sdo_ipc_interfaces_IMessageQTransport_Module
#define IMessageQTransport_Status ti_sdo_ipc_interfaces_IMessageQTransport_Status
#define IMessageQTransport_Reason ti_sdo_ipc_interfaces_IMessageQTransport_Reason
#define IMessageQTransport_ErrFxn ti_sdo_ipc_interfaces_IMessageQTransport_ErrFxn
#define IMessageQTransport_S_SUCCESS ti_sdo_ipc_interfaces_IMessageQTransport_S_SUCCESS
#define IMessageQTransport_E_FAIL ti_sdo_ipc_interfaces_IMessageQTransport_E_FAIL
#define IMessageQTransport_E_ERROR ti_sdo_ipc_interfaces_IMessageQTransport_E_ERROR
#define IMessageQTransport_Reason_FAILEDPUT ti_sdo_ipc_interfaces_IMessageQTransport_Reason_FAILEDPUT
#define IMessageQTransport_Reason_INTERNALERR ti_sdo_ipc_interfaces_IMessageQTransport_Reason_INTERNALERR
#define IMessageQTransport_Reason_PHYSICALERR ti_sdo_ipc_interfaces_IMessageQTransport_Reason_PHYSICALERR
#define IMessageQTransport_Reason_FAILEDALLOC ti_sdo_ipc_interfaces_IMessageQTransport_Reason_FAILEDALLOC
#define IMessageQTransport_Params ti_sdo_ipc_interfaces_IMessageQTransport_Params
#define IMessageQTransport_setErrFxn ti_sdo_ipc_interfaces_IMessageQTransport_setErrFxn
#define IMessageQTransport_setErrFxn_fxnP ti_sdo_ipc_interfaces_IMessageQTransport_setErrFxn_fxnP
#define IMessageQTransport_setErrFxn_FxnT ti_sdo_ipc_interfaces_IMessageQTransport_setErrFxn_FxnT
#define IMessageQTransport_getStatus ti_sdo_ipc_interfaces_IMessageQTransport_getStatus
#define IMessageQTransport_getStatus_fxnP ti_sdo_ipc_interfaces_IMessageQTransport_getStatus_fxnP
#define IMessageQTransport_getStatus_FxnT ti_sdo_ipc_interfaces_IMessageQTransport_getStatus_FxnT
#define IMessageQTransport_put ti_sdo_ipc_interfaces_IMessageQTransport_put
#define IMessageQTransport_put_fxnP ti_sdo_ipc_interfaces_IMessageQTransport_put_fxnP
#define IMessageQTransport_put_FxnT ti_sdo_ipc_interfaces_IMessageQTransport_put_FxnT
#define IMessageQTransport_control ti_sdo_ipc_interfaces_IMessageQTransport_control
#define IMessageQTransport_control_fxnP ti_sdo_ipc_interfaces_IMessageQTransport_control_fxnP
#define IMessageQTransport_control_FxnT ti_sdo_ipc_interfaces_IMessageQTransport_control_FxnT
#define IMessageQTransport_Module_name ti_sdo_ipc_interfaces_IMessageQTransport_Module_name
#define IMessageQTransport_create ti_sdo_ipc_interfaces_IMessageQTransport_create
#define IMessageQTransport_delete ti_sdo_ipc_interfaces_IMessageQTransport_delete
#define IMessageQTransport_Handle_label ti_sdo_ipc_interfaces_IMessageQTransport_Handle_label
#define IMessageQTransport_Handle_to_Module ti_sdo_ipc_interfaces_IMessageQTransport_Handle_to_Module

#endif /* ti_sdo_ipc_interfaces_IMessageQTransport__localnames__done */
#endif
/*
 *  @(#) ti.sdo.ipc.interfaces; 1, 0, 0, 0,; 11-7-2012 13:10:19; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

