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

#ifndef ti_sdo_io_converters_Transformer__include
#define ti_sdo_io_converters_Transformer__include

#ifndef __nested__
#define __nested__
#define ti_sdo_io_converters_Transformer__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_io_converters_Transformer___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/io/converters/package/package.defs.h>

#include <ti/sdo/io/IConverter.h>
#include <xdc/runtime/Error.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Q_TERMINATING */
#define ti_sdo_io_converters_Transformer_Q_TERMINATING (1)

/* DoneFxn */
typedef ti_sdo_io_IConverter_DoneFxn ti_sdo_io_converters_Transformer_DoneFxn;

/* TransFunc */
typedef xdc_Void (*ti_sdo_io_converters_Transformer_TransFunc)(xdc_Ptr, xdc_SizeT, xdc_UArg);


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_io_converters_Transformer_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__diagsEnabled ti_sdo_io_converters_Transformer_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_io_converters_Transformer_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__diagsIncluded ti_sdo_io_converters_Transformer_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_io_converters_Transformer_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__diagsMask ti_sdo_io_converters_Transformer_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_io_converters_Transformer_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__gateObj ti_sdo_io_converters_Transformer_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_io_converters_Transformer_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__gatePrms ti_sdo_io_converters_Transformer_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_io_converters_Transformer_Module__id;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__id ti_sdo_io_converters_Transformer_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_io_converters_Transformer_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__loggerDefined ti_sdo_io_converters_Transformer_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_io_converters_Transformer_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__loggerObj ti_sdo_io_converters_Transformer_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_io_converters_Transformer_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__loggerFxn0 ti_sdo_io_converters_Transformer_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_io_converters_Transformer_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__loggerFxn1 ti_sdo_io_converters_Transformer_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_io_converters_Transformer_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__loggerFxn2 ti_sdo_io_converters_Transformer_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_io_converters_Transformer_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__loggerFxn4 ti_sdo_io_converters_Transformer_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_io_converters_Transformer_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__loggerFxn8 ti_sdo_io_converters_Transformer_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_io_converters_Transformer_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Module__startupDoneFxn ti_sdo_io_converters_Transformer_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_io_converters_Transformer_Object__count;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Object__count ti_sdo_io_converters_Transformer_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_io_converters_Transformer_Object__heap;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Object__heap ti_sdo_io_converters_Transformer_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_io_converters_Transformer_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Object__sizeof ti_sdo_io_converters_Transformer_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_io_converters_Transformer_Object__table;
__extern __FAR__ const CT__ti_sdo_io_converters_Transformer_Object__table ti_sdo_io_converters_Transformer_Object__table__C;


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_io_converters_Transformer_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    ti_sdo_io_converters_Transformer_TransFunc fxn;
    xdc_UArg arg;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_io_converters_Transformer_Struct {
    const ti_sdo_io_converters_Transformer_Fxns__* __fxns;
    ti_sdo_io_IConverter_Handle __f0;
    xdc_Bool __f1;
    xdc_UInt __f2;
    ti_sdo_io_IConverter_DoneFxn __f3;
    xdc_UArg __f4;
    ti_sdo_io_converters_Transformer_TransFunc __f5;
    xdc_UArg __f6;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_io_converters_Transformer_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*open)(ti_sdo_io_converters_Transformer_Handle, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_IConverter_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_Void (*close)(ti_sdo_io_converters_Transformer_Handle, xdc_runtime_Error_Block*);
    xdc_Void (*issue)(ti_sdo_io_converters_Transformer_Handle, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
    xdc_Void (*reclaim)(ti_sdo_io_converters_Transformer_Handle, ti_sdo_io_DriverTypes_Packet**, xdc_runtime_Error_Block*);
    xdc_Void (*control)(ti_sdo_io_converters_Transformer_Handle, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
    xdc_Bool (*query)(ti_sdo_io_converters_Transformer_Handle, xdc_Int);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_io_converters_Transformer_Fxns__ ti_sdo_io_converters_Transformer_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_io_converters_Transformer_Module_startup( state ) (-1)

/* Instance_init__F */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Instance_init__F, "ti_sdo_io_converters_Transformer_Instance_init")
__extern void ti_sdo_io_converters_Transformer_Instance_init__F( ti_sdo_io_converters_Transformer_Object*, const ti_sdo_io_converters_Transformer_Params* );

/* Instance_init__R */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Instance_init__R, "ti_sdo_io_converters_Transformer_Instance_init")
__extern void ti_sdo_io_converters_Transformer_Instance_init__R( ti_sdo_io_converters_Transformer_Object*, const ti_sdo_io_converters_Transformer_Params* );

/* Handle__label__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Handle__label__S, "ti_sdo_io_converters_Transformer_Handle__label")
__extern xdc_runtime_Types_Label* ti_sdo_io_converters_Transformer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Module__startupDone__S, "ti_sdo_io_converters_Transformer_Module__startupDone")
__extern xdc_Bool ti_sdo_io_converters_Transformer_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Object__create__S, "ti_sdo_io_converters_Transformer_Object__create")
__extern xdc_Ptr ti_sdo_io_converters_Transformer_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Object__delete__S, "ti_sdo_io_converters_Transformer_Object__delete")
__extern xdc_Void ti_sdo_io_converters_Transformer_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Object__destruct__S, "ti_sdo_io_converters_Transformer_Object__destruct")
__extern xdc_Void ti_sdo_io_converters_Transformer_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Object__get__S, "ti_sdo_io_converters_Transformer_Object__get")
__extern xdc_Ptr ti_sdo_io_converters_Transformer_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Object__first__S, "ti_sdo_io_converters_Transformer_Object__first")
__extern xdc_Ptr ti_sdo_io_converters_Transformer_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Object__next__S, "ti_sdo_io_converters_Transformer_Object__next")
__extern xdc_Ptr ti_sdo_io_converters_Transformer_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_io_converters_Transformer_Params__init__S, "ti_sdo_io_converters_Transformer_Params__init")
__extern xdc_Void ti_sdo_io_converters_Transformer_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* open__E */
#define ti_sdo_io_converters_Transformer_open ti_sdo_io_converters_Transformer_open__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_open__E, "ti_sdo_io_converters_Transformer_open")
__extern xdc_Void ti_sdo_io_converters_Transformer_open__E( ti_sdo_io_converters_Transformer_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_IConverter_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_Transformer_open__F, "ti_sdo_io_converters_Transformer_open")
__extern xdc_Void ti_sdo_io_converters_Transformer_open__F( ti_sdo_io_converters_Transformer_Object* __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_IConverter_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_Transformer_open__R( ti_sdo_io_converters_Transformer_Handle __inst, xdc_String name, xdc_UInt mode, xdc_UArg chanParams, ti_sdo_io_IConverter_DoneFxn cbFxn, xdc_UArg cbArg, xdc_runtime_Error_Block* eb );

/* close__E */
#define ti_sdo_io_converters_Transformer_close ti_sdo_io_converters_Transformer_close__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_close__E, "ti_sdo_io_converters_Transformer_close")
__extern xdc_Void ti_sdo_io_converters_Transformer_close__E( ti_sdo_io_converters_Transformer_Handle __inst, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_Transformer_close__F, "ti_sdo_io_converters_Transformer_close")
__extern xdc_Void ti_sdo_io_converters_Transformer_close__F( ti_sdo_io_converters_Transformer_Object* __inst, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_Transformer_close__R( ti_sdo_io_converters_Transformer_Handle __inst, xdc_runtime_Error_Block* eb );

/* issue__E */
#define ti_sdo_io_converters_Transformer_issue ti_sdo_io_converters_Transformer_issue__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_issue__E, "ti_sdo_io_converters_Transformer_issue")
__extern xdc_Void ti_sdo_io_converters_Transformer_issue__E( ti_sdo_io_converters_Transformer_Handle __inst, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_Transformer_issue__F, "ti_sdo_io_converters_Transformer_issue")
__extern xdc_Void ti_sdo_io_converters_Transformer_issue__F( ti_sdo_io_converters_Transformer_Object* __inst, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_Transformer_issue__R( ti_sdo_io_converters_Transformer_Handle __inst, ti_sdo_io_DriverTypes_Packet* packet, xdc_runtime_Error_Block* eb );

/* reclaim__E */
#define ti_sdo_io_converters_Transformer_reclaim ti_sdo_io_converters_Transformer_reclaim__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_reclaim__E, "ti_sdo_io_converters_Transformer_reclaim")
__extern xdc_Void ti_sdo_io_converters_Transformer_reclaim__E( ti_sdo_io_converters_Transformer_Handle __inst, ti_sdo_io_DriverTypes_Packet** packetp, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_Transformer_reclaim__F, "ti_sdo_io_converters_Transformer_reclaim")
__extern xdc_Void ti_sdo_io_converters_Transformer_reclaim__F( ti_sdo_io_converters_Transformer_Object* __inst, ti_sdo_io_DriverTypes_Packet** packetp, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_Transformer_reclaim__R( ti_sdo_io_converters_Transformer_Handle __inst, ti_sdo_io_DriverTypes_Packet** packetp, xdc_runtime_Error_Block* eb );

/* control__E */
#define ti_sdo_io_converters_Transformer_control ti_sdo_io_converters_Transformer_control__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_control__E, "ti_sdo_io_converters_Transformer_control")
__extern xdc_Void ti_sdo_io_converters_Transformer_control__E( ti_sdo_io_converters_Transformer_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_converters_Transformer_control__F, "ti_sdo_io_converters_Transformer_control")
__extern xdc_Void ti_sdo_io_converters_Transformer_control__F( ti_sdo_io_converters_Transformer_Object* __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_converters_Transformer_control__R( ti_sdo_io_converters_Transformer_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );

/* query__E */
#define ti_sdo_io_converters_Transformer_query ti_sdo_io_converters_Transformer_query__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_query__E, "ti_sdo_io_converters_Transformer_query")
__extern xdc_Bool ti_sdo_io_converters_Transformer_query__E( ti_sdo_io_converters_Transformer_Handle __inst, xdc_Int qual );
xdc__CODESECT(ti_sdo_io_converters_Transformer_query__F, "ti_sdo_io_converters_Transformer_query")
__extern xdc_Bool ti_sdo_io_converters_Transformer_query__F( ti_sdo_io_converters_Transformer_Object* __inst, xdc_Int qual );
__extern xdc_Bool ti_sdo_io_converters_Transformer_query__R( ti_sdo_io_converters_Transformer_Handle __inst, xdc_Int qual );

/* multiply__E */
#define ti_sdo_io_converters_Transformer_multiply ti_sdo_io_converters_Transformer_multiply__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_multiply__E, "ti_sdo_io_converters_Transformer_multiply")
__extern xdc_Void ti_sdo_io_converters_Transformer_multiply__E( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scaleFactor );
xdc__CODESECT(ti_sdo_io_converters_Transformer_multiply__F, "ti_sdo_io_converters_Transformer_multiply")
__extern xdc_Void ti_sdo_io_converters_Transformer_multiply__F( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scaleFactor );
__extern xdc_Void ti_sdo_io_converters_Transformer_multiply__R( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scaleFactor );

/* fix2flt__E */
#define ti_sdo_io_converters_Transformer_fix2flt ti_sdo_io_converters_Transformer_fix2flt__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_fix2flt__E, "ti_sdo_io_converters_Transformer_fix2flt")
__extern xdc_Void ti_sdo_io_converters_Transformer_fix2flt__E( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scaleFactor );
xdc__CODESECT(ti_sdo_io_converters_Transformer_fix2flt__F, "ti_sdo_io_converters_Transformer_fix2flt")
__extern xdc_Void ti_sdo_io_converters_Transformer_fix2flt__F( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scaleFactor );
__extern xdc_Void ti_sdo_io_converters_Transformer_fix2flt__R( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scaleFactor );

/* flt2fix__E */
#define ti_sdo_io_converters_Transformer_flt2fix ti_sdo_io_converters_Transformer_flt2fix__E
xdc__CODESECT(ti_sdo_io_converters_Transformer_flt2fix__E, "ti_sdo_io_converters_Transformer_flt2fix")
__extern xdc_Void ti_sdo_io_converters_Transformer_flt2fix__E( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scalePtr );
xdc__CODESECT(ti_sdo_io_converters_Transformer_flt2fix__F, "ti_sdo_io_converters_Transformer_flt2fix")
__extern xdc_Void ti_sdo_io_converters_Transformer_flt2fix__F( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scalePtr );
__extern xdc_Void ti_sdo_io_converters_Transformer_flt2fix__R( xdc_Ptr addr, xdc_SizeT size, xdc_UArg scalePtr );

/* callback__I */
#define ti_sdo_io_converters_Transformer_callback ti_sdo_io_converters_Transformer_callback__I
xdc__CODESECT(ti_sdo_io_converters_Transformer_callback__I, "ti_sdo_io_converters_Transformer_callback")
__extern xdc_Void ti_sdo_io_converters_Transformer_callback__I( xdc_UArg cbArg );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* open_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_Transformer_open_FxnT)(void*, xdc_String, xdc_UInt, xdc_UArg, ti_sdo_io_IConverter_DoneFxn, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_Transformer_open_FxnT ti_sdo_io_converters_Transformer_open_fxnP( void )
{
    return (ti_sdo_io_converters_Transformer_open_FxnT)ti_sdo_io_converters_Transformer_open; 
}

/* close_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_Transformer_close_FxnT)(void*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_Transformer_close_FxnT ti_sdo_io_converters_Transformer_close_fxnP( void )
{
    return (ti_sdo_io_converters_Transformer_close_FxnT)ti_sdo_io_converters_Transformer_close; 
}

/* issue_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_Transformer_issue_FxnT)(void*, ti_sdo_io_DriverTypes_Packet*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_Transformer_issue_FxnT ti_sdo_io_converters_Transformer_issue_fxnP( void )
{
    return (ti_sdo_io_converters_Transformer_issue_FxnT)ti_sdo_io_converters_Transformer_issue; 
}

/* reclaim_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_Transformer_reclaim_FxnT)(void*, ti_sdo_io_DriverTypes_Packet**, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_Transformer_reclaim_FxnT ti_sdo_io_converters_Transformer_reclaim_fxnP( void )
{
    return (ti_sdo_io_converters_Transformer_reclaim_FxnT)ti_sdo_io_converters_Transformer_reclaim; 
}

/* control_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_converters_Transformer_control_FxnT)(void*, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_converters_Transformer_control_FxnT ti_sdo_io_converters_Transformer_control_fxnP( void )
{
    return (ti_sdo_io_converters_Transformer_control_FxnT)ti_sdo_io_converters_Transformer_control; 
}

/* query_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sdo_io_converters_Transformer_query_FxnT)(void*, xdc_Int);
static inline ti_sdo_io_converters_Transformer_query_FxnT ti_sdo_io_converters_Transformer_query_fxnP( void )
{
    return (ti_sdo_io_converters_Transformer_query_FxnT)ti_sdo_io_converters_Transformer_query; 
}


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_io_IConverter_Module ti_sdo_io_converters_Transformer_Module_upCast( void )
{
    return (ti_sdo_io_IConverter_Module)&ti_sdo_io_converters_Transformer_Module__FXNS__C;
}

/* Module_to_ti_sdo_io_IConverter */
#define ti_sdo_io_converters_Transformer_Module_to_ti_sdo_io_IConverter ti_sdo_io_converters_Transformer_Module_upCast

/* Handle_upCast */
static inline ti_sdo_io_IConverter_Handle ti_sdo_io_converters_Transformer_Handle_upCast( ti_sdo_io_converters_Transformer_Handle i )
{
    return (ti_sdo_io_IConverter_Handle)i;
}

/* Handle_to_ti_sdo_io_IConverter */
#define ti_sdo_io_converters_Transformer_Handle_to_ti_sdo_io_IConverter ti_sdo_io_converters_Transformer_Handle_upCast

/* Handle_downCast */
static inline ti_sdo_io_converters_Transformer_Handle ti_sdo_io_converters_Transformer_Handle_downCast( ti_sdo_io_IConverter_Handle i )
{
    ti_sdo_io_IConverter_Handle i2 = (ti_sdo_io_IConverter_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sdo_io_converters_Transformer_Module__FXNS__C ? (ti_sdo_io_converters_Transformer_Handle)i : 0;
}

/* Handle_from_ti_sdo_io_IConverter */
#define ti_sdo_io_converters_Transformer_Handle_from_ti_sdo_io_IConverter ti_sdo_io_converters_Transformer_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_io_converters_Transformer_Module_startupDone() ti_sdo_io_converters_Transformer_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_io_converters_Transformer_Object_heap() ti_sdo_io_converters_Transformer_Object__heap__C

/* Module_heap */
#define ti_sdo_io_converters_Transformer_Module_heap() ti_sdo_io_converters_Transformer_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_io_converters_Transformer_Module__id ti_sdo_io_converters_Transformer_Module_id( void ) 
{
    return ti_sdo_io_converters_Transformer_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_io_converters_Transformer_Module_hasMask( void ) 
{
    return ti_sdo_io_converters_Transformer_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_io_converters_Transformer_Module_getMask( void ) 
{
    return ti_sdo_io_converters_Transformer_Module__diagsMask__C != NULL ? *ti_sdo_io_converters_Transformer_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_io_converters_Transformer_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_io_converters_Transformer_Module__diagsMask__C != NULL) *ti_sdo_io_converters_Transformer_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_io_converters_Transformer_Params_init( ti_sdo_io_converters_Transformer_Params* prms ) 
{
    if (prms) {
        ti_sdo_io_converters_Transformer_Params__init__S(prms, 0, sizeof(ti_sdo_io_converters_Transformer_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_io_converters_Transformer_Params_copy( ti_sdo_io_converters_Transformer_Params* dst, const ti_sdo_io_converters_Transformer_Params* src ) 
{
    if (dst) {
        ti_sdo_io_converters_Transformer_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sdo_io_converters_Transformer_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_io_converters_Transformer_Object_count() ti_sdo_io_converters_Transformer_Object__count__C

/* Object_sizeof */
#define ti_sdo_io_converters_Transformer_Object_sizeof() ti_sdo_io_converters_Transformer_Object__sizeof__C

/* Object_get */
static inline ti_sdo_io_converters_Transformer_Handle ti_sdo_io_converters_Transformer_Object_get( ti_sdo_io_converters_Transformer_Instance_State* oarr, int i ) 
{
    return (ti_sdo_io_converters_Transformer_Handle)ti_sdo_io_converters_Transformer_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_io_converters_Transformer_Handle ti_sdo_io_converters_Transformer_Object_first( void )
{
    return (ti_sdo_io_converters_Transformer_Handle)ti_sdo_io_converters_Transformer_Object__first__S();
}

/* Object_next */
static inline ti_sdo_io_converters_Transformer_Handle ti_sdo_io_converters_Transformer_Object_next( ti_sdo_io_converters_Transformer_Object* obj )
{
    return (ti_sdo_io_converters_Transformer_Handle)ti_sdo_io_converters_Transformer_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_io_converters_Transformer_Handle_label( ti_sdo_io_converters_Transformer_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_io_converters_Transformer_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sdo_io_converters_Transformer_Handle_name( ti_sdo_io_converters_Transformer_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_io_converters_Transformer_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sdo_io_converters_Transformer_Handle ti_sdo_io_converters_Transformer_create( const ti_sdo_io_converters_Transformer_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    return (ti_sdo_io_converters_Transformer_Handle)ti_sdo_io_converters_Transformer_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sdo_io_converters_Transformer_Params), __eb);
}

/* construct */
static inline void ti_sdo_io_converters_Transformer_construct( ti_sdo_io_converters_Transformer_Struct* __obj, const ti_sdo_io_converters_Transformer_Params* __prms )
{
    ti_sdo_io_converters_Transformer_Object__create__S(__obj, sizeof (ti_sdo_io_converters_Transformer_Struct), 0, (const xdc_UChar*)__prms, sizeof(ti_sdo_io_converters_Transformer_Params), NULL);
}

/* delete */
static inline void ti_sdo_io_converters_Transformer_delete( ti_sdo_io_converters_Transformer_Handle* instp )
{
    ti_sdo_io_converters_Transformer_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sdo_io_converters_Transformer_destruct( ti_sdo_io_converters_Transformer_Struct* obj )
{
    ti_sdo_io_converters_Transformer_Object__destruct__S(obj);
}

/* handle */
static inline ti_sdo_io_converters_Transformer_Handle ti_sdo_io_converters_Transformer_handle( ti_sdo_io_converters_Transformer_Struct* str )
{
    return (ti_sdo_io_converters_Transformer_Handle)str;
}

/* struct */
static inline ti_sdo_io_converters_Transformer_Struct* ti_sdo_io_converters_Transformer_struct( ti_sdo_io_converters_Transformer_Handle inst )
{
    return (ti_sdo_io_converters_Transformer_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_io_converters_Transformer__top__
#undef __nested__
#endif

#endif /* ti_sdo_io_converters_Transformer__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_io_converters_Transformer__internalaccess))

#ifndef ti_sdo_io_converters_Transformer__include_state
#define ti_sdo_io_converters_Transformer__include_state

/* Object */
struct ti_sdo_io_converters_Transformer_Object {
    const ti_sdo_io_converters_Transformer_Fxns__* __fxns;
    ti_sdo_io_IConverter_Handle convHandle;
    xdc_Bool drvAdapHdl;
    xdc_UInt mode;
    ti_sdo_io_IConverter_DoneFxn cbFxn;
    xdc_UArg cbArg;
    ti_sdo_io_converters_Transformer_TransFunc fxn;
    xdc_UArg arg;
};

#endif /* ti_sdo_io_converters_Transformer__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_io_converters_Transformer__nolocalnames)

#ifndef ti_sdo_io_converters_Transformer__localnames__done
#define ti_sdo_io_converters_Transformer__localnames__done

/* module prefix */
#define Transformer_Instance ti_sdo_io_converters_Transformer_Instance
#define Transformer_Handle ti_sdo_io_converters_Transformer_Handle
#define Transformer_Module ti_sdo_io_converters_Transformer_Module
#define Transformer_Object ti_sdo_io_converters_Transformer_Object
#define Transformer_Struct ti_sdo_io_converters_Transformer_Struct
#define Transformer_Q_TERMINATING ti_sdo_io_converters_Transformer_Q_TERMINATING
#define Transformer_DoneFxn ti_sdo_io_converters_Transformer_DoneFxn
#define Transformer_TransFunc ti_sdo_io_converters_Transformer_TransFunc
#define Transformer_Instance_State ti_sdo_io_converters_Transformer_Instance_State
#define Transformer_Params ti_sdo_io_converters_Transformer_Params
#define Transformer_open ti_sdo_io_converters_Transformer_open
#define Transformer_open_fxnP ti_sdo_io_converters_Transformer_open_fxnP
#define Transformer_open_FxnT ti_sdo_io_converters_Transformer_open_FxnT
#define Transformer_close ti_sdo_io_converters_Transformer_close
#define Transformer_close_fxnP ti_sdo_io_converters_Transformer_close_fxnP
#define Transformer_close_FxnT ti_sdo_io_converters_Transformer_close_FxnT
#define Transformer_issue ti_sdo_io_converters_Transformer_issue
#define Transformer_issue_fxnP ti_sdo_io_converters_Transformer_issue_fxnP
#define Transformer_issue_FxnT ti_sdo_io_converters_Transformer_issue_FxnT
#define Transformer_reclaim ti_sdo_io_converters_Transformer_reclaim
#define Transformer_reclaim_fxnP ti_sdo_io_converters_Transformer_reclaim_fxnP
#define Transformer_reclaim_FxnT ti_sdo_io_converters_Transformer_reclaim_FxnT
#define Transformer_control ti_sdo_io_converters_Transformer_control
#define Transformer_control_fxnP ti_sdo_io_converters_Transformer_control_fxnP
#define Transformer_control_FxnT ti_sdo_io_converters_Transformer_control_FxnT
#define Transformer_query ti_sdo_io_converters_Transformer_query
#define Transformer_query_fxnP ti_sdo_io_converters_Transformer_query_fxnP
#define Transformer_query_FxnT ti_sdo_io_converters_Transformer_query_FxnT
#define Transformer_multiply ti_sdo_io_converters_Transformer_multiply
#define Transformer_fix2flt ti_sdo_io_converters_Transformer_fix2flt
#define Transformer_flt2fix ti_sdo_io_converters_Transformer_flt2fix
#define Transformer_Module_name ti_sdo_io_converters_Transformer_Module_name
#define Transformer_Module_id ti_sdo_io_converters_Transformer_Module_id
#define Transformer_Module_startup ti_sdo_io_converters_Transformer_Module_startup
#define Transformer_Module_startupDone ti_sdo_io_converters_Transformer_Module_startupDone
#define Transformer_Module_hasMask ti_sdo_io_converters_Transformer_Module_hasMask
#define Transformer_Module_getMask ti_sdo_io_converters_Transformer_Module_getMask
#define Transformer_Module_setMask ti_sdo_io_converters_Transformer_Module_setMask
#define Transformer_Object_heap ti_sdo_io_converters_Transformer_Object_heap
#define Transformer_Module_heap ti_sdo_io_converters_Transformer_Module_heap
#define Transformer_construct ti_sdo_io_converters_Transformer_construct
#define Transformer_create ti_sdo_io_converters_Transformer_create
#define Transformer_handle ti_sdo_io_converters_Transformer_handle
#define Transformer_struct ti_sdo_io_converters_Transformer_struct
#define Transformer_Handle_label ti_sdo_io_converters_Transformer_Handle_label
#define Transformer_Handle_name ti_sdo_io_converters_Transformer_Handle_name
#define Transformer_Instance_init ti_sdo_io_converters_Transformer_Instance_init
#define Transformer_Object_count ti_sdo_io_converters_Transformer_Object_count
#define Transformer_Object_get ti_sdo_io_converters_Transformer_Object_get
#define Transformer_Object_first ti_sdo_io_converters_Transformer_Object_first
#define Transformer_Object_next ti_sdo_io_converters_Transformer_Object_next
#define Transformer_Object_sizeof ti_sdo_io_converters_Transformer_Object_sizeof
#define Transformer_Params_copy ti_sdo_io_converters_Transformer_Params_copy
#define Transformer_Params_init ti_sdo_io_converters_Transformer_Params_init
#define Transformer_delete ti_sdo_io_converters_Transformer_delete
#define Transformer_destruct ti_sdo_io_converters_Transformer_destruct
#define Transformer_Module_upCast ti_sdo_io_converters_Transformer_Module_upCast
#define Transformer_Module_to_ti_sdo_io_IConverter ti_sdo_io_converters_Transformer_Module_to_ti_sdo_io_IConverter
#define Transformer_Handle_upCast ti_sdo_io_converters_Transformer_Handle_upCast
#define Transformer_Handle_to_ti_sdo_io_IConverter ti_sdo_io_converters_Transformer_Handle_to_ti_sdo_io_IConverter
#define Transformer_Handle_downCast ti_sdo_io_converters_Transformer_Handle_downCast
#define Transformer_Handle_from_ti_sdo_io_IConverter ti_sdo_io_converters_Transformer_Handle_from_ti_sdo_io_IConverter

#endif /* ti_sdo_io_converters_Transformer__localnames__done */
#endif
/*
 *  @(#) ti.sdo.io.converters; 1, 0, 0, 0,; 11-7-2012 13:08:13; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

