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
 *     FUNCTION DECLARATIONS
 *     FUNCTION SELECTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_io_Stream__include
#define ti_sdo_io_Stream__include

#ifndef __nested__
#define __nested__
#define ti_sdo_io_Stream__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_io_Stream___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sdo/io/package/package.defs.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sdo/io/DriverTypes.h>
#include <xdc/runtime/IGateProvider.h>
#include <ti/sdo/io/IConverter.h>
#include <xdc/runtime/IModule.h>
#include <xdc/runtime/knl/ISync.h>
#include <xdc/runtime/knl/Sync.h>
#include <xdc/runtime/IHeap.h>
#include <ti/sdo/utils/NameServer.h>
#include <ti/sdo/utils/List.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* INPUT */
#define ti_sdo_io_Stream_INPUT (0)

/* OUTPUT */
#define ti_sdo_io_Stream_OUTPUT (1)

/* INOUT */
#define ti_sdo_io_Stream_INOUT (2)


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sdo_io_Stream_Args__create {
    xdc_String name;
    xdc_UInt mode;
} ti_sdo_io_Stream_Args__create;


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* Entry */
struct ti_sdo_io_Stream_Entry {
    xdc_String name;
    ti_sdo_io_IConverter_Handle handle;
};

/* Instance_State */
typedef ti_sdo_io_DriverTypes_Packet __T1_ti_sdo_io_Stream_Instance_State__packets;
typedef ti_sdo_io_DriverTypes_Packet *__ARRAY1_ti_sdo_io_Stream_Instance_State__packets;
typedef __ARRAY1_ti_sdo_io_Stream_Instance_State__packets __TA_ti_sdo_io_Stream_Instance_State__packets;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_io_Stream_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__diagsEnabled ti_sdo_io_Stream_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_io_Stream_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__diagsIncluded ti_sdo_io_Stream_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sdo_io_Stream_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__diagsMask ti_sdo_io_Stream_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_io_Stream_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__gateObj ti_sdo_io_Stream_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_io_Stream_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__gatePrms ti_sdo_io_Stream_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_io_Stream_Module__id;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__id ti_sdo_io_Stream_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_io_Stream_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__loggerDefined ti_sdo_io_Stream_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_io_Stream_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__loggerObj ti_sdo_io_Stream_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_io_Stream_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn0 ti_sdo_io_Stream_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_io_Stream_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn1 ti_sdo_io_Stream_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_io_Stream_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn2 ti_sdo_io_Stream_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_io_Stream_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn4 ti_sdo_io_Stream_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_io_Stream_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__loggerFxn8 ti_sdo_io_Stream_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_io_Stream_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_io_Stream_Module__startupDoneFxn ti_sdo_io_Stream_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_io_Stream_Object__count;
__extern __FAR__ const CT__ti_sdo_io_Stream_Object__count ti_sdo_io_Stream_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_io_Stream_Object__heap;
__extern __FAR__ const CT__ti_sdo_io_Stream_Object__heap ti_sdo_io_Stream_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_io_Stream_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_io_Stream_Object__sizeof ti_sdo_io_Stream_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_io_Stream_Object__table;
__extern __FAR__ const CT__ti_sdo_io_Stream_Object__table ti_sdo_io_Stream_Object__table__C;

/* E_notFound */
#define ti_sdo_io_Stream_E_notFound (ti_sdo_io_Stream_E_notFound__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_Stream_E_notFound;
__extern __FAR__ const CT__ti_sdo_io_Stream_E_notFound ti_sdo_io_Stream_E_notFound__C;

/* E_noPackets */
#define ti_sdo_io_Stream_E_noPackets (ti_sdo_io_Stream_E_noPackets__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_Stream_E_noPackets;
__extern __FAR__ const CT__ti_sdo_io_Stream_E_noPackets ti_sdo_io_Stream_E_noPackets__C;

/* E_noBuffersIssued */
#define ti_sdo_io_Stream_E_noBuffersIssued (ti_sdo_io_Stream_E_noBuffersIssued__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_Stream_E_noBuffersIssued;
__extern __FAR__ const CT__ti_sdo_io_Stream_E_noBuffersIssued ti_sdo_io_Stream_E_noBuffersIssued__C;

/* E_timeout */
#define ti_sdo_io_Stream_E_timeout (ti_sdo_io_Stream_E_timeout__C)
typedef xdc_runtime_Error_Id CT__ti_sdo_io_Stream_E_timeout;
__extern __FAR__ const CT__ti_sdo_io_Stream_E_timeout ti_sdo_io_Stream_E_timeout__C;

