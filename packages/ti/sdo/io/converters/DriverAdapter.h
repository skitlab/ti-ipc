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

#ifndef ti_sdo_io_converters_DriverAdapter__include
#define ti_sdo_io_converters_DriverAdapter__include

#ifndef __nested__
#define __nested__
#define ti_sdo_io_converters_DriverAdapter__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_io_converters_DriverAdapter___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/io/converters/package/package.defs.h>

#include <ti/sdo/io/IConverter.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sdo/io/DriverTypes.h>
#include <ti/sdo/utils/List.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Q_TERMINATING */
#define ti_sdo_io_converters_DriverAdapter_Q_TERMINATING (1)

/* DoneFxn */
typedef ti_sdo_io_IConverter_DoneFxn ti_sdo_io_converters_DriverAdapter_DoneFxn;


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_io_converters_DriverAdapter_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__diagsEnabled ti_sdo_io_converters_DriverAdapter_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_io_converters_DriverAdapter_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__diagsIncluded ti_sdo_io_converters_DriverAdapter_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_io_converters_DriverAdapter_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__diagsMask ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_io_converters_DriverAdapter_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__gateObj ti_sdo_io_converters_DriverAdapter_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_io_converters_DriverAdapter_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__gatePrms ti_sdo_io_converters_DriverAdapter_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_io_converters_DriverAdapter_Module__id;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__id ti_sdo_io_converters_DriverAdapter_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_io_converters_DriverAdapter_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerDefined ti_sdo_io_converters_DriverAdapter_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_io_converters_DriverAdapter_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerObj ti_sdo_io_converters_DriverAdapter_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8 ti_sdo_io_converters_DriverAdapter_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_io_converters_DriverAdapter_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Module__startupDoneFxn ti_sdo_io_converters_DriverAdapter_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_io_converters_DriverAdapter_Object__count;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Object__count ti_sdo_io_converters_DriverAdapter_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_io_converters_DriverAdapter_Object__heap;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Object__heap ti_sdo_io_converters_DriverAdapter_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_io_converters_DriverAdapter_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Object__sizeof ti_sdo_io_converters_DriverAdapter_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_io_converters_DriverAdapter_Object__table;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_Object__table ti_sdo_io_converters_DriverAdapter_Object__table__C;

/* E_openFail */
#define ti_sdo_io_converters_DriverAdapter_E_openFail (ti_sdo_io_converters_DriverAdapter_E_openFail__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_converters_DriverAdapter_E_openFail;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_E_openFail ti_sdo_io_converters_DriverAdapter_E_openFail__C;

