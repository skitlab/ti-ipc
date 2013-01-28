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

#ifndef ti_sdo_io_drivers_IomAdapter__include
#define ti_sdo_io_drivers_IomAdapter__include

#ifndef __nested__
#define __nested__
#define ti_sdo_io_drivers_IomAdapter__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_io_drivers_IomAdapter___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/io/drivers/package/package.defs.h>

#include <xdc/runtime/Error.h>
#include <ti/sdo/io/IDriver.h>
#include <ti/sdo/io/DriverTypes.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* InitFunc */
typedef xdc_Void (*ti_sdo_io_drivers_IomAdapter_InitFunc)(void);


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* ChanObj */
struct ti_sdo_io_drivers_IomAdapter_ChanObj {
    xdc_Ptr iomChanHdl;
    ti_sdo_io_DriverTypes_DoneFxn cbFxn;
    xdc_UArg cbArg;
    ti_sdo_io_DriverTypes_Packet abortPkt;
};


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_io_drivers_IomAdapter_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__diagsEnabled ti_sdo_io_drivers_IomAdapter_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_io_drivers_IomAdapter_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__diagsIncluded ti_sdo_io_drivers_IomAdapter_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_io_drivers_IomAdapter_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__diagsMask ti_sdo_io_drivers_IomAdapter_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_io_drivers_IomAdapter_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__gateObj ti_sdo_io_drivers_IomAdapter_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_io_drivers_IomAdapter_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__gatePrms ti_sdo_io_drivers_IomAdapter_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_io_drivers_IomAdapter_Module__id;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__id ti_sdo_io_drivers_IomAdapter_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_io_drivers_IomAdapter_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__loggerDefined ti_sdo_io_drivers_IomAdapter_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_io_drivers_IomAdapter_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__loggerObj ti_sdo_io_drivers_IomAdapter_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn0 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn1 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn2 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn4 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__loggerFxn8 ti_sdo_io_drivers_IomAdapter_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_io_drivers_IomAdapter_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Module__startupDoneFxn ti_sdo_io_drivers_IomAdapter_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_io_drivers_IomAdapter_Object__count;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Object__count ti_sdo_io_drivers_IomAdapter_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_io_drivers_IomAdapter_Object__heap;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Object__heap ti_sdo_io_drivers_IomAdapter_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_io_drivers_IomAdapter_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Object__sizeof ti_sdo_io_drivers_IomAdapter_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_io_drivers_IomAdapter_Object__table;
__extern __FAR__ const CT__ti_sdo_io_drivers_IomAdapter_Object__table ti_sdo_io_drivers_IomAdapter_Object__table__C;


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_io_drivers_IomAdapter_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_Ptr iomFxns;
    ti_sdo_io_drivers_IomAdapter_InitFunc initFxn;
    xdc_Ptr deviceParams;
    xdc_UInt deviceId;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_io_drivers_IomAdapter_Struct {
    const ti_sdo_io_drivers_IomAdapter_Fxns__* __fxns;
    xdc_Int __f0;
    xdc_Ptr __f1;
    xdc_Ptr __f2;
    xdc_Ptr __f3;
    ti_sdo_io_drivers_IomAdapter_InitFunc __f4;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_io_drivers_IomAdapter_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Ptr (*open)(ti_sdo_io_drivers_IomAdapter_Handle, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_DriverTypes_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_Void (*close)(ti_sdo_io_drivers_IomAdapter_Handle, xdc_Ptr, xdc_runtime_Error_Block*);
    xdc_UInt (*submit)(ti_sdo_io_drivers_IomAdapter_Handle, xdc_Ptr, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
    xdc_Void (*control)(ti_sdo_io_drivers_IomAdapter_Handle, xdc_Ptr, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_io_drivers_IomAdapter_Fxns__ ti_sdo_io_drivers_IomAdapter_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_io_drivers_IomAdapter_Module_startup ti_sdo_io_drivers_IomAdapter_Module_startup__E
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Module_startup__E, "ti_sdo_io_drivers_IomAdapter_Module_startup")
__extern xdc_Int ti_sdo_io_drivers_IomAdapter_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Module_startup__F, "ti_sdo_io_drivers_IomAdapter_Module_startup")
__extern xdc_Int ti_sdo_io_drivers_IomAdapter_Module_startup__F( xdc_Int state );
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Module_startup__R, "ti_sdo_io_drivers_IomAdapter_Module_startup")
__extern xdc_Int ti_sdo_io_drivers_IomAdapter_Module_startup__R( xdc_Int state );

/* Instance_init__F */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Instance_init__F, "ti_sdo_io_drivers_IomAdapter_Instance_init")
__extern void ti_sdo_io_drivers_IomAdapter_Instance_init__F( ti_sdo_io_drivers_IomAdapter_Object*, const ti_sdo_io_drivers_IomAdapter_Params* );