/* A_badMode */
#define ti_sdo_io_Stream_A_badMode (ti_sdo_io_Stream_A_badMode__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_io_Stream_A_badMode;
__extern __FAR__ const CT__ti_sdo_io_Stream_A_badMode ti_sdo_io_Stream_A_badMode__C;

/* A_pendingReclaims */
#define ti_sdo_io_Stream_A_pendingReclaims (ti_sdo_io_Stream_A_pendingReclaims__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_io_Stream_A_pendingReclaims;
__extern __FAR__ const CT__ti_sdo_io_Stream_A_pendingReclaims ti_sdo_io_Stream_A_pendingReclaims__C;

/* A_syncNonBlocking */
#define ti_sdo_io_Stream_A_syncNonBlocking (ti_sdo_io_Stream_A_syncNonBlocking__C)
typedef xdc_runtime_Assert_Id CT__ti_sdo_io_Stream_A_syncNonBlocking;
__extern __FAR__ const CT__ti_sdo_io_Stream_A_syncNonBlocking ti_sdo_io_Stream_A_syncNonBlocking__C;

/* maxRuntimeEntries */
#ifdef ti_sdo_io_Stream_maxRuntimeEntries__D
#define ti_sdo_io_Stream_maxRuntimeEntries (ti_sdo_io_Stream_maxRuntimeEntries__D)
#else
#define ti_sdo_io_Stream_maxRuntimeEntries (ti_sdo_io_Stream_maxRuntimeEntries__C)
typedef xdc_UInt CT__ti_sdo_io_Stream_maxRuntimeEntries;
__extern __FAR__ const CT__ti_sdo_io_Stream_maxRuntimeEntries ti_sdo_io_Stream_maxRuntimeEntries__C;
#endif

/* gate */
#define ti_sdo_io_Stream_gate (ti_sdo_io_Stream_gate__C)
typedef xdc_runtime_IGateProvider_Handle CT__ti_sdo_io_Stream_gate;
__extern __FAR__ const CT__ti_sdo_io_Stream_gate ti_sdo_io_Stream_gate__C;

/* maxNameLen */
#ifdef ti_sdo_io_Stream_maxNameLen__D
#define ti_sdo_io_Stream_maxNameLen (ti_sdo_io_Stream_maxNameLen__D)
#else
#define ti_sdo_io_Stream_maxNameLen (ti_sdo_io_Stream_maxNameLen__C)
typedef xdc_UInt CT__ti_sdo_io_Stream_maxNameLen;
__extern __FAR__ const CT__ti_sdo_io_Stream_maxNameLen ti_sdo_io_Stream_maxNameLen__C;
#endif


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sdo_io_Stream_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    xdc_UInt maxIssues;
    xdc_runtime_IHeap_Handle packetHeap;
    xdc_runtime_knl_ISync_Handle sync;
    xdc_UArg chanParams;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sdo_io_Stream_Struct {
    xdc_String __f0;
    xdc_UArg __f1;
    xdc_Bool __f2;
    __TA_ti_sdo_io_Stream_Instance_State__packets __f3;
    xdc_UInt __f4;
    xdc_UInt __f5;
    xdc_UInt __f6;
    xdc_UInt __f7;
    xdc_runtime_IHeap_Handle __f8;
    xdc_runtime_knl_ISync_Handle __f9;
    xdc_Bool __f10;
    ti_sdo_io_IConverter_Handle __f11;
    ti_sdo_utils_List_Struct __f12;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_io_Stream_Module_startup ti_sdo_io_Stream_Module_startup__E
xdc__CODESECT(ti_sdo_io_Stream_Module_startup__E, "ti_sdo_io_Stream_Module_startup")
__extern xdc_Int ti_sdo_io_Stream_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_sdo_io_Stream_Module_startup__F, "ti_sdo_io_Stream_Module_startup")
__extern xdc_Int ti_sdo_io_Stream_Module_startup__F( xdc_Int state );
xdc__CODESECT(ti_sdo_io_Stream_Module_startup__R, "ti_sdo_io_Stream_Module_startup")
__extern xdc_Int ti_sdo_io_Stream_Module_startup__R( xdc_Int state );