/* A_noReadyPacket */
#define ti_sdo_io_converters_DriverAdapter_A_noReadyPacket (ti_sdo_io_converters_DriverAdapter_A_noReadyPacket__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_io_converters_DriverAdapter_A_noReadyPacket;
__extern __FAR__ const CT__ti_sdo_io_converters_DriverAdapter_A_noReadyPacket ti_sdo_io_converters_DriverAdapter_A_noReadyPacket__C;


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_io_converters_DriverAdapter_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_Ptr driverHandle;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_io_converters_DriverAdapter_Struct {
    const ti_sdo_io_converters_DriverAdapter_Fxns__* __fxns;
    xdc_String __f0;
    xdc_Ptr __f1;
    xdc_Ptr __f2;
    xdc_UArg __f3;
    xdc_UInt __f4;
    ti_sdo_io_IConverter_DoneFxn __f5;
    xdc_UArg __f6;
    ti_sdo_utils_List_Struct __f7;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_io_converters_DriverAdapter_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*open)(ti_sdo_io_converters_DriverAdapter_Handle, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_IConverter_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_Void (*close)(ti_sdo_io_converters_DriverAdapter_Handle, xdc_runtime_Error_Block*);
    xdc_Void (*issue)(ti_sdo_io_converters_DriverAdapter_Handle, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
    xdc_Void (*reclaim)(ti_sdo_io_converters_DriverAdapter_Handle, ti_sdo_io_DriverTypes_Packet**, xdc_runtime_Error_Block*);
    xdc_Void (*control)(ti_sdo_io_converters_DriverAdapter_Handle, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_Bool (*query)(ti_sdo_io_converters_DriverAdapter_Handle, xdc_Int);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_io_converters_DriverAdapter_Fxns__ ti_sdo_io_converters_DriverAdapter_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_io_converters_DriverAdapter_Module_startup( state ) (-1)

/* Instance_init__F */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Instance_init__F, "ti_sdo_io_converters_DriverAdapter_Instance_init")
__extern void ti_sdo_io_converters_DriverAdapter_Instance_init__F( ti_sdo_io_converters_DriverAdapter_Object*, const ti_sdo_io_converters_DriverAdapter_Params* );

/* Instance_init__R */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Instance_init__R, "ti_sdo_io_converters_DriverAdapter_Instance_init")
__extern void ti_sdo_io_converters_DriverAdapter_Instance_init__R( ti_sdo_io_converters_DriverAdapter_Object*, const ti_sdo_io_converters_DriverAdapter_Params* );

/* Handle__label__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Handle__label__S, "ti_sdo_io_converters_DriverAdapter_Handle__label")
__extern xdc_runtime_Types_Label* ti_sdo_io_converters_DriverAdapter_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Module__startupDone__S, "ti_sdo_io_converters_DriverAdapter_Module__startupDone")
__extern xdc_Bool ti_sdo_io_converters_DriverAdapter_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Object__create__S, "ti_sdo_io_converters_DriverAdapter_Object__create")
__extern xdc_Ptr ti_sdo_io_converters_DriverAdapter_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Object__delete__S, "ti_sdo_io_converters_DriverAdapter_Object__delete")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Object__destruct__S, "ti_sdo_io_converters_DriverAdapter_Object__destruct")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Object__get__S, "ti_sdo_io_converters_DriverAdapter_Object__get")
__extern xdc_Ptr ti_sdo_io_converters_DriverAdapter_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Object__first__S, "ti_sdo_io_converters_DriverAdapter_Object__first")
__extern xdc_Ptr ti_sdo_io_converters_DriverAdapter_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Object__next__S, "ti_sdo_io_converters_DriverAdapter_Object__next")
__extern xdc_Ptr ti_sdo_io_converters_DriverAdapter_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_Params__init__S, "ti_sdo_io_converters_DriverAdapter_Params__init")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* open__E */
#define ti_sdo_io_converters_DriverAdapter_open ti_sdo_io_converters_DriverAdapter_open__E
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_open__E, "ti_sdo_io_converters_DriverAdapter_open")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_open__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_IConverter_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_open__F, "ti_sdo_io_converters_DriverAdapter_open")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_open__F( ti_sdo_io_converters_DriverAdapter_Object* __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_IConverter_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_open__R( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_IConverter_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );

/* close__E */
#define ti_sdo_io_converters_DriverAdapter_close ti_sdo_io_converters_DriverAdapter_close__E
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_close__E, "ti_sdo_io_converters_DriverAdapter_close")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_close__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_close__F, "ti_sdo_io_converters_DriverAdapter_close")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_close__F( ti_sdo_io_converters_DriverAdapter_Object* __inst, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_close__R( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_runtime_Error_Block* eb );

/* issue__E */
#define ti_sdo_io_converters_DriverAdapter_issue ti_sdo_io_converters_DriverAdapter_issue__E
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_issue__E, "ti_sdo_io_converters_DriverAdapter_issue")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_issue__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_issue__F, "ti_sdo_io_converters_DriverAdapter_issue")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_issue__F( ti_sdo_io_converters_DriverAdapter_Object* __inst, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_issue__R( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );

/* reclaim__E */
#define ti_sdo_io_converters_DriverAdapter_reclaim ti_sdo_io_converters_DriverAdapter_reclaim__E
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_reclaim__E, "ti_sdo_io_converters_DriverAdapter_reclaim")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_reclaim__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_Packet** packetp, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_reclaim__F, "ti_sdo_io_converters_DriverAdapter_reclaim")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_reclaim__F( ti_sdo_io_converters_DriverAdapter_Object* __inst, ti_sdo_io_DriverTypes_Packet** packetp, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_reclaim__R( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_Packet** packetp, xdc_runtime_Error_Block* eb );

/* control__E */
#define ti_sdo_io_converters_DriverAdapter_control ti_sdo_io_converters_DriverAdapter_control__E
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_control__E, "ti_sdo_io_converters_DriverAdapter_control")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_control__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_control__F, "ti_sdo_io_converters_DriverAdapter_control")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_control__F( ti_sdo_io_converters_DriverAdapter_Object* __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_control__R( ti_sdo_io_converters_DriverAdapter_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );

/* query__E */
#define ti_sdo_io_converters_DriverAdapter_query ti_sdo_io_converters_DriverAdapter_query__E
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_query__E, "ti_sdo_io_converters_DriverAdapter_query")
__extern xdc_Bool ti_sdo_io_converters_DriverAdapter_query__E( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_Int qual );
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_query__F, "ti_sdo_io_converters_DriverAdapter_query")
__extern xdc_Bool ti_sdo_io_converters_DriverAdapter_query__F( ti_sdo_io_converters_DriverAdapter_Object* __inst, xdc_Int qual );
__extern xdc_Bool ti_sdo_io_converters_DriverAdapter_query__R( ti_sdo_io_converters_DriverAdapter_Handle __inst, xdc_Int qual );