/* Instance_finalize__F */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Instance_finalize__F, "ti_sdo_io_drivers_IomAdapter_Instance_finalize")
__extern void ti_sdo_io_drivers_IomAdapter_Instance_finalize__F( ti_sdo_io_drivers_IomAdapter_Object* );

/* Instance_init__R */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Instance_init__R, "ti_sdo_io_drivers_IomAdapter_Instance_init")
__extern void ti_sdo_io_drivers_IomAdapter_Instance_init__R( ti_sdo_io_drivers_IomAdapter_Object*, const ti_sdo_io_drivers_IomAdapter_Params* );

/* Instance_finalize__R */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Instance_finalize__R, "ti_sdo_io_drivers_IomAdapter_Instance_finalize")
__extern void ti_sdo_io_drivers_IomAdapter_Instance_finalize__R( ti_sdo_io_drivers_IomAdapter_Object* );

/* Handle__label__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Handle__label__S, "ti_sdo_io_drivers_IomAdapter_Handle__label")
__extern xdc_runtime_Types_Label* ti_sdo_io_drivers_IomAdapter_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Module__startupDone__S, "ti_sdo_io_drivers_IomAdapter_Module__startupDone")
__extern xdc_Bool ti_sdo_io_drivers_IomAdapter_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Object__create__S, "ti_sdo_io_drivers_IomAdapter_Object__create")
__extern xdc_Ptr ti_sdo_io_drivers_IomAdapter_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Object__delete__S, "ti_sdo_io_drivers_IomAdapter_Object__delete")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Object__destruct__S, "ti_sdo_io_drivers_IomAdapter_Object__destruct")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Object__get__S, "ti_sdo_io_drivers_IomAdapter_Object__get")
__extern xdc_Ptr ti_sdo_io_drivers_IomAdapter_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Object__first__S, "ti_sdo_io_drivers_IomAdapter_Object__first")
__extern xdc_Ptr ti_sdo_io_drivers_IomAdapter_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Object__next__S, "ti_sdo_io_drivers_IomAdapter_Object__next")
__extern xdc_Ptr ti_sdo_io_drivers_IomAdapter_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_Params__init__S, "ti_sdo_io_drivers_IomAdapter_Params__init")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* open__E */
#define ti_sdo_io_drivers_IomAdapter_open ti_sdo_io_drivers_IomAdapter_open__E
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_open__E, "ti_sdo_io_drivers_IomAdapter_open")
__extern xdc_Ptr ti_sdo_io_drivers_IomAdapter_open__E( ti_sdo_io_drivers_IomAdapter_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_DriverTypes_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_open__F, "ti_sdo_io_drivers_IomAdapter_open")
__extern xdc_Ptr ti_sdo_io_drivers_IomAdapter_open__F( ti_sdo_io_drivers_IomAdapter_Object* __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_DriverTypes_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );
__extern xdc_Ptr ti_sdo_io_drivers_IomAdapter_open__R( ti_sdo_io_drivers_IomAdapter_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_DriverTypes_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );

/* close__E */
#define ti_sdo_io_drivers_IomAdapter_close ti_sdo_io_drivers_IomAdapter_close__E
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_close__E, "ti_sdo_io_drivers_IomAdapter_close")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_close__E( ti_sdo_io_drivers_IomAdapter_Handle __inst, xdc_Ptr chanHandle, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_close__F, "ti_sdo_io_drivers_IomAdapter_close")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_close__F( ti_sdo_io_drivers_IomAdapter_Object* __inst, xdc_Ptr chanHandle, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_close__R( ti_sdo_io_drivers_IomAdapter_Handle __inst, xdc_Ptr chanHandle, xdc_runtime_Error_Block* eb );

/* submit__E */
#define ti_sdo_io_drivers_IomAdapter_submit ti_sdo_io_drivers_IomAdapter_submit__E
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_submit__E, "ti_sdo_io_drivers_IomAdapter_submit")
__extern xdc_UInt ti_sdo_io_drivers_IomAdapter_submit__E( ti_sdo_io_drivers_IomAdapter_Handle __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_submit__F, "ti_sdo_io_drivers_IomAdapter_submit")
__extern xdc_UInt ti_sdo_io_drivers_IomAdapter_submit__F( ti_sdo_io_drivers_IomAdapter_Object* __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );
__extern xdc_UInt ti_sdo_io_drivers_IomAdapter_submit__R( ti_sdo_io_drivers_IomAdapter_Handle __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );

/* control__E */
#define ti_sdo_io_drivers_IomAdapter_control ti_sdo_io_drivers_IomAdapter_control__E
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_control__E, "ti_sdo_io_drivers_IomAdapter_control")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_control__E( ti_sdo_io_drivers_IomAdapter_Handle __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArgs, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_control__F, "ti_sdo_io_drivers_IomAdapter_control")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_control__F( ti_sdo_io_drivers_IomAdapter_Object* __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArgs, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_control__R( ti_sdo_io_drivers_IomAdapter_Handle __inst, xdc_Ptr chanHandle, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArgs, xdc_runtime_Error_Block* eb );

/* driverCallback__I */
#define ti_sdo_io_drivers_IomAdapter_driverCallback ti_sdo_io_drivers_IomAdapter_driverCallback__I
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_driverCallback__I, "ti_sdo_io_drivers_IomAdapter_driverCallback")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_driverCallback__I( xdc_Ptr cbArg, ti_sdo_io_DriverTypes_Packet* packet );

/* postInit__I */
#define ti_sdo_io_drivers_IomAdapter_postInit ti_sdo_io_drivers_IomAdapter_postInit__I
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_postInit__I, "ti_sdo_io_drivers_IomAdapter_postInit")
__extern xdc_Void ti_sdo_io_drivers_IomAdapter_postInit__I( ti_sdo_io_drivers_IomAdapter_Object* obj );

