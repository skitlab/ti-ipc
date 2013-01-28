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

#ifndef ti_sdo_io_IDriver__include
#define ti_sdo_io_IDriver__include

#ifndef __nested__
#define __nested__
#define ti_sdo_io_IDriver__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_io_IDriver___VERS 150


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


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_io_IDriver_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_io_IDriver_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Ptr (*open)(void*, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_DriverTypes_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_Void (*close)(void*, xdc_Ptr, xdc_runtime_Error_Block*);
    xdc_UInt (*submit)(void*, xdc_Ptr, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
    xdc_Void (*control)(void*, xdc_Ptr, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Interface__BASE__C */
__extern const xdc_runtime_Types_Base ti_sdo_io_IDriver_Interface__BASE__C;


/*
 * ======== FUNCTION STUBS ========
 */

/* delete */
static inline void ti_sdo_io_IDriver_delete( ti_sdo_io_IDriver_Handle* instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}

/* Handle_to_Module */
static inline ti_sdo_io_IDriver_Module ti_sdo_io_IDriver_Handle_to_Module( ti_sdo_io_IDriver_Handle inst )
{
    return inst->__fxns;
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_io_IDriver_Handle_label( ti_sdo_io_IDriver_Handle inst, xdc_runtime_Types_Label* lab )
{
    return inst->__fxns->__sysp->__label(inst, lab);
}

/* Module_id */
static inline xdc_runtime_Types_ModuleId ti_sdo_io_IDriver_Module_id( ti_sdo_io_IDriver_Module mod )
{
    return mod->__sysp->__mid;
}

/* open */
static inline xdc_Ptr ti_sdo_io_IDriver_open( ti_sdo_io_IDriver_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_DriverTypes_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb )
{
    return __inst->__fxns->open((void*)__inst, name, mode, chanParams, cbFxn, cbArg, eb);
}

/* close */
static inline xdc_Void ti_sdo_io_IDriver_close( ti_sdo_io_IDriver_Handle __inst, xdc_Ptr chanHandle, xdc_runtime_Error_Block* eb )
{
    __inst->__fxns->close((void*)__inst, chanHandle, eb);
}

/* submit */
static inline xdc_UInt ti_sdo_io_IDriver_submit( ti_sdo_io_IDriver_Handle __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb )
{
    return __inst->__fxns->submit((void*)__inst, chanHandle, packet, eb);
}

/* control */
static inline xdc_Void ti_sdo_io_IDriver_control( ti_sdo_io_IDriver_Handle __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArgs, xdc_runtime_Error_Block* eb )
{
    __inst->__fxns->control((void*)__inst, chanHandle, cmd, cmdArgs, eb);
}


/*
 * ======== FUNCTION SELECTORS ========
 */

/* open_{FxnT,fxnP} */
typedef xdc_Ptr (*ti_sdo_io_IDriver_open_FxnT)(void*, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_DriverTypes_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IDriver_open_FxnT ti_sdo_io_IDriver_open_fxnP( ti_sdo_io_IDriver_Handle __inst )
{
    return (ti_sdo_io_IDriver_open_FxnT)__inst->__fxns->open;
}

/* close_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_IDriver_close_FxnT)(void*, xdc_Ptr, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IDriver_close_FxnT ti_sdo_io_IDriver_close_fxnP( ti_sdo_io_IDriver_Handle __inst )
{
    return (ti_sdo_io_IDriver_close_FxnT)__inst->__fxns->close;
}

/* submit_{FxnT,fxnP} */
typedef xdc_UInt (*ti_sdo_io_IDriver_submit_FxnT)(void*, xdc_Ptr, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IDriver_submit_FxnT ti_sdo_io_IDriver_submit_fxnP( ti_sdo_io_IDriver_Handle __inst )
{
    return (ti_sdo_io_IDriver_submit_FxnT)__inst->__fxns->submit;
}

/* control_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_IDriver_control_FxnT)(void*, xdc_Ptr, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_IDriver_control_FxnT ti_sdo_io_IDriver_control_fxnP( ti_sdo_io_IDriver_Handle __inst )
{
    return (ti_sdo_io_IDriver_control_FxnT)__inst->__fxns->control;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_io_IDriver__top__
#undef __nested__
#endif

#endif /* ti_sdo_io_IDriver__include */


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_io_IDriver__nolocalnames)

#ifndef ti_sdo_io_IDriver__localnames__done
#define ti_sdo_io_IDriver__localnames__done

/* module prefix */
#define IDriver_Instance ti_sdo_io_IDriver_Instance
#define IDriver_Handle ti_sdo_io_IDriver_Handle
#define IDriver_Module ti_sdo_io_IDriver_Module
#define IDriver_Params ti_sdo_io_IDriver_Params
#define IDriver_open ti_sdo_io_IDriver_open
#define IDriver_open_fxnP ti_sdo_io_IDriver_open_fxnP
#define IDriver_open_FxnT ti_sdo_io_IDriver_open_FxnT
#define IDriver_close ti_sdo_io_IDriver_close
#define IDriver_close_fxnP ti_sdo_io_IDriver_close_fxnP
#define IDriver_close_FxnT ti_sdo_io_IDriver_close_FxnT
#define IDriver_submit ti_sdo_io_IDriver_submit
#define IDriver_submit_fxnP ti_sdo_io_IDriver_submit_fxnP
#define IDriver_submit_FxnT ti_sdo_io_IDriver_submit_FxnT
#define IDriver_control ti_sdo_io_IDriver_control
#define IDriver_control_fxnP ti_sdo_io_IDriver_control_fxnP
#define IDriver_control_FxnT ti_sdo_io_IDriver_control_FxnT
#define IDriver_Module_name ti_sdo_io_IDriver_Module_name
#define IDriver_delete ti_sdo_io_IDriver_delete
#define IDriver_Handle_label ti_sdo_io_IDriver_Handle_label
#define IDriver_Handle_to_Module ti_sdo_io_IDriver_Handle_to_Module

#endif /* ti_sdo_io_IDriver__localnames__done */
#endif
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