/* callback__E */
#define ti_sdo_io_converters_DriverAdapter_callback ti_sdo_io_converters_DriverAdapter_callback__E
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_callback__E, "ti_sdo_io_converters_DriverAdapter_callback")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_callback__E( xdc_UArg cbArg, ti_sdo_io_DriverTypes_Packet* packet );
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_callback__F, "ti_sdo_io_converters_DriverAdapter_callback")
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_callback__F( xdc_UArg cbArg, ti_sdo_io_DriverTypes_Packet* packet );
__extern xdc_Void ti_sdo_io_converters_DriverAdapter_callback__R( xdc_UArg cbArg, ti_sdo_io_DriverTypes_Packet* packet );

/* postInit__I */
#define ti_sdo_io_converters_DriverAdapter_postInit ti_sdo_io_converters_DriverAdapter_postInit__I
xdc__CODESECT(ti_sdo_io_converters_DriverAdapter_postInit__I, "ti_sdo_io_converters_DriverAdapter_postInit")
__extern xdc_Int ti_sdo_io_converters_DriverAdapter_postInit__I( ti_sdo_io_converters_DriverAdapter_Object* obj, xdc_String name, xdc_runtime_Error_Block* eb );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* open_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_DriverAdapter_open_FxnT)(void*, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_IConverter_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_DriverAdapter_open_FxnT ti_sdo_io_converters_DriverAdapter_open_fxnP( void )
{
    return (ti_sdo_io_converters_DriverAdapter_open_FxnT)ti_sdo_io_converters_DriverAdapter_open; 
}

/* close_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_DriverAdapter_close_FxnT)(void*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_DriverAdapter_close_FxnT ti_sdo_io_converters_DriverAdapter_close_fxnP( void )
{
    return (ti_sdo_io_converters_DriverAdapter_close_FxnT)ti_sdo_io_converters_DriverAdapter_close; 
}

/* issue_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_DriverAdapter_issue_FxnT)(void*, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_DriverAdapter_issue_FxnT ti_sdo_io_converters_DriverAdapter_issue_fxnP( void )
{
    return (ti_sdo_io_converters_DriverAdapter_issue_FxnT)ti_sdo_io_converters_DriverAdapter_issue; 
}

/* reclaim_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_DriverAdapter_reclaim_FxnT)(void*, ti_sdo_io_DriverTypes_Packet**, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_DriverAdapter_reclaim_FxnT ti_sdo_io_converters_DriverAdapter_reclaim_fxnP( void )
{
    return (ti_sdo_io_converters_DriverAdapter_reclaim_FxnT)ti_sdo_io_converters_DriverAdapter_reclaim; 
}

/* control_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_DriverAdapter_control_FxnT)(void*, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_DriverAdapter_control_FxnT ti_sdo_io_converters_DriverAdapter_control_fxnP( void )
{
    return (ti_sdo_io_converters_DriverAdapter_control_FxnT)ti_sdo_io_converters_DriverAdapter_control; 
}

/* query_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_io_converters_DriverAdapter_query_FxnT)(void*, xdc_Int);
static inline ti_sdo_io_converters_DriverAdapter_query_FxnT ti_sdo_io_converters_DriverAdapter_query_fxnP( void )
{
    return (ti_sdo_io_converters_DriverAdapter_query_FxnT)ti_sdo_io_converters_DriverAdapter_query; 
}


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_io_IConverter_Module ti_sdo_io_converters_DriverAdapter_Module_upCast( void )
{
    return (ti_sdo_io_IConverter_Module)&ti_sdo_io_converters_DriverAdapter_Module__FXNS__C;
}

/* Module_to_ti_sdo_io_IConverter */
#define ti_sdo_io_converters_DriverAdapter_Module_to_ti_sdo_io_IConverter ti_sdo_io_converters_DriverAdapter_Module_upCast

/* Handle_upCast */
static inline ti_sdo_io_IConverter_Handle ti_sdo_io_converters_DriverAdapter_Handle_upCast( ti_sdo_io_converters_DriverAdapter_Handle i )
{
    return (ti_sdo_io_IConverter_Handle)i;
}

/* Handle_to_ti_sdo_io_IConverter */
#define ti_sdo_io_converters_DriverAdapter_Handle_to_ti_sdo_io_IConverter ti_sdo_io_converters_DriverAdapter_Handle_upCast

/* Handle_downCast */
static inline ti_sdo_io_converters_DriverAdapter_Handle ti_sdo_io_converters_DriverAdapter_Handle_downCast( ti_sdo_io_IConverter_Handle i )
{
    ti_sdo_io_IConverter_Handle i2 = (ti_sdo_io_IConverter_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_io_converters_DriverAdapter_Module__FXNS__C ? (ti_sdo_io_converters_DriverAdapter_Handle)i : 0;
}

/* Handle_from_ti_sdo_io_IConverter */
#define ti_sdo_io_converters_DriverAdapter_Handle_from_ti_sdo_io_IConverter ti_sdo_io_converters_DriverAdapter_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_io_converters_DriverAdapter_Module_startupDone() ti_sdo_io_converters_DriverAdapter_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_io_converters_DriverAdapter_Object_heap() ti_sdo_io_converters_DriverAdapter_Object__heap__C

/* Module_heap */
#define ti_sdo_io_converters_DriverAdapter_Module_heap() ti_sdo_io_converters_DriverAdapter_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_io_converters_DriverAdapter_Module__id ti_sdo_io_converters_DriverAdapter_Module_id( void ) 
{
    return ti_sdo_io_converters_DriverAdapter_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_io_converters_DriverAdapter_Module_hasMask( void ) 
{
    return ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_io_converters_DriverAdapter_Module_getMask( void ) 
{
    return ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C != NULL ? *ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_io_converters_DriverAdapter_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C != NULL) *ti_sdo_io_converters_DriverAdapter_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_io_converters_DriverAdapter_Params_init( ti_sdo_io_converters_DriverAdapter_Params* prms ) 
{
    if (prms) {
        ti_sdo_io_converters_DriverAdapter_Params__init__S(prms, 0, sizeof(ti_sdo_io_converters_DriverAdapter_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_io_converters_DriverAdapter_Params_copy( ti_sdo_io_converters_DriverAdapter_Params* dst, const ti_sdo_io_converters_DriverAdapter_Params* src ) 
{
    if (dst) {
        ti_sdo_io_converters_DriverAdapter_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sdo_io_converters_DriverAdapter_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_io_converters_DriverAdapter_Object_count() ti_sdo_io_converters_DriverAdapter_Object__count__C

/* Object_sizeof */
#define ti_sdo_io_converters_DriverAdapter_Object_sizeof() ti_sdo_io_converters_DriverAdapter_Object__sizeof__C

/* Object_get */
static inline ti_sdo_io_converters_DriverAdapter_Handle ti_sdo_io_converters_DriverAdapter_Object_get( ti_sdo_io_converters_DriverAdapter_Instance_State* oarr, int i ) 
{
    return (ti_sdo_io_converters_DriverAdapter_Handle)ti_sdo_io_converters_DriverAdapter_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_io_converters_DriverAdapter_Handle ti_sdo_io_converters_DriverAdapter_Object_first( void )
{
    return (ti_sdo_io_converters_DriverAdapter_Handle)ti_sdo_io_converters_DriverAdapter_Object__first__S();
}

/* Object_next */
static inline ti_sdo_io_converters_DriverAdapter_Handle ti_sdo_io_converters_DriverAdapter_Object_next( ti_sdo_io_converters_DriverAdapter_Object* obj )
{
    return (ti_sdo_io_converters_DriverAdapter_Handle)ti_sdo_io_converters_DriverAdapter_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_io_converters_DriverAdapter_Handle_label( ti_sdo_io_converters_DriverAdapter_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_io_converters_DriverAdapter_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sdo_io_converters_DriverAdapter_Handle_name( ti_sdo_io_converters_DriverAdapter_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_io_converters_DriverAdapter_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sdo_io_converters_DriverAdapter_Handle ti_sdo_io_converters_DriverAdapter_create( const ti_sdo_io_converters_DriverAdapter_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    return (ti_sdo_io_converters_DriverAdapter_Handle)ti_sdo_io_converters_DriverAdapter_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sdo_io_converters_DriverAdapter_Params), __eb);
}

/* construct */
static inline void ti_sdo_io_converters_DriverAdapter_construct( ti_sdo_io_converters_DriverAdapter_Struct* __obj, const ti_sdo_io_converters_DriverAdapter_Params* __prms )
{
    ti_sdo_io_converters_DriverAdapter_Object__create__S(__obj, sizeof (ti_sdo_io_converters_DriverAdapter_Struct), 0, (const xdc_UChar*)__prms, sizeof(ti_sdo_io_converters_DriverAdapter_Params), NULL);
}

/* delete */
static inline void ti_sdo_io_converters_DriverAdapter_delete( ti_sdo_io_converters_DriverAdapter_Handle* instp )
{
    ti_sdo_io_converters_DriverAdapter_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sdo_io_converters_DriverAdapter_destruct( ti_sdo_io_converters_DriverAdapter_Struct* obj )
{
    ti_sdo_io_converters_DriverAdapter_Object__destruct__S(obj);
}

/* handle */
static inline ti_sdo_io_converters_DriverAdapter_Handle ti_sdo_io_converters_DriverAdapter_handle( ti_sdo_io_converters_DriverAdapter_Struct* str )
{
    return (ti_sdo_io_converters_DriverAdapter_Handle)str;
}

/* struct */
static inline ti_sdo_io_converters_DriverAdapter_Struct* ti_sdo_io_converters_DriverAdapter_struct( ti_sdo_io_converters_DriverAdapter_Handle inst )
{
    return (ti_sdo_io_converters_DriverAdapter_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_io_converters_DriverAdapter__top__
#undef __nested__
#endif

#endif /* ti_sdo_io_converters_DriverAdapter__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_io_converters_DriverAdapter__internalaccess))

#ifndef ti_sdo_io_converters_DriverAdapter__include_state
#define ti_sdo_io_converters_DriverAdapter__include_state

/* Object */
struct ti_sdo_io_converters_DriverAdapter_Object {
    const ti_sdo_io_converters_DriverAdapter_Fxns__* __fxns;
    xdc_String name;
    xdc_Ptr driverHandle;
    xdc_Ptr chan;
    xdc_UArg chanParams;
    xdc_UInt mode;
    ti_sdo_io_IConverter_DoneFxn cbFxn;
    xdc_UArg cbArg;
    char __dummy;
};

/* Instance_State_fromDriver */
__extern __FAR__ const xdc_SizeT ti_sdo_io_converters_DriverAdapter_Instance_State_fromDriver__O;
static inline ti_sdo_utils_List_Handle ti_sdo_io_converters_DriverAdapter_Instance_State_fromDriver(ti_sdo_io_converters_DriverAdapter_Object* obj)
{
    return (ti_sdo_utils_List_Handle)(((char*)obj) + ti_sdo_io_converters_DriverAdapter_Instance_State_fromDriver__O);
}

#endif /* ti_sdo_io_converters_DriverAdapter__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_io_converters_DriverAdapter__nolocalnames)

#ifndef ti_sdo_io_converters_DriverAdapter__localnames__done
#define ti_sdo_io_converters_DriverAdapter__localnames__done

/* module prefix */
#define DriverAdapter_Instance ti_sdo_io_converters_DriverAdapter_Instance
#define DriverAdapter_Handle ti_sdo_io_converters_DriverAdapter_Handle
#define DriverAdapter_Module ti_sdo_io_converters_DriverAdapter_Module
#define DriverAdapter_Object ti_sdo_io_converters_DriverAdapter_Object
#define DriverAdapter_Struct ti_sdo_io_converters_DriverAdapter_Struct
#define DriverAdapter_Q_TERMINATING ti_sdo_io_converters_DriverAdapter_Q_TERMINATING
#define DriverAdapter_DoneFxn ti_sdo_io_converters_DriverAdapter_DoneFxn
#define DriverAdapter_Instance_State ti_sdo_io_converters_DriverAdapter_Instance_State
#define DriverAdapter_E_openFail ti_sdo_io_converters_DriverAdapter_E_openFail
#define DriverAdapter_A_noReadyPacket ti_sdo_io_converters_DriverAdapter_A_noReadyPacket
#define DriverAdapter_Instance_State_fromDriver ti_sdo_io_converters_DriverAdapter_Instance_State_fromDriver
#define DriverAdapter_Params ti_sdo_io_converters_DriverAdapter_Params
#define DriverAdapter_open ti_sdo_io_converters_DriverAdapter_open
#define DriverAdapter_open_fxnP ti_sdo_io_converters_DriverAdapter_open_fxnP
#define DriverAdapter_open_FxnT ti_sdo_io_converters_DriverAdapter_open_FxnT
#define DriverAdapter_close ti_sdo_io_converters_DriverAdapter_close
#define DriverAdapter_close_fxnP ti_sdo_io_converters_DriverAdapter_close_fxnP
#define DriverAdapter_close_FxnT ti_sdo_io_converters_DriverAdapter_close_FxnT
#define DriverAdapter_issue ti_sdo_io_converters_DriverAdapter_issue
#define DriverAdapter_issue_fxnP ti_sdo_io_converters_DriverAdapter_issue_fxnP
#define DriverAdapter_issue_FxnT ti_sdo_io_converters_DriverAdapter_issue_FxnT
#define DriverAdapter_reclaim ti_sdo_io_converters_DriverAdapter_reclaim
#define DriverAdapter_reclaim_fxnP ti_sdo_io_converters_DriverAdapter_reclaim_fxnP
#define DriverAdapter_reclaim_FxnT ti_sdo_io_converters_DriverAdapter_reclaim_FxnT
#define DriverAdapter_control ti_sdo_io_converters_DriverAdapter_control
#define DriverAdapter_control_fxnP ti_sdo_io_converters_DriverAdapter_control_fxnP
#define DriverAdapter_control_FxnT ti_sdo_io_converters_DriverAdapter_control_FxnT
#define DriverAdapter_query ti_sdo_io_converters_DriverAdapter_query
#define DriverAdapter_query_fxnP ti_sdo_io_converters_DriverAdapter_query_fxnP
#define DriverAdapter_query_FxnT ti_sdo_io_converters_DriverAdapter_query_FxnT
#define DriverAdapter_callback ti_sdo_io_converters_DriverAdapter_callback
#define DriverAdapter_Module_name ti_sdo_io_converters_DriverAdapter_Module_name
#define DriverAdapter_Module_id ti_sdo_io_converters_DriverAdapter_Module_id
#define DriverAdapter_Module_startup ti_sdo_io_converters_DriverAdapter_Module_startup
#define DriverAdapter_Module_startupDone ti_sdo_io_converters_DriverAdapter_Module_startupDone
#define DriverAdapter_Module_hasMask ti_sdo_io_converters_DriverAdapter_Module_hasMask
#define DriverAdapter_Module_getMask ti_sdo_io_converters_DriverAdapter_Module_getMask
#define DriverAdapter_Module_setMask ti_sdo_io_converters_DriverAdapter_Module_setMask
#define DriverAdapter_Object_heap ti_sdo_io_converters_DriverAdapter_Object_heap
#define DriverAdapter_Module_heap ti_sdo_io_converters_DriverAdapter_Module_heap
#define DriverAdapter_construct ti_sdo_io_converters_DriverAdapter_construct
#define DriverAdapter_create ti_sdo_io_converters_DriverAdapter_create
#define DriverAdapter_handle ti_sdo_io_converters_DriverAdapter_handle
#define DriverAdapter_struct ti_sdo_io_converters_DriverAdapter_struct
#define DriverAdapter_Handle_label ti_sdo_io_converters_DriverAdapter_Handle_label
#define DriverAdapter_Handle_name ti_sdo_io_converters_DriverAdapter_Handle_name
#define DriverAdapter_Instance_init ti_sdo_io_converters_DriverAdapter_Instance_init
#define DriverAdapter_Object_count ti_sdo_io_converters_DriverAdapter_Object_count
#define DriverAdapter_Object_get ti_sdo_io_converters_DriverAdapter_Object_get
#define DriverAdapter_Object_first ti_sdo_io_converters_DriverAdapter_Object_first
#define DriverAdapter_Object_next ti_sdo_io_converters_DriverAdapter_Object_next
#define DriverAdapter_Object_sizeof ti_sdo_io_converters_DriverAdapter_Object_sizeof
#define DriverAdapter_Params_copy ti_sdo_io_converters_DriverAdapter_Params_copy
#define DriverAdapter_Params_init ti_sdo_io_converters_DriverAdapter_Params_init
#define DriverAdapter_delete ti_sdo_io_converters_DriverAdapter_delete
#define DriverAdapter_destruct ti_sdo_io_converters_DriverAdapter_destruct
#define DriverAdapter_Module_upCast ti_sdo_io_converters_DriverAdapter_Module_upCast
#define DriverAdapter_Module_to_ti_sdo_io_IConverter ti_sdo_io_converters_DriverAdapter_Module_to_ti_sdo_io_IConverter
#define DriverAdapter_Handle_upCast ti_sdo_io_converters_DriverAdapter_Handle_upCast
#define DriverAdapter_Handle_to_ti_sdo_io_IConverter ti_sdo_io_converters_DriverAdapter_Handle_to_ti_sdo_io_IConverter
#define DriverAdapter_Handle_downCast ti_sdo_io_converters_DriverAdapter_Handle_downCast
#define DriverAdapter_Handle_from_ti_sdo_io_IConverter ti_sdo_io_converters_DriverAdapter_Handle_from_ti_sdo_io_IConverter

#endif /* ti_sdo_io_converters_DriverAdapter__localnames__done */
#endif
/*
 *  @(#) ti.sdo.io.converters; 1, 0, 0, 0,; 11-7-2012 13:08:12; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