/* Instance_init__F */
xdc__CODESECT(ti_sdo_io_Stream_Instance_init__F, "ti_sdo_io_Stream_Instance_init")
__extern int ti_sdo_io_Stream_Instance_init__F( ti_sdo_io_Stream_Object*, xdc_String name, xdc_UInt mode, const ti_sdo_io_Stream_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__F */
xdc__CODESECT(ti_sdo_io_Stream_Instance_finalize__F, "ti_sdo_io_Stream_Instance_finalize")
__extern void ti_sdo_io_Stream_Instance_finalize__F( ti_sdo_io_Stream_Object* , int );

/* Instance_init__R */
xdc__CODESECT(ti_sdo_io_Stream_Instance_init__R, "ti_sdo_io_Stream_Instance_init")
__extern int ti_sdo_io_Stream_Instance_init__R( ti_sdo_io_Stream_Object*, xdc_String name, xdc_UInt mode, const ti_sdo_io_Stream_Params*, xdc_runtime_Error_Block* );

/* Instance_finalize__R */
xdc__CODESECT(ti_sdo_io_Stream_Instance_finalize__R, "ti_sdo_io_Stream_Instance_finalize")
__extern void ti_sdo_io_Stream_Instance_finalize__R( ti_sdo_io_Stream_Object* , int );

/* Handle__label__S */
xdc__CODESECT(ti_sdo_io_Stream_Handle__label__S, "ti_sdo_io_Stream_Handle__label")
__extern xdc_runtime_Types_Label* ti_sdo_io_Stream_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_io_Stream_Module__startupDone__S, "ti_sdo_io_Stream_Module__startupDone")
__extern xdc_Bool ti_sdo_io_Stream_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_io_Stream_Object__create__S, "ti_sdo_io_Stream_Object__create")
__extern xdc_Ptr ti_sdo_io_Stream_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_io_Stream_Object__delete__S, "ti_sdo_io_Stream_Object__delete")
__extern xdc_Void ti_sdo_io_Stream_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_io_Stream_Object__destruct__S, "ti_sdo_io_Stream_Object__destruct")
__extern xdc_Void ti_sdo_io_Stream_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_io_Stream_Object__get__S, "ti_sdo_io_Stream_Object__get")
__extern xdc_Ptr ti_sdo_io_Stream_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_io_Stream_Object__first__S, "ti_sdo_io_Stream_Object__first")
__extern xdc_Ptr ti_sdo_io_Stream_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_io_Stream_Object__next__S, "ti_sdo_io_Stream_Object__next")
__extern xdc_Ptr ti_sdo_io_Stream_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_io_Stream_Params__init__S, "ti_sdo_io_Stream_Params__init")
__extern xdc_Void ti_sdo_io_Stream_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* add__E */
#define ti_sdo_io_Stream_add ti_sdo_io_Stream_add__E
xdc__CODESECT(ti_sdo_io_Stream_add__E, "ti_sdo_io_Stream_add")
__extern xdc_Void ti_sdo_io_Stream_add__E( xdc_String name, ti_sdo_io_IConverter_Handle handle, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_add__F, "ti_sdo_io_Stream_add")
__extern xdc_Void ti_sdo_io_Stream_add__F( xdc_String name, ti_sdo_io_IConverter_Handle handle, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_Stream_add__R( xdc_String name, ti_sdo_io_IConverter_Handle handle, xdc_runtime_Error_Block* eb );

/* remove__E */
#define ti_sdo_io_Stream_remove ti_sdo_io_Stream_remove__E
xdc__CODESECT(ti_sdo_io_Stream_remove__E, "ti_sdo_io_Stream_remove")
__extern xdc_Void ti_sdo_io_Stream_remove__E( xdc_String name, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_remove__F, "ti_sdo_io_Stream_remove")
__extern xdc_Void ti_sdo_io_Stream_remove__F( xdc_String name, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_Stream_remove__R( xdc_String name, xdc_runtime_Error_Block* eb );

/* match__E */
#define ti_sdo_io_Stream_match ti_sdo_io_Stream_match__E
xdc__CODESECT(ti_sdo_io_Stream_match__E, "ti_sdo_io_Stream_match")
__extern xdc_Int ti_sdo_io_Stream_match__E( xdc_String name, ti_sdo_io_IConverter_Handle* handle, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_match__F, "ti_sdo_io_Stream_match")
__extern xdc_Int ti_sdo_io_Stream_match__F( xdc_String name, ti_sdo_io_IConverter_Handle* handle, xdc_runtime_Error_Block* eb );
__extern xdc_Int ti_sdo_io_Stream_match__R( xdc_String name, ti_sdo_io_IConverter_Handle* handle, xdc_runtime_Error_Block* eb );

/* completedLog__E */
#define ti_sdo_io_Stream_completedLog ti_sdo_io_Stream_completedLog__E
xdc__CODESECT(ti_sdo_io_Stream_completedLog__E, "ti_sdo_io_Stream_completedLog")
__extern xdc_Void ti_sdo_io_Stream_completedLog__E( xdc_UArg buf, xdc_UArg size, xdc_UArg arg );
xdc__CODESECT(ti_sdo_io_Stream_completedLog__F, "ti_sdo_io_Stream_completedLog")
__extern xdc_Void ti_sdo_io_Stream_completedLog__F( xdc_UArg buf, xdc_UArg size, xdc_UArg arg );
__extern xdc_Void ti_sdo_io_Stream_completedLog__R( xdc_UArg buf, xdc_UArg size, xdc_UArg arg );

/* issue__E */
#define ti_sdo_io_Stream_issue ti_sdo_io_Stream_issue__E
xdc__CODESECT(ti_sdo_io_Stream_issue__E, "ti_sdo_io_Stream_issue")
__extern xdc_Void ti_sdo_io_Stream_issue__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr buf, xdc_SizeT size, xdc_UArg arg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_issue__F, "ti_sdo_io_Stream_issue")
__extern xdc_Void ti_sdo_io_Stream_issue__F( ti_sdo_io_Stream_Object* __inst, xdc_Ptr buf, xdc_SizeT size, xdc_UArg arg, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_Stream_issue__R( ti_sdo_io_Stream_Handle __inst, xdc_Ptr buf, xdc_SizeT size, xdc_UArg arg, xdc_runtime_Error_Block* eb );

/* reclaim__E */
#define ti_sdo_io_Stream_reclaim ti_sdo_io_Stream_reclaim__E
xdc__CODESECT(ti_sdo_io_Stream_reclaim__E, "ti_sdo_io_Stream_reclaim")
__extern xdc_SizeT ti_sdo_io_Stream_reclaim__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr* pbufp, xdc_UInt timeout, xdc_UArg* parg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_reclaim__F, "ti_sdo_io_Stream_reclaim")
__extern xdc_SizeT ti_sdo_io_Stream_reclaim__F( ti_sdo_io_Stream_Object* __inst, xdc_Ptr* pbufp, xdc_UInt timeout, xdc_UArg* parg, xdc_runtime_Error_Block* eb );
__extern xdc_SizeT ti_sdo_io_Stream_reclaim__R( ti_sdo_io_Stream_Handle __inst, xdc_Ptr* pbufp, xdc_UInt timeout, xdc_UArg* parg, xdc_runtime_Error_Block* eb );

/* read__E */
#define ti_sdo_io_Stream_read ti_sdo_io_Stream_read__E
xdc__CODESECT(ti_sdo_io_Stream_read__E, "ti_sdo_io_Stream_read")
__extern xdc_SizeT ti_sdo_io_Stream_read__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, xdc_UInt timeout, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_read__F, "ti_sdo_io_Stream_read")
__extern xdc_SizeT ti_sdo_io_Stream_read__F( ti_sdo_io_Stream_Object* __inst, xdc_Ptr bufp, xdc_SizeT size, xdc_UInt timeout, xdc_runtime_Error_Block* eb );
__extern xdc_SizeT ti_sdo_io_Stream_read__R( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, xdc_UInt timeout, xdc_runtime_Error_Block* eb );