/* mapStatus__I */
#define ti_sdo_io_drivers_IomAdapter_mapStatus ti_sdo_io_drivers_IomAdapter_mapStatus__I
xdc__CODESECT(ti_sdo_io_drivers_IomAdapter_mapStatus__I, "ti_sdo_io_drivers_IomAdapter_mapStatus")
__extern xdc_runtime_Error_Id ti_sdo_io_drivers_IomAdapter_mapStatus__I( xdc_Int status );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* open_{FxnT,fxnP} */
typedef xdc_Ptr (*ti_sdo_io_drivers_IomAdapter_open_FxnT)(void*, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_DriverTypes_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_drivers_IomAdapter_open_FxnT ti_sdo_io_drivers_IomAdapter_open_fxnP( void )
{
    return (ti_sdo_io_drivers_IomAdapter_open_FxnT)ti_sdo_io_drivers_IomAdapter_open; 
}

/* close_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_drivers_IomAdapter_close_FxnT)(void*, xdc_Ptr, xdc_runtime_Error_Block*);
static inline ti_sdo_io_drivers_IomAdapter_close_FxnT ti_sdo_io_drivers_IomAdapter_close_fxnP( void )
{
    return (ti_sdo_io_drivers_IomAdapter_close_FxnT)ti_sdo_io_drivers_IomAdapter_close; 
}

/* submit_{FxnT,fxnP} */
typedef xdc_UInt (*ti_sdo_io_drivers_IomAdapter_submit_FxnT)(void*, xdc_Ptr, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_drivers_IomAdapter_submit_FxnT ti_sdo_io_drivers_IomAdapter_submit_fxnP( void )
{
    return (ti_sdo_io_drivers_IomAdapter_submit_FxnT)ti_sdo_io_drivers_IomAdapter_submit; 
}

/* control_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_drivers_IomAdapter_control_FxnT)(void*, xdc_Ptr, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_drivers_IomAdapter_control_FxnT ti_sdo_io_drivers_IomAdapter_control_fxnP( void )
{
    return (ti_sdo_io_drivers_IomAdapter_control_FxnT)ti_sdo_io_drivers_IomAdapter_control; 
}


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_io_IDriver_Module ti_sdo_io_drivers_IomAdapter_Module_upCast( void )
{
    return (ti_sdo_io_IDriver_Module)&ti_sdo_io_drivers_IomAdapter_Module__FXNS__C;
}

/* Module_to_ti_sdo_io_IDriver */
#define ti_sdo_io_drivers_IomAdapter_Module_to_ti_sdo_io_IDriver ti_sdo_io_drivers_IomAdapter_Module_upCast

/* Handle_upCast */
static inline ti_sdo_io_IDriver_Handle ti_sdo_io_drivers_IomAdapter_Handle_upCast( ti_sdo_io_drivers_IomAdapter_Handle i )
{
    return (ti_sdo_io_IDriver_Handle)i;
}

/* Handle_to_ti_sdo_io_IDriver */
#define ti_sdo_io_drivers_IomAdapter_Handle_to_ti_sdo_io_IDriver ti_sdo_io_drivers_IomAdapter_Handle_upCast

/* Handle_downCast */
static inline ti_sdo_io_drivers_IomAdapter_Handle ti_sdo_io_drivers_IomAdapter_Handle_downCast( ti_sdo_io_IDriver_Handle i )
{
    ti_sdo_io_IDriver_Handle i2 = (ti_sdo_io_IDriver_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_io_drivers_IomAdapter_Module__FXNS__C ? (ti_sdo_io_drivers_IomAdapter_Handle)i : 0;
}

/* Handle_from_ti_sdo_io_IDriver */
#define ti_sdo_io_drivers_IomAdapter_Handle_from_ti_sdo_io_IDriver ti_sdo_io_drivers_IomAdapter_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_io_drivers_IomAdapter_Module_startupDone() ti_sdo_io_drivers_IomAdapter_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_io_drivers_IomAdapter_Object_heap() ti_sdo_io_drivers_IomAdapter_Object__heap__C

/* Module_heap */
#define ti_sdo_io_drivers_IomAdapter_Module_heap() ti_sdo_io_drivers_IomAdapter_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_io_drivers_IomAdapter_Module__id ti_sdo_io_drivers_IomAdapter_Module_id( void ) 
{
    return ti_sdo_io_drivers_IomAdapter_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_io_drivers_IomAdapter_Module_hasMask( void ) 
{
    return ti_sdo_io_drivers_IomAdapter_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_io_drivers_IomAdapter_Module_getMask( void ) 
{
    return ti_sdo_io_drivers_IomAdapter_Module__diagsMask__C != NULL ? *ti_sdo_io_drivers_IomAdapter_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_io_drivers_IomAdapter_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_io_drivers_IomAdapter_Module__diagsMask__C != NULL) *ti_sdo_io_drivers_IomAdapter_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_io_drivers_IomAdapter_Params_init( ti_sdo_io_drivers_IomAdapter_Params* prms ) 
{
    if (prms) {
        ti_sdo_io_drivers_IomAdapter_Params__init__S(prms, 0, sizeof(ti_sdo_io_drivers_IomAdapter_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_io_drivers_IomAdapter_Params_copy( ti_sdo_io_drivers_IomAdapter_Params* dst, const ti_sdo_io_drivers_IomAdapter_Params* src ) 
{
    if (dst) {
        ti_sdo_io_drivers_IomAdapter_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sdo_io_drivers_IomAdapter_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_io_drivers_IomAdapter_Object_count() ti_sdo_io_drivers_IomAdapter_Object__count__C

/* Object_sizeof */
#define ti_sdo_io_drivers_IomAdapter_Object_sizeof() ti_sdo_io_drivers_IomAdapter_Object__sizeof__C

/* Object_get */
static inline ti_sdo_io_drivers_IomAdapter_Handle ti_sdo_io_drivers_IomAdapter_Object_get( ti_sdo_io_drivers_IomAdapter_Instance_State* oarr, int i ) 
{
    return (ti_sdo_io_drivers_IomAdapter_Handle)ti_sdo_io_drivers_IomAdapter_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_io_drivers_IomAdapter_Handle ti_sdo_io_drivers_IomAdapter_Object_first( void )
{
    return (ti_sdo_io_drivers_IomAdapter_Handle)ti_sdo_io_drivers_IomAdapter_Object__first__S();
}

/* Object_next */
static inline ti_sdo_io_drivers_IomAdapter_Handle ti_sdo_io_drivers_IomAdapter_Object_next( ti_sdo_io_drivers_IomAdapter_Object* obj )
{
    return (ti_sdo_io_drivers_IomAdapter_Handle)ti_sdo_io_drivers_IomAdapter_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_io_drivers_IomAdapter_Handle_label( ti_sdo_io_drivers_IomAdapter_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_io_drivers_IomAdapter_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sdo_io_drivers_IomAdapter_Handle_name( ti_sdo_io_drivers_IomAdapter_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_io_drivers_IomAdapter_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sdo_io_drivers_IomAdapter_Handle ti_sdo_io_drivers_IomAdapter_create( const ti_sdo_io_drivers_IomAdapter_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    return (ti_sdo_io_drivers_IomAdapter_Handle)ti_sdo_io_drivers_IomAdapter_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sdo_io_drivers_IomAdapter_Params), __eb);
}

/* construct */
static inline void ti_sdo_io_drivers_IomAdapter_construct( ti_sdo_io_drivers_IomAdapter_Struct* __obj, const ti_sdo_io_drivers_IomAdapter_Params* __prms )
{
    ti_sdo_io_drivers_IomAdapter_Object__create__S(__obj, sizeof (ti_sdo_io_drivers_IomAdapter_Struct), 0, (const xdc_UChar*)__prms, sizeof(ti_sdo_io_drivers_IomAdapter_Params), NULL);
}

/* delete */
static inline void ti_sdo_io_drivers_IomAdapter_delete( ti_sdo_io_drivers_IomAdapter_Handle* instp )
{
    ti_sdo_io_drivers_IomAdapter_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sdo_io_drivers_IomAdapter_destruct( ti_sdo_io_drivers_IomAdapter_Struct* obj )
{
    ti_sdo_io_drivers_IomAdapter_Object__destruct__S(obj);
}

/* handle */
static inline ti_sdo_io_drivers_IomAdapter_Handle ti_sdo_io_drivers_IomAdapter_handle( ti_sdo_io_drivers_IomAdapter_Struct* str )
{
    return (ti_sdo_io_drivers_IomAdapter_Handle)str;
}

/* struct */
static inline ti_sdo_io_drivers_IomAdapter_Struct* ti_sdo_io_drivers_IomAdapter_struct( ti_sdo_io_drivers_IomAdapter_Handle inst )
{
    return (ti_sdo_io_drivers_IomAdapter_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_io_drivers_IomAdapter__top__
#undef __nested__
#endif

#endif /* ti_sdo_io_drivers_IomAdapter__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_io_drivers_IomAdapter__internalaccess))

#ifndef ti_sdo_io_drivers_IomAdapter__include_state
#define ti_sdo_io_drivers_IomAdapter__include_state

/* Object */
struct ti_sdo_io_drivers_IomAdapter_Object {
    const ti_sdo_io_drivers_IomAdapter_Fxns__* __fxns;
    xdc_Int deviceId;
    xdc_Ptr deviceParams;
    xdc_Ptr deviceHandle;
    xdc_Ptr iomFxns;
    ti_sdo_io_drivers_IomAdapter_InitFunc initFxn;
};

#endif /* ti_sdo_io_drivers_IomAdapter__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_io_drivers_IomAdapter__nolocalnames)

#ifndef ti_sdo_io_drivers_IomAdapter__localnames__done
#define ti_sdo_io_drivers_IomAdapter__localnames__done

/* module prefix */
#define IomAdapter_Instance ti_sdo_io_drivers_IomAdapter_Instance
#define IomAdapter_Handle ti_sdo_io_drivers_IomAdapter_Handle
#define IomAdapter_Module ti_sdo_io_drivers_IomAdapter_Module
#define IomAdapter_Object ti_sdo_io_drivers_IomAdapter_Object
#define IomAdapter_Struct ti_sdo_io_drivers_IomAdapter_Struct
#define IomAdapter_InitFunc ti_sdo_io_drivers_IomAdapter_InitFunc
#define IomAdapter_ChanObj ti_sdo_io_drivers_IomAdapter_ChanObj
#define IomAdapter_Instance_State ti_sdo_io_drivers_IomAdapter_Instance_State
#define IomAdapter_Params ti_sdo_io_drivers_IomAdapter_Params
#define IomAdapter_open ti_sdo_io_drivers_IomAdapter_open
#define IomAdapter_open_fxnP ti_sdo_io_drivers_IomAdapter_open_fxnP
#define IomAdapter_open_FxnT ti_sdo_io_drivers_IomAdapter_open_FxnT
#define IomAdapter_close ti_sdo_io_drivers_IomAdapter_close
#define IomAdapter_close_fxnP ti_sdo_io_drivers_IomAdapter_close_fxnP
#define IomAdapter_close_FxnT ti_sdo_io_drivers_IomAdapter_close_FxnT
#define IomAdapter_submit ti_sdo_io_drivers_IomAdapter_submit
#define IomAdapter_submit_fxnP ti_sdo_io_drivers_IomAdapter_submit_fxnP
#define IomAdapter_submit_FxnT ti_sdo_io_drivers_IomAdapter_submit_FxnT
#define IomAdapter_control ti_sdo_io_drivers_IomAdapter_control
#define IomAdapter_control_fxnP ti_sdo_io_drivers_IomAdapter_control_fxnP
#define IomAdapter_control_FxnT ti_sdo_io_drivers_IomAdapter_control_FxnT
#define IomAdapter_Module_name ti_sdo_io_drivers_IomAdapter_Module_name
#define IomAdapter_Module_id ti_sdo_io_drivers_IomAdapter_Module_id
#define IomAdapter_Module_startup ti_sdo_io_drivers_IomAdapter_Module_startup
#define IomAdapter_Module_startupDone ti_sdo_io_drivers_IomAdapter_Module_startupDone
#define IomAdapter_Module_hasMask ti_sdo_io_drivers_IomAdapter_Module_hasMask
#define IomAdapter_Module_getMask ti_sdo_io_drivers_IomAdapter_Module_getMask
#define IomAdapter_Module_setMask ti_sdo_io_drivers_IomAdapter_Module_setMask
#define IomAdapter_Object_heap ti_sdo_io_drivers_IomAdapter_Object_heap
#define IomAdapter_Module_heap ti_sdo_io_drivers_IomAdapter_Module_heap
#define IomAdapter_construct ti_sdo_io_drivers_IomAdapter_construct
#define IomAdapter_create ti_sdo_io_drivers_IomAdapter_create
#define IomAdapter_handle ti_sdo_io_drivers_IomAdapter_handle
#define IomAdapter_struct ti_sdo_io_drivers_IomAdapter_struct
#define IomAdapter_Handle_label ti_sdo_io_drivers_IomAdapter_Handle_label
#define IomAdapter_Handle_name ti_sdo_io_drivers_IomAdapter_Handle_name
#define IomAdapter_Instance_init ti_sdo_io_drivers_IomAdapter_Instance_init
#define IomAdapter_Object_count ti_sdo_io_drivers_IomAdapter_Object_count
#define IomAdapter_Object_get ti_sdo_io_drivers_IomAdapter_Object_get
#define IomAdapter_Object_first ti_sdo_io_drivers_IomAdapter_Object_first
#define IomAdapter_Object_next ti_sdo_io_drivers_IomAdapter_Object_next
#define IomAdapter_Object_sizeof ti_sdo_io_drivers_IomAdapter_Object_sizeof
#define IomAdapter_Params_copy ti_sdo_io_drivers_IomAdapter_Params_copy
#define IomAdapter_Params_init ti_sdo_io_drivers_IomAdapter_Params_init
#define IomAdapter_Instance_finalize ti_sdo_io_drivers_IomAdapter_Instance_finalize
#define IomAdapter_delete ti_sdo_io_drivers_IomAdapter_delete
#define IomAdapter_destruct ti_sdo_io_drivers_IomAdapter_destruct
#define IomAdapter_Module_upCast ti_sdo_io_drivers_IomAdapter_Module_upCast
#define IomAdapter_Module_to_ti_sdo_io_IDriver ti_sdo_io_drivers_IomAdapter_Module_to_ti_sdo_io_IDriver
#define IomAdapter_Handle_upCast ti_sdo_io_drivers_IomAdapter_Handle_upCast
#define IomAdapter_Handle_to_ti_sdo_io_IDriver ti_sdo_io_drivers_IomAdapter_Handle_to_ti_sdo_io_IDriver
#define IomAdapter_Handle_downCast ti_sdo_io_drivers_IomAdapter_Handle_downCast
#define IomAdapter_Handle_from_ti_sdo_io_IDriver ti_sdo_io_drivers_IomAdapter_Handle_from_ti_sdo_io_IDriver

#endif /* ti_sdo_io_drivers_IomAdapter__localnames__done */
#endif
/*
 *  @(#) ti.sdo.io.drivers; 1, 0, 0, 0,; 11-7-2012 13:08:22; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

