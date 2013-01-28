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

#ifndef ti_sdo_io_IConverter__include
#define ti_sdo_io_IConverter__include

#ifndef __nested__
#define __nested__
#define ti_sdo_io_IConverter__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_io_IConverter___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/io/package/package.defs.h>

#include <xdc/runtime/Error.h>
#include <ti/sdo/io/DriverTypes.h>
#include <xdc/runtime/IModule.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Q_TERMINATING */
#define ti_sdo_io_IConverter_Q_TERMINATING (1)

/* DoneFxn */
typedef xdc_Void (*ti_sdo_io_IConverter_DoneFxn)(xdc_UArg);


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_io_IConverter_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_io_IConverter_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*open)(void*, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_IConverter_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_Void (*close)(void*, xdc_runtime_Error_Block*);
    xdc_Void (*issue)(void*, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
    xdc_Void (*reclaim)(void*, ti_sdo_io_DriverTypes_Packet**, xdc_runtime_Error_Block*);
    xdc_Void (*control)(void*, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_Bool (*query)(void*, xdc_Int);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Interface__BASE__C */
__extern const xdc_runtime_Types_Base ti_sdo_io_IConverter_Interface__BASE__C;


/*
 * ======== FUNCTION STUBS ========
 */

/* delete */
static inline void ti_sdo_io_IConverter_delete( ti_sdo_io_IConverter_Handle* instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}

/* Handle_to_Module */
static inline ti_sdo_io_IConverter_Module ti_sdo_io_IConverter_Handle_to_Module( ti_sdo_io_IConverter_Handle inst )
{
    return inst->__fxns;
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_io_IConverter_Handle_label( ti_sdo_io_IConverter_Handle inst, xdc_runtime_Types_Label* lab )
{
    return inst->__fxns->__sysp->__label(inst, lab);
}

/* Module_id */
static inline xdc_runtime_Types_ModuleId ti_sdo_io_IConverter_Module_id( ti_sdo_io_IConverter_Module mod )
{
    return mod->__sysp->__mid;
}

/* open */
static inline xdc_Void ti_sdo_io_IConverter_open( ti_sdo_io_IConverter_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_IConverter_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb )
{
    __inst->__fxns->open((void*)__inst, name, mode, chanParams, cbFxn, cbArg, eb);
}

/* close */
static inline xdc_Void ti_sdo_io_IConverter_close( ti_sdo_io_IConverter_Handle __inst, xdc_runtime_Error_Block* eb )
{
    __inst->__fxns->close((void*)__inst, eb);
}

/* issue */
static inline xdc_Void ti_sdo_io_IConverter_issue( ti_sdo_io_IConverter_Handle __inst, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb )
{
    __inst->__fxns->issue((void*)__inst, packet, eb);
}

/* reclaim */
static inline xdc_Void ti_sdo_io_IConverter_reclaim( ti_sdo_io_IConverter_Handle __inst, ti_sdo_io_DriverTypes_Packet** packetp, xdc_runtime_Error_Block* eb )
{
    __inst->__fxns->reclaim((void*)__inst, packetp, eb);
}

/* control */
static inline xdc_Void ti_sdo_io_IConverter_control( ti_sdo_io_IConverter_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb )
{
    __inst->__fxns->control((void*)__inst, cmd, cmdArg, eb);
}

/* query */
static inline xdc_Bool ti_sdo_io_IConverter_query( ti_sdo_io_IConverter_Handle __inst, xdc_Int qual )
{
    return __inst->__fxns->query((void*)__inst, qual);
}


/*
 * ======== FUNCTION SELECTORS ========
 */

/* open_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_IConverter_open_FxnT)(void*, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_IConverter_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IConverter_open_FxnT ti_sdo_io_IConverter_open_fxnP( ti_sdo_io_IConverter_Handle __inst )
{
    return (ti_sdo_io_IConverter_open_FxnT)__inst->__fxns->open;
}

/* close_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_IConverter_close_FxnT)(void*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IConverter_close_FxnT ti_sdo_io_IConverter_close_fxnP( ti_sdo_io_IConverter_Handle __inst )
{
    return (ti_sdo_io_IConverter_close_FxnT)__inst->__fxns->close;
}

/* issue_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_IConverter_issue_FxnT)(void*, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IConverter_issue_FxnT ti_sdo_io_IConverter_issue_fxnP( ti_sdo_io_IConverter_Handle __inst )
{
    return (ti_sdo_io_IConverter_issue_FxnT)__inst->__fxns->issue;
}

/* reclaim_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_IConverter_reclaim_FxnT)(void*, ti_sdo_io_DriverTypes_Packet**, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IConverter_reclaim_FxnT ti_sdo_io_IConverter_reclaim_fxnP( ti_sdo_io_IConverter_Handle __inst )
{
    return (ti_sdo_io_IConverter_reclaim_FxnT)__inst->__fxns->reclaim;
}

/* control_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_IConverter_control_FxnT)(void*, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IConverter_control_FxnT ti_sdo_io_IConverter_control_fxnP( ti_sdo_io_IConverter_Handle __inst )
{
    return (ti_sdo_io_IConverter_control_FxnT)__inst->__fxns->control;
}

/* query_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_io_IConverter_query_FxnT)(void*, xdc_Int);
static inline ti_sdo_io_IConverter_query_FxnT ti_sdo_io_IConverter_query_fxnP( ti_sdo_io_IConverter_Handle __inst )
{
    return (ti_sdo_io_IConverter_query_FxnT)__inst->__fxns->query;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_io_IConverter__top__
#undef __nested__
#endif

#endif /* ti_sdo_io_IConverter__include */


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_io_IConverter__nolocalnames)

#ifndef ti_sdo_io_IConverter__localnames__done
#define ti_sdo_io_IConverter__localnames__done

/* module prefix */
#define IConverter_Instance ti_sdo_io_IConverter_Instance
#define IConverter_Handle ti_sdo_io_IConverter_Handle
#define IConverter_Module ti_sdo_io_IConverter_Module
#define IConverter_Q_TERMINATING ti_sdo_io_IConverter_Q_TERMINATING
#define IConverter_DoneFxn ti_sdo_io_IConverter_DoneFxn
#define IConverter_Params ti_sdo_io_IConverter_Params
#define IConverter_open ti_sdo_io_IConverter_open
#define IConverter_open_fxnP ti_sdo_io_IConverter_open_fxnP
#define IConverter_open_FxnT ti_sdo_io_IConverter_open_FxnT
#define IConverter_close ti_sdo_io_IConverter_close
#define IConverter_close_fxnP ti_sdo_io_IConverter_close_fxnP
#define IConverter_close_FxnT ti_sdo_io_IConverter_close_FxnT
#define IConverter_issue ti_sdo_io_IConverter_issue
#define IConverter_issue_fxnP ti_sdo_io_IConverter_issue_fxnP
#define IConverter_issue_FxnT ti_sdo_io_IConverter_issue_FxnT
#define IConverter_reclaim ti_sdo_io_IConverter_reclaim
#define IConverter_reclaim_fxnP ti_sdo_io_IConverter_reclaim_fxnP
#define IConverter_reclaim_FxnT ti_sdo_io_IConverter_reclaim_FxnT
#define IConverter_control ti_sdo_io_IConverter_control
#define IConverter_control_fxnP ti_sdo_io_IConverter_control_fxnP
#define IConverter_control_FxnT ti_sdo_io_IConverter_control_FxnT
#define IConverter_query ti_sdo_io_IConverter_query
#define IConverter_query_fxnP ti_sdo_io_IConverter_query_fxnP
#define IConverter_query_FxnT ti_sdo_io_IConverter_query_FxnT
#define IConverter_Module_name ti_sdo_io_IConverter_Module_name
#define IConverter_delete ti_sdo_io_IConverter_delete
#define IConverter_Handle_label ti_sdo_io_IConverter_Handle_label
#define IConverter_Handle_to_Module ti_sdo_io_IConverter_Handle_to_Module

#endif /* ti_sdo_io_IConverter__localnames__done */
#endif
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