/* write__E */
#define ti_sdo_io_Stream_write ti_sdo_io_Stream_write__E
xdc__CODESECT(ti_sdo_io_Stream_write__E, "ti_sdo_io_Stream_write")
__extern xdc_SizeT ti_sdo_io_Stream_write__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, xdc_UInt timeout, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_write__F, "ti_sdo_io_Stream_write")
__extern xdc_SizeT ti_sdo_io_Stream_write__F( ti_sdo_io_Stream_Object* __inst, xdc_Ptr bufp, xdc_SizeT size, xdc_UInt timeout, xdc_runtime_Error_Block* eb );
__extern xdc_SizeT ti_sdo_io_Stream_write__R( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, xdc_UInt timeout, xdc_runtime_Error_Block* eb );

/* submit__E */
#define ti_sdo_io_Stream_submit ti_sdo_io_Stream_submit__E
xdc__CODESECT(ti_sdo_io_Stream_submit__E, "ti_sdo_io_Stream_submit")
__extern xdc_SizeT ti_sdo_io_Stream_submit__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, ti_sdo_io_DriverTypes_PacketCmd cmd, xdc_UInt timeout, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_submit__F, "ti_sdo_io_Stream_submit")
__extern xdc_SizeT ti_sdo_io_Stream_submit__F( ti_sdo_io_Stream_Object* __inst, xdc_Ptr bufp, xdc_SizeT size, ti_sdo_io_DriverTypes_PacketCmd cmd, xdc_UInt timeout, xdc_runtime_Error_Block* eb );
__extern xdc_SizeT ti_sdo_io_Stream_submit__R( ti_sdo_io_Stream_Handle __inst, xdc_Ptr bufp, xdc_SizeT size, ti_sdo_io_DriverTypes_PacketCmd cmd, xdc_UInt timeout, xdc_runtime_Error_Block* eb );

/* control__E */
#define ti_sdo_io_Stream_control ti_sdo_io_Stream_control__E
xdc__CODESECT(ti_sdo_io_Stream_control__E, "ti_sdo_io_Stream_control")
__extern xdc_Void ti_sdo_io_Stream_control__E( ti_sdo_io_Stream_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_control__F, "ti_sdo_io_Stream_control")
__extern xdc_Void ti_sdo_io_Stream_control__F( ti_sdo_io_Stream_Object* __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_Stream_control__R( ti_sdo_io_Stream_Handle __inst, ti_sdo_io_DriverTypes_ControlCmd cmd, xdc_UArg cmdArg, xdc_runtime_Error_Block* eb );

/* abort__E */
#define ti_sdo_io_Stream_abort ti_sdo_io_Stream_abort__E
xdc__CODESECT(ti_sdo_io_Stream_abort__E, "ti_sdo_io_Stream_abort")
__extern xdc_UInt ti_sdo_io_Stream_abort__E( ti_sdo_io_Stream_Handle __inst, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_abort__F, "ti_sdo_io_Stream_abort")
__extern xdc_UInt ti_sdo_io_Stream_abort__F( ti_sdo_io_Stream_Object* __inst, xdc_runtime_Error_Block* eb );
__extern xdc_UInt ti_sdo_io_Stream_abort__R( ti_sdo_io_Stream_Handle __inst, xdc_runtime_Error_Block* eb );

/* prime__E */
#define ti_sdo_io_Stream_prime ti_sdo_io_Stream_prime__E
xdc__CODESECT(ti_sdo_io_Stream_prime__E, "ti_sdo_io_Stream_prime")
__extern xdc_Void ti_sdo_io_Stream_prime__E( ti_sdo_io_Stream_Handle __inst, xdc_Ptr buf, xdc_UArg arg, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sdo_io_Stream_prime__F, "ti_sdo_io_Stream_prime")
__extern xdc_Void ti_sdo_io_Stream_prime__F( ti_sdo_io_Stream_Object* __inst, xdc_Ptr buf, xdc_UArg arg, xdc_runtime_Error_Block* eb );
__extern xdc_Void ti_sdo_io_Stream_prime__R( ti_sdo_io_Stream_Handle __inst, xdc_Ptr buf, xdc_UArg arg, xdc_runtime_Error_Block* eb );

/* internalCallback__I */
#define ti_sdo_io_Stream_internalCallback ti_sdo_io_Stream_internalCallback__I
xdc__CODESECT(ti_sdo_io_Stream_internalCallback__I, "ti_sdo_io_Stream_internalCallback")
__extern xdc_Void ti_sdo_io_Stream_internalCallback__I( xdc_UArg arg );

/* postInit__I */
#define ti_sdo_io_Stream_postInit ti_sdo_io_Stream_postInit__I
xdc__CODESECT(ti_sdo_io_Stream_postInit__I, "ti_sdo_io_Stream_postInit")
__extern xdc_Int ti_sdo_io_Stream_postInit__I( ti_sdo_io_Stream_Object* obj, xdc_runtime_Error_Block* eb );

/* issueX__I */
#define ti_sdo_io_Stream_issueX ti_sdo_io_Stream_issueX__I
xdc__CODESECT(ti_sdo_io_Stream_issueX__I, "ti_sdo_io_Stream_issueX")
__extern xdc_Void ti_sdo_io_Stream_issueX__I( ti_sdo_io_Stream_Object* obj, xdc_Ptr bufp, xdc_SizeT size, xdc_UArg arg, ti_sdo_io_DriverTypes_PacketCmd cmd, xdc_runtime_Error_Block* eb );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* issue_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_Stream_issue_FxnT)(void*, xdc_Ptr, xdc_SizeT, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_Stream_issue_FxnT ti_sdo_io_Stream_issue_fxnP( void )
{
    return (ti_sdo_io_Stream_issue_FxnT)ti_sdo_io_Stream_issue; 
}

/* reclaim_{FxnT,fxnP} */
typedef xdc_SizeT (*ti_sdo_io_Stream_reclaim_FxnT)(void*, xdc_Ptr*, xdc_UInt, xdc_UArg*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_Stream_reclaim_FxnT ti_sdo_io_Stream_reclaim_fxnP( void )
{
    return (ti_sdo_io_Stream_reclaim_FxnT)ti_sdo_io_Stream_reclaim; 
}

/* read_{FxnT,fxnP} */
typedef xdc_SizeT (*ti_sdo_io_Stream_read_FxnT)(void*, xdc_Ptr, xdc_SizeT, xdc_UInt, xdc_runtime_Error_Block*);
static inline ti_sdo_io_Stream_read_FxnT ti_sdo_io_Stream_read_fxnP( void )
{
    return (ti_sdo_io_Stream_read_FxnT)ti_sdo_io_Stream_read; 
}

/* write_{FxnT,fxnP} */
typedef xdc_SizeT (*ti_sdo_io_Stream_write_FxnT)(void*, xdc_Ptr, xdc_SizeT, xdc_UInt, xdc_runtime_Error_Block*);
static inline ti_sdo_io_Stream_write_FxnT ti_sdo_io_Stream_write_fxnP( void )
{
    return (ti_sdo_io_Stream_write_FxnT)ti_sdo_io_Stream_write; 
}

/* submit_{FxnT,fxnP} */
typedef xdc_SizeT (*ti_sdo_io_Stream_submit_FxnT)(void*, xdc_Ptr, xdc_SizeT, ti_sdo_io_DriverTypes_PacketCmd, xdc_UInt, xdc_runtime_Error_Block*);
static inline ti_sdo_io_Stream_submit_FxnT ti_sdo_io_Stream_submit_fxnP( void )
{
    return (ti_sdo_io_Stream_submit_FxnT)ti_sdo_io_Stream_submit; 
}

/* control_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_Stream_control_FxnT)(void*, ti_sdo_io_DriverTypes_ControlCmd, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_Stream_control_FxnT ti_sdo_io_Stream_control_fxnP( void )
{
    return (ti_sdo_io_Stream_control_FxnT)ti_sdo_io_Stream_control; 
}

/* abort_{FxnT,fxnP} */
typedef xdc_UInt (*ti_sdo_io_Stream_abort_FxnT)(void*, xdc_runtime_Error_Block*);
static inline ti_sdo_io_Stream_abort_FxnT ti_sdo_io_Stream_abort_fxnP( void )
{
    return (ti_sdo_io_Stream_abort_FxnT)ti_sdo_io_Stream_abort; 
}

/* prime_{FxnT,fxnP} */
typedef xdc_Void (*ti_sdo_io_Stream_prime_FxnT)(void*, xdc_Ptr, xdc_UArg, xdc_runtime_Error_Block*);
static inline ti_sdo_io_Stream_prime_FxnT ti_sdo_io_Stream_prime_fxnP( void )
{
    return (ti_sdo_io_Stream_prime_FxnT)ti_sdo_io_Stream_prime; 
}


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_io_Stream_Module_startupDone() ti_sdo_io_Stream_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_io_Stream_Object_heap() ti_sdo_io_Stream_Object__heap__C

/* Module_heap */
#define ti_sdo_io_Stream_Module_heap() ti_sdo_io_Stream_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_io_Stream_Module__id ti_sdo_io_Stream_Module_id( void ) 
{
    return ti_sdo_io_Stream_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_io_Stream_Module_hasMask( void ) 
{
    return ti_sdo_io_Stream_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_io_Stream_Module_getMask( void ) 
{
    return ti_sdo_io_Stream_Module__diagsMask__C != NULL ? *ti_sdo_io_Stream_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_io_Stream_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_io_Stream_Module__diagsMask__C != NULL) *ti_sdo_io_Stream_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sdo_io_Stream_Params_init( ti_sdo_io_Stream_Params* prms ) 
{
    if (prms) {
        ti_sdo_io_Stream_Params__init__S(prms, 0, sizeof(ti_sdo_io_Stream_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sdo_io_Stream_Params_copy( ti_sdo_io_Stream_Params* dst, const ti_sdo_io_Stream_Params* src ) 
{
    if (dst) {
        ti_sdo_io_Stream_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sdo_io_Stream_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sdo_io_Stream_Object_count() ti_sdo_io_Stream_Object__count__C

/* Object_sizeof */
#define ti_sdo_io_Stream_Object_sizeof() ti_sdo_io_Stream_Object__sizeof__C

/* Object_get */
static inline ti_sdo_io_Stream_Handle ti_sdo_io_Stream_Object_get( ti_sdo_io_Stream_Instance_State* oarr, int i ) 
{
    return (ti_sdo_io_Stream_Handle)ti_sdo_io_Stream_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sdo_io_Stream_Handle ti_sdo_io_Stream_Object_first( void )
{
    return (ti_sdo_io_Stream_Handle)ti_sdo_io_Stream_Object__first__S();
}

/* Object_next */
static inline ti_sdo_io_Stream_Handle ti_sdo_io_Stream_Object_next( ti_sdo_io_Stream_Object* obj )
{
    return (ti_sdo_io_Stream_Handle)ti_sdo_io_Stream_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sdo_io_Stream_Handle_label( ti_sdo_io_Stream_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sdo_io_Stream_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sdo_io_Stream_Handle_name( ti_sdo_io_Stream_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sdo_io_Stream_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sdo_io_Stream_Handle ti_sdo_io_Stream_create( xdc_String name, xdc_UInt mode, const ti_sdo_io_Stream_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_io_Stream_Args__create __args;
    __args.name = name;
    __args.mode = mode;
    return (ti_sdo_io_Stream_Handle)ti_sdo_io_Stream_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sdo_io_Stream_Params), __eb);
}

/* construct */
static inline void ti_sdo_io_Stream_construct( ti_sdo_io_Stream_Struct* __obj, xdc_String name, xdc_UInt mode, const ti_sdo_io_Stream_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    ti_sdo_io_Stream_Args__create __args;
    __args.name = name;
    __args.mode = mode;
    ti_sdo_io_Stream_Object__create__S(__obj, sizeof (ti_sdo_io_Stream_Struct), &__args, (const xdc_UChar*)__prms, sizeof(ti_sdo_io_Stream_Params), __eb);
}

/* delete */
static inline void ti_sdo_io_Stream_delete( ti_sdo_io_Stream_Handle* instp )
{
    ti_sdo_io_Stream_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sdo_io_Stream_destruct( ti_sdo_io_Stream_Struct* obj )
{
    ti_sdo_io_Stream_Object__destruct__S(obj);
}

/* handle */
static inline ti_sdo_io_Stream_Handle ti_sdo_io_Stream_handle( ti_sdo_io_Stream_Struct* str )
{
    return (ti_sdo_io_Stream_Handle)str;
}

/* struct */
static inline ti_sdo_io_Stream_Struct* ti_sdo_io_Stream_struct( ti_sdo_io_Stream_Handle inst )
{
    return (ti_sdo_io_Stream_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_io_Stream__top__
#undef __nested__
#endif

#endif /* ti_sdo_io_Stream__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_io_Stream__internalaccess))

#ifndef ti_sdo_io_Stream__include_state
#define ti_sdo_io_Stream__include_state

/* Module_State */
struct ti_sdo_io_Stream_Module_State {
    ti_sdo_utils_NameServer_Handle convTable;
};

/* Module__state__V */
extern struct ti_sdo_io_Stream_Module_State__ ti_sdo_io_Stream_Module__state__V;

/* Object */
struct ti_sdo_io_Stream_Object {
    xdc_String name;
    xdc_UArg chanParams;
    xdc_Bool drvAdapHdl;
    __TA_ti_sdo_io_Stream_Instance_State__packets packets;
    xdc_UInt maxIssues;
    xdc_UInt issued;
    xdc_UInt ready;
    xdc_UInt mode;
    xdc_runtime_IHeap_Handle packetHeap;
    xdc_runtime_knl_ISync_Handle complete;
    xdc_Bool userSync;
    ti_sdo_io_IConverter_Handle convHandle;
    char __dummy;
};

/* Instance_State_freeList */
__extern __FAR__ const xdc_SizeT ti_sdo_io_Stream_Instance_State_freeList__O;
static inline ti_sdo_utils_List_Handle ti_sdo_io_Stream_Instance_State_freeList(ti_sdo_io_Stream_Object* obj)
{
    return (ti_sdo_utils_List_Handle)(((char*)obj) + ti_sdo_io_Stream_Instance_State_freeList__O);
}

#endif /* ti_sdo_io_Stream__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_io_Stream__nolocalnames)

#ifndef ti_sdo_io_Stream__localnames__done
#define ti_sdo_io_Stream__localnames__done

/* module prefix */
#define Stream_Instance ti_sdo_io_Stream_Instance
#define Stream_Handle ti_sdo_io_Stream_Handle
#define Stream_Module ti_sdo_io_Stream_Module
#define Stream_Object ti_sdo_io_Stream_Object
#define Stream_Struct ti_sdo_io_Stream_Struct
#define Stream_INPUT ti_sdo_io_Stream_INPUT
#define Stream_OUTPUT ti_sdo_io_Stream_OUTPUT
#define Stream_INOUT ti_sdo_io_Stream_INOUT
#define Stream_Entry ti_sdo_io_Stream_Entry
#define Stream_Instance_State ti_sdo_io_Stream_Instance_State
#define Stream_Module_State ti_sdo_io_Stream_Module_State
#define Stream_E_notFound ti_sdo_io_Stream_E_notFound
#define Stream_E_noPackets ti_sdo_io_Stream_E_noPackets
#define Stream_E_noBuffersIssued ti_sdo_io_Stream_E_noBuffersIssued
#define Stream_E_timeout ti_sdo_io_Stream_E_timeout
#define Stream_A_badMode ti_sdo_io_Stream_A_badMode
#define Stream_A_pendingReclaims ti_sdo_io_Stream_A_pendingReclaims
#define Stream_A_syncNonBlocking ti_sdo_io_Stream_A_syncNonBlocking
#define Stream_maxRuntimeEntries ti_sdo_io_Stream_maxRuntimeEntries
#define Stream_gate ti_sdo_io_Stream_gate
#define Stream_maxNameLen ti_sdo_io_Stream_maxNameLen
#define Stream_Instance_State_freeList ti_sdo_io_Stream_Instance_State_freeList
#define Stream_Params ti_sdo_io_Stream_Params
#define Stream_add ti_sdo_io_Stream_add
#define Stream_remove ti_sdo_io_Stream_remove
#define Stream_match ti_sdo_io_Stream_match
#define Stream_completedLog ti_sdo_io_Stream_completedLog
#define Stream_issue ti_sdo_io_Stream_issue
#define Stream_issue_fxnP ti_sdo_io_Stream_issue_fxnP
#define Stream_issue_FxnT ti_sdo_io_Stream_issue_FxnT
#define Stream_reclaim ti_sdo_io_Stream_reclaim
#define Stream_reclaim_fxnP ti_sdo_io_Stream_reclaim_fxnP
#define Stream_reclaim_FxnT ti_sdo_io_Stream_reclaim_FxnT
#define Stream_read ti_sdo_io_Stream_read
#define Stream_read_fxnP ti_sdo_io_Stream_read_fxnP
#define Stream_read_FxnT ti_sdo_io_Stream_read_FxnT
#define Stream_write ti_sdo_io_Stream_write
#define Stream_write_fxnP ti_sdo_io_Stream_write_fxnP
#define Stream_write_FxnT ti_sdo_io_Stream_write_FxnT
#define Stream_submit ti_sdo_io_Stream_submit
#define Stream_submit_fxnP ti_sdo_io_Stream_submit_fxnP
#define Stream_submit_FxnT ti_sdo_io_Stream_submit_FxnT
#define Stream_control ti_sdo_io_Stream_control
#define Stream_control_fxnP ti_sdo_io_Stream_control_fxnP
#define Stream_control_FxnT ti_sdo_io_Stream_control_FxnT
#define Stream_abort ti_sdo_io_Stream_abort
#define Stream_abort_fxnP ti_sdo_io_Stream_abort_fxnP
#define Stream_abort_FxnT ti_sdo_io_Stream_abort_FxnT
#define Stream_prime ti_sdo_io_Stream_prime
#define Stream_prime_fxnP ti_sdo_io_Stream_prime_fxnP
#define Stream_prime_FxnT ti_sdo_io_Stream_prime_FxnT
#define Stream_Module_name ti_sdo_io_Stream_Module_name
#define Stream_Module_id ti_sdo_io_Stream_Module_id
#define Stream_Module_startup ti_sdo_io_Stream_Module_startup
#define Stream_Module_startupDone ti_sdo_io_Stream_Module_startupDone
#define Stream_Module_hasMask ti_sdo_io_Stream_Module_hasMask
#define Stream_Module_getMask ti_sdo_io_Stream_Module_getMask
#define Stream_Module_setMask ti_sdo_io_Stream_Module_setMask
#define Stream_Object_heap ti_sdo_io_Stream_Object_heap
#define Stream_Module_heap ti_sdo_io_Stream_Module_heap
#define Stream_construct ti_sdo_io_Stream_construct
#define Stream_create ti_sdo_io_Stream_create
#define Stream_handle ti_sdo_io_Stream_handle
#define Stream_struct ti_sdo_io_Stream_struct
#define Stream_Handle_label ti_sdo_io_Stream_Handle_label
#define Stream_Handle_name ti_sdo_io_Stream_Handle_name
#define Stream_Instance_init ti_sdo_io_Stream_Instance_init
#define Stream_Object_count ti_sdo_io_Stream_Object_count
#define Stream_Object_get ti_sdo_io_Stream_Object_get
#define Stream_Object_first ti_sdo_io_Stream_Object_first
#define Stream_Object_next ti_sdo_io_Stream_Object_next
#define Stream_Object_sizeof ti_sdo_io_Stream_Object_sizeof
#define Stream_Params_copy ti_sdo_io_Stream_Params_copy
#define Stream_Params_init ti_sdo_io_Stream_Params_init
#define Stream_Instance_finalize ti_sdo_io_Stream_Instance_finalize
#define Stream_delete ti_sdo_io_Stream_delete
#define Stream_destruct ti_sdo_io_Stream_destruct

#endif /* ti_sdo_io_Stream__localnames__done */
#endif
/*
 *  @(#) ti.sdo.io; 1, 0, 0, 0,; 11-7-2012 13:08:01; /db/vtree/library/trees/ipc/ipc-i09/src/ xlibrary

 */

