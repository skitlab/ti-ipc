/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sdo/ipc/Notify.h>
#include <ti/sdo/ipc/notifyDrivers/NotifySetupNull.h>
#include <ti/sdo/utils/List.h>
#include <ti/sdo/utils/MultiProc.h>
#include <ti/sdo/utils/NameServerRemoteNull.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/c62/IntrinsicsSupport.h>
#include <ti/sysbios/family/c62/TaskSupport.h>
#include <ti/sysbios/family/c64p/Exception.h>
#include <ti/sysbios/family/c64p/Hwi.h>
#include <ti/sysbios/family/c64p/tci6488/TimerSupport.h>
#include <ti/sysbios/family/c66/Cache.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/gates/GateSwi.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/timers/timer64/Timer.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysStd.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>


/*
 * ======== ti.sdo.ipc.Notify INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_ipc_Notify_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_ipc_Notify_Module__;

/* Module__root__V */
extern ti_sdo_ipc_Notify_Module__ ti_sdo_ipc_Notify_Module__root__V;

/* Object__ */
typedef struct ti_sdo_ipc_Notify_Object__ {
    xdc_UInt nesting;
    ti_sdo_ipc_interfaces_INotifyDriver_Handle driverHandle;
    xdc_UInt16 remoteProcId;
    xdc_UInt16 lineId;
    __TA_ti_sdo_ipc_Notify_Instance_State__callbacks callbacks;
    __TA_ti_sdo_ipc_Notify_Instance_State__eventList eventList;
} ti_sdo_ipc_Notify_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_ipc_Notify_Object__ obj;
} ti_sdo_ipc_Notify_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_ipc_Notify___VERS
    #define ti_sdo_ipc_Notify___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_ipc_Notify___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.ipc.Notify_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_ipc_Notify_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_ipc_Notify_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sdo_ipc_Notify_Module_GateProxy_Module__ ti_sdo_ipc_Notify_Module_GateProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateSwi_Object__ {
    const ti_sysbios_gates_GateSwi_Fxns__* __fxns;
} ti_sysbios_gates_GateSwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateSwi_Object__ obj;
} ti_sysbios_gates_GateSwi_Object2__;

/* Object */
typedef ti_sysbios_gates_GateSwi_Object__ ti_sdo_ipc_Notify_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_ipc_Notify_Module_GateProxy_Object__ obj;
} ti_sdo_ipc_Notify_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_ipc_Notify_Module_GateProxy___VERS
    #define ti_sdo_ipc_Notify_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_ipc_Notify_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.ipc.Notify_SetupProxy INTERNALS ========
 */


/*
 * ======== ti.sdo.ipc.notifyDrivers.NotifySetupNull INTERNALS ========
 */


/*
 * ======== ti.sdo.utils.List INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_utils_List_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_utils_List_Module__;

/* Module__root__V */
extern ti_sdo_utils_List_Module__ ti_sdo_utils_List_Module__root__V;

/* Object__ */
typedef struct ti_sdo_utils_List_Object__ {
    ti_sdo_utils_List_Elem elem;
} ti_sdo_utils_List_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_utils_List_Object__ obj;
} ti_sdo_utils_List_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_utils_List___VERS
    #define ti_sdo_utils_List___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_utils_List___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sdo.utils.MultiProc INTERNALS ========
 */


/*
 * ======== ti.sdo.utils.NameServerRemoteNull INTERNALS ========
 */

/* Module__ */
typedef struct ti_sdo_utils_NameServerRemoteNull_Module__ {
    xdc_runtime_Types_Link link;
} ti_sdo_utils_NameServerRemoteNull_Module__;

/* Module__root__V */
extern ti_sdo_utils_NameServerRemoteNull_Module__ ti_sdo_utils_NameServerRemoteNull_Module__root__V;

/* Object__ */
typedef struct ti_sdo_utils_NameServerRemoteNull_Object__ {
    const ti_sdo_utils_NameServerRemoteNull_Fxns__* __fxns;
} ti_sdo_utils_NameServerRemoteNull_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sdo_utils_NameServerRemoteNull_Object__ obj;
} ti_sdo_utils_NameServerRemoteNull_Object2__;

/* __ParamsPtr */
#ifdef ti_sdo_utils_NameServerRemoteNull___VERS
    #define ti_sdo_utils_NameServerRemoteNull___ParamsPtr xdc_UChar*
#else
    #define ti_sdo_utils_NameServerRemoteNull___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Exception INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_c64p_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_c64p_Hwi_Object__ {
    const ti_sysbios_family_c64p_Hwi_Fxns__* __fxns;
    xdc_Bits16 disableMask;
    xdc_Bits16 restoreMask;
    xdc_UArg arg;
    ti_sysbios_family_c64p_Hwi_FuncPtr fxn;
    ti_sysbios_family_c64p_Hwi_Irp irp;
    __TA_ti_sysbios_family_c64p_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_c64p_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_c64p_Hwi_Object__ obj;
} ti_sysbios_family_c64p_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_c64p_Hwi___VERS
    #define ti_sysbios_family_c64p_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_c64p_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.c66.Cache INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateSwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateSwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateSwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateSwi_Module__ ti_sysbios_gates_GateSwi_Module__root__V;

/* <-- ti_sysbios_gates_GateSwi_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateSwi___VERS
    #define ti_sysbios_gates_GateSwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateSwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_c64p_Hwi_Object */

/* Object */
typedef ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_timers_timer64_Timer_Object__ {
    const ti_sysbios_timers_timer64_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_timers_timer64_Timer_Half half;
    xdc_UInt tcrInit;
    xdc_UInt emumgtInit;
    xdc_UInt gpioIntEn;
    xdc_UInt gpioDatDir;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt prescalar;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_hal_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_hal_Hwi_Handle hwi;
} ti_sysbios_timers_timer64_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_timers_timer64_Timer_Object__ obj;
} ti_sysbios_timers_timer64_Timer_Object2__;

/* Object */
typedef ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_timers_timer64_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V;

/* <-- ti_sysbios_timers_timer64_Timer_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_timers_timer64_Timer___VERS
    #define ti_sysbios_timers_timer64_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_timers_timer64_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysStd INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== ti.sdo.ipc.notifyDrivers.NotifySetupNull INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sdo_ipc_interfaces_INotifySetup_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.gates.GateSwi INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysStd INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sdo.ipc.notifyDrivers.NotifySetupNull VTABLE ========
 */

/* Module__FXNS__C */
const ti_sdo_ipc_notifyDrivers_NotifySetupNull_Fxns__ ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__FXNS__C = {
    (void*)&ti_sdo_ipc_interfaces_INotifySetup_Interface__BASE__C, /* base__ */
    &ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sdo_ipc_notifyDrivers_NotifySetupNull_attach__E,
    ti_sdo_ipc_notifyDrivers_NotifySetupNull_sharedMemReq__E,
    ti_sdo_ipc_notifyDrivers_NotifySetupNull_numIntLines__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8039, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_c64p_tci6488_TimerSupport_Fxns__ ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_c64p_tci6488_TimerSupport_enable__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8035, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8021, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8023, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateSwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateSwi_Fxns__ ti_sysbios_gates_GateSwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateSwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateSwi_query__E,
    ti_sysbios_gates_GateSwi_enter__E,
    ti_sysbios_gates_GateSwi_leave__E,
    {
        ti_sysbios_gates_GateSwi_Object__create__S,
        ti_sysbios_gates_GateSwi_Object__delete__S,
        ti_sysbios_gates_GateSwi_Handle__label__S,
        0x8022, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysStd VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysStd_Fxns__ xdc_runtime_SysStd_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysStd_abort__E,
    xdc_runtime_SysStd_exit__E,
    xdc_runtime_SysStd_flush__E,
    xdc_runtime_SysStd_putch__E,
    xdc_runtime_SysStd_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sdo.ipc.Notify DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sdo_ipc_Notify_Module_State__ {
    __TA_ti_sdo_ipc_Notify_Module_State__notifyHandles notifyHandles;
    xdc_Bits32 localEnableMask;
} ti_sdo_ipc_Notify_Module_State__;

/* --> ti_sdo_ipc_Notify_Module_State_0_notifyHandles_0__A */
__T1_ti_sdo_ipc_Notify_Module_State__notifyHandles ti_sdo_ipc_Notify_Module_State_0_notifyHandles_0__A[1];

/* --> ti_sdo_ipc_Notify_Module_State_0_notifyHandles__A */
__T2_ti_sdo_ipc_Notify_Module_State__notifyHandles ti_sdo_ipc_Notify_Module_State_0_notifyHandles__A[1];

/* Module__state__V */
ti_sdo_ipc_Notify_Module_State__ ti_sdo_ipc_Notify_Module__state__V;


/*
 * ======== ti.sdo.ipc.Notify_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sdo.ipc.Notify_SetupProxy DECLARATIONS ========
 */


/*
 * ======== ti.sdo.ipc.notifyDrivers.NotifySetupNull DECLARATIONS ========
 */


/*
 * ======== ti.sdo.utils.List DECLARATIONS ========
 */


/*
 * ======== ti.sdo.utils.MultiProc DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sdo_utils_MultiProc_Module_State__ {
    xdc_UInt16 id;
    xdc_UInt16 baseIdOfCluster;
} ti_sdo_utils_MultiProc_Module_State__;

/* Module__state__V */
ti_sdo_utils_MultiProc_Module_State__ ti_sdo_utils_MultiProc_Module__state__V;

/* --> ti_sdo_utils_MultiProc_nameList__A */
const __T1_ti_sdo_utils_MultiProc_nameList ti_sdo_utils_MultiProc_nameList__A[1];


/*
 * ======== ti.sdo.utils.NameServerRemoteNull DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c62.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c64p.Exception DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Exception_Module_State__ {
    xdc_Bits32 efr;
    xdc_Bits32 nrp;
    xdc_Bits32 ntsr;
    xdc_Bits32 ierr;
    ti_sysbios_family_c64p_Exception_FuncPtr returnHook;
    ti_sysbios_family_c64p_Exception_Context* excContext;
    __TA_ti_sysbios_family_c64p_Exception_Module_State__scratch scratch;
    xdc_Char* isrStack;
} ti_sysbios_family_c64p_Exception_Module_State__;

/* Module__state__V */
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V;


/*
 * ======== ti.sysbios.family.c64p.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_c64p_Hwi_Module_State__ {
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__intEvents intEvents;
    xdc_Bits16 ierMask;
    volatile xdc_Int intNum;
    xdc_Char* taskSP;
    xdc_Char* isrStack;
    xdc_Ptr vectorTableBase;
    xdc_Ptr bss;
    __TA_ti_sysbios_family_c64p_Hwi_Module_State__dispatchTable dispatchTable;
} ti_sysbios_family_c64p_Hwi_Module_State__;

/* --> ti_sysbios_family_c64p_Hwi0 */
extern void* ti_sysbios_family_c64p_Hwi0;

/* --> __TI_STATIC_BASE */
extern void* __TI_STATIC_BASE;

/* Module__state__V */
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V;

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.c66.Cache DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.gates.GateSwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateSwi_Object__ ti_sysbios_gates_GateSwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __ICC430__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __ICC430__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".far:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".far:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurQ smpCurQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_timers_timer64_Timer_Module_State__ {
    xdc_Bits32 availMask;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs intFreqs;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__gctrl gctrl;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__device device;
    __TA_ti_sysbios_timers_timer64_Timer_Module_State__handles handles;
} ti_sysbios_timers_timer64_Timer_Module_State__;

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[16];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[16];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[32];

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[32];

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V;

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[16];


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Exception_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Exception_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c64p_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_c64p_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sdo_ipc_Notify_Module_startup__E */
extern xdc_Int ti_sdo_ipc_Notify_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_c66_Cache_Module_startup__E */
extern xdc_Int ti_sysbios_family_c66_Cache_Module_startup__E(xdc_Int);

/* --> ti_sysbios_timers_timer64_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11];


/*
 * ======== xdc.runtime.SysStd DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_Char**,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7556];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[58];


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /db/vtree/library/trees/ipc/ipc-i09/src/ti/sdo/ipc/examples/singlecore/package/cfg/release/notify_loopback_pe66");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 66");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.sdo.ipc.examples.platforms.evm6678.core0");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.elf.C66");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sdo_ipc_Notify_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_c66_Cache_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[11];
    xdc_runtime_Startup_startModsFxn__C(state, 11);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, Char **pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    Char    *fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->ptr, pva, parse->aFlag);
            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[6];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi TEMPLATE ========
 */


asm("           .sect \".vecs\"         ");
asm("           .align 0x400            ");
asm("           .nocmp                  ");
asm("           .global ti_sysbios_family_c64p_Hwi0          ");
asm("ti_sysbios_family_c64p_Hwi0:                            ");
asm("           .global ti_sysbios_family_c64p_Hwi_int0         ");
asm("           .global _c_int00         ");
asm("ti_sysbios_family_c64p_Hwi_int0:                           ");
asm("           nop                     ");
asm("           nop                     ");
asm("           nop                     ");
asm("           mvkl    _c_int00, b0     ");
asm("           mvkh    _c_int00, b0     ");
asm("           b       b0              ");
asm("           nop                     ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int1         ");
asm("           .global ti_sysbios_family_c64p_Exception_dispatch__E         ");
asm("ti_sysbios_family_c64p_Hwi_int1:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     1, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Exception_dispatch__E, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int2         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int2         ");
asm("ti_sysbios_family_c64p_Hwi_int2:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     2, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int2, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int2, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int3         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int3         ");
asm("ti_sysbios_family_c64p_Hwi_int3:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     3, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int3, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int3, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int4         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int4         ");
asm("ti_sysbios_family_c64p_Hwi_int4:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     4, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int4, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int4, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int5         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int5         ");
asm("ti_sysbios_family_c64p_Hwi_int5:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     5, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int5, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int5, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int6         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int6         ");
asm("ti_sysbios_family_c64p_Hwi_int6:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     6, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int6, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int6, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int7         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int7         ");
asm("ti_sysbios_family_c64p_Hwi_int7:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     7, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int7, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int7, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int8         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int8         ");
asm("ti_sysbios_family_c64p_Hwi_int8:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     8, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int8, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int8, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int9         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int9         ");
asm("ti_sysbios_family_c64p_Hwi_int9:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     9, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int9, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int9, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int10         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int10         ");
asm("ti_sysbios_family_c64p_Hwi_int10:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     10, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int10, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int10, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int11         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int11         ");
asm("ti_sysbios_family_c64p_Hwi_int11:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     11, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int11, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int11, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int12         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int12         ");
asm("ti_sysbios_family_c64p_Hwi_int12:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     12, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int12, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int12, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int13         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int13         ");
asm("ti_sysbios_family_c64p_Hwi_int13:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     13, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int13, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int13, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int14         ");
asm("           .global ti_sysbios_family_c64p_Hwi_dispatchAlways         ");
asm("ti_sysbios_family_c64p_Hwi_int14:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     14, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_dispatchAlways, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");

asm("           .global ti_sysbios_family_c64p_Hwi_int15         ");
asm("           .global ti_sysbios_family_c64p_Hwi_int15         ");
asm("ti_sysbios_family_c64p_Hwi_int15:                           ");
asm("           stw     b0, *b15--[2]   ");
asm("           mvk     15, b0         ");
asm("           stw     b0, *b15[1]     ");
asm("           mvkl    ti_sysbios_family_c64p_Hwi_int15, b0     ");
asm("           mvkh    ti_sysbios_family_c64p_Hwi_int15, b0     ");
asm("           b       b0              ");
asm("           ldw     *++b15[2], b0   ");
asm("           nop     4               ");



/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sdo.utils.Build TEMPLATE ========
 */



/*
 * ======== ti.sdo.ipc.Build TEMPLATE ========
 */



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__ICC430__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#if !defined(__ICC430__)
#include <stdlib.h>
#endif

#include <string.h>

/* malloc header */
typedef struct Header {
    Ptr   actualBuf;
    UArg  size;
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->actualBuf = (Ptr)packet;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    /*
     * If alignment is not a power of two or is less than the minimum
     * alignment of malloc(), then simply return what malloc() returns.
     * (same as behaviour as RTS library's memalign())
     * Note: HeapMem's header is the same as this header after it is raised
     * to a power of 2.
     */
    if (alignment <= sizeof(Header) || (alignment & (alignment-1))) {
        return malloc(size);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size,
        (SizeT)alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->actualBuf = tmp;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->actualBuf,
            (packet->size + ((char*)packet - (char*)packet->actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}


/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sdo.ipc.Notify INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_ipc_Notify_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_ipc_Notify_Params ti_sdo_ipc_Notify_Object__PARAMS__C = {
    sizeof (ti_sdo_ipc_Notify_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_ipc_Notify_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_ipc_Notify_Module__ ti_sdo_ipc_Notify_Module__root__V = {
    {&ti_sdo_ipc_Notify_Module__root__V.link,  /* link.next */
    &ti_sdo_ipc_Notify_Module__root__V.link},  /* link.prev */
};

/* --> ti_sdo_ipc_Notify_Module_State_0_notifyHandles_0__A */
__T1_ti_sdo_ipc_Notify_Module_State__notifyHandles ti_sdo_ipc_Notify_Module_State_0_notifyHandles_0__A[1] = {
    0,  /* [0] */
};

/* --> ti_sdo_ipc_Notify_Module_State_0_notifyHandles__A */
__T2_ti_sdo_ipc_Notify_Module_State__notifyHandles ti_sdo_ipc_Notify_Module_State_0_notifyHandles__A[1] = {
    ((void*)ti_sdo_ipc_Notify_Module_State_0_notifyHandles_0__A),  /* [0] */
};

/* Module__state__V */
ti_sdo_ipc_Notify_Module_State__ ti_sdo_ipc_Notify_Module__state__V = {
    ((void*)ti_sdo_ipc_Notify_Module_State_0_notifyHandles__A),  /* notifyHandles */
    (xdc_Bits32)(-0x0 - 1),  /* localEnableMask */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__diagsEnabled ti_sdo_ipc_Notify_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__diagsIncluded ti_sdo_ipc_Notify_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__diagsMask ti_sdo_ipc_Notify_Module__diagsMask__C = ((CT__ti_sdo_ipc_Notify_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__gateObj ti_sdo_ipc_Notify_Module__gateObj__C = ((CT__ti_sdo_ipc_Notify_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateSwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__gatePrms ti_sdo_ipc_Notify_Module__gatePrms__C = ((CT__ti_sdo_ipc_Notify_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__id ti_sdo_ipc_Notify_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__loggerDefined ti_sdo_ipc_Notify_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__loggerObj ti_sdo_ipc_Notify_Module__loggerObj__C = ((CT__ti_sdo_ipc_Notify_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__loggerFxn0 ti_sdo_ipc_Notify_Module__loggerFxn0__C = ((CT__ti_sdo_ipc_Notify_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__loggerFxn1 ti_sdo_ipc_Notify_Module__loggerFxn1__C = ((CT__ti_sdo_ipc_Notify_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__loggerFxn2 ti_sdo_ipc_Notify_Module__loggerFxn2__C = ((CT__ti_sdo_ipc_Notify_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__loggerFxn4 ti_sdo_ipc_Notify_Module__loggerFxn4__C = ((CT__ti_sdo_ipc_Notify_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__loggerFxn8 ti_sdo_ipc_Notify_Module__loggerFxn8__C = ((CT__ti_sdo_ipc_Notify_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Module__startupDoneFxn ti_sdo_ipc_Notify_Module__startupDoneFxn__C = ((CT__ti_sdo_ipc_Notify_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Object__count ti_sdo_ipc_Notify_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Object__heap ti_sdo_ipc_Notify_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Object__sizeof ti_sdo_ipc_Notify_Object__sizeof__C = sizeof(ti_sdo_ipc_Notify_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_ipc_Notify_Object__table ti_sdo_ipc_Notify_Object__table__C = 0;

/* A_alreadyRegistered__C */
__FAR__ const CT__ti_sdo_ipc_Notify_A_alreadyRegistered ti_sdo_ipc_Notify_A_alreadyRegistered__C = (((xdc_runtime_Assert_Id)3377) << 16 | 16);

/* A_notRegistered__C */
__FAR__ const CT__ti_sdo_ipc_Notify_A_notRegistered ti_sdo_ipc_Notify_A_notRegistered__C = (((xdc_runtime_Assert_Id)3456) << 16 | 16);

/* A_reservedEvent__C */
__FAR__ const CT__ti_sdo_ipc_Notify_A_reservedEvent ti_sdo_ipc_Notify_A_reservedEvent__C = (((xdc_runtime_Assert_Id)3531) << 16 | 16);

/* A_outOfOrderNesting__C */
__FAR__ const CT__ti_sdo_ipc_Notify_A_outOfOrderNesting ti_sdo_ipc_Notify_A_outOfOrderNesting__C = (((xdc_runtime_Assert_Id)3581) << 16 | 16);

/* A_invArgument__C */
__FAR__ const CT__ti_sdo_ipc_Notify_A_invArgument ti_sdo_ipc_Notify_A_invArgument__C = (((xdc_runtime_Assert_Id)1854) << 16 | 16);

/* A_internal__C */
__FAR__ const CT__ti_sdo_ipc_Notify_A_internal ti_sdo_ipc_Notify_A_internal__C = (((xdc_runtime_Assert_Id)3334) << 16 | 16);

/* numEvents__C */
__FAR__ const CT__ti_sdo_ipc_Notify_numEvents ti_sdo_ipc_Notify_numEvents__C = (xdc_UInt)0x20;

/* sendEventPollCount__C */
__FAR__ const CT__ti_sdo_ipc_Notify_sendEventPollCount ti_sdo_ipc_Notify_sendEventPollCount__C = (xdc_UInt32)(-0x0 - 1);

/* numLines__C */
__FAR__ const CT__ti_sdo_ipc_Notify_numLines ti_sdo_ipc_Notify_numLines__C = (xdc_UInt16)0x1;

/* reservedEvents__C */
__FAR__ const CT__ti_sdo_ipc_Notify_reservedEvents ti_sdo_ipc_Notify_reservedEvents__C = (xdc_UInt16)0x5;


/*
 * ======== ti.sdo.ipc.Notify_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sdo.ipc.Notify_SetupProxy INITIALIZERS ========
 */


/*
 * ======== ti.sdo.ipc.notifyDrivers.NotifySetupNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsEnabled ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsIncluded ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsMask ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsMask__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gateObj ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gateObj__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gatePrms ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gatePrms__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__id ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__id__C = (xdc_Bits16)0x8039;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerDefined ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerObj ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerObj__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn0 ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn0__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn1 ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn1__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn2 ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn2__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn4 ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn4__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn8 ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn8__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__startupDoneFxn ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__startupDoneFxn__C = ((CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__count ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__heap ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__sizeof ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__table ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__table__C = 0;


/*
 * ======== ti.sdo.utils.List INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_List_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_utils_List_Params ti_sdo_utils_List_Object__PARAMS__C = {
    sizeof (ti_sdo_utils_List_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_utils_List_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_utils_List_Module__ ti_sdo_utils_List_Module__root__V = {
    {&ti_sdo_utils_List_Module__root__V.link,  /* link.next */
    &ti_sdo_utils_List_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_utils_List_Module__diagsEnabled ti_sdo_utils_List_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_utils_List_Module__diagsIncluded ti_sdo_utils_List_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_utils_List_Module__diagsMask ti_sdo_utils_List_Module__diagsMask__C = ((CT__ti_sdo_utils_List_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_utils_List_Module__gateObj ti_sdo_utils_List_Module__gateObj__C = ((CT__ti_sdo_utils_List_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_utils_List_Module__gatePrms ti_sdo_utils_List_Module__gatePrms__C = ((CT__ti_sdo_utils_List_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_utils_List_Module__id ti_sdo_utils_List_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerDefined ti_sdo_utils_List_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerObj ti_sdo_utils_List_Module__loggerObj__C = ((CT__ti_sdo_utils_List_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn0 ti_sdo_utils_List_Module__loggerFxn0__C = ((CT__ti_sdo_utils_List_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn1 ti_sdo_utils_List_Module__loggerFxn1__C = ((CT__ti_sdo_utils_List_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn2 ti_sdo_utils_List_Module__loggerFxn2__C = ((CT__ti_sdo_utils_List_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn4 ti_sdo_utils_List_Module__loggerFxn4__C = ((CT__ti_sdo_utils_List_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_utils_List_Module__loggerFxn8 ti_sdo_utils_List_Module__loggerFxn8__C = ((CT__ti_sdo_utils_List_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_utils_List_Module__startupDoneFxn ti_sdo_utils_List_Module__startupDoneFxn__C = ((CT__ti_sdo_utils_List_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_utils_List_Object__count ti_sdo_utils_List_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_utils_List_Object__heap ti_sdo_utils_List_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_utils_List_Object__sizeof ti_sdo_utils_List_Object__sizeof__C = sizeof(ti_sdo_utils_List_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_utils_List_Object__table ti_sdo_utils_List_Object__table__C = 0;


/*
 * ======== ti.sdo.utils.MultiProc INITIALIZERS ========
 */

/* Module__state__V */
ti_sdo_utils_MultiProc_Module_State__ ti_sdo_utils_MultiProc_Module__state__V = {
    (xdc_UInt16)0x0,  /* id */
    (xdc_UInt16)0x0,  /* baseIdOfCluster */
};

/* --> ti_sdo_utils_MultiProc_nameList__A */
const __T1_ti_sdo_utils_MultiProc_nameList ti_sdo_utils_MultiProc_nameList__A[1] = {
    0,  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__diagsEnabled ti_sdo_utils_MultiProc_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__diagsIncluded ti_sdo_utils_MultiProc_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__diagsMask ti_sdo_utils_MultiProc_Module__diagsMask__C = ((CT__ti_sdo_utils_MultiProc_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__gateObj ti_sdo_utils_MultiProc_Module__gateObj__C = ((CT__ti_sdo_utils_MultiProc_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__gatePrms ti_sdo_utils_MultiProc_Module__gatePrms__C = ((CT__ti_sdo_utils_MultiProc_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__id ti_sdo_utils_MultiProc_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerDefined ti_sdo_utils_MultiProc_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerObj ti_sdo_utils_MultiProc_Module__loggerObj__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn0 ti_sdo_utils_MultiProc_Module__loggerFxn0__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn1 ti_sdo_utils_MultiProc_Module__loggerFxn1__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn2 ti_sdo_utils_MultiProc_Module__loggerFxn2__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn4 ti_sdo_utils_MultiProc_Module__loggerFxn4__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__loggerFxn8 ti_sdo_utils_MultiProc_Module__loggerFxn8__C = ((CT__ti_sdo_utils_MultiProc_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Module__startupDoneFxn ti_sdo_utils_MultiProc_Module__startupDoneFxn__C = ((CT__ti_sdo_utils_MultiProc_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Object__count ti_sdo_utils_MultiProc_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Object__heap ti_sdo_utils_MultiProc_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Object__sizeof ti_sdo_utils_MultiProc_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_Object__table ti_sdo_utils_MultiProc_Object__table__C = 0;

/* A_invalidMultiProcId__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_A_invalidMultiProcId ti_sdo_utils_MultiProc_A_invalidMultiProcId__C = (((xdc_runtime_Assert_Id)1895) << 16 | 16);

/* A_invalidProcName__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_A_invalidProcName ti_sdo_utils_MultiProc_A_invalidProcName__C = (((xdc_runtime_Assert_Id)1938) << 16 | 16);

/* nameList__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_nameList ti_sdo_utils_MultiProc_nameList__C = ((CT__ti_sdo_utils_MultiProc_nameList)ti_sdo_utils_MultiProc_nameList__A);

/* numProcsInCluster__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_numProcsInCluster ti_sdo_utils_MultiProc_numProcsInCluster__C = (xdc_UInt16)0x1;

/* numProcessors__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_numProcessors ti_sdo_utils_MultiProc_numProcessors__C = (xdc_UInt16)0x1;

/* procIdList__C */
__FAR__ const CT__ti_sdo_utils_MultiProc_procIdList ti_sdo_utils_MultiProc_procIdList__C = ((CT__ti_sdo_utils_MultiProc_procIdList)0);


/*
 * ======== ti.sdo.utils.NameServerRemoteNull INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_NameServerRemoteNull_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sdo_utils_NameServerRemoteNull_Params ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C = {
    sizeof (ti_sdo_utils_NameServerRemoteNull_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sdo_utils_NameServerRemoteNull_Module__ ti_sdo_utils_NameServerRemoteNull_Module__root__V = {
    {&ti_sdo_utils_NameServerRemoteNull_Module__root__V.link,  /* link.next */
    &ti_sdo_utils_NameServerRemoteNull_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__diagsMask ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__gateObj ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__gatePrms ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__id ti_sdo_utils_NameServerRemoteNull_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerObj ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C = ((CT__ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Object__count ti_sdo_utils_NameServerRemoteNull_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Object__heap ti_sdo_utils_NameServerRemoteNull_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Object__sizeof ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C = sizeof(ti_sdo_utils_NameServerRemoteNull_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sdo_utils_NameServerRemoteNull_Object__table ti_sdo_utils_NameServerRemoteNull_Object__table__C = 0;


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x3b9aca00,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x3b9aca00,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__id ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__count ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__heap ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c62_IntrinsicsSupport_Object__table ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.c62.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj ti_sysbios_family_c62_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__id ti_sysbios_family_c62_TaskSupport_Module__id__C = (xdc_Bits16)0x802f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerDefined ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8 ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__count ti_sysbios_family_c62_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__heap ti_sysbios_family_c62_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__sizeof ti_sysbios_family_c62_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_Object__table ti_sysbios_family_c62_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_defaultStackSize ti_sysbios_family_c62_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_c62_TaskSupport_stackAlignment ti_sysbios_family_c62_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.c64p.Exception INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_family_c64p_Exception_Module_State__ ti_sysbios_family_c64p_Exception_Module__state__V = {
    (xdc_Bits32)0x0,  /* efr */
    (xdc_Bits32)0x0,  /* nrp */
    (xdc_Bits32)0x0,  /* ntsr */
    (xdc_Bits32)0x0,  /* ierr */
    ((xdc_Void(*)(xdc_Void))0),  /* returnHook */
    ((ti_sysbios_family_c64p_Exception_Context*)0),  /* excContext */
    {
        (xdc_Char)0x0,  /* [0] */
        (xdc_Char)0x0,  /* [1] */
        (xdc_Char)0x0,  /* [2] */
        (xdc_Char)0x0,  /* [3] */
        (xdc_Char)0x0,  /* [4] */
        (xdc_Char)0x0,  /* [5] */
        (xdc_Char)0x0,  /* [6] */
        (xdc_Char)0x0,  /* [7] */
        (xdc_Char)0x0,  /* [8] */
        (xdc_Char)0x0,  /* [9] */
        (xdc_Char)0x0,  /* [10] */
        (xdc_Char)0x0,  /* [11] */
        (xdc_Char)0x0,  /* [12] */
        (xdc_Char)0x0,  /* [13] */
        (xdc_Char)0x0,  /* [14] */
        (xdc_Char)0x0,  /* [15] */
    },  /* scratch */
    ((xdc_Char*)0),  /* isrStack */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsEnabled ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C = (xdc_Bits32)0x190;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsIncluded ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C = (xdc_Bits32)0x190;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__diagsMask ti_sysbios_family_c64p_Exception_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Exception_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gateObj ti_sysbios_family_c64p_Exception_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Exception_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__gatePrms ti_sysbios_family_c64p_Exception_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Exception_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__id ti_sysbios_family_c64p_Exception_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerDefined ti_sysbios_family_c64p_Exception_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerObj ti_sysbios_family_c64p_Exception_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0 ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1 ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2 ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4 ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8 ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Exception_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Module__startupDoneFxn ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_Exception_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__count ti_sysbios_family_c64p_Exception_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__heap ti_sysbios_family_c64p_Exception_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__sizeof ti_sysbios_family_c64p_Exception_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_Object__table ti_sysbios_family_c64p_Exception_Object__table__C = 0;

/* E_exceptionMin__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMin ti_sysbios_family_c64p_Exception_E_exceptionMin__C = (((xdc_runtime_Error_Id)4820) << 16 | 0);

/* E_exceptionMax__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_E_exceptionMax ti_sysbios_family_c64p_Exception_E_exceptionMax__C = (((xdc_runtime_Error_Id)4962) << 16 | 0);

/* enableExternalMPC__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enableExternalMPC ti_sysbios_family_c64p_Exception_enableExternalMPC__C = 0;

/* enablePrint__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_enablePrint ti_sysbios_family_c64p_Exception_enablePrint__C = 1;

/* exceptionHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_exceptionHook ti_sysbios_family_c64p_Exception_exceptionHook__C = ((CT__ti_sysbios_family_c64p_Exception_exceptionHook)0);

/* internalHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_internalHook ti_sysbios_family_c64p_Exception_internalHook__C = ((CT__ti_sysbios_family_c64p_Exception_internalHook)0);

/* externalHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_externalHook ti_sysbios_family_c64p_Exception_externalHook__C = ((CT__ti_sysbios_family_c64p_Exception_externalHook)0);

/* nmiHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_nmiHook ti_sysbios_family_c64p_Exception_nmiHook__C = ((CT__ti_sysbios_family_c64p_Exception_nmiHook)0);

/* returnHook__C */
__FAR__ const CT__ti_sysbios_family_c64p_Exception_returnHook ti_sysbios_family_c64p_Exception_returnHook__C = ((CT__ti_sysbios_family_c64p_Exception_returnHook)0);


/*
 * ======== ti.sysbios.family.c64p.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_c64p_Hwi_Params ti_sysbios_family_c64p_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_c64p_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0x0,  /* priority */
    (xdc_Bits16)0x0,  /* disableMask */
    (xdc_Bits16)0x0,  /* restoreMask */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_c64p_Hwi_Module__ ti_sysbios_family_c64p_Hwi_Module__root__V = {
    {&ti_sysbios_family_c64p_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_c64p_Hwi_Object__ ti_sysbios_family_c64p_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (xdc_Bits16)0x4000,  /* disableMask */
        (xdc_Bits16)0x4000,  /* restoreMask */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* fxn */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* Module__state__V */
ti_sysbios_family_c64p_Hwi_Module_State__ ti_sysbios_family_c64p_Hwi_Module__state__V = {
    {
        (xdc_Char)(-0x0 - 1),  /* [0] */
        (xdc_Char)(-0x0 - 1),  /* [1] */
        (xdc_Char)(-0x0 - 1),  /* [2] */
        (xdc_Char)(-0x0 - 1),  /* [3] */
        (xdc_Char)(-0x0 - 1),  /* [4] */
        (xdc_Char)(-0x0 - 1),  /* [5] */
        (xdc_Char)(-0x0 - 1),  /* [6] */
        (xdc_Char)(-0x0 - 1),  /* [7] */
        (xdc_Char)(-0x0 - 1),  /* [8] */
        (xdc_Char)(-0x0 - 1),  /* [9] */
        (xdc_Char)(-0x0 - 1),  /* [10] */
        (xdc_Char)(-0x0 - 1),  /* [11] */
        (xdc_Char)(-0x0 - 1),  /* [12] */
        (xdc_Char)(-0x0 - 1),  /* [13] */
        (xdc_Char)0x40,  /* [14] */
        (xdc_Char)(-0x0 - 1),  /* [15] */
    },  /* intEvents */
    (xdc_Bits16)0x4003,  /* ierMask */
    (xdc_Int)0x0,  /* intNum */
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
    ((xdc_Ptr)((void*)&ti_sysbios_family_c64p_Hwi0)),  /* vectorTableBase */
    ((xdc_Ptr)((void*)&__TI_STATIC_BASE)),  /* bss */
    {
        0,  /* [0] */
        0,  /* [1] */
        0,  /* [2] */
        0,  /* [3] */
        0,  /* [4] */
        0,  /* [5] */
        0,  /* [6] */
        0,  /* [7] */
        0,  /* [8] */
        0,  /* [9] */
        0,  /* [10] */
        0,  /* [11] */
        0,  /* [12] */
        0,  /* [13] */
        (ti_sysbios_family_c64p_Hwi_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[0],  /* [14] */
        0,  /* [15] */
    },  /* dispatchTable */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsEnabled ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsIncluded ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask ti_sysbios_family_c64p_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gateObj ti_sysbios_family_c64p_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms ti_sysbios_family_c64p_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__id ti_sysbios_family_c64p_Hwi_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerDefined ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj ti_sysbios_family_c64p_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__count ti_sysbios_family_c64p_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__heap ti_sysbios_family_c64p_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__sizeof ti_sysbios_family_c64p_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_c64p_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_Object__table ti_sysbios_family_c64p_Hwi_Object__table__C = ti_sysbios_family_c64p_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_alreadyDefined ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)5004) << 16 | 0);

/* E_handleNotFound__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_E_handleNotFound ti_sysbios_family_c64p_Hwi_E_handleNotFound__C = (((xdc_runtime_Error_Id)5052) << 16 | 0);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LM_begin ti_sysbios_family_c64p_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)6191) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_LD_end ti_sysbios_family_c64p_Hwi_LD_end__C = (((xdc_runtime_Log_Event)6261) << 16 | 512);

/* enableException__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_enableException ti_sysbios_family_c64p_Hwi_enableException__C = 1;

/* swiDisable__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiDisable ti_sysbios_family_c64p_Hwi_swiDisable__C = ((CT__ti_sysbios_family_c64p_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_c64p_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskDisable ti_sysbios_family_c64p_Hwi_taskDisable__C = ((CT__ti_sysbios_family_c64p_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_c64p_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_c64p_Hwi_hooks ti_sysbios_family_c64p_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsEnabled ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsIncluded ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__id ti_sysbios_family_c64p_tci6488_TimerSupport_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerDefined ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8 ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Object__count ti_sysbios_family_c64p_tci6488_TimerSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Object__heap ti_sysbios_family_c64p_tci6488_TimerSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Object__sizeof ti_sysbios_family_c64p_tci6488_TimerSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c64p_tci6488_TimerSupport_Object__table ti_sysbios_family_c64p_tci6488_TimerSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.c66.Cache INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__diagsEnabled ti_sysbios_family_c66_Cache_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__diagsIncluded ti_sysbios_family_c66_Cache_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__diagsMask ti_sysbios_family_c66_Cache_Module__diagsMask__C = ((CT__ti_sysbios_family_c66_Cache_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__gateObj ti_sysbios_family_c66_Cache_Module__gateObj__C = ((CT__ti_sysbios_family_c66_Cache_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__gatePrms ti_sysbios_family_c66_Cache_Module__gatePrms__C = ((CT__ti_sysbios_family_c66_Cache_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__id ti_sysbios_family_c66_Cache_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerDefined ti_sysbios_family_c66_Cache_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerObj ti_sysbios_family_c66_Cache_Module__loggerObj__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn0 ti_sysbios_family_c66_Cache_Module__loggerFxn0__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn1 ti_sysbios_family_c66_Cache_Module__loggerFxn1__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn2 ti_sysbios_family_c66_Cache_Module__loggerFxn2__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn4 ti_sysbios_family_c66_Cache_Module__loggerFxn4__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__loggerFxn8 ti_sysbios_family_c66_Cache_Module__loggerFxn8__C = ((CT__ti_sysbios_family_c66_Cache_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Module__startupDoneFxn ti_sysbios_family_c66_Cache_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_c66_Cache_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Object__count ti_sysbios_family_c66_Cache_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Object__heap ti_sysbios_family_c66_Cache_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Object__sizeof ti_sysbios_family_c66_Cache_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_Object__table ti_sysbios_family_c66_Cache_Object__table__C = 0;

/* initSize__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_initSize ti_sysbios_family_c66_Cache_initSize__C = {
    ti_sysbios_family_c66_Cache_L1Size_32K,  /* l1pSize */
    ti_sysbios_family_c66_Cache_L1Size_32K,  /* l1dSize */
    ti_sysbios_family_c66_Cache_L2Size_256K,  /* l2Size */
};

/* atomicBlockSize__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_atomicBlockSize ti_sysbios_family_c66_Cache_atomicBlockSize__C = (xdc_UInt32)0x400;

/* marvalues__C */
__FAR__ const CT__ti_sysbios_family_c66_Cache_marvalues ti_sysbios_family_c66_Cache_marvalues__C = {
    (xdc_UInt32)0x1,  /* [0] */
    (xdc_UInt32)0x0,  /* [1] */
    (xdc_UInt32)0x0,  /* [2] */
    (xdc_UInt32)0x0,  /* [3] */
    (xdc_UInt32)0x0,  /* [4] */
    (xdc_UInt32)0x0,  /* [5] */
    (xdc_UInt32)0x0,  /* [6] */
    (xdc_UInt32)0x0,  /* [7] */
    (xdc_UInt32)0x0,  /* [8] */
    (xdc_UInt32)0x0,  /* [9] */
    (xdc_UInt32)0x0,  /* [10] */
    (xdc_UInt32)0x0,  /* [11] */
    (xdc_UInt32)0xd,  /* [12] */
    (xdc_UInt32)0xd,  /* [13] */
    (xdc_UInt32)0xd,  /* [14] */
    (xdc_UInt32)0xd,  /* [15] */
    (xdc_UInt32)0xc,  /* [16] */
    (xdc_UInt32)0xc,  /* [17] */
    (xdc_UInt32)0xc,  /* [18] */
    (xdc_UInt32)0xc,  /* [19] */
    (xdc_UInt32)0xc,  /* [20] */
    (xdc_UInt32)0xc,  /* [21] */
    (xdc_UInt32)0xc,  /* [22] */
    (xdc_UInt32)0xc,  /* [23] */
    (xdc_UInt32)0xc,  /* [24] */
    (xdc_UInt32)0xc,  /* [25] */
    (xdc_UInt32)0xc,  /* [26] */
    (xdc_UInt32)0xc,  /* [27] */
    (xdc_UInt32)0xc,  /* [28] */
    (xdc_UInt32)0xc,  /* [29] */
    (xdc_UInt32)0xc,  /* [30] */
    (xdc_UInt32)0xc,  /* [31] */
    (xdc_UInt32)0xc,  /* [32] */
    (xdc_UInt32)0xc,  /* [33] */
    (xdc_UInt32)0xc,  /* [34] */
    (xdc_UInt32)0xc,  /* [35] */
    (xdc_UInt32)0xc,  /* [36] */
    (xdc_UInt32)0xc,  /* [37] */
    (xdc_UInt32)0xc,  /* [38] */
    (xdc_UInt32)0xc,  /* [39] */
    (xdc_UInt32)0xc,  /* [40] */
    (xdc_UInt32)0xc,  /* [41] */
    (xdc_UInt32)0xc,  /* [42] */
    (xdc_UInt32)0xc,  /* [43] */
    (xdc_UInt32)0xc,  /* [44] */
    (xdc_UInt32)0xc,  /* [45] */
    (xdc_UInt32)0xc,  /* [46] */
    (xdc_UInt32)0xc,  /* [47] */
    (xdc_UInt32)0xc,  /* [48] */
    (xdc_UInt32)0xc,  /* [49] */
    (xdc_UInt32)0xc,  /* [50] */
    (xdc_UInt32)0xc,  /* [51] */
    (xdc_UInt32)0xc,  /* [52] */
    (xdc_UInt32)0xc,  /* [53] */
    (xdc_UInt32)0xc,  /* [54] */
    (xdc_UInt32)0xc,  /* [55] */
    (xdc_UInt32)0xc,  /* [56] */
    (xdc_UInt32)0xc,  /* [57] */
    (xdc_UInt32)0xc,  /* [58] */
    (xdc_UInt32)0xc,  /* [59] */
    (xdc_UInt32)0xc,  /* [60] */
    (xdc_UInt32)0xc,  /* [61] */
    (xdc_UInt32)0xc,  /* [62] */
    (xdc_UInt32)0xc,  /* [63] */
    (xdc_UInt32)0xc,  /* [64] */
    (xdc_UInt32)0xc,  /* [65] */
    (xdc_UInt32)0xc,  /* [66] */
    (xdc_UInt32)0xc,  /* [67] */
    (xdc_UInt32)0xc,  /* [68] */
    (xdc_UInt32)0xc,  /* [69] */
    (xdc_UInt32)0xc,  /* [70] */
    (xdc_UInt32)0xc,  /* [71] */
    (xdc_UInt32)0xc,  /* [72] */
    (xdc_UInt32)0xc,  /* [73] */
    (xdc_UInt32)0xc,  /* [74] */
    (xdc_UInt32)0xc,  /* [75] */
    (xdc_UInt32)0xc,  /* [76] */
    (xdc_UInt32)0xc,  /* [77] */
    (xdc_UInt32)0xc,  /* [78] */
    (xdc_UInt32)0xc,  /* [79] */
    (xdc_UInt32)0xc,  /* [80] */
    (xdc_UInt32)0xc,  /* [81] */
    (xdc_UInt32)0xc,  /* [82] */
    (xdc_UInt32)0xc,  /* [83] */
    (xdc_UInt32)0xc,  /* [84] */
    (xdc_UInt32)0xc,  /* [85] */
    (xdc_UInt32)0xc,  /* [86] */
    (xdc_UInt32)0xc,  /* [87] */
    (xdc_UInt32)0xc,  /* [88] */
    (xdc_UInt32)0xc,  /* [89] */
    (xdc_UInt32)0xc,  /* [90] */
    (xdc_UInt32)0xc,  /* [91] */
    (xdc_UInt32)0xc,  /* [92] */
    (xdc_UInt32)0xc,  /* [93] */
    (xdc_UInt32)0xc,  /* [94] */
    (xdc_UInt32)0xc,  /* [95] */
    (xdc_UInt32)0xc,  /* [96] */
    (xdc_UInt32)0xc,  /* [97] */
    (xdc_UInt32)0xc,  /* [98] */
    (xdc_UInt32)0xc,  /* [99] */
    (xdc_UInt32)0xc,  /* [100] */
    (xdc_UInt32)0xc,  /* [101] */
    (xdc_UInt32)0xc,  /* [102] */
    (xdc_UInt32)0xc,  /* [103] */
    (xdc_UInt32)0xc,  /* [104] */
    (xdc_UInt32)0xc,  /* [105] */
    (xdc_UInt32)0xc,  /* [106] */
    (xdc_UInt32)0xc,  /* [107] */
    (xdc_UInt32)0xc,  /* [108] */
    (xdc_UInt32)0xc,  /* [109] */
    (xdc_UInt32)0xc,  /* [110] */
    (xdc_UInt32)0xc,  /* [111] */
    (xdc_UInt32)0xc,  /* [112] */
    (xdc_UInt32)0xc,  /* [113] */
    (xdc_UInt32)0xc,  /* [114] */
    (xdc_UInt32)0xc,  /* [115] */
    (xdc_UInt32)0xc,  /* [116] */
    (xdc_UInt32)0xc,  /* [117] */
    (xdc_UInt32)0xc,  /* [118] */
    (xdc_UInt32)0xc,  /* [119] */
    (xdc_UInt32)0xc,  /* [120] */
    (xdc_UInt32)0xc,  /* [121] */
    (xdc_UInt32)0xc,  /* [122] */
    (xdc_UInt32)0xc,  /* [123] */
    (xdc_UInt32)0xc,  /* [124] */
    (xdc_UInt32)0xc,  /* [125] */
    (xdc_UInt32)0xc,  /* [126] */
    (xdc_UInt32)0xc,  /* [127] */
    (xdc_UInt32)0xd,  /* [128] */
    (xdc_UInt32)0xd,  /* [129] */
    (xdc_UInt32)0xd,  /* [130] */
    (xdc_UInt32)0xd,  /* [131] */
    (xdc_UInt32)0xd,  /* [132] */
    (xdc_UInt32)0xd,  /* [133] */
    (xdc_UInt32)0xd,  /* [134] */
    (xdc_UInt32)0xd,  /* [135] */
    (xdc_UInt32)0xd,  /* [136] */
    (xdc_UInt32)0xd,  /* [137] */
    (xdc_UInt32)0xd,  /* [138] */
    (xdc_UInt32)0xd,  /* [139] */
    (xdc_UInt32)0xd,  /* [140] */
    (xdc_UInt32)0xd,  /* [141] */
    (xdc_UInt32)0xd,  /* [142] */
    (xdc_UInt32)0xd,  /* [143] */
    (xdc_UInt32)0xd,  /* [144] */
    (xdc_UInt32)0xd,  /* [145] */
    (xdc_UInt32)0xd,  /* [146] */
    (xdc_UInt32)0xd,  /* [147] */
    (xdc_UInt32)0xd,  /* [148] */
    (xdc_UInt32)0xd,  /* [149] */
    (xdc_UInt32)0xd,  /* [150] */
    (xdc_UInt32)0xd,  /* [151] */
    (xdc_UInt32)0xd,  /* [152] */
    (xdc_UInt32)0xd,  /* [153] */
    (xdc_UInt32)0xd,  /* [154] */
    (xdc_UInt32)0xd,  /* [155] */
    (xdc_UInt32)0xd,  /* [156] */
    (xdc_UInt32)0xd,  /* [157] */
    (xdc_UInt32)0xd,  /* [158] */
    (xdc_UInt32)0xd,  /* [159] */
    (xdc_UInt32)0xc,  /* [160] */
    (xdc_UInt32)0xc,  /* [161] */
    (xdc_UInt32)0xc,  /* [162] */
    (xdc_UInt32)0xc,  /* [163] */
    (xdc_UInt32)0xc,  /* [164] */
    (xdc_UInt32)0xc,  /* [165] */
    (xdc_UInt32)0xc,  /* [166] */
    (xdc_UInt32)0xc,  /* [167] */
    (xdc_UInt32)0xc,  /* [168] */
    (xdc_UInt32)0xc,  /* [169] */
    (xdc_UInt32)0xc,  /* [170] */
    (xdc_UInt32)0xc,  /* [171] */
    (xdc_UInt32)0xc,  /* [172] */
    (xdc_UInt32)0xc,  /* [173] */
    (xdc_UInt32)0xc,  /* [174] */
    (xdc_UInt32)0xc,  /* [175] */
    (xdc_UInt32)0xc,  /* [176] */
    (xdc_UInt32)0xc,  /* [177] */
    (xdc_UInt32)0xc,  /* [178] */
    (xdc_UInt32)0xc,  /* [179] */
    (xdc_UInt32)0xc,  /* [180] */
    (xdc_UInt32)0xc,  /* [181] */
    (xdc_UInt32)0xc,  /* [182] */
    (xdc_UInt32)0xc,  /* [183] */
    (xdc_UInt32)0xc,  /* [184] */
    (xdc_UInt32)0xc,  /* [185] */
    (xdc_UInt32)0xc,  /* [186] */
    (xdc_UInt32)0xc,  /* [187] */
    (xdc_UInt32)0xc,  /* [188] */
    (xdc_UInt32)0xc,  /* [189] */
    (xdc_UInt32)0xc,  /* [190] */
    (xdc_UInt32)0xc,  /* [191] */
    (xdc_UInt32)0xc,  /* [192] */
    (xdc_UInt32)0xc,  /* [193] */
    (xdc_UInt32)0xc,  /* [194] */
    (xdc_UInt32)0xc,  /* [195] */
    (xdc_UInt32)0xc,  /* [196] */
    (xdc_UInt32)0xc,  /* [197] */
    (xdc_UInt32)0xc,  /* [198] */
    (xdc_UInt32)0xc,  /* [199] */
    (xdc_UInt32)0xc,  /* [200] */
    (xdc_UInt32)0xc,  /* [201] */
    (xdc_UInt32)0xc,  /* [202] */
    (xdc_UInt32)0xc,  /* [203] */
    (xdc_UInt32)0xc,  /* [204] */
    (xdc_UInt32)0xc,  /* [205] */
    (xdc_UInt32)0xc,  /* [206] */
    (xdc_UInt32)0xc,  /* [207] */
    (xdc_UInt32)0xc,  /* [208] */
    (xdc_UInt32)0xc,  /* [209] */
    (xdc_UInt32)0xc,  /* [210] */
    (xdc_UInt32)0xc,  /* [211] */
    (xdc_UInt32)0xc,  /* [212] */
    (xdc_UInt32)0xc,  /* [213] */
    (xdc_UInt32)0xc,  /* [214] */
    (xdc_UInt32)0xc,  /* [215] */
    (xdc_UInt32)0xc,  /* [216] */
    (xdc_UInt32)0xc,  /* [217] */
    (xdc_UInt32)0xc,  /* [218] */
    (xdc_UInt32)0xc,  /* [219] */
    (xdc_UInt32)0xc,  /* [220] */
    (xdc_UInt32)0xc,  /* [221] */
    (xdc_UInt32)0xc,  /* [222] */
    (xdc_UInt32)0xc,  /* [223] */
    (xdc_UInt32)0xc,  /* [224] */
    (xdc_UInt32)0xc,  /* [225] */
    (xdc_UInt32)0xc,  /* [226] */
    (xdc_UInt32)0xc,  /* [227] */
    (xdc_UInt32)0xc,  /* [228] */
    (xdc_UInt32)0xc,  /* [229] */
    (xdc_UInt32)0xc,  /* [230] */
    (xdc_UInt32)0xc,  /* [231] */
    (xdc_UInt32)0xc,  /* [232] */
    (xdc_UInt32)0xc,  /* [233] */
    (xdc_UInt32)0xc,  /* [234] */
    (xdc_UInt32)0xc,  /* [235] */
    (xdc_UInt32)0xc,  /* [236] */
    (xdc_UInt32)0xc,  /* [237] */
    (xdc_UInt32)0xc,  /* [238] */
    (xdc_UInt32)0xc,  /* [239] */
    (xdc_UInt32)0xc,  /* [240] */
    (xdc_UInt32)0xc,  /* [241] */
    (xdc_UInt32)0xc,  /* [242] */
    (xdc_UInt32)0xc,  /* [243] */
    (xdc_UInt32)0xc,  /* [244] */
    (xdc_UInt32)0xc,  /* [245] */
    (xdc_UInt32)0xc,  /* [246] */
    (xdc_UInt32)0xc,  /* [247] */
    (xdc_UInt32)0xc,  /* [248] */
    (xdc_UInt32)0xc,  /* [249] */
    (xdc_UInt32)0xc,  /* [250] */
    (xdc_UInt32)0xc,  /* [251] */
    (xdc_UInt32)0xc,  /* [252] */
    (xdc_UInt32)0xc,  /* [253] */
    (xdc_UInt32)0xc,  /* [254] */
    (xdc_UInt32)0xc,  /* [255] */
};


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)1655) << 16 | 16);


/*
 * ======== ti.sysbios.gates.GateSwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateSwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateSwi_Params ti_sysbios_gates_GateSwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateSwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateSwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateSwi_Module__ ti_sysbios_gates_GateSwi_Module__root__V = {
    {&ti_sysbios_gates_GateSwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateSwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateSwi_Object__ ti_sysbios_gates_GateSwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateSwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__diagsEnabled ti_sysbios_gates_GateSwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__diagsIncluded ti_sysbios_gates_GateSwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__diagsMask ti_sysbios_gates_GateSwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateSwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__gateObj ti_sysbios_gates_GateSwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateSwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__gatePrms ti_sysbios_gates_GateSwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateSwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__id ti_sysbios_gates_GateSwi_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerDefined ti_sysbios_gates_GateSwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerObj ti_sysbios_gates_GateSwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn0 ti_sysbios_gates_GateSwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn1 ti_sysbios_gates_GateSwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn2 ti_sysbios_gates_GateSwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn4 ti_sysbios_gates_GateSwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__loggerFxn8 ti_sysbios_gates_GateSwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateSwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Module__startupDoneFxn ti_sysbios_gates_GateSwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateSwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Object__count ti_sysbios_gates_GateSwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Object__heap ti_sysbios_gates_GateSwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Object__sizeof ti_sysbios_gates_GateSwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateSwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_Object__table ti_sysbios_gates_GateSwi_Object__table__C = ti_sysbios_gates_GateSwi_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateSwi_A_badContext ti_sysbios_gates_GateSwi_A_badContext__C = (((xdc_runtime_Assert_Id)1394) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_SELF,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_c64p_Hwi_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)5097) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)4126) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)4162) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)4207) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)5979) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)4098) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_Int)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt32)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)6279) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)6301) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)6319) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)355) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)436) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)6351) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)6381) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)756) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)811) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)635) << 16 | 16);

/* A_overflow__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)876) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)6424) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)6471) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)6489) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)930) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)987) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpCurQ */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)6529) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)6597) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)6642) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)6683) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)6715) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)6763) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)6819) << 16 | 512);

/* LM_setAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)6850) << 16 | 768);

/* LM_schedule__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)6933) << 16 | 1024);

/* LM_noWork__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)7019) << 16 | 1024);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)5134) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)5177) << 16 | 0);

/* E_deleteNotAllowed__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)5228) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1036) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1105) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1159) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1213) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1276) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1326) << 16 | 16);

/* A_badAffinity__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1361) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.timers.timer64.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_timers_timer64_Timer_Params ti_sysbios_timers_timer64_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_timers_timer64_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        (xdc_Bits8)0x0,  /* tien */
        (xdc_Bits8)0x0,  /* invout */
        (xdc_Bits8)0x0,  /* invin */
        (xdc_UInt8)0x1,  /* pwid */
        (xdc_Bits8)0x0,  /* cp */
    },  /* controlInit */
    {
        0,  /* free */
        0,  /* soft */
    },  /* emuMgtInit */
    {
        (xdc_Bits8)0x0,  /* gpint12_eni */
        (xdc_Bits8)0x0,  /* gpint12_eno */
        (xdc_Bits8)0x0,  /* gpint12_invi */
        (xdc_Bits8)0x0,  /* gpint12_invo */
        (xdc_Bits8)0x0,  /* gpint34_eni */
        (xdc_Bits8)0x0,  /* gpint34_eno */
        (xdc_Bits8)0x0,  /* gpint34_invi */
        (xdc_Bits8)0x0,  /* gpint34_invo */
        (xdc_Bits8)0x0,  /* gpio_eni12 */
        (xdc_Bits8)0x0,  /* gpio_eno12 */
        (xdc_Bits8)0x0,  /* gpio_eni34 */
        (xdc_Bits8)0x0,  /* gpio_eno34 */
    },  /* gpioIntEn */
    {
        (xdc_Bits8)0x0,  /* gpio_dati12 */
        (xdc_Bits8)0x0,  /* gpio_dato12 */
        (xdc_Bits8)0x0,  /* gpio_dati34 */
        (xdc_Bits8)0x0,  /* gpio_dato34 */
        (xdc_Bits8)0x0,  /* gpio_diri12 */
        (xdc_Bits8)0x0,  /* gpio_diro12 */
        (xdc_Bits8)0x0,  /* gpio_diri34 */
        (xdc_Bits8)0x0,  /* gpio_diro34 */
    },  /* gpioDatDir */
    ti_sysbios_timers_timer64_Timer_Half_DEFAULT,  /* half */
    ((ti_sysbios_hal_Hwi_Params*)0),  /* hwiParams */
    (xdc_Int)(-0x0 - 1),  /* intNum */
    (xdc_UInt)0x0,  /* prescalar */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_timers_timer64_Timer_Module__ ti_sysbios_timers_timer64_Timer_Module__root__V = {
    {&ti_sysbios_timers_timer64_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_timers_timer64_Timer_Object__ ti_sysbios_timers_timer64_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)(-0x0 - 1),  /* id */
        ti_sysbios_timers_timer64_Timer_Half_LOWER,  /* half */
        (xdc_UInt)0x10,  /* tcrInit */
        (xdc_UInt)0x0,  /* emumgtInit */
        (xdc_UInt)0x0,  /* gpioIntEn */
        (xdc_UInt)0x0,  /* gpioDatDir */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x3e8,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
        (xdc_UInt)0x0,  /* prescalar */
        (xdc_UInt)0xe,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__intFreqs ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A[16] = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [0] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [1] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [2] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [3] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [4] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [5] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [6] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [7] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [8] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [9] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [10] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [11] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [12] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [13] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [14] */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)1.6666666666666666E8,  /* lo */
    },  /* [15] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__gctrl ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A[16] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [1] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [2] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [3] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [4] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [5] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [6] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [7] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [8] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [9] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [10] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [11] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [12] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [13] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [14] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [15] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_device__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__device ti_sysbios_timers_timer64_Timer_Module_State_0_device__A[32] = {
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2200000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2200000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2210000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2210000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2220000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2220000)),  /* baseAddr */
    },  /* [5] */
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2230000)),  /* baseAddr */
    },  /* [6] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2230000)),  /* baseAddr */
    },  /* [7] */
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2240000)),  /* baseAddr */
    },  /* [8] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2240000)),  /* baseAddr */
    },  /* [9] */
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2250000)),  /* baseAddr */
    },  /* [10] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2250000)),  /* baseAddr */
    },  /* [11] */
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2260000)),  /* baseAddr */
    },  /* [12] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2260000)),  /* baseAddr */
    },  /* [13] */
    {
        (xdc_UInt)0xe,  /* intNum */
        (xdc_UInt)0x40,  /* eventId */
        ((xdc_Ptr)((void*)0x2270000)),  /* baseAddr */
    },  /* [14] */
    {
        (xdc_UInt)0x4,  /* intNum */
        (xdc_UInt)0x41,  /* eventId */
        ((xdc_Ptr)((void*)0x2270000)),  /* baseAddr */
    },  /* [15] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x42,  /* eventId */
        ((xdc_Ptr)((void*)0x2280000)),  /* baseAddr */
    },  /* [16] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x43,  /* eventId */
        ((xdc_Ptr)((void*)0x2280000)),  /* baseAddr */
    },  /* [17] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x44,  /* eventId */
        ((xdc_Ptr)((void*)0x2290000)),  /* baseAddr */
    },  /* [18] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x45,  /* eventId */
        ((xdc_Ptr)((void*)0x2290000)),  /* baseAddr */
    },  /* [19] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x46,  /* eventId */
        ((xdc_Ptr)((void*)0x22a0000)),  /* baseAddr */
    },  /* [20] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x47,  /* eventId */
        ((xdc_Ptr)((void*)0x22a0000)),  /* baseAddr */
    },  /* [21] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x48,  /* eventId */
        ((xdc_Ptr)((void*)0x22b0000)),  /* baseAddr */
    },  /* [22] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x49,  /* eventId */
        ((xdc_Ptr)((void*)0x22b0000)),  /* baseAddr */
    },  /* [23] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x4a,  /* eventId */
        ((xdc_Ptr)((void*)0x22c0000)),  /* baseAddr */
    },  /* [24] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x4b,  /* eventId */
        ((xdc_Ptr)((void*)0x22c0000)),  /* baseAddr */
    },  /* [25] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x4c,  /* eventId */
        ((xdc_Ptr)((void*)0x22d0000)),  /* baseAddr */
    },  /* [26] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x4d,  /* eventId */
        ((xdc_Ptr)((void*)0x22d0000)),  /* baseAddr */
    },  /* [27] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x4e,  /* eventId */
        ((xdc_Ptr)((void*)0x22e0000)),  /* baseAddr */
    },  /* [28] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x4f,  /* eventId */
        ((xdc_Ptr)((void*)0x22e0000)),  /* baseAddr */
    },  /* [29] */
    {
        (xdc_UInt)0xf,  /* intNum */
        (xdc_UInt)0x50,  /* eventId */
        ((xdc_Ptr)((void*)0x22f0000)),  /* baseAddr */
    },  /* [30] */
    {
        (xdc_UInt)0x5,  /* intNum */
        (xdc_UInt)0x51,  /* eventId */
        ((xdc_Ptr)((void*)0x22f0000)),  /* baseAddr */
    },  /* [31] */
};

/* --> ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_timers_timer64_Timer_Module_State__handles ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A[32] = {
    (ti_sysbios_timers_timer64_Timer_Handle)&ti_sysbios_timers_timer64_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
    0,  /* [11] */
    0,  /* [12] */
    0,  /* [13] */
    0,  /* [14] */
    0,  /* [15] */
    0,  /* [16] */
    0,  /* [17] */
    0,  /* [18] */
    0,  /* [19] */
    0,  /* [20] */
    0,  /* [21] */
    0,  /* [22] */
    0,  /* [23] */
    0,  /* [24] */
    0,  /* [25] */
    0,  /* [26] */
    0,  /* [27] */
    0,  /* [28] */
    0,  /* [29] */
    0,  /* [30] */
    0,  /* [31] */
};

/* Module__state__V */
ti_sysbios_timers_timer64_Timer_Module_State__ ti_sysbios_timers_timer64_Timer_Module__state__V = {
    (xdc_Bits32)(-0x0 - 1),  /* availMask */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_intFreqs__A),  /* intFreqs */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_gctrl__A),  /* gctrl */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_timers_timer64_Timer_Module_State_0_handles__A),  /* handles */
};

/* --> ti_sysbios_timers_timer64_Timer_timerSettings__A */
const __T1_ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__A[16] = {
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [0] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [1] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [2] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [3] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [4] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [5] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [6] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [7] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [8] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [9] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [10] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [11] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [12] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [13] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [14] */
    {
        ti_sysbios_timers_timer64_Timer_Mode_UNCHAINED,  /* mode */
        1,  /* master */
        (xdc_UInt16)0x0,  /* ownerCoreId */
    },  /* [15] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsEnabled ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsIncluded ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask ti_sysbios_timers_timer64_Timer_Module__diagsMask__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gateObj ti_sysbios_timers_timer64_Timer_Module__gateObj__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms ti_sysbios_timers_timer64_Timer_Module__gatePrms__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__id ti_sysbios_timers_timer64_Timer_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerDefined ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj ti_sysbios_timers_timer64_Timer_Module__loggerObj__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__count ti_sysbios_timers_timer64_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__heap ti_sysbios_timers_timer64_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__sizeof ti_sysbios_timers_timer64_Timer_Object__sizeof__C = sizeof(ti_sysbios_timers_timer64_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_Object__table ti_sysbios_timers_timer64_Timer_Object__table__C = ti_sysbios_timers_timer64_Timer_Object__table__V;

/* A_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_A_notAvailable ti_sysbios_timers_timer64_Timer_A_notAvailable__C = (((xdc_runtime_Assert_Id)3623) << 16 | 16);

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_invalidTimer ti_sysbios_timers_timer64_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)5798) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_notAvailable ti_sysbios_timers_timer64_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)5834) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_E_cannotSupport ti_sysbios_timers_timer64_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)5873) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_anyMask ti_sysbios_timers_timer64_Timer_anyMask__C = (xdc_Bits32)0xffffffff;

/* defaultHalf__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_defaultHalf ti_sysbios_timers_timer64_Timer_defaultHalf__C = ti_sysbios_timers_timer64_Timer_Half_LOWER;

/* timerSettings__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_timerSettings ti_sysbios_timers_timer64_Timer_timerSettings__C = ((CT__ti_sysbios_timers_timer64_Timer_timerSettings)ti_sysbios_timers_timer64_Timer_timerSettings__A);

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_startupNeeded ti_sysbios_timers_timer64_Timer_startupNeeded__C = 1;

/* freqDivisor__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_freqDivisor ti_sysbios_timers_timer64_Timer_freqDivisor__C = (xdc_UInt)0x6;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numTimerDevices ti_sysbios_timers_timer64_Timer_numTimerDevices__C = (xdc_Int)0x20;

/* numLocalTimers__C */
__FAR__ const CT__ti_sysbios_timers_timer64_Timer_numLocalTimers ti_sysbios_timers_timer64_Timer_numLocalTimers__C = (xdc_Int)0x8;


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)4539) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)4561) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)4565) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)4599) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)6015) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)6039) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)6060) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)6079) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)6096) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)6110) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)6126) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)6133) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)6144) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)6154) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)6173) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Exception_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c64p_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sdo_ipc_Notify_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_c66_Cache_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_timers_timer64_Timer_Module_startup__E)),  /* [10] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11] = {
    1,  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    0,  /* [9] */
    0,  /* [10] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysStd INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsEnabled xdc_runtime_SysStd_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsIncluded xdc_runtime_SysStd_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__diagsMask xdc_runtime_SysStd_Module__diagsMask__C = ((CT__xdc_runtime_SysStd_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__gateObj xdc_runtime_SysStd_Module__gateObj__C = ((CT__xdc_runtime_SysStd_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__gatePrms xdc_runtime_SysStd_Module__gatePrms__C = ((CT__xdc_runtime_SysStd_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__id xdc_runtime_SysStd_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerDefined xdc_runtime_SysStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerObj xdc_runtime_SysStd_Module__loggerObj__C = ((CT__xdc_runtime_SysStd_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn0 xdc_runtime_SysStd_Module__loggerFxn0__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn1 xdc_runtime_SysStd_Module__loggerFxn1__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn2 xdc_runtime_SysStd_Module__loggerFxn2__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn4 xdc_runtime_SysStd_Module__loggerFxn4__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__loggerFxn8 xdc_runtime_SysStd_Module__loggerFxn8__C = ((CT__xdc_runtime_SysStd_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysStd_Module__startupDoneFxn xdc_runtime_SysStd_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysStd_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysStd_Object__count xdc_runtime_SysStd_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysStd_Object__heap xdc_runtime_SysStd_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysStd_Object__sizeof xdc_runtime_SysStd_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysStd_Object__table xdc_runtime_SysStd_Object__table__C = 0;


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)307) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7556] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x20,  /* [147] */
    (xdc_Char)0x69,  /* [148] */
    (xdc_Char)0x6e,  /* [149] */
    (xdc_Char)0x73,  /* [150] */
    (xdc_Char)0x74,  /* [151] */
    (xdc_Char)0x61,  /* [152] */
    (xdc_Char)0x6e,  /* [153] */
    (xdc_Char)0x63,  /* [154] */
    (xdc_Char)0x65,  /* [155] */
    (xdc_Char)0x20,  /* [156] */
    (xdc_Char)0x74,  /* [157] */
    (xdc_Char)0x6f,  /* [158] */
    (xdc_Char)0x74,  /* [159] */
    (xdc_Char)0x61,  /* [160] */
    (xdc_Char)0x6c,  /* [161] */
    (xdc_Char)0x46,  /* [162] */
    (xdc_Char)0x72,  /* [163] */
    (xdc_Char)0x65,  /* [164] */
    (xdc_Char)0x65,  /* [165] */
    (xdc_Char)0x53,  /* [166] */
    (xdc_Char)0x69,  /* [167] */
    (xdc_Char)0x7a,  /* [168] */
    (xdc_Char)0x65,  /* [169] */
    (xdc_Char)0x20,  /* [170] */
    (xdc_Char)0x69,  /* [171] */
    (xdc_Char)0x73,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x67,  /* [174] */
    (xdc_Char)0x72,  /* [175] */
    (xdc_Char)0x65,  /* [176] */
    (xdc_Char)0x61,  /* [177] */
    (xdc_Char)0x74,  /* [178] */
    (xdc_Char)0x65,  /* [179] */
    (xdc_Char)0x72,  /* [180] */
    (xdc_Char)0x20,  /* [181] */
    (xdc_Char)0x74,  /* [182] */
    (xdc_Char)0x68,  /* [183] */
    (xdc_Char)0x61,  /* [184] */
    (xdc_Char)0x6e,  /* [185] */
    (xdc_Char)0x20,  /* [186] */
    (xdc_Char)0x73,  /* [187] */
    (xdc_Char)0x74,  /* [188] */
    (xdc_Char)0x61,  /* [189] */
    (xdc_Char)0x72,  /* [190] */
    (xdc_Char)0x74,  /* [191] */
    (xdc_Char)0x69,  /* [192] */
    (xdc_Char)0x6e,  /* [193] */
    (xdc_Char)0x67,  /* [194] */
    (xdc_Char)0x20,  /* [195] */
    (xdc_Char)0x73,  /* [196] */
    (xdc_Char)0x69,  /* [197] */
    (xdc_Char)0x7a,  /* [198] */
    (xdc_Char)0x65,  /* [199] */
    (xdc_Char)0x0,  /* [200] */
    (xdc_Char)0x48,  /* [201] */
    (xdc_Char)0x65,  /* [202] */
    (xdc_Char)0x61,  /* [203] */
    (xdc_Char)0x70,  /* [204] */
    (xdc_Char)0x53,  /* [205] */
    (xdc_Char)0x74,  /* [206] */
    (xdc_Char)0x64,  /* [207] */
    (xdc_Char)0x5f,  /* [208] */
    (xdc_Char)0x61,  /* [209] */
    (xdc_Char)0x6c,  /* [210] */
    (xdc_Char)0x6c,  /* [211] */
    (xdc_Char)0x6f,  /* [212] */
    (xdc_Char)0x63,  /* [213] */
    (xdc_Char)0x20,  /* [214] */
    (xdc_Char)0x2d,  /* [215] */
    (xdc_Char)0x20,  /* [216] */
    (xdc_Char)0x72,  /* [217] */
    (xdc_Char)0x65,  /* [218] */
    (xdc_Char)0x71,  /* [219] */
    (xdc_Char)0x75,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x73,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x64,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x61,  /* [227] */
    (xdc_Char)0x6c,  /* [228] */
    (xdc_Char)0x69,  /* [229] */
    (xdc_Char)0x67,  /* [230] */
    (xdc_Char)0x6e,  /* [231] */
    (xdc_Char)0x6d,  /* [232] */
    (xdc_Char)0x65,  /* [233] */
    (xdc_Char)0x6e,  /* [234] */
    (xdc_Char)0x74,  /* [235] */
    (xdc_Char)0x20,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x73,  /* [238] */
    (xdc_Char)0x20,  /* [239] */
    (xdc_Char)0x67,  /* [240] */
    (xdc_Char)0x72,  /* [241] */
    (xdc_Char)0x65,  /* [242] */
    (xdc_Char)0x61,  /* [243] */
    (xdc_Char)0x74,  /* [244] */
    (xdc_Char)0x65,  /* [245] */
    (xdc_Char)0x72,  /* [246] */
    (xdc_Char)0x20,  /* [247] */
    (xdc_Char)0x74,  /* [248] */
    (xdc_Char)0x68,  /* [249] */
    (xdc_Char)0x61,  /* [250] */
    (xdc_Char)0x6e,  /* [251] */
    (xdc_Char)0x20,  /* [252] */
    (xdc_Char)0x61,  /* [253] */
    (xdc_Char)0x6c,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6f,  /* [256] */
    (xdc_Char)0x77,  /* [257] */
    (xdc_Char)0x65,  /* [258] */
    (xdc_Char)0x64,  /* [259] */
    (xdc_Char)0x0,  /* [260] */
    (xdc_Char)0x41,  /* [261] */
    (xdc_Char)0x5f,  /* [262] */
    (xdc_Char)0x69,  /* [263] */
    (xdc_Char)0x6e,  /* [264] */
    (xdc_Char)0x76,  /* [265] */
    (xdc_Char)0x61,  /* [266] */
    (xdc_Char)0x6c,  /* [267] */
    (xdc_Char)0x69,  /* [268] */
    (xdc_Char)0x64,  /* [269] */
    (xdc_Char)0x4c,  /* [270] */
    (xdc_Char)0x6f,  /* [271] */
    (xdc_Char)0x67,  /* [272] */
    (xdc_Char)0x67,  /* [273] */
    (xdc_Char)0x65,  /* [274] */
    (xdc_Char)0x72,  /* [275] */
    (xdc_Char)0x3a,  /* [276] */
    (xdc_Char)0x20,  /* [277] */
    (xdc_Char)0x54,  /* [278] */
    (xdc_Char)0x68,  /* [279] */
    (xdc_Char)0x65,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x6c,  /* [282] */
    (xdc_Char)0x6f,  /* [283] */
    (xdc_Char)0x67,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x65,  /* [286] */
    (xdc_Char)0x72,  /* [287] */
    (xdc_Char)0x20,  /* [288] */
    (xdc_Char)0x69,  /* [289] */
    (xdc_Char)0x64,  /* [290] */
    (xdc_Char)0x20,  /* [291] */
    (xdc_Char)0x25,  /* [292] */
    (xdc_Char)0x64,  /* [293] */
    (xdc_Char)0x20,  /* [294] */
    (xdc_Char)0x69,  /* [295] */
    (xdc_Char)0x73,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x69,  /* [298] */
    (xdc_Char)0x6e,  /* [299] */
    (xdc_Char)0x76,  /* [300] */
    (xdc_Char)0x61,  /* [301] */
    (xdc_Char)0x6c,  /* [302] */
    (xdc_Char)0x69,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x2e,  /* [305] */
    (xdc_Char)0x0,  /* [306] */
    (xdc_Char)0x41,  /* [307] */
    (xdc_Char)0x5f,  /* [308] */
    (xdc_Char)0x63,  /* [309] */
    (xdc_Char)0x61,  /* [310] */
    (xdc_Char)0x6e,  /* [311] */
    (xdc_Char)0x6e,  /* [312] */
    (xdc_Char)0x6f,  /* [313] */
    (xdc_Char)0x74,  /* [314] */
    (xdc_Char)0x46,  /* [315] */
    (xdc_Char)0x69,  /* [316] */
    (xdc_Char)0x74,  /* [317] */
    (xdc_Char)0x49,  /* [318] */
    (xdc_Char)0x6e,  /* [319] */
    (xdc_Char)0x74,  /* [320] */
    (xdc_Char)0x6f,  /* [321] */
    (xdc_Char)0x41,  /* [322] */
    (xdc_Char)0x72,  /* [323] */
    (xdc_Char)0x67,  /* [324] */
    (xdc_Char)0x3a,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x73,  /* [327] */
    (xdc_Char)0x69,  /* [328] */
    (xdc_Char)0x7a,  /* [329] */
    (xdc_Char)0x65,  /* [330] */
    (xdc_Char)0x6f,  /* [331] */
    (xdc_Char)0x66,  /* [332] */
    (xdc_Char)0x28,  /* [333] */
    (xdc_Char)0x46,  /* [334] */
    (xdc_Char)0x6c,  /* [335] */
    (xdc_Char)0x6f,  /* [336] */
    (xdc_Char)0x61,  /* [337] */
    (xdc_Char)0x74,  /* [338] */
    (xdc_Char)0x29,  /* [339] */
    (xdc_Char)0x20,  /* [340] */
    (xdc_Char)0x3e,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x73,  /* [343] */
    (xdc_Char)0x69,  /* [344] */
    (xdc_Char)0x7a,  /* [345] */
    (xdc_Char)0x65,  /* [346] */
    (xdc_Char)0x6f,  /* [347] */
    (xdc_Char)0x66,  /* [348] */
    (xdc_Char)0x28,  /* [349] */
    (xdc_Char)0x41,  /* [350] */
    (xdc_Char)0x72,  /* [351] */
    (xdc_Char)0x67,  /* [352] */
    (xdc_Char)0x29,  /* [353] */
    (xdc_Char)0x0,  /* [354] */
    (xdc_Char)0x41,  /* [355] */
    (xdc_Char)0x5f,  /* [356] */
    (xdc_Char)0x63,  /* [357] */
    (xdc_Char)0x6c,  /* [358] */
    (xdc_Char)0x6f,  /* [359] */
    (xdc_Char)0x63,  /* [360] */
    (xdc_Char)0x6b,  /* [361] */
    (xdc_Char)0x44,  /* [362] */
    (xdc_Char)0x69,  /* [363] */
    (xdc_Char)0x73,  /* [364] */
    (xdc_Char)0x61,  /* [365] */
    (xdc_Char)0x62,  /* [366] */
    (xdc_Char)0x6c,  /* [367] */
    (xdc_Char)0x65,  /* [368] */
    (xdc_Char)0x64,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x43,  /* [372] */
    (xdc_Char)0x61,  /* [373] */
    (xdc_Char)0x6e,  /* [374] */
    (xdc_Char)0x6e,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x74,  /* [377] */
    (xdc_Char)0x20,  /* [378] */
    (xdc_Char)0x63,  /* [379] */
    (xdc_Char)0x72,  /* [380] */
    (xdc_Char)0x65,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x65,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x61,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x63,  /* [388] */
    (xdc_Char)0x6c,  /* [389] */
    (xdc_Char)0x6f,  /* [390] */
    (xdc_Char)0x63,  /* [391] */
    (xdc_Char)0x6b,  /* [392] */
    (xdc_Char)0x20,  /* [393] */
    (xdc_Char)0x69,  /* [394] */
    (xdc_Char)0x6e,  /* [395] */
    (xdc_Char)0x73,  /* [396] */
    (xdc_Char)0x74,  /* [397] */
    (xdc_Char)0x61,  /* [398] */
    (xdc_Char)0x6e,  /* [399] */
    (xdc_Char)0x63,  /* [400] */
    (xdc_Char)0x65,  /* [401] */
    (xdc_Char)0x20,  /* [402] */
    (xdc_Char)0x77,  /* [403] */
    (xdc_Char)0x68,  /* [404] */
    (xdc_Char)0x65,  /* [405] */
    (xdc_Char)0x6e,  /* [406] */
    (xdc_Char)0x20,  /* [407] */
    (xdc_Char)0x42,  /* [408] */
    (xdc_Char)0x49,  /* [409] */
    (xdc_Char)0x4f,  /* [410] */
    (xdc_Char)0x53,  /* [411] */
    (xdc_Char)0x2e,  /* [412] */
    (xdc_Char)0x63,  /* [413] */
    (xdc_Char)0x6c,  /* [414] */
    (xdc_Char)0x6f,  /* [415] */
    (xdc_Char)0x63,  /* [416] */
    (xdc_Char)0x6b,  /* [417] */
    (xdc_Char)0x45,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x61,  /* [420] */
    (xdc_Char)0x62,  /* [421] */
    (xdc_Char)0x6c,  /* [422] */
    (xdc_Char)0x65,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x20,  /* [425] */
    (xdc_Char)0x69,  /* [426] */
    (xdc_Char)0x73,  /* [427] */
    (xdc_Char)0x20,  /* [428] */
    (xdc_Char)0x66,  /* [429] */
    (xdc_Char)0x61,  /* [430] */
    (xdc_Char)0x6c,  /* [431] */
    (xdc_Char)0x73,  /* [432] */
    (xdc_Char)0x65,  /* [433] */
    (xdc_Char)0x2e,  /* [434] */
    (xdc_Char)0x0,  /* [435] */
    (xdc_Char)0x41,  /* [436] */
    (xdc_Char)0x5f,  /* [437] */
    (xdc_Char)0x62,  /* [438] */
    (xdc_Char)0x61,  /* [439] */
    (xdc_Char)0x64,  /* [440] */
    (xdc_Char)0x54,  /* [441] */
    (xdc_Char)0x68,  /* [442] */
    (xdc_Char)0x72,  /* [443] */
    (xdc_Char)0x65,  /* [444] */
    (xdc_Char)0x61,  /* [445] */
    (xdc_Char)0x64,  /* [446] */
    (xdc_Char)0x54,  /* [447] */
    (xdc_Char)0x79,  /* [448] */
    (xdc_Char)0x70,  /* [449] */
    (xdc_Char)0x65,  /* [450] */
    (xdc_Char)0x3a,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x43,  /* [453] */
    (xdc_Char)0x61,  /* [454] */
    (xdc_Char)0x6e,  /* [455] */
    (xdc_Char)0x6e,  /* [456] */
    (xdc_Char)0x6f,  /* [457] */
    (xdc_Char)0x74,  /* [458] */
    (xdc_Char)0x20,  /* [459] */
    (xdc_Char)0x63,  /* [460] */
    (xdc_Char)0x72,  /* [461] */
    (xdc_Char)0x65,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x74,  /* [464] */
    (xdc_Char)0x65,  /* [465] */
    (xdc_Char)0x2f,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x65,  /* [468] */
    (xdc_Char)0x6c,  /* [469] */
    (xdc_Char)0x65,  /* [470] */
    (xdc_Char)0x74,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x61,  /* [474] */
    (xdc_Char)0x20,  /* [475] */
    (xdc_Char)0x43,  /* [476] */
    (xdc_Char)0x6c,  /* [477] */
    (xdc_Char)0x6f,  /* [478] */
    (xdc_Char)0x63,  /* [479] */
    (xdc_Char)0x6b,  /* [480] */
    (xdc_Char)0x20,  /* [481] */
    (xdc_Char)0x66,  /* [482] */
    (xdc_Char)0x72,  /* [483] */
    (xdc_Char)0x6f,  /* [484] */
    (xdc_Char)0x6d,  /* [485] */
    (xdc_Char)0x20,  /* [486] */
    (xdc_Char)0x48,  /* [487] */
    (xdc_Char)0x77,  /* [488] */
    (xdc_Char)0x69,  /* [489] */
    (xdc_Char)0x20,  /* [490] */
    (xdc_Char)0x6f,  /* [491] */
    (xdc_Char)0x72,  /* [492] */
    (xdc_Char)0x20,  /* [493] */
    (xdc_Char)0x53,  /* [494] */
    (xdc_Char)0x77,  /* [495] */
    (xdc_Char)0x69,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x74,  /* [498] */
    (xdc_Char)0x68,  /* [499] */
    (xdc_Char)0x72,  /* [500] */
    (xdc_Char)0x65,  /* [501] */
    (xdc_Char)0x61,  /* [502] */
    (xdc_Char)0x64,  /* [503] */
    (xdc_Char)0x2e,  /* [504] */
    (xdc_Char)0x0,  /* [505] */
    (xdc_Char)0x41,  /* [506] */
    (xdc_Char)0x5f,  /* [507] */
    (xdc_Char)0x6e,  /* [508] */
    (xdc_Char)0x75,  /* [509] */
    (xdc_Char)0x6c,  /* [510] */
    (xdc_Char)0x6c,  /* [511] */
    (xdc_Char)0x45,  /* [512] */
    (xdc_Char)0x76,  /* [513] */
    (xdc_Char)0x65,  /* [514] */
    (xdc_Char)0x6e,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x4d,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x73,  /* [519] */
    (xdc_Char)0x6b,  /* [520] */
    (xdc_Char)0x73,  /* [521] */
    (xdc_Char)0x3a,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x6f,  /* [524] */
    (xdc_Char)0x72,  /* [525] */
    (xdc_Char)0x4d,  /* [526] */
    (xdc_Char)0x61,  /* [527] */
    (xdc_Char)0x73,  /* [528] */
    (xdc_Char)0x6b,  /* [529] */
    (xdc_Char)0x20,  /* [530] */
    (xdc_Char)0x61,  /* [531] */
    (xdc_Char)0x6e,  /* [532] */
    (xdc_Char)0x64,  /* [533] */
    (xdc_Char)0x20,  /* [534] */
    (xdc_Char)0x61,  /* [535] */
    (xdc_Char)0x6e,  /* [536] */
    (xdc_Char)0x64,  /* [537] */
    (xdc_Char)0x4d,  /* [538] */
    (xdc_Char)0x61,  /* [539] */
    (xdc_Char)0x73,  /* [540] */
    (xdc_Char)0x6b,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x61,  /* [543] */
    (xdc_Char)0x72,  /* [544] */
    (xdc_Char)0x65,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x6e,  /* [547] */
    (xdc_Char)0x75,  /* [548] */
    (xdc_Char)0x6c,  /* [549] */
    (xdc_Char)0x6c,  /* [550] */
    (xdc_Char)0x2e,  /* [551] */
    (xdc_Char)0x0,  /* [552] */
    (xdc_Char)0x41,  /* [553] */
    (xdc_Char)0x5f,  /* [554] */
    (xdc_Char)0x6e,  /* [555] */
    (xdc_Char)0x75,  /* [556] */
    (xdc_Char)0x6c,  /* [557] */
    (xdc_Char)0x6c,  /* [558] */
    (xdc_Char)0x45,  /* [559] */
    (xdc_Char)0x76,  /* [560] */
    (xdc_Char)0x65,  /* [561] */
    (xdc_Char)0x6e,  /* [562] */
    (xdc_Char)0x74,  /* [563] */
    (xdc_Char)0x49,  /* [564] */
    (xdc_Char)0x64,  /* [565] */
    (xdc_Char)0x3a,  /* [566] */
    (xdc_Char)0x20,  /* [567] */
    (xdc_Char)0x70,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x73,  /* [570] */
    (xdc_Char)0x74,  /* [571] */
    (xdc_Char)0x65,  /* [572] */
    (xdc_Char)0x64,  /* [573] */
    (xdc_Char)0x20,  /* [574] */
    (xdc_Char)0x65,  /* [575] */
    (xdc_Char)0x76,  /* [576] */
    (xdc_Char)0x65,  /* [577] */
    (xdc_Char)0x6e,  /* [578] */
    (xdc_Char)0x74,  /* [579] */
    (xdc_Char)0x49,  /* [580] */
    (xdc_Char)0x64,  /* [581] */
    (xdc_Char)0x20,  /* [582] */
    (xdc_Char)0x69,  /* [583] */
    (xdc_Char)0x73,  /* [584] */
    (xdc_Char)0x20,  /* [585] */
    (xdc_Char)0x6e,  /* [586] */
    (xdc_Char)0x75,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x6c,  /* [589] */
    (xdc_Char)0x2e,  /* [590] */
    (xdc_Char)0x0,  /* [591] */
    (xdc_Char)0x41,  /* [592] */
    (xdc_Char)0x5f,  /* [593] */
    (xdc_Char)0x65,  /* [594] */
    (xdc_Char)0x76,  /* [595] */
    (xdc_Char)0x65,  /* [596] */
    (xdc_Char)0x6e,  /* [597] */
    (xdc_Char)0x74,  /* [598] */
    (xdc_Char)0x49,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x55,  /* [601] */
    (xdc_Char)0x73,  /* [602] */
    (xdc_Char)0x65,  /* [603] */
    (xdc_Char)0x3a,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x45,  /* [606] */
    (xdc_Char)0x76,  /* [607] */
    (xdc_Char)0x65,  /* [608] */
    (xdc_Char)0x6e,  /* [609] */
    (xdc_Char)0x74,  /* [610] */
    (xdc_Char)0x20,  /* [611] */
    (xdc_Char)0x6f,  /* [612] */
    (xdc_Char)0x62,  /* [613] */
    (xdc_Char)0x6a,  /* [614] */
    (xdc_Char)0x65,  /* [615] */
    (xdc_Char)0x63,  /* [616] */
    (xdc_Char)0x74,  /* [617] */
    (xdc_Char)0x20,  /* [618] */
    (xdc_Char)0x61,  /* [619] */
    (xdc_Char)0x6c,  /* [620] */
    (xdc_Char)0x72,  /* [621] */
    (xdc_Char)0x65,  /* [622] */
    (xdc_Char)0x61,  /* [623] */
    (xdc_Char)0x64,  /* [624] */
    (xdc_Char)0x79,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x69,  /* [627] */
    (xdc_Char)0x6e,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x75,  /* [630] */
    (xdc_Char)0x73,  /* [631] */
    (xdc_Char)0x65,  /* [632] */
    (xdc_Char)0x2e,  /* [633] */
    (xdc_Char)0x0,  /* [634] */
    (xdc_Char)0x41,  /* [635] */
    (xdc_Char)0x5f,  /* [636] */
    (xdc_Char)0x62,  /* [637] */
    (xdc_Char)0x61,  /* [638] */
    (xdc_Char)0x64,  /* [639] */
    (xdc_Char)0x43,  /* [640] */
    (xdc_Char)0x6f,  /* [641] */
    (xdc_Char)0x6e,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x65,  /* [644] */
    (xdc_Char)0x78,  /* [645] */
    (xdc_Char)0x74,  /* [646] */
    (xdc_Char)0x3a,  /* [647] */
    (xdc_Char)0x20,  /* [648] */
    (xdc_Char)0x62,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x64,  /* [651] */
    (xdc_Char)0x20,  /* [652] */
    (xdc_Char)0x63,  /* [653] */
    (xdc_Char)0x61,  /* [654] */
    (xdc_Char)0x6c,  /* [655] */
    (xdc_Char)0x6c,  /* [656] */
    (xdc_Char)0x69,  /* [657] */
    (xdc_Char)0x6e,  /* [658] */
    (xdc_Char)0x67,  /* [659] */
    (xdc_Char)0x20,  /* [660] */
    (xdc_Char)0x63,  /* [661] */
    (xdc_Char)0x6f,  /* [662] */
    (xdc_Char)0x6e,  /* [663] */
    (xdc_Char)0x74,  /* [664] */
    (xdc_Char)0x65,  /* [665] */
    (xdc_Char)0x78,  /* [666] */
    (xdc_Char)0x74,  /* [667] */
    (xdc_Char)0x2e,  /* [668] */
    (xdc_Char)0x20,  /* [669] */
    (xdc_Char)0x4d,  /* [670] */
    (xdc_Char)0x75,  /* [671] */
    (xdc_Char)0x73,  /* [672] */
    (xdc_Char)0x74,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x62,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x63,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x6c,  /* [680] */
    (xdc_Char)0x6c,  /* [681] */
    (xdc_Char)0x65,  /* [682] */
    (xdc_Char)0x64,  /* [683] */
    (xdc_Char)0x20,  /* [684] */
    (xdc_Char)0x66,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x6f,  /* [687] */
    (xdc_Char)0x6d,  /* [688] */
    (xdc_Char)0x20,  /* [689] */
    (xdc_Char)0x61,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x54,  /* [692] */
    (xdc_Char)0x61,  /* [693] */
    (xdc_Char)0x73,  /* [694] */
    (xdc_Char)0x6b,  /* [695] */
    (xdc_Char)0x2e,  /* [696] */
    (xdc_Char)0x0,  /* [697] */
    (xdc_Char)0x4d,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x69,  /* [700] */
    (xdc_Char)0x6c,  /* [701] */
    (xdc_Char)0x62,  /* [702] */
    (xdc_Char)0x6f,  /* [703] */
    (xdc_Char)0x78,  /* [704] */
    (xdc_Char)0x5f,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x72,  /* [707] */
    (xdc_Char)0x65,  /* [708] */
    (xdc_Char)0x61,  /* [709] */
    (xdc_Char)0x74,  /* [710] */
    (xdc_Char)0x65,  /* [711] */
    (xdc_Char)0x27,  /* [712] */
    (xdc_Char)0x73,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x62,  /* [715] */
    (xdc_Char)0x75,  /* [716] */
    (xdc_Char)0x66,  /* [717] */
    (xdc_Char)0x53,  /* [718] */
    (xdc_Char)0x69,  /* [719] */
    (xdc_Char)0x7a,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x70,  /* [723] */
    (xdc_Char)0x61,  /* [724] */
    (xdc_Char)0x72,  /* [725] */
    (xdc_Char)0x61,  /* [726] */
    (xdc_Char)0x6d,  /* [727] */
    (xdc_Char)0x65,  /* [728] */
    (xdc_Char)0x74,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x72,  /* [731] */
    (xdc_Char)0x20,  /* [732] */
    (xdc_Char)0x69,  /* [733] */
    (xdc_Char)0x73,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x69,  /* [736] */
    (xdc_Char)0x6e,  /* [737] */
    (xdc_Char)0x76,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x6c,  /* [740] */
    (xdc_Char)0x69,  /* [741] */
    (xdc_Char)0x64,  /* [742] */
    (xdc_Char)0x20,  /* [743] */
    (xdc_Char)0x28,  /* [744] */
    (xdc_Char)0x74,  /* [745] */
    (xdc_Char)0x6f,  /* [746] */
    (xdc_Char)0x6f,  /* [747] */
    (xdc_Char)0x20,  /* [748] */
    (xdc_Char)0x73,  /* [749] */
    (xdc_Char)0x6d,  /* [750] */
    (xdc_Char)0x61,  /* [751] */
    (xdc_Char)0x6c,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x29,  /* [754] */
    (xdc_Char)0x0,  /* [755] */
    (xdc_Char)0x41,  /* [756] */
    (xdc_Char)0x5f,  /* [757] */
    (xdc_Char)0x6e,  /* [758] */
    (xdc_Char)0x6f,  /* [759] */
    (xdc_Char)0x45,  /* [760] */
    (xdc_Char)0x76,  /* [761] */
    (xdc_Char)0x65,  /* [762] */
    (xdc_Char)0x6e,  /* [763] */
    (xdc_Char)0x74,  /* [764] */
    (xdc_Char)0x73,  /* [765] */
    (xdc_Char)0x3a,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x54,  /* [768] */
    (xdc_Char)0x68,  /* [769] */
    (xdc_Char)0x65,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x45,  /* [772] */
    (xdc_Char)0x76,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x6e,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x2e,  /* [777] */
    (xdc_Char)0x73,  /* [778] */
    (xdc_Char)0x75,  /* [779] */
    (xdc_Char)0x70,  /* [780] */
    (xdc_Char)0x70,  /* [781] */
    (xdc_Char)0x6f,  /* [782] */
    (xdc_Char)0x72,  /* [783] */
    (xdc_Char)0x74,  /* [784] */
    (xdc_Char)0x73,  /* [785] */
    (xdc_Char)0x45,  /* [786] */
    (xdc_Char)0x76,  /* [787] */
    (xdc_Char)0x65,  /* [788] */
    (xdc_Char)0x6e,  /* [789] */
    (xdc_Char)0x74,  /* [790] */
    (xdc_Char)0x73,  /* [791] */
    (xdc_Char)0x20,  /* [792] */
    (xdc_Char)0x66,  /* [793] */
    (xdc_Char)0x6c,  /* [794] */
    (xdc_Char)0x61,  /* [795] */
    (xdc_Char)0x67,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x69,  /* [798] */
    (xdc_Char)0x73,  /* [799] */
    (xdc_Char)0x20,  /* [800] */
    (xdc_Char)0x64,  /* [801] */
    (xdc_Char)0x69,  /* [802] */
    (xdc_Char)0x73,  /* [803] */
    (xdc_Char)0x61,  /* [804] */
    (xdc_Char)0x62,  /* [805] */
    (xdc_Char)0x6c,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x64,  /* [808] */
    (xdc_Char)0x2e,  /* [809] */
    (xdc_Char)0x0,  /* [810] */
    (xdc_Char)0x41,  /* [811] */
    (xdc_Char)0x5f,  /* [812] */
    (xdc_Char)0x69,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x76,  /* [815] */
    (xdc_Char)0x54,  /* [816] */
    (xdc_Char)0x69,  /* [817] */
    (xdc_Char)0x6d,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x6f,  /* [820] */
    (xdc_Char)0x75,  /* [821] */
    (xdc_Char)0x74,  /* [822] */
    (xdc_Char)0x3a,  /* [823] */
    (xdc_Char)0x20,  /* [824] */
    (xdc_Char)0x43,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x6e,  /* [827] */
    (xdc_Char)0x27,  /* [828] */
    (xdc_Char)0x74,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x75,  /* [831] */
    (xdc_Char)0x73,  /* [832] */
    (xdc_Char)0x65,  /* [833] */
    (xdc_Char)0x20,  /* [834] */
    (xdc_Char)0x42,  /* [835] */
    (xdc_Char)0x49,  /* [836] */
    (xdc_Char)0x4f,  /* [837] */
    (xdc_Char)0x53,  /* [838] */
    (xdc_Char)0x5f,  /* [839] */
    (xdc_Char)0x45,  /* [840] */
    (xdc_Char)0x56,  /* [841] */
    (xdc_Char)0x45,  /* [842] */
    (xdc_Char)0x4e,  /* [843] */
    (xdc_Char)0x54,  /* [844] */
    (xdc_Char)0x5f,  /* [845] */
    (xdc_Char)0x41,  /* [846] */
    (xdc_Char)0x43,  /* [847] */
    (xdc_Char)0x51,  /* [848] */
    (xdc_Char)0x55,  /* [849] */
    (xdc_Char)0x49,  /* [850] */
    (xdc_Char)0x52,  /* [851] */
    (xdc_Char)0x45,  /* [852] */
    (xdc_Char)0x44,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x77,  /* [855] */
    (xdc_Char)0x69,  /* [856] */
    (xdc_Char)0x74,  /* [857] */
    (xdc_Char)0x68,  /* [858] */
    (xdc_Char)0x20,  /* [859] */
    (xdc_Char)0x74,  /* [860] */
    (xdc_Char)0x68,  /* [861] */
    (xdc_Char)0x69,  /* [862] */
    (xdc_Char)0x73,  /* [863] */
    (xdc_Char)0x20,  /* [864] */
    (xdc_Char)0x53,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x6d,  /* [867] */
    (xdc_Char)0x61,  /* [868] */
    (xdc_Char)0x70,  /* [869] */
    (xdc_Char)0x68,  /* [870] */
    (xdc_Char)0x6f,  /* [871] */
    (xdc_Char)0x72,  /* [872] */
    (xdc_Char)0x65,  /* [873] */
    (xdc_Char)0x2e,  /* [874] */
    (xdc_Char)0x0,  /* [875] */
    (xdc_Char)0x41,  /* [876] */
    (xdc_Char)0x5f,  /* [877] */
    (xdc_Char)0x6f,  /* [878] */
    (xdc_Char)0x76,  /* [879] */
    (xdc_Char)0x65,  /* [880] */
    (xdc_Char)0x72,  /* [881] */
    (xdc_Char)0x66,  /* [882] */
    (xdc_Char)0x6c,  /* [883] */
    (xdc_Char)0x6f,  /* [884] */
    (xdc_Char)0x77,  /* [885] */
    (xdc_Char)0x3a,  /* [886] */
    (xdc_Char)0x20,  /* [887] */
    (xdc_Char)0x43,  /* [888] */
    (xdc_Char)0x6f,  /* [889] */
    (xdc_Char)0x75,  /* [890] */
    (xdc_Char)0x6e,  /* [891] */
    (xdc_Char)0x74,  /* [892] */
    (xdc_Char)0x20,  /* [893] */
    (xdc_Char)0x68,  /* [894] */
    (xdc_Char)0x61,  /* [895] */
    (xdc_Char)0x73,  /* [896] */
    (xdc_Char)0x20,  /* [897] */
    (xdc_Char)0x65,  /* [898] */
    (xdc_Char)0x78,  /* [899] */
    (xdc_Char)0x63,  /* [900] */
    (xdc_Char)0x65,  /* [901] */
    (xdc_Char)0x65,  /* [902] */
    (xdc_Char)0x64,  /* [903] */
    (xdc_Char)0x65,  /* [904] */
    (xdc_Char)0x64,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x36,  /* [907] */
    (xdc_Char)0x35,  /* [908] */
    (xdc_Char)0x35,  /* [909] */
    (xdc_Char)0x33,  /* [910] */
    (xdc_Char)0x35,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x61,  /* [913] */
    (xdc_Char)0x6e,  /* [914] */
    (xdc_Char)0x64,  /* [915] */
    (xdc_Char)0x20,  /* [916] */
    (xdc_Char)0x72,  /* [917] */
    (xdc_Char)0x6f,  /* [918] */
    (xdc_Char)0x6c,  /* [919] */
    (xdc_Char)0x6c,  /* [920] */
    (xdc_Char)0x65,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x20,  /* [923] */
    (xdc_Char)0x6f,  /* [924] */
    (xdc_Char)0x76,  /* [925] */
    (xdc_Char)0x65,  /* [926] */
    (xdc_Char)0x72,  /* [927] */
    (xdc_Char)0x2e,  /* [928] */
    (xdc_Char)0x0,  /* [929] */
    (xdc_Char)0x41,  /* [930] */
    (xdc_Char)0x5f,  /* [931] */
    (xdc_Char)0x73,  /* [932] */
    (xdc_Char)0x77,  /* [933] */
    (xdc_Char)0x69,  /* [934] */
    (xdc_Char)0x44,  /* [935] */
    (xdc_Char)0x69,  /* [936] */
    (xdc_Char)0x73,  /* [937] */
    (xdc_Char)0x61,  /* [938] */
    (xdc_Char)0x62,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x65,  /* [941] */
    (xdc_Char)0x64,  /* [942] */
    (xdc_Char)0x3a,  /* [943] */
    (xdc_Char)0x20,  /* [944] */
    (xdc_Char)0x43,  /* [945] */
    (xdc_Char)0x61,  /* [946] */
    (xdc_Char)0x6e,  /* [947] */
    (xdc_Char)0x6e,  /* [948] */
    (xdc_Char)0x6f,  /* [949] */
    (xdc_Char)0x74,  /* [950] */
    (xdc_Char)0x20,  /* [951] */
    (xdc_Char)0x63,  /* [952] */
    (xdc_Char)0x72,  /* [953] */
    (xdc_Char)0x65,  /* [954] */
    (xdc_Char)0x61,  /* [955] */
    (xdc_Char)0x74,  /* [956] */
    (xdc_Char)0x65,  /* [957] */
    (xdc_Char)0x20,  /* [958] */
    (xdc_Char)0x61,  /* [959] */
    (xdc_Char)0x20,  /* [960] */
    (xdc_Char)0x53,  /* [961] */
    (xdc_Char)0x77,  /* [962] */
    (xdc_Char)0x69,  /* [963] */
    (xdc_Char)0x20,  /* [964] */
    (xdc_Char)0x77,  /* [965] */
    (xdc_Char)0x68,  /* [966] */
    (xdc_Char)0x65,  /* [967] */
    (xdc_Char)0x6e,  /* [968] */
    (xdc_Char)0x20,  /* [969] */
    (xdc_Char)0x53,  /* [970] */
    (xdc_Char)0x77,  /* [971] */
    (xdc_Char)0x69,  /* [972] */
    (xdc_Char)0x20,  /* [973] */
    (xdc_Char)0x69,  /* [974] */
    (xdc_Char)0x73,  /* [975] */
    (xdc_Char)0x20,  /* [976] */
    (xdc_Char)0x64,  /* [977] */
    (xdc_Char)0x69,  /* [978] */
    (xdc_Char)0x73,  /* [979] */
    (xdc_Char)0x61,  /* [980] */
    (xdc_Char)0x62,  /* [981] */
    (xdc_Char)0x6c,  /* [982] */
    (xdc_Char)0x65,  /* [983] */
    (xdc_Char)0x64,  /* [984] */
    (xdc_Char)0x2e,  /* [985] */
    (xdc_Char)0x0,  /* [986] */
    (xdc_Char)0x41,  /* [987] */
    (xdc_Char)0x5f,  /* [988] */
    (xdc_Char)0x62,  /* [989] */
    (xdc_Char)0x61,  /* [990] */
    (xdc_Char)0x64,  /* [991] */
    (xdc_Char)0x50,  /* [992] */
    (xdc_Char)0x72,  /* [993] */
    (xdc_Char)0x69,  /* [994] */
    (xdc_Char)0x6f,  /* [995] */
    (xdc_Char)0x72,  /* [996] */
    (xdc_Char)0x69,  /* [997] */
    (xdc_Char)0x74,  /* [998] */
    (xdc_Char)0x79,  /* [999] */
    (xdc_Char)0x3a,  /* [1000] */
    (xdc_Char)0x20,  /* [1001] */
    (xdc_Char)0x41,  /* [1002] */
    (xdc_Char)0x6e,  /* [1003] */
    (xdc_Char)0x20,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6e,  /* [1006] */
    (xdc_Char)0x76,  /* [1007] */
    (xdc_Char)0x61,  /* [1008] */
    (xdc_Char)0x6c,  /* [1009] */
    (xdc_Char)0x69,  /* [1010] */
    (xdc_Char)0x64,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x53,  /* [1013] */
    (xdc_Char)0x77,  /* [1014] */
    (xdc_Char)0x69,  /* [1015] */
    (xdc_Char)0x20,  /* [1016] */
    (xdc_Char)0x70,  /* [1017] */
    (xdc_Char)0x72,  /* [1018] */
    (xdc_Char)0x69,  /* [1019] */
    (xdc_Char)0x6f,  /* [1020] */
    (xdc_Char)0x72,  /* [1021] */
    (xdc_Char)0x69,  /* [1022] */
    (xdc_Char)0x74,  /* [1023] */
    (xdc_Char)0x79,  /* [1024] */
    (xdc_Char)0x20,  /* [1025] */
    (xdc_Char)0x77,  /* [1026] */
    (xdc_Char)0x61,  /* [1027] */
    (xdc_Char)0x73,  /* [1028] */
    (xdc_Char)0x20,  /* [1029] */
    (xdc_Char)0x75,  /* [1030] */
    (xdc_Char)0x73,  /* [1031] */
    (xdc_Char)0x65,  /* [1032] */
    (xdc_Char)0x64,  /* [1033] */
    (xdc_Char)0x2e,  /* [1034] */
    (xdc_Char)0x0,  /* [1035] */
    (xdc_Char)0x41,  /* [1036] */
    (xdc_Char)0x5f,  /* [1037] */
    (xdc_Char)0x62,  /* [1038] */
    (xdc_Char)0x61,  /* [1039] */
    (xdc_Char)0x64,  /* [1040] */
    (xdc_Char)0x54,  /* [1041] */
    (xdc_Char)0x68,  /* [1042] */
    (xdc_Char)0x72,  /* [1043] */
    (xdc_Char)0x65,  /* [1044] */
    (xdc_Char)0x61,  /* [1045] */
    (xdc_Char)0x64,  /* [1046] */
    (xdc_Char)0x54,  /* [1047] */
    (xdc_Char)0x79,  /* [1048] */
    (xdc_Char)0x70,  /* [1049] */
    (xdc_Char)0x65,  /* [1050] */
    (xdc_Char)0x3a,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x43,  /* [1053] */
    (xdc_Char)0x61,  /* [1054] */
    (xdc_Char)0x6e,  /* [1055] */
    (xdc_Char)0x6e,  /* [1056] */
    (xdc_Char)0x6f,  /* [1057] */
    (xdc_Char)0x74,  /* [1058] */
    (xdc_Char)0x20,  /* [1059] */
    (xdc_Char)0x63,  /* [1060] */
    (xdc_Char)0x72,  /* [1061] */
    (xdc_Char)0x65,  /* [1062] */
    (xdc_Char)0x61,  /* [1063] */
    (xdc_Char)0x74,  /* [1064] */
    (xdc_Char)0x65,  /* [1065] */
    (xdc_Char)0x2f,  /* [1066] */
    (xdc_Char)0x64,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6c,  /* [1069] */
    (xdc_Char)0x65,  /* [1070] */
    (xdc_Char)0x74,  /* [1071] */
    (xdc_Char)0x65,  /* [1072] */
    (xdc_Char)0x20,  /* [1073] */
    (xdc_Char)0x61,  /* [1074] */
    (xdc_Char)0x20,  /* [1075] */
    (xdc_Char)0x74,  /* [1076] */
    (xdc_Char)0x61,  /* [1077] */
    (xdc_Char)0x73,  /* [1078] */
    (xdc_Char)0x6b,  /* [1079] */
    (xdc_Char)0x20,  /* [1080] */
    (xdc_Char)0x66,  /* [1081] */
    (xdc_Char)0x72,  /* [1082] */
    (xdc_Char)0x6f,  /* [1083] */
    (xdc_Char)0x6d,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x48,  /* [1086] */
    (xdc_Char)0x77,  /* [1087] */
    (xdc_Char)0x69,  /* [1088] */
    (xdc_Char)0x20,  /* [1089] */
    (xdc_Char)0x6f,  /* [1090] */
    (xdc_Char)0x72,  /* [1091] */
    (xdc_Char)0x20,  /* [1092] */
    (xdc_Char)0x53,  /* [1093] */
    (xdc_Char)0x77,  /* [1094] */
    (xdc_Char)0x69,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x74,  /* [1097] */
    (xdc_Char)0x68,  /* [1098] */
    (xdc_Char)0x72,  /* [1099] */
    (xdc_Char)0x65,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x64,  /* [1102] */
    (xdc_Char)0x2e,  /* [1103] */
    (xdc_Char)0x0,  /* [1104] */
    (xdc_Char)0x41,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x62,  /* [1107] */
    (xdc_Char)0x61,  /* [1108] */
    (xdc_Char)0x64,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x61,  /* [1111] */
    (xdc_Char)0x73,  /* [1112] */
    (xdc_Char)0x6b,  /* [1113] */
    (xdc_Char)0x53,  /* [1114] */
    (xdc_Char)0x74,  /* [1115] */
    (xdc_Char)0x61,  /* [1116] */
    (xdc_Char)0x74,  /* [1117] */
    (xdc_Char)0x65,  /* [1118] */
    (xdc_Char)0x3a,  /* [1119] */
    (xdc_Char)0x20,  /* [1120] */
    (xdc_Char)0x43,  /* [1121] */
    (xdc_Char)0x61,  /* [1122] */
    (xdc_Char)0x6e,  /* [1123] */
    (xdc_Char)0x27,  /* [1124] */
    (xdc_Char)0x74,  /* [1125] */
    (xdc_Char)0x20,  /* [1126] */
    (xdc_Char)0x64,  /* [1127] */
    (xdc_Char)0x65,  /* [1128] */
    (xdc_Char)0x6c,  /* [1129] */
    (xdc_Char)0x65,  /* [1130] */
    (xdc_Char)0x74,  /* [1131] */
    (xdc_Char)0x65,  /* [1132] */
    (xdc_Char)0x20,  /* [1133] */
    (xdc_Char)0x61,  /* [1134] */
    (xdc_Char)0x20,  /* [1135] */
    (xdc_Char)0x74,  /* [1136] */
    (xdc_Char)0x61,  /* [1137] */
    (xdc_Char)0x73,  /* [1138] */
    (xdc_Char)0x6b,  /* [1139] */
    (xdc_Char)0x20,  /* [1140] */
    (xdc_Char)0x69,  /* [1141] */
    (xdc_Char)0x6e,  /* [1142] */
    (xdc_Char)0x20,  /* [1143] */
    (xdc_Char)0x52,  /* [1144] */
    (xdc_Char)0x55,  /* [1145] */
    (xdc_Char)0x4e,  /* [1146] */
    (xdc_Char)0x4e,  /* [1147] */
    (xdc_Char)0x49,  /* [1148] */
    (xdc_Char)0x4e,  /* [1149] */
    (xdc_Char)0x47,  /* [1150] */
    (xdc_Char)0x20,  /* [1151] */
    (xdc_Char)0x73,  /* [1152] */
    (xdc_Char)0x74,  /* [1153] */
    (xdc_Char)0x61,  /* [1154] */
    (xdc_Char)0x74,  /* [1155] */
    (xdc_Char)0x65,  /* [1156] */
    (xdc_Char)0x2e,  /* [1157] */
    (xdc_Char)0x0,  /* [1158] */
    (xdc_Char)0x41,  /* [1159] */
    (xdc_Char)0x5f,  /* [1160] */
    (xdc_Char)0x6e,  /* [1161] */
    (xdc_Char)0x6f,  /* [1162] */
    (xdc_Char)0x50,  /* [1163] */
    (xdc_Char)0x65,  /* [1164] */
    (xdc_Char)0x6e,  /* [1165] */
    (xdc_Char)0x64,  /* [1166] */
    (xdc_Char)0x45,  /* [1167] */
    (xdc_Char)0x6c,  /* [1168] */
    (xdc_Char)0x65,  /* [1169] */
    (xdc_Char)0x6d,  /* [1170] */
    (xdc_Char)0x3a,  /* [1171] */
    (xdc_Char)0x20,  /* [1172] */
    (xdc_Char)0x4e,  /* [1173] */
    (xdc_Char)0x6f,  /* [1174] */
    (xdc_Char)0x74,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x65,  /* [1177] */
    (xdc_Char)0x6e,  /* [1178] */
    (xdc_Char)0x6f,  /* [1179] */
    (xdc_Char)0x75,  /* [1180] */
    (xdc_Char)0x67,  /* [1181] */
    (xdc_Char)0x68,  /* [1182] */
    (xdc_Char)0x20,  /* [1183] */
    (xdc_Char)0x69,  /* [1184] */
    (xdc_Char)0x6e,  /* [1185] */
    (xdc_Char)0x66,  /* [1186] */
    (xdc_Char)0x6f,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x74,  /* [1189] */
    (xdc_Char)0x6f,  /* [1190] */
    (xdc_Char)0x20,  /* [1191] */
    (xdc_Char)0x64,  /* [1192] */
    (xdc_Char)0x65,  /* [1193] */
    (xdc_Char)0x6c,  /* [1194] */
    (xdc_Char)0x65,  /* [1195] */
    (xdc_Char)0x74,  /* [1196] */
    (xdc_Char)0x65,  /* [1197] */
    (xdc_Char)0x20,  /* [1198] */
    (xdc_Char)0x42,  /* [1199] */
    (xdc_Char)0x4c,  /* [1200] */
    (xdc_Char)0x4f,  /* [1201] */
    (xdc_Char)0x43,  /* [1202] */
    (xdc_Char)0x4b,  /* [1203] */
    (xdc_Char)0x45,  /* [1204] */
    (xdc_Char)0x44,  /* [1205] */
    (xdc_Char)0x20,  /* [1206] */
    (xdc_Char)0x74,  /* [1207] */
    (xdc_Char)0x61,  /* [1208] */
    (xdc_Char)0x73,  /* [1209] */
    (xdc_Char)0x6b,  /* [1210] */
    (xdc_Char)0x2e,  /* [1211] */
    (xdc_Char)0x0,  /* [1212] */
    (xdc_Char)0x41,  /* [1213] */
    (xdc_Char)0x5f,  /* [1214] */
    (xdc_Char)0x74,  /* [1215] */
    (xdc_Char)0x61,  /* [1216] */
    (xdc_Char)0x73,  /* [1217] */
    (xdc_Char)0x6b,  /* [1218] */
    (xdc_Char)0x44,  /* [1219] */
    (xdc_Char)0x69,  /* [1220] */
    (xdc_Char)0x73,  /* [1221] */
    (xdc_Char)0x61,  /* [1222] */
    (xdc_Char)0x62,  /* [1223] */
    (xdc_Char)0x6c,  /* [1224] */
    (xdc_Char)0x65,  /* [1225] */
    (xdc_Char)0x64,  /* [1226] */
    (xdc_Char)0x3a,  /* [1227] */
    (xdc_Char)0x20,  /* [1228] */
    (xdc_Char)0x43,  /* [1229] */
    (xdc_Char)0x61,  /* [1230] */
    (xdc_Char)0x6e,  /* [1231] */
    (xdc_Char)0x6e,  /* [1232] */
    (xdc_Char)0x6f,  /* [1233] */
    (xdc_Char)0x74,  /* [1234] */
    (xdc_Char)0x20,  /* [1235] */
    (xdc_Char)0x63,  /* [1236] */
    (xdc_Char)0x72,  /* [1237] */
    (xdc_Char)0x65,  /* [1238] */
    (xdc_Char)0x61,  /* [1239] */
    (xdc_Char)0x74,  /* [1240] */
    (xdc_Char)0x65,  /* [1241] */
    (xdc_Char)0x20,  /* [1242] */
    (xdc_Char)0x61,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x74,  /* [1245] */
    (xdc_Char)0x61,  /* [1246] */
    (xdc_Char)0x73,  /* [1247] */
    (xdc_Char)0x6b,  /* [1248] */
    (xdc_Char)0x20,  /* [1249] */
    (xdc_Char)0x77,  /* [1250] */
    (xdc_Char)0x68,  /* [1251] */
    (xdc_Char)0x65,  /* [1252] */
    (xdc_Char)0x6e,  /* [1253] */
    (xdc_Char)0x20,  /* [1254] */
    (xdc_Char)0x74,  /* [1255] */
    (xdc_Char)0x61,  /* [1256] */
    (xdc_Char)0x73,  /* [1257] */
    (xdc_Char)0x6b,  /* [1258] */
    (xdc_Char)0x69,  /* [1259] */
    (xdc_Char)0x6e,  /* [1260] */
    (xdc_Char)0x67,  /* [1261] */
    (xdc_Char)0x20,  /* [1262] */
    (xdc_Char)0x69,  /* [1263] */
    (xdc_Char)0x73,  /* [1264] */
    (xdc_Char)0x20,  /* [1265] */
    (xdc_Char)0x64,  /* [1266] */
    (xdc_Char)0x69,  /* [1267] */
    (xdc_Char)0x73,  /* [1268] */
    (xdc_Char)0x61,  /* [1269] */
    (xdc_Char)0x62,  /* [1270] */
    (xdc_Char)0x6c,  /* [1271] */
    (xdc_Char)0x65,  /* [1272] */
    (xdc_Char)0x64,  /* [1273] */
    (xdc_Char)0x2e,  /* [1274] */
    (xdc_Char)0x0,  /* [1275] */
    (xdc_Char)0x41,  /* [1276] */
    (xdc_Char)0x5f,  /* [1277] */
    (xdc_Char)0x62,  /* [1278] */
    (xdc_Char)0x61,  /* [1279] */
    (xdc_Char)0x64,  /* [1280] */
    (xdc_Char)0x50,  /* [1281] */
    (xdc_Char)0x72,  /* [1282] */
    (xdc_Char)0x69,  /* [1283] */
    (xdc_Char)0x6f,  /* [1284] */
    (xdc_Char)0x72,  /* [1285] */
    (xdc_Char)0x69,  /* [1286] */
    (xdc_Char)0x74,  /* [1287] */
    (xdc_Char)0x79,  /* [1288] */
    (xdc_Char)0x3a,  /* [1289] */
    (xdc_Char)0x20,  /* [1290] */
    (xdc_Char)0x41,  /* [1291] */
    (xdc_Char)0x6e,  /* [1292] */
    (xdc_Char)0x20,  /* [1293] */
    (xdc_Char)0x69,  /* [1294] */
    (xdc_Char)0x6e,  /* [1295] */
    (xdc_Char)0x76,  /* [1296] */
    (xdc_Char)0x61,  /* [1297] */
    (xdc_Char)0x6c,  /* [1298] */
    (xdc_Char)0x69,  /* [1299] */
    (xdc_Char)0x64,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x74,  /* [1302] */
    (xdc_Char)0x61,  /* [1303] */
    (xdc_Char)0x73,  /* [1304] */
    (xdc_Char)0x6b,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x70,  /* [1307] */
    (xdc_Char)0x72,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x6f,  /* [1310] */
    (xdc_Char)0x72,  /* [1311] */
    (xdc_Char)0x69,  /* [1312] */
    (xdc_Char)0x74,  /* [1313] */
    (xdc_Char)0x79,  /* [1314] */
    (xdc_Char)0x20,  /* [1315] */
    (xdc_Char)0x77,  /* [1316] */
    (xdc_Char)0x61,  /* [1317] */
    (xdc_Char)0x73,  /* [1318] */
    (xdc_Char)0x20,  /* [1319] */
    (xdc_Char)0x75,  /* [1320] */
    (xdc_Char)0x73,  /* [1321] */
    (xdc_Char)0x65,  /* [1322] */
    (xdc_Char)0x64,  /* [1323] */
    (xdc_Char)0x2e,  /* [1324] */
    (xdc_Char)0x0,  /* [1325] */
    (xdc_Char)0x41,  /* [1326] */
    (xdc_Char)0x5f,  /* [1327] */
    (xdc_Char)0x62,  /* [1328] */
    (xdc_Char)0x61,  /* [1329] */
    (xdc_Char)0x64,  /* [1330] */
    (xdc_Char)0x54,  /* [1331] */
    (xdc_Char)0x69,  /* [1332] */
    (xdc_Char)0x6d,  /* [1333] */
    (xdc_Char)0x65,  /* [1334] */
    (xdc_Char)0x6f,  /* [1335] */
    (xdc_Char)0x75,  /* [1336] */
    (xdc_Char)0x74,  /* [1337] */
    (xdc_Char)0x3a,  /* [1338] */
    (xdc_Char)0x20,  /* [1339] */
    (xdc_Char)0x43,  /* [1340] */
    (xdc_Char)0x61,  /* [1341] */
    (xdc_Char)0x6e,  /* [1342] */
    (xdc_Char)0x27,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x20,  /* [1345] */
    (xdc_Char)0x73,  /* [1346] */
    (xdc_Char)0x6c,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x65,  /* [1349] */
    (xdc_Char)0x70,  /* [1350] */
    (xdc_Char)0x20,  /* [1351] */
    (xdc_Char)0x46,  /* [1352] */
    (xdc_Char)0x4f,  /* [1353] */
    (xdc_Char)0x52,  /* [1354] */
    (xdc_Char)0x45,  /* [1355] */
    (xdc_Char)0x56,  /* [1356] */
    (xdc_Char)0x45,  /* [1357] */
    (xdc_Char)0x52,  /* [1358] */
    (xdc_Char)0x2e,  /* [1359] */
    (xdc_Char)0x0,  /* [1360] */
    (xdc_Char)0x41,  /* [1361] */
    (xdc_Char)0x5f,  /* [1362] */
    (xdc_Char)0x62,  /* [1363] */
    (xdc_Char)0x61,  /* [1364] */
    (xdc_Char)0x64,  /* [1365] */
    (xdc_Char)0x41,  /* [1366] */
    (xdc_Char)0x66,  /* [1367] */
    (xdc_Char)0x66,  /* [1368] */
    (xdc_Char)0x69,  /* [1369] */
    (xdc_Char)0x6e,  /* [1370] */
    (xdc_Char)0x69,  /* [1371] */
    (xdc_Char)0x74,  /* [1372] */
    (xdc_Char)0x79,  /* [1373] */
    (xdc_Char)0x3a,  /* [1374] */
    (xdc_Char)0x20,  /* [1375] */
    (xdc_Char)0x49,  /* [1376] */
    (xdc_Char)0x6e,  /* [1377] */
    (xdc_Char)0x76,  /* [1378] */
    (xdc_Char)0x61,  /* [1379] */
    (xdc_Char)0x6c,  /* [1380] */
    (xdc_Char)0x69,  /* [1381] */
    (xdc_Char)0x64,  /* [1382] */
    (xdc_Char)0x20,  /* [1383] */
    (xdc_Char)0x61,  /* [1384] */
    (xdc_Char)0x66,  /* [1385] */
    (xdc_Char)0x66,  /* [1386] */
    (xdc_Char)0x69,  /* [1387] */
    (xdc_Char)0x6e,  /* [1388] */
    (xdc_Char)0x69,  /* [1389] */
    (xdc_Char)0x74,  /* [1390] */
    (xdc_Char)0x79,  /* [1391] */
    (xdc_Char)0x2e,  /* [1392] */
    (xdc_Char)0x0,  /* [1393] */
    (xdc_Char)0x41,  /* [1394] */
    (xdc_Char)0x5f,  /* [1395] */
    (xdc_Char)0x62,  /* [1396] */
    (xdc_Char)0x61,  /* [1397] */
    (xdc_Char)0x64,  /* [1398] */
    (xdc_Char)0x43,  /* [1399] */
    (xdc_Char)0x6f,  /* [1400] */
    (xdc_Char)0x6e,  /* [1401] */
    (xdc_Char)0x74,  /* [1402] */
    (xdc_Char)0x65,  /* [1403] */
    (xdc_Char)0x78,  /* [1404] */
    (xdc_Char)0x74,  /* [1405] */
    (xdc_Char)0x3a,  /* [1406] */
    (xdc_Char)0x20,  /* [1407] */
    (xdc_Char)0x62,  /* [1408] */
    (xdc_Char)0x61,  /* [1409] */
    (xdc_Char)0x64,  /* [1410] */
    (xdc_Char)0x20,  /* [1411] */
    (xdc_Char)0x63,  /* [1412] */
    (xdc_Char)0x61,  /* [1413] */
    (xdc_Char)0x6c,  /* [1414] */
    (xdc_Char)0x6c,  /* [1415] */
    (xdc_Char)0x69,  /* [1416] */
    (xdc_Char)0x6e,  /* [1417] */
    (xdc_Char)0x67,  /* [1418] */
    (xdc_Char)0x20,  /* [1419] */
    (xdc_Char)0x63,  /* [1420] */
    (xdc_Char)0x6f,  /* [1421] */
    (xdc_Char)0x6e,  /* [1422] */
    (xdc_Char)0x74,  /* [1423] */
    (xdc_Char)0x65,  /* [1424] */
    (xdc_Char)0x78,  /* [1425] */
    (xdc_Char)0x74,  /* [1426] */
    (xdc_Char)0x2e,  /* [1427] */
    (xdc_Char)0x20,  /* [1428] */
    (xdc_Char)0x4d,  /* [1429] */
    (xdc_Char)0x61,  /* [1430] */
    (xdc_Char)0x79,  /* [1431] */
    (xdc_Char)0x20,  /* [1432] */
    (xdc_Char)0x6e,  /* [1433] */
    (xdc_Char)0x6f,  /* [1434] */
    (xdc_Char)0x74,  /* [1435] */
    (xdc_Char)0x20,  /* [1436] */
    (xdc_Char)0x62,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x20,  /* [1439] */
    (xdc_Char)0x65,  /* [1440] */
    (xdc_Char)0x6e,  /* [1441] */
    (xdc_Char)0x74,  /* [1442] */
    (xdc_Char)0x65,  /* [1443] */
    (xdc_Char)0x72,  /* [1444] */
    (xdc_Char)0x65,  /* [1445] */
    (xdc_Char)0x64,  /* [1446] */
    (xdc_Char)0x20,  /* [1447] */
    (xdc_Char)0x66,  /* [1448] */
    (xdc_Char)0x72,  /* [1449] */
    (xdc_Char)0x6f,  /* [1450] */
    (xdc_Char)0x6d,  /* [1451] */
    (xdc_Char)0x20,  /* [1452] */
    (xdc_Char)0x61,  /* [1453] */
    (xdc_Char)0x20,  /* [1454] */
    (xdc_Char)0x68,  /* [1455] */
    (xdc_Char)0x61,  /* [1456] */
    (xdc_Char)0x72,  /* [1457] */
    (xdc_Char)0x64,  /* [1458] */
    (xdc_Char)0x77,  /* [1459] */
    (xdc_Char)0x61,  /* [1460] */
    (xdc_Char)0x72,  /* [1461] */
    (xdc_Char)0x65,  /* [1462] */
    (xdc_Char)0x20,  /* [1463] */
    (xdc_Char)0x69,  /* [1464] */
    (xdc_Char)0x6e,  /* [1465] */
    (xdc_Char)0x74,  /* [1466] */
    (xdc_Char)0x65,  /* [1467] */
    (xdc_Char)0x72,  /* [1468] */
    (xdc_Char)0x72,  /* [1469] */
    (xdc_Char)0x75,  /* [1470] */
    (xdc_Char)0x70,  /* [1471] */
    (xdc_Char)0x74,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x74,  /* [1474] */
    (xdc_Char)0x68,  /* [1475] */
    (xdc_Char)0x72,  /* [1476] */
    (xdc_Char)0x65,  /* [1477] */
    (xdc_Char)0x61,  /* [1478] */
    (xdc_Char)0x64,  /* [1479] */
    (xdc_Char)0x2e,  /* [1480] */
    (xdc_Char)0x0,  /* [1481] */
    (xdc_Char)0x41,  /* [1482] */
    (xdc_Char)0x5f,  /* [1483] */
    (xdc_Char)0x62,  /* [1484] */
    (xdc_Char)0x61,  /* [1485] */
    (xdc_Char)0x64,  /* [1486] */
    (xdc_Char)0x43,  /* [1487] */
    (xdc_Char)0x6f,  /* [1488] */
    (xdc_Char)0x6e,  /* [1489] */
    (xdc_Char)0x74,  /* [1490] */
    (xdc_Char)0x65,  /* [1491] */
    (xdc_Char)0x78,  /* [1492] */
    (xdc_Char)0x74,  /* [1493] */
    (xdc_Char)0x3a,  /* [1494] */
    (xdc_Char)0x20,  /* [1495] */
    (xdc_Char)0x62,  /* [1496] */
    (xdc_Char)0x61,  /* [1497] */
    (xdc_Char)0x64,  /* [1498] */
    (xdc_Char)0x20,  /* [1499] */
    (xdc_Char)0x63,  /* [1500] */
    (xdc_Char)0x61,  /* [1501] */
    (xdc_Char)0x6c,  /* [1502] */
    (xdc_Char)0x6c,  /* [1503] */
    (xdc_Char)0x69,  /* [1504] */
    (xdc_Char)0x6e,  /* [1505] */
    (xdc_Char)0x67,  /* [1506] */
    (xdc_Char)0x20,  /* [1507] */
    (xdc_Char)0x63,  /* [1508] */
    (xdc_Char)0x6f,  /* [1509] */
    (xdc_Char)0x6e,  /* [1510] */
    (xdc_Char)0x74,  /* [1511] */
    (xdc_Char)0x65,  /* [1512] */
    (xdc_Char)0x78,  /* [1513] */
    (xdc_Char)0x74,  /* [1514] */
    (xdc_Char)0x2e,  /* [1515] */
    (xdc_Char)0x20,  /* [1516] */
    (xdc_Char)0x4d,  /* [1517] */
    (xdc_Char)0x61,  /* [1518] */
    (xdc_Char)0x79,  /* [1519] */
    (xdc_Char)0x20,  /* [1520] */
    (xdc_Char)0x6e,  /* [1521] */
    (xdc_Char)0x6f,  /* [1522] */
    (xdc_Char)0x74,  /* [1523] */
    (xdc_Char)0x20,  /* [1524] */
    (xdc_Char)0x62,  /* [1525] */
    (xdc_Char)0x65,  /* [1526] */
    (xdc_Char)0x20,  /* [1527] */
    (xdc_Char)0x65,  /* [1528] */
    (xdc_Char)0x6e,  /* [1529] */
    (xdc_Char)0x74,  /* [1530] */
    (xdc_Char)0x65,  /* [1531] */
    (xdc_Char)0x72,  /* [1532] */
    (xdc_Char)0x65,  /* [1533] */
    (xdc_Char)0x64,  /* [1534] */
    (xdc_Char)0x20,  /* [1535] */
    (xdc_Char)0x66,  /* [1536] */
    (xdc_Char)0x72,  /* [1537] */
    (xdc_Char)0x6f,  /* [1538] */
    (xdc_Char)0x6d,  /* [1539] */
    (xdc_Char)0x20,  /* [1540] */
    (xdc_Char)0x61,  /* [1541] */
    (xdc_Char)0x20,  /* [1542] */
    (xdc_Char)0x73,  /* [1543] */
    (xdc_Char)0x6f,  /* [1544] */
    (xdc_Char)0x66,  /* [1545] */
    (xdc_Char)0x74,  /* [1546] */
    (xdc_Char)0x77,  /* [1547] */
    (xdc_Char)0x61,  /* [1548] */
    (xdc_Char)0x72,  /* [1549] */
    (xdc_Char)0x65,  /* [1550] */
    (xdc_Char)0x20,  /* [1551] */
    (xdc_Char)0x6f,  /* [1552] */
    (xdc_Char)0x72,  /* [1553] */
    (xdc_Char)0x20,  /* [1554] */
    (xdc_Char)0x68,  /* [1555] */
    (xdc_Char)0x61,  /* [1556] */
    (xdc_Char)0x72,  /* [1557] */
    (xdc_Char)0x64,  /* [1558] */
    (xdc_Char)0x77,  /* [1559] */
    (xdc_Char)0x61,  /* [1560] */
    (xdc_Char)0x72,  /* [1561] */
    (xdc_Char)0x65,  /* [1562] */
    (xdc_Char)0x20,  /* [1563] */
    (xdc_Char)0x69,  /* [1564] */
    (xdc_Char)0x6e,  /* [1565] */
    (xdc_Char)0x74,  /* [1566] */
    (xdc_Char)0x65,  /* [1567] */
    (xdc_Char)0x72,  /* [1568] */
    (xdc_Char)0x72,  /* [1569] */
    (xdc_Char)0x75,  /* [1570] */
    (xdc_Char)0x70,  /* [1571] */
    (xdc_Char)0x74,  /* [1572] */
    (xdc_Char)0x20,  /* [1573] */
    (xdc_Char)0x74,  /* [1574] */
    (xdc_Char)0x68,  /* [1575] */
    (xdc_Char)0x72,  /* [1576] */
    (xdc_Char)0x65,  /* [1577] */
    (xdc_Char)0x61,  /* [1578] */
    (xdc_Char)0x64,  /* [1579] */
    (xdc_Char)0x2e,  /* [1580] */
    (xdc_Char)0x0,  /* [1581] */
    (xdc_Char)0x41,  /* [1582] */
    (xdc_Char)0x5f,  /* [1583] */
    (xdc_Char)0x62,  /* [1584] */
    (xdc_Char)0x61,  /* [1585] */
    (xdc_Char)0x64,  /* [1586] */
    (xdc_Char)0x43,  /* [1587] */
    (xdc_Char)0x6f,  /* [1588] */
    (xdc_Char)0x6e,  /* [1589] */
    (xdc_Char)0x74,  /* [1590] */
    (xdc_Char)0x65,  /* [1591] */
    (xdc_Char)0x78,  /* [1592] */
    (xdc_Char)0x74,  /* [1593] */
    (xdc_Char)0x3a,  /* [1594] */
    (xdc_Char)0x20,  /* [1595] */
    (xdc_Char)0x62,  /* [1596] */
    (xdc_Char)0x61,  /* [1597] */
    (xdc_Char)0x64,  /* [1598] */
    (xdc_Char)0x20,  /* [1599] */
    (xdc_Char)0x63,  /* [1600] */
    (xdc_Char)0x61,  /* [1601] */
    (xdc_Char)0x6c,  /* [1602] */
    (xdc_Char)0x6c,  /* [1603] */
    (xdc_Char)0x69,  /* [1604] */
    (xdc_Char)0x6e,  /* [1605] */
    (xdc_Char)0x67,  /* [1606] */
    (xdc_Char)0x20,  /* [1607] */
    (xdc_Char)0x63,  /* [1608] */
    (xdc_Char)0x6f,  /* [1609] */
    (xdc_Char)0x6e,  /* [1610] */
    (xdc_Char)0x74,  /* [1611] */
    (xdc_Char)0x65,  /* [1612] */
    (xdc_Char)0x78,  /* [1613] */
    (xdc_Char)0x74,  /* [1614] */
    (xdc_Char)0x2e,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x53,  /* [1617] */
    (xdc_Char)0x65,  /* [1618] */
    (xdc_Char)0x65,  /* [1619] */
    (xdc_Char)0x20,  /* [1620] */
    (xdc_Char)0x47,  /* [1621] */
    (xdc_Char)0x61,  /* [1622] */
    (xdc_Char)0x74,  /* [1623] */
    (xdc_Char)0x65,  /* [1624] */
    (xdc_Char)0x4d,  /* [1625] */
    (xdc_Char)0x75,  /* [1626] */
    (xdc_Char)0x74,  /* [1627] */
    (xdc_Char)0x65,  /* [1628] */
    (xdc_Char)0x78,  /* [1629] */
    (xdc_Char)0x50,  /* [1630] */
    (xdc_Char)0x72,  /* [1631] */
    (xdc_Char)0x69,  /* [1632] */
    (xdc_Char)0x20,  /* [1633] */
    (xdc_Char)0x41,  /* [1634] */
    (xdc_Char)0x50,  /* [1635] */
    (xdc_Char)0x49,  /* [1636] */
    (xdc_Char)0x20,  /* [1637] */
    (xdc_Char)0x64,  /* [1638] */
    (xdc_Char)0x6f,  /* [1639] */
    (xdc_Char)0x63,  /* [1640] */
    (xdc_Char)0x20,  /* [1641] */
    (xdc_Char)0x66,  /* [1642] */
    (xdc_Char)0x6f,  /* [1643] */
    (xdc_Char)0x72,  /* [1644] */
    (xdc_Char)0x20,  /* [1645] */
    (xdc_Char)0x64,  /* [1646] */
    (xdc_Char)0x65,  /* [1647] */
    (xdc_Char)0x74,  /* [1648] */
    (xdc_Char)0x61,  /* [1649] */
    (xdc_Char)0x69,  /* [1650] */
    (xdc_Char)0x6c,  /* [1651] */
    (xdc_Char)0x73,  /* [1652] */
    (xdc_Char)0x2e,  /* [1653] */
    (xdc_Char)0x0,  /* [1654] */
    (xdc_Char)0x41,  /* [1655] */
    (xdc_Char)0x5f,  /* [1656] */
    (xdc_Char)0x62,  /* [1657] */
    (xdc_Char)0x61,  /* [1658] */
    (xdc_Char)0x64,  /* [1659] */
    (xdc_Char)0x43,  /* [1660] */
    (xdc_Char)0x6f,  /* [1661] */
    (xdc_Char)0x6e,  /* [1662] */
    (xdc_Char)0x74,  /* [1663] */
    (xdc_Char)0x65,  /* [1664] */
    (xdc_Char)0x78,  /* [1665] */
    (xdc_Char)0x74,  /* [1666] */
    (xdc_Char)0x3a,  /* [1667] */
    (xdc_Char)0x20,  /* [1668] */
    (xdc_Char)0x62,  /* [1669] */
    (xdc_Char)0x61,  /* [1670] */
    (xdc_Char)0x64,  /* [1671] */
    (xdc_Char)0x20,  /* [1672] */
    (xdc_Char)0x63,  /* [1673] */
    (xdc_Char)0x61,  /* [1674] */
    (xdc_Char)0x6c,  /* [1675] */
    (xdc_Char)0x6c,  /* [1676] */
    (xdc_Char)0x69,  /* [1677] */
    (xdc_Char)0x6e,  /* [1678] */
    (xdc_Char)0x67,  /* [1679] */
    (xdc_Char)0x20,  /* [1680] */
    (xdc_Char)0x63,  /* [1681] */
    (xdc_Char)0x6f,  /* [1682] */
    (xdc_Char)0x6e,  /* [1683] */
    (xdc_Char)0x74,  /* [1684] */
    (xdc_Char)0x65,  /* [1685] */
    (xdc_Char)0x78,  /* [1686] */
    (xdc_Char)0x74,  /* [1687] */
    (xdc_Char)0x2e,  /* [1688] */
    (xdc_Char)0x20,  /* [1689] */
    (xdc_Char)0x53,  /* [1690] */
    (xdc_Char)0x65,  /* [1691] */
    (xdc_Char)0x65,  /* [1692] */
    (xdc_Char)0x20,  /* [1693] */
    (xdc_Char)0x47,  /* [1694] */
    (xdc_Char)0x61,  /* [1695] */
    (xdc_Char)0x74,  /* [1696] */
    (xdc_Char)0x65,  /* [1697] */
    (xdc_Char)0x4d,  /* [1698] */
    (xdc_Char)0x75,  /* [1699] */
    (xdc_Char)0x74,  /* [1700] */
    (xdc_Char)0x65,  /* [1701] */
    (xdc_Char)0x78,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x41,  /* [1704] */
    (xdc_Char)0x50,  /* [1705] */
    (xdc_Char)0x49,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x64,  /* [1708] */
    (xdc_Char)0x6f,  /* [1709] */
    (xdc_Char)0x63,  /* [1710] */
    (xdc_Char)0x20,  /* [1711] */
    (xdc_Char)0x66,  /* [1712] */
    (xdc_Char)0x6f,  /* [1713] */
    (xdc_Char)0x72,  /* [1714] */
    (xdc_Char)0x20,  /* [1715] */
    (xdc_Char)0x64,  /* [1716] */
    (xdc_Char)0x65,  /* [1717] */
    (xdc_Char)0x74,  /* [1718] */
    (xdc_Char)0x61,  /* [1719] */
    (xdc_Char)0x69,  /* [1720] */
    (xdc_Char)0x6c,  /* [1721] */
    (xdc_Char)0x73,  /* [1722] */
    (xdc_Char)0x2e,  /* [1723] */
    (xdc_Char)0x0,  /* [1724] */
    (xdc_Char)0x41,  /* [1725] */
    (xdc_Char)0x5f,  /* [1726] */
    (xdc_Char)0x7a,  /* [1727] */
    (xdc_Char)0x65,  /* [1728] */
    (xdc_Char)0x72,  /* [1729] */
    (xdc_Char)0x6f,  /* [1730] */
    (xdc_Char)0x54,  /* [1731] */
    (xdc_Char)0x69,  /* [1732] */
    (xdc_Char)0x6d,  /* [1733] */
    (xdc_Char)0x65,  /* [1734] */
    (xdc_Char)0x6f,  /* [1735] */
    (xdc_Char)0x75,  /* [1736] */
    (xdc_Char)0x74,  /* [1737] */
    (xdc_Char)0x3a,  /* [1738] */
    (xdc_Char)0x20,  /* [1739] */
    (xdc_Char)0x54,  /* [1740] */
    (xdc_Char)0x69,  /* [1741] */
    (xdc_Char)0x6d,  /* [1742] */
    (xdc_Char)0x65,  /* [1743] */
    (xdc_Char)0x6f,  /* [1744] */
    (xdc_Char)0x75,  /* [1745] */
    (xdc_Char)0x74,  /* [1746] */
    (xdc_Char)0x20,  /* [1747] */
    (xdc_Char)0x76,  /* [1748] */
    (xdc_Char)0x61,  /* [1749] */
    (xdc_Char)0x6c,  /* [1750] */
    (xdc_Char)0x75,  /* [1751] */
    (xdc_Char)0x65,  /* [1752] */
    (xdc_Char)0x20,  /* [1753] */
    (xdc_Char)0x61,  /* [1754] */
    (xdc_Char)0x6e,  /* [1755] */
    (xdc_Char)0x6e,  /* [1756] */
    (xdc_Char)0x6f,  /* [1757] */
    (xdc_Char)0x74,  /* [1758] */
    (xdc_Char)0x20,  /* [1759] */
    (xdc_Char)0x62,  /* [1760] */
    (xdc_Char)0x65,  /* [1761] */
    (xdc_Char)0x20,  /* [1762] */
    (xdc_Char)0x7a,  /* [1763] */
    (xdc_Char)0x65,  /* [1764] */
    (xdc_Char)0x72,  /* [1765] */
    (xdc_Char)0x6f,  /* [1766] */
    (xdc_Char)0x0,  /* [1767] */
    (xdc_Char)0x41,  /* [1768] */
    (xdc_Char)0x5f,  /* [1769] */
    (xdc_Char)0x69,  /* [1770] */
    (xdc_Char)0x6e,  /* [1771] */
    (xdc_Char)0x76,  /* [1772] */
    (xdc_Char)0x61,  /* [1773] */
    (xdc_Char)0x6c,  /* [1774] */
    (xdc_Char)0x69,  /* [1775] */
    (xdc_Char)0x64,  /* [1776] */
    (xdc_Char)0x4b,  /* [1777] */
    (xdc_Char)0x65,  /* [1778] */
    (xdc_Char)0x79,  /* [1779] */
    (xdc_Char)0x3a,  /* [1780] */
    (xdc_Char)0x20,  /* [1781] */
    (xdc_Char)0x74,  /* [1782] */
    (xdc_Char)0x68,  /* [1783] */
    (xdc_Char)0x65,  /* [1784] */
    (xdc_Char)0x20,  /* [1785] */
    (xdc_Char)0x6b,  /* [1786] */
    (xdc_Char)0x65,  /* [1787] */
    (xdc_Char)0x79,  /* [1788] */
    (xdc_Char)0x20,  /* [1789] */
    (xdc_Char)0x6d,  /* [1790] */
    (xdc_Char)0x75,  /* [1791] */
    (xdc_Char)0x73,  /* [1792] */
    (xdc_Char)0x74,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x62,  /* [1795] */
    (xdc_Char)0x65,  /* [1796] */
    (xdc_Char)0x20,  /* [1797] */
    (xdc_Char)0x73,  /* [1798] */
    (xdc_Char)0x65,  /* [1799] */
    (xdc_Char)0x74,  /* [1800] */
    (xdc_Char)0x20,  /* [1801] */
    (xdc_Char)0x74,  /* [1802] */
    (xdc_Char)0x6f,  /* [1803] */
    (xdc_Char)0x20,  /* [1804] */
    (xdc_Char)0x61,  /* [1805] */
    (xdc_Char)0x20,  /* [1806] */
    (xdc_Char)0x6e,  /* [1807] */
    (xdc_Char)0x6f,  /* [1808] */
    (xdc_Char)0x6e,  /* [1809] */
    (xdc_Char)0x2d,  /* [1810] */
    (xdc_Char)0x64,  /* [1811] */
    (xdc_Char)0x65,  /* [1812] */
    (xdc_Char)0x66,  /* [1813] */
    (xdc_Char)0x61,  /* [1814] */
    (xdc_Char)0x75,  /* [1815] */
    (xdc_Char)0x6c,  /* [1816] */
    (xdc_Char)0x74,  /* [1817] */
    (xdc_Char)0x20,  /* [1818] */
    (xdc_Char)0x76,  /* [1819] */
    (xdc_Char)0x61,  /* [1820] */
    (xdc_Char)0x6c,  /* [1821] */
    (xdc_Char)0x75,  /* [1822] */
    (xdc_Char)0x65,  /* [1823] */
    (xdc_Char)0x0,  /* [1824] */
    (xdc_Char)0x41,  /* [1825] */
    (xdc_Char)0x5f,  /* [1826] */
    (xdc_Char)0x69,  /* [1827] */
    (xdc_Char)0x6e,  /* [1828] */
    (xdc_Char)0x76,  /* [1829] */
    (xdc_Char)0x61,  /* [1830] */
    (xdc_Char)0x6c,  /* [1831] */
    (xdc_Char)0x69,  /* [1832] */
    (xdc_Char)0x64,  /* [1833] */
    (xdc_Char)0x4c,  /* [1834] */
    (xdc_Char)0x65,  /* [1835] */
    (xdc_Char)0x6e,  /* [1836] */
    (xdc_Char)0x3a,  /* [1837] */
    (xdc_Char)0x20,  /* [1838] */
    (xdc_Char)0x49,  /* [1839] */
    (xdc_Char)0x6e,  /* [1840] */
    (xdc_Char)0x76,  /* [1841] */
    (xdc_Char)0x61,  /* [1842] */
    (xdc_Char)0x6c,  /* [1843] */
    (xdc_Char)0x69,  /* [1844] */
    (xdc_Char)0x64,  /* [1845] */
    (xdc_Char)0x20,  /* [1846] */
    (xdc_Char)0x6c,  /* [1847] */
    (xdc_Char)0x65,  /* [1848] */
    (xdc_Char)0x6e,  /* [1849] */
    (xdc_Char)0x67,  /* [1850] */
    (xdc_Char)0x74,  /* [1851] */
    (xdc_Char)0x68,  /* [1852] */
    (xdc_Char)0x0,  /* [1853] */
    (xdc_Char)0x41,  /* [1854] */
    (xdc_Char)0x5f,  /* [1855] */
    (xdc_Char)0x69,  /* [1856] */
    (xdc_Char)0x6e,  /* [1857] */
    (xdc_Char)0x76,  /* [1858] */
    (xdc_Char)0x41,  /* [1859] */
    (xdc_Char)0x72,  /* [1860] */
    (xdc_Char)0x67,  /* [1861] */
    (xdc_Char)0x75,  /* [1862] */
    (xdc_Char)0x6d,  /* [1863] */
    (xdc_Char)0x65,  /* [1864] */
    (xdc_Char)0x6e,  /* [1865] */
    (xdc_Char)0x74,  /* [1866] */
    (xdc_Char)0x3a,  /* [1867] */
    (xdc_Char)0x20,  /* [1868] */
    (xdc_Char)0x49,  /* [1869] */
    (xdc_Char)0x6e,  /* [1870] */
    (xdc_Char)0x76,  /* [1871] */
    (xdc_Char)0x61,  /* [1872] */
    (xdc_Char)0x6c,  /* [1873] */
    (xdc_Char)0x69,  /* [1874] */
    (xdc_Char)0x64,  /* [1875] */
    (xdc_Char)0x20,  /* [1876] */
    (xdc_Char)0x61,  /* [1877] */
    (xdc_Char)0x72,  /* [1878] */
    (xdc_Char)0x67,  /* [1879] */
    (xdc_Char)0x75,  /* [1880] */
    (xdc_Char)0x6d,  /* [1881] */
    (xdc_Char)0x65,  /* [1882] */
    (xdc_Char)0x6e,  /* [1883] */
    (xdc_Char)0x74,  /* [1884] */
    (xdc_Char)0x20,  /* [1885] */
    (xdc_Char)0x73,  /* [1886] */
    (xdc_Char)0x75,  /* [1887] */
    (xdc_Char)0x70,  /* [1888] */
    (xdc_Char)0x70,  /* [1889] */
    (xdc_Char)0x6c,  /* [1890] */
    (xdc_Char)0x69,  /* [1891] */
    (xdc_Char)0x65,  /* [1892] */
    (xdc_Char)0x64,  /* [1893] */
    (xdc_Char)0x0,  /* [1894] */
    (xdc_Char)0x41,  /* [1895] */
    (xdc_Char)0x5f,  /* [1896] */
    (xdc_Char)0x69,  /* [1897] */
    (xdc_Char)0x6e,  /* [1898] */
    (xdc_Char)0x76,  /* [1899] */
    (xdc_Char)0x61,  /* [1900] */
    (xdc_Char)0x6c,  /* [1901] */
    (xdc_Char)0x69,  /* [1902] */
    (xdc_Char)0x64,  /* [1903] */
    (xdc_Char)0x4d,  /* [1904] */
    (xdc_Char)0x75,  /* [1905] */
    (xdc_Char)0x6c,  /* [1906] */
    (xdc_Char)0x74,  /* [1907] */
    (xdc_Char)0x69,  /* [1908] */
    (xdc_Char)0x50,  /* [1909] */
    (xdc_Char)0x72,  /* [1910] */
    (xdc_Char)0x6f,  /* [1911] */
    (xdc_Char)0x63,  /* [1912] */
    (xdc_Char)0x49,  /* [1913] */
    (xdc_Char)0x64,  /* [1914] */
    (xdc_Char)0x3a,  /* [1915] */
    (xdc_Char)0x20,  /* [1916] */
    (xdc_Char)0x49,  /* [1917] */
    (xdc_Char)0x6e,  /* [1918] */
    (xdc_Char)0x76,  /* [1919] */
    (xdc_Char)0x61,  /* [1920] */
    (xdc_Char)0x6c,  /* [1921] */
    (xdc_Char)0x69,  /* [1922] */
    (xdc_Char)0x64,  /* [1923] */
    (xdc_Char)0x20,  /* [1924] */
    (xdc_Char)0x4d,  /* [1925] */
    (xdc_Char)0x75,  /* [1926] */
    (xdc_Char)0x6c,  /* [1927] */
    (xdc_Char)0x74,  /* [1928] */
    (xdc_Char)0x69,  /* [1929] */
    (xdc_Char)0x50,  /* [1930] */
    (xdc_Char)0x72,  /* [1931] */
    (xdc_Char)0x6f,  /* [1932] */
    (xdc_Char)0x63,  /* [1933] */
    (xdc_Char)0x20,  /* [1934] */
    (xdc_Char)0x69,  /* [1935] */
    (xdc_Char)0x64,  /* [1936] */
    (xdc_Char)0x0,  /* [1937] */
    (xdc_Char)0x41,  /* [1938] */
    (xdc_Char)0x5f,  /* [1939] */
    (xdc_Char)0x69,  /* [1940] */
    (xdc_Char)0x6e,  /* [1941] */
    (xdc_Char)0x76,  /* [1942] */
    (xdc_Char)0x61,  /* [1943] */
    (xdc_Char)0x6c,  /* [1944] */
    (xdc_Char)0x69,  /* [1945] */
    (xdc_Char)0x64,  /* [1946] */
    (xdc_Char)0x50,  /* [1947] */
    (xdc_Char)0x72,  /* [1948] */
    (xdc_Char)0x6f,  /* [1949] */
    (xdc_Char)0x63,  /* [1950] */
    (xdc_Char)0x4e,  /* [1951] */
    (xdc_Char)0x61,  /* [1952] */
    (xdc_Char)0x6d,  /* [1953] */
    (xdc_Char)0x65,  /* [1954] */
    (xdc_Char)0x3a,  /* [1955] */
    (xdc_Char)0x20,  /* [1956] */
    (xdc_Char)0x4e,  /* [1957] */
    (xdc_Char)0x55,  /* [1958] */
    (xdc_Char)0x4c,  /* [1959] */
    (xdc_Char)0x4c,  /* [1960] */
    (xdc_Char)0x20,  /* [1961] */
    (xdc_Char)0x4d,  /* [1962] */
    (xdc_Char)0x75,  /* [1963] */
    (xdc_Char)0x6c,  /* [1964] */
    (xdc_Char)0x74,  /* [1965] */
    (xdc_Char)0x69,  /* [1966] */
    (xdc_Char)0x50,  /* [1967] */
    (xdc_Char)0x72,  /* [1968] */
    (xdc_Char)0x6f,  /* [1969] */
    (xdc_Char)0x63,  /* [1970] */
    (xdc_Char)0x20,  /* [1971] */
    (xdc_Char)0x6e,  /* [1972] */
    (xdc_Char)0x61,  /* [1973] */
    (xdc_Char)0x6d,  /* [1974] */
    (xdc_Char)0x65,  /* [1975] */
    (xdc_Char)0x20,  /* [1976] */
    (xdc_Char)0x65,  /* [1977] */
    (xdc_Char)0x6e,  /* [1978] */
    (xdc_Char)0x63,  /* [1979] */
    (xdc_Char)0x6f,  /* [1980] */
    (xdc_Char)0x75,  /* [1981] */
    (xdc_Char)0x6e,  /* [1982] */
    (xdc_Char)0x74,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x72,  /* [1985] */
    (xdc_Char)0x65,  /* [1986] */
    (xdc_Char)0x64,  /* [1987] */
    (xdc_Char)0x0,  /* [1988] */
    (xdc_Char)0x41,  /* [1989] */
    (xdc_Char)0x5f,  /* [1990] */
    (xdc_Char)0x6e,  /* [1991] */
    (xdc_Char)0x75,  /* [1992] */
    (xdc_Char)0x6c,  /* [1993] */
    (xdc_Char)0x6c,  /* [1994] */
    (xdc_Char)0x48,  /* [1995] */
    (xdc_Char)0x61,  /* [1996] */
    (xdc_Char)0x6e,  /* [1997] */
    (xdc_Char)0x64,  /* [1998] */
    (xdc_Char)0x6c,  /* [1999] */
    (xdc_Char)0x65,  /* [2000] */
    (xdc_Char)0x3a,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x4e,  /* [2003] */
    (xdc_Char)0x75,  /* [2004] */
    (xdc_Char)0x6c,  /* [2005] */
    (xdc_Char)0x6c,  /* [2006] */
    (xdc_Char)0x20,  /* [2007] */
    (xdc_Char)0x68,  /* [2008] */
    (xdc_Char)0x61,  /* [2009] */
    (xdc_Char)0x6e,  /* [2010] */
    (xdc_Char)0x64,  /* [2011] */
    (xdc_Char)0x6c,  /* [2012] */
    (xdc_Char)0x65,  /* [2013] */
    (xdc_Char)0x20,  /* [2014] */
    (xdc_Char)0x70,  /* [2015] */
    (xdc_Char)0x61,  /* [2016] */
    (xdc_Char)0x73,  /* [2017] */
    (xdc_Char)0x73,  /* [2018] */
    (xdc_Char)0x65,  /* [2019] */
    (xdc_Char)0x64,  /* [2020] */
    (xdc_Char)0x20,  /* [2021] */
    (xdc_Char)0x74,  /* [2022] */
    (xdc_Char)0x6f,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x63,  /* [2025] */
    (xdc_Char)0x72,  /* [2026] */
    (xdc_Char)0x65,  /* [2027] */
    (xdc_Char)0x61,  /* [2028] */
    (xdc_Char)0x74,  /* [2029] */
    (xdc_Char)0x65,  /* [2030] */
    (xdc_Char)0x0,  /* [2031] */
    (xdc_Char)0x41,  /* [2032] */
    (xdc_Char)0x5f,  /* [2033] */
    (xdc_Char)0x69,  /* [2034] */
    (xdc_Char)0x6e,  /* [2035] */
    (xdc_Char)0x76,  /* [2036] */
    (xdc_Char)0x61,  /* [2037] */
    (xdc_Char)0x6c,  /* [2038] */
    (xdc_Char)0x69,  /* [2039] */
    (xdc_Char)0x64,  /* [2040] */
    (xdc_Char)0x43,  /* [2041] */
    (xdc_Char)0x6f,  /* [2042] */
    (xdc_Char)0x6e,  /* [2043] */
    (xdc_Char)0x74,  /* [2044] */
    (xdc_Char)0x65,  /* [2045] */
    (xdc_Char)0x78,  /* [2046] */
    (xdc_Char)0x74,  /* [2047] */
    (xdc_Char)0x3a,  /* [2048] */
    (xdc_Char)0x20,  /* [2049] */
    (xdc_Char)0x43,  /* [2050] */
    (xdc_Char)0x61,  /* [2051] */
    (xdc_Char)0x6c,  /* [2052] */
    (xdc_Char)0x6c,  /* [2053] */
    (xdc_Char)0x69,  /* [2054] */
    (xdc_Char)0x6e,  /* [2055] */
    (xdc_Char)0x67,  /* [2056] */
    (xdc_Char)0x20,  /* [2057] */
    (xdc_Char)0x47,  /* [2058] */
    (xdc_Char)0x61,  /* [2059] */
    (xdc_Char)0x74,  /* [2060] */
    (xdc_Char)0x65,  /* [2061] */
    (xdc_Char)0x4d,  /* [2062] */
    (xdc_Char)0x50,  /* [2063] */
    (xdc_Char)0x5f,  /* [2064] */
    (xdc_Char)0x63,  /* [2065] */
    (xdc_Char)0x6c,  /* [2066] */
    (xdc_Char)0x6f,  /* [2067] */
    (xdc_Char)0x73,  /* [2068] */
    (xdc_Char)0x65,  /* [2069] */
    (xdc_Char)0x20,  /* [2070] */
    (xdc_Char)0x77,  /* [2071] */
    (xdc_Char)0x69,  /* [2072] */
    (xdc_Char)0x74,  /* [2073] */
    (xdc_Char)0x68,  /* [2074] */
    (xdc_Char)0x20,  /* [2075] */
    (xdc_Char)0x74,  /* [2076] */
    (xdc_Char)0x68,  /* [2077] */
    (xdc_Char)0x65,  /* [2078] */
    (xdc_Char)0x20,  /* [2079] */
    (xdc_Char)0x77,  /* [2080] */
    (xdc_Char)0x72,  /* [2081] */
    (xdc_Char)0x6f,  /* [2082] */
    (xdc_Char)0x6e,  /* [2083] */
    (xdc_Char)0x67,  /* [2084] */
    (xdc_Char)0x20,  /* [2085] */
    (xdc_Char)0x68,  /* [2086] */
    (xdc_Char)0x61,  /* [2087] */
    (xdc_Char)0x6e,  /* [2088] */
    (xdc_Char)0x64,  /* [2089] */
    (xdc_Char)0x6c,  /* [2090] */
    (xdc_Char)0x65,  /* [2091] */
    (xdc_Char)0x0,  /* [2092] */
    (xdc_Char)0x41,  /* [2093] */
    (xdc_Char)0x5f,  /* [2094] */
    (xdc_Char)0x69,  /* [2095] */
    (xdc_Char)0x6e,  /* [2096] */
    (xdc_Char)0x76,  /* [2097] */
    (xdc_Char)0x61,  /* [2098] */
    (xdc_Char)0x6c,  /* [2099] */
    (xdc_Char)0x69,  /* [2100] */
    (xdc_Char)0x64,  /* [2101] */
    (xdc_Char)0x44,  /* [2102] */
    (xdc_Char)0x65,  /* [2103] */
    (xdc_Char)0x6c,  /* [2104] */
    (xdc_Char)0x65,  /* [2105] */
    (xdc_Char)0x74,  /* [2106] */
    (xdc_Char)0x65,  /* [2107] */
    (xdc_Char)0x3a,  /* [2108] */
    (xdc_Char)0x20,  /* [2109] */
    (xdc_Char)0x43,  /* [2110] */
    (xdc_Char)0x61,  /* [2111] */
    (xdc_Char)0x6c,  /* [2112] */
    (xdc_Char)0x6c,  /* [2113] */
    (xdc_Char)0x69,  /* [2114] */
    (xdc_Char)0x6e,  /* [2115] */
    (xdc_Char)0x67,  /* [2116] */
    (xdc_Char)0x20,  /* [2117] */
    (xdc_Char)0x47,  /* [2118] */
    (xdc_Char)0x61,  /* [2119] */
    (xdc_Char)0x74,  /* [2120] */
    (xdc_Char)0x65,  /* [2121] */
    (xdc_Char)0x4d,  /* [2122] */
    (xdc_Char)0x50,  /* [2123] */
    (xdc_Char)0x5f,  /* [2124] */
    (xdc_Char)0x64,  /* [2125] */
    (xdc_Char)0x65,  /* [2126] */
    (xdc_Char)0x6c,  /* [2127] */
    (xdc_Char)0x65,  /* [2128] */
    (xdc_Char)0x74,  /* [2129] */
    (xdc_Char)0x65,  /* [2130] */
    (xdc_Char)0x20,  /* [2131] */
    (xdc_Char)0x69,  /* [2132] */
    (xdc_Char)0x6e,  /* [2133] */
    (xdc_Char)0x63,  /* [2134] */
    (xdc_Char)0x6f,  /* [2135] */
    (xdc_Char)0x72,  /* [2136] */
    (xdc_Char)0x72,  /* [2137] */
    (xdc_Char)0x65,  /* [2138] */
    (xdc_Char)0x63,  /* [2139] */
    (xdc_Char)0x74,  /* [2140] */
    (xdc_Char)0x6c,  /* [2141] */
    (xdc_Char)0x79,  /* [2142] */
    (xdc_Char)0x0,  /* [2143] */
    (xdc_Char)0x41,  /* [2144] */
    (xdc_Char)0x5f,  /* [2145] */
    (xdc_Char)0x69,  /* [2146] */
    (xdc_Char)0x6e,  /* [2147] */
    (xdc_Char)0x76,  /* [2148] */
    (xdc_Char)0x61,  /* [2149] */
    (xdc_Char)0x6c,  /* [2150] */
    (xdc_Char)0x69,  /* [2151] */
    (xdc_Char)0x64,  /* [2152] */
    (xdc_Char)0x43,  /* [2153] */
    (xdc_Char)0x6f,  /* [2154] */
    (xdc_Char)0x6e,  /* [2155] */
    (xdc_Char)0x74,  /* [2156] */
    (xdc_Char)0x65,  /* [2157] */
    (xdc_Char)0x78,  /* [2158] */
    (xdc_Char)0x74,  /* [2159] */
    (xdc_Char)0x3a,  /* [2160] */
    (xdc_Char)0x20,  /* [2161] */
    (xdc_Char)0x43,  /* [2162] */
    (xdc_Char)0x61,  /* [2163] */
    (xdc_Char)0x6e,  /* [2164] */
    (xdc_Char)0x6e,  /* [2165] */
    (xdc_Char)0x6f,  /* [2166] */
    (xdc_Char)0x74,  /* [2167] */
    (xdc_Char)0x20,  /* [2168] */
    (xdc_Char)0x63,  /* [2169] */
    (xdc_Char)0x61,  /* [2170] */
    (xdc_Char)0x6c,  /* [2171] */
    (xdc_Char)0x6c,  /* [2172] */
    (xdc_Char)0x20,  /* [2173] */
    (xdc_Char)0x77,  /* [2174] */
    (xdc_Char)0x69,  /* [2175] */
    (xdc_Char)0x74,  /* [2176] */
    (xdc_Char)0x68,  /* [2177] */
    (xdc_Char)0x20,  /* [2178] */
    (xdc_Char)0x61,  /* [2179] */
    (xdc_Char)0x6e,  /* [2180] */
    (xdc_Char)0x20,  /* [2181] */
    (xdc_Char)0x6f,  /* [2182] */
    (xdc_Char)0x70,  /* [2183] */
    (xdc_Char)0x65,  /* [2184] */
    (xdc_Char)0x6e,  /* [2185] */
    (xdc_Char)0x2f,  /* [2186] */
    (xdc_Char)0x63,  /* [2187] */
    (xdc_Char)0x72,  /* [2188] */
    (xdc_Char)0x65,  /* [2189] */
    (xdc_Char)0x61,  /* [2190] */
    (xdc_Char)0x74,  /* [2191] */
    (xdc_Char)0x65,  /* [2192] */
    (xdc_Char)0x20,  /* [2193] */
    (xdc_Char)0x68,  /* [2194] */
    (xdc_Char)0x61,  /* [2195] */
    (xdc_Char)0x6e,  /* [2196] */
    (xdc_Char)0x64,  /* [2197] */
    (xdc_Char)0x6c,  /* [2198] */
    (xdc_Char)0x65,  /* [2199] */
    (xdc_Char)0x0,  /* [2200] */
    (xdc_Char)0x41,  /* [2201] */
    (xdc_Char)0x5f,  /* [2202] */
    (xdc_Char)0x63,  /* [2203] */
    (xdc_Char)0x61,  /* [2204] */
    (xdc_Char)0x6e,  /* [2205] */
    (xdc_Char)0x6e,  /* [2206] */
    (xdc_Char)0x6f,  /* [2207] */
    (xdc_Char)0x74,  /* [2208] */
    (xdc_Char)0x46,  /* [2209] */
    (xdc_Char)0x72,  /* [2210] */
    (xdc_Char)0x65,  /* [2211] */
    (xdc_Char)0x65,  /* [2212] */
    (xdc_Char)0x53,  /* [2213] */
    (xdc_Char)0x74,  /* [2214] */
    (xdc_Char)0x61,  /* [2215] */
    (xdc_Char)0x74,  /* [2216] */
    (xdc_Char)0x69,  /* [2217] */
    (xdc_Char)0x63,  /* [2218] */
    (xdc_Char)0x4d,  /* [2219] */
    (xdc_Char)0x73,  /* [2220] */
    (xdc_Char)0x67,  /* [2221] */
    (xdc_Char)0x3a,  /* [2222] */
    (xdc_Char)0x20,  /* [2223] */
    (xdc_Char)0x43,  /* [2224] */
    (xdc_Char)0x61,  /* [2225] */
    (xdc_Char)0x6e,  /* [2226] */
    (xdc_Char)0x6e,  /* [2227] */
    (xdc_Char)0x6f,  /* [2228] */
    (xdc_Char)0x74,  /* [2229] */
    (xdc_Char)0x20,  /* [2230] */
    (xdc_Char)0x63,  /* [2231] */
    (xdc_Char)0x61,  /* [2232] */
    (xdc_Char)0x6c,  /* [2233] */
    (xdc_Char)0x6c,  /* [2234] */
    (xdc_Char)0x20,  /* [2235] */
    (xdc_Char)0x4d,  /* [2236] */
    (xdc_Char)0x65,  /* [2237] */
    (xdc_Char)0x73,  /* [2238] */
    (xdc_Char)0x73,  /* [2239] */
    (xdc_Char)0x61,  /* [2240] */
    (xdc_Char)0x67,  /* [2241] */
    (xdc_Char)0x65,  /* [2242] */
    (xdc_Char)0x51,  /* [2243] */
    (xdc_Char)0x5f,  /* [2244] */
    (xdc_Char)0x66,  /* [2245] */
    (xdc_Char)0x72,  /* [2246] */
    (xdc_Char)0x65,  /* [2247] */
    (xdc_Char)0x65,  /* [2248] */
    (xdc_Char)0x20,  /* [2249] */
    (xdc_Char)0x77,  /* [2250] */
    (xdc_Char)0x69,  /* [2251] */
    (xdc_Char)0x74,  /* [2252] */
    (xdc_Char)0x68,  /* [2253] */
    (xdc_Char)0x20,  /* [2254] */
    (xdc_Char)0x73,  /* [2255] */
    (xdc_Char)0x74,  /* [2256] */
    (xdc_Char)0x61,  /* [2257] */
    (xdc_Char)0x74,  /* [2258] */
    (xdc_Char)0x69,  /* [2259] */
    (xdc_Char)0x63,  /* [2260] */
    (xdc_Char)0x20,  /* [2261] */
    (xdc_Char)0x6d,  /* [2262] */
    (xdc_Char)0x73,  /* [2263] */
    (xdc_Char)0x67,  /* [2264] */
    (xdc_Char)0x0,  /* [2265] */
    (xdc_Char)0x41,  /* [2266] */
    (xdc_Char)0x5f,  /* [2267] */
    (xdc_Char)0x69,  /* [2268] */
    (xdc_Char)0x6e,  /* [2269] */
    (xdc_Char)0x76,  /* [2270] */
    (xdc_Char)0x61,  /* [2271] */
    (xdc_Char)0x6c,  /* [2272] */
    (xdc_Char)0x69,  /* [2273] */
    (xdc_Char)0x64,  /* [2274] */
    (xdc_Char)0x4d,  /* [2275] */
    (xdc_Char)0x73,  /* [2276] */
    (xdc_Char)0x67,  /* [2277] */
    (xdc_Char)0x3a,  /* [2278] */
    (xdc_Char)0x20,  /* [2279] */
    (xdc_Char)0x49,  /* [2280] */
    (xdc_Char)0x6e,  /* [2281] */
    (xdc_Char)0x76,  /* [2282] */
    (xdc_Char)0x61,  /* [2283] */
    (xdc_Char)0x6c,  /* [2284] */
    (xdc_Char)0x69,  /* [2285] */
    (xdc_Char)0x64,  /* [2286] */
    (xdc_Char)0x20,  /* [2287] */
    (xdc_Char)0x6d,  /* [2288] */
    (xdc_Char)0x65,  /* [2289] */
    (xdc_Char)0x73,  /* [2290] */
    (xdc_Char)0x73,  /* [2291] */
    (xdc_Char)0x61,  /* [2292] */
    (xdc_Char)0x67,  /* [2293] */
    (xdc_Char)0x65,  /* [2294] */
    (xdc_Char)0x0,  /* [2295] */
    (xdc_Char)0x41,  /* [2296] */
    (xdc_Char)0x5f,  /* [2297] */
    (xdc_Char)0x69,  /* [2298] */
    (xdc_Char)0x6e,  /* [2299] */
    (xdc_Char)0x76,  /* [2300] */
    (xdc_Char)0x61,  /* [2301] */
    (xdc_Char)0x6c,  /* [2302] */
    (xdc_Char)0x69,  /* [2303] */
    (xdc_Char)0x64,  /* [2304] */
    (xdc_Char)0x51,  /* [2305] */
    (xdc_Char)0x75,  /* [2306] */
    (xdc_Char)0x65,  /* [2307] */
    (xdc_Char)0x75,  /* [2308] */
    (xdc_Char)0x65,  /* [2309] */
    (xdc_Char)0x49,  /* [2310] */
    (xdc_Char)0x64,  /* [2311] */
    (xdc_Char)0x3a,  /* [2312] */
    (xdc_Char)0x20,  /* [2313] */
    (xdc_Char)0x49,  /* [2314] */
    (xdc_Char)0x6e,  /* [2315] */
    (xdc_Char)0x76,  /* [2316] */
    (xdc_Char)0x61,  /* [2317] */
    (xdc_Char)0x6c,  /* [2318] */
    (xdc_Char)0x69,  /* [2319] */
    (xdc_Char)0x64,  /* [2320] */
    (xdc_Char)0x20,  /* [2321] */
    (xdc_Char)0x71,  /* [2322] */
    (xdc_Char)0x75,  /* [2323] */
    (xdc_Char)0x65,  /* [2324] */
    (xdc_Char)0x75,  /* [2325] */
    (xdc_Char)0x65,  /* [2326] */
    (xdc_Char)0x49,  /* [2327] */
    (xdc_Char)0x64,  /* [2328] */
    (xdc_Char)0x20,  /* [2329] */
    (xdc_Char)0x69,  /* [2330] */
    (xdc_Char)0x73,  /* [2331] */
    (xdc_Char)0x20,  /* [2332] */
    (xdc_Char)0x75,  /* [2333] */
    (xdc_Char)0x73,  /* [2334] */
    (xdc_Char)0x65,  /* [2335] */
    (xdc_Char)0x64,  /* [2336] */
    (xdc_Char)0x0,  /* [2337] */
    (xdc_Char)0x41,  /* [2338] */
    (xdc_Char)0x5f,  /* [2339] */
    (xdc_Char)0x68,  /* [2340] */
    (xdc_Char)0x65,  /* [2341] */
    (xdc_Char)0x61,  /* [2342] */
    (xdc_Char)0x70,  /* [2343] */
    (xdc_Char)0x49,  /* [2344] */
    (xdc_Char)0x64,  /* [2345] */
    (xdc_Char)0x49,  /* [2346] */
    (xdc_Char)0x6e,  /* [2347] */
    (xdc_Char)0x76,  /* [2348] */
    (xdc_Char)0x61,  /* [2349] */
    (xdc_Char)0x6c,  /* [2350] */
    (xdc_Char)0x69,  /* [2351] */
    (xdc_Char)0x64,  /* [2352] */
    (xdc_Char)0x3a,  /* [2353] */
    (xdc_Char)0x20,  /* [2354] */
    (xdc_Char)0x68,  /* [2355] */
    (xdc_Char)0x65,  /* [2356] */
    (xdc_Char)0x61,  /* [2357] */
    (xdc_Char)0x70,  /* [2358] */
    (xdc_Char)0x49,  /* [2359] */
    (xdc_Char)0x64,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x69,  /* [2362] */
    (xdc_Char)0x73,  /* [2363] */
    (xdc_Char)0x20,  /* [2364] */
    (xdc_Char)0x69,  /* [2365] */
    (xdc_Char)0x6e,  /* [2366] */
    (xdc_Char)0x76,  /* [2367] */
    (xdc_Char)0x61,  /* [2368] */
    (xdc_Char)0x6c,  /* [2369] */
    (xdc_Char)0x69,  /* [2370] */
    (xdc_Char)0x64,  /* [2371] */
    (xdc_Char)0x0,  /* [2372] */
    (xdc_Char)0x41,  /* [2373] */
    (xdc_Char)0x5f,  /* [2374] */
    (xdc_Char)0x70,  /* [2375] */
    (xdc_Char)0x72,  /* [2376] */
    (xdc_Char)0x6f,  /* [2377] */
    (xdc_Char)0x63,  /* [2378] */
    (xdc_Char)0x49,  /* [2379] */
    (xdc_Char)0x64,  /* [2380] */
    (xdc_Char)0x49,  /* [2381] */
    (xdc_Char)0x6e,  /* [2382] */
    (xdc_Char)0x76,  /* [2383] */
    (xdc_Char)0x61,  /* [2384] */
    (xdc_Char)0x6c,  /* [2385] */
    (xdc_Char)0x69,  /* [2386] */
    (xdc_Char)0x64,  /* [2387] */
    (xdc_Char)0x3a,  /* [2388] */
    (xdc_Char)0x20,  /* [2389] */
    (xdc_Char)0x70,  /* [2390] */
    (xdc_Char)0x72,  /* [2391] */
    (xdc_Char)0x6f,  /* [2392] */
    (xdc_Char)0x63,  /* [2393] */
    (xdc_Char)0x49,  /* [2394] */
    (xdc_Char)0x64,  /* [2395] */
    (xdc_Char)0x20,  /* [2396] */
    (xdc_Char)0x69,  /* [2397] */
    (xdc_Char)0x73,  /* [2398] */
    (xdc_Char)0x20,  /* [2399] */
    (xdc_Char)0x69,  /* [2400] */
    (xdc_Char)0x6e,  /* [2401] */
    (xdc_Char)0x76,  /* [2402] */
    (xdc_Char)0x61,  /* [2403] */
    (xdc_Char)0x6c,  /* [2404] */
    (xdc_Char)0x69,  /* [2405] */
    (xdc_Char)0x64,  /* [2406] */
    (xdc_Char)0x0,  /* [2407] */
    (xdc_Char)0x41,  /* [2408] */
    (xdc_Char)0x5f,  /* [2409] */
    (xdc_Char)0x69,  /* [2410] */
    (xdc_Char)0x6e,  /* [2411] */
    (xdc_Char)0x76,  /* [2412] */
    (xdc_Char)0x61,  /* [2413] */
    (xdc_Char)0x6c,  /* [2414] */
    (xdc_Char)0x69,  /* [2415] */
    (xdc_Char)0x64,  /* [2416] */
    (xdc_Char)0x4f,  /* [2417] */
    (xdc_Char)0x62,  /* [2418] */
    (xdc_Char)0x6a,  /* [2419] */
    (xdc_Char)0x3a,  /* [2420] */
    (xdc_Char)0x20,  /* [2421] */
    (xdc_Char)0x61,  /* [2422] */
    (xdc_Char)0x6e,  /* [2423] */
    (xdc_Char)0x20,  /* [2424] */
    (xdc_Char)0x69,  /* [2425] */
    (xdc_Char)0x6e,  /* [2426] */
    (xdc_Char)0x76,  /* [2427] */
    (xdc_Char)0x61,  /* [2428] */
    (xdc_Char)0x6c,  /* [2429] */
    (xdc_Char)0x69,  /* [2430] */
    (xdc_Char)0x64,  /* [2431] */
    (xdc_Char)0x20,  /* [2432] */
    (xdc_Char)0x6f,  /* [2433] */
    (xdc_Char)0x62,  /* [2434] */
    (xdc_Char)0x6a,  /* [2435] */
    (xdc_Char)0x20,  /* [2436] */
    (xdc_Char)0x69,  /* [2437] */
    (xdc_Char)0x73,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x75,  /* [2440] */
    (xdc_Char)0x73,  /* [2441] */
    (xdc_Char)0x65,  /* [2442] */
    (xdc_Char)0x64,  /* [2443] */
    (xdc_Char)0x0,  /* [2444] */
    (xdc_Char)0x41,  /* [2445] */
    (xdc_Char)0x5f,  /* [2446] */
    (xdc_Char)0x69,  /* [2447] */
    (xdc_Char)0x6e,  /* [2448] */
    (xdc_Char)0x76,  /* [2449] */
    (xdc_Char)0x61,  /* [2450] */
    (xdc_Char)0x6c,  /* [2451] */
    (xdc_Char)0x69,  /* [2452] */
    (xdc_Char)0x64,  /* [2453] */
    (xdc_Char)0x50,  /* [2454] */
    (xdc_Char)0x61,  /* [2455] */
    (xdc_Char)0x72,  /* [2456] */
    (xdc_Char)0x61,  /* [2457] */
    (xdc_Char)0x6d,  /* [2458] */
    (xdc_Char)0x3a,  /* [2459] */
    (xdc_Char)0x20,  /* [2460] */
    (xdc_Char)0x61,  /* [2461] */
    (xdc_Char)0x6e,  /* [2462] */
    (xdc_Char)0x20,  /* [2463] */
    (xdc_Char)0x69,  /* [2464] */
    (xdc_Char)0x6e,  /* [2465] */
    (xdc_Char)0x76,  /* [2466] */
    (xdc_Char)0x61,  /* [2467] */
    (xdc_Char)0x6c,  /* [2468] */
    (xdc_Char)0x69,  /* [2469] */
    (xdc_Char)0x64,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x70,  /* [2472] */
    (xdc_Char)0x61,  /* [2473] */
    (xdc_Char)0x72,  /* [2474] */
    (xdc_Char)0x61,  /* [2475] */
    (xdc_Char)0x6d,  /* [2476] */
    (xdc_Char)0x65,  /* [2477] */
    (xdc_Char)0x74,  /* [2478] */
    (xdc_Char)0x65,  /* [2479] */
    (xdc_Char)0x72,  /* [2480] */
    (xdc_Char)0x20,  /* [2481] */
    (xdc_Char)0x77,  /* [2482] */
    (xdc_Char)0x61,  /* [2483] */
    (xdc_Char)0x73,  /* [2484] */
    (xdc_Char)0x20,  /* [2485] */
    (xdc_Char)0x70,  /* [2486] */
    (xdc_Char)0x61,  /* [2487] */
    (xdc_Char)0x73,  /* [2488] */
    (xdc_Char)0x73,  /* [2489] */
    (xdc_Char)0x65,  /* [2490] */
    (xdc_Char)0x64,  /* [2491] */
    (xdc_Char)0x20,  /* [2492] */
    (xdc_Char)0x69,  /* [2493] */
    (xdc_Char)0x6e,  /* [2494] */
    (xdc_Char)0x0,  /* [2495] */
    (xdc_Char)0x41,  /* [2496] */
    (xdc_Char)0x5f,  /* [2497] */
    (xdc_Char)0x75,  /* [2498] */
    (xdc_Char)0x6e,  /* [2499] */
    (xdc_Char)0x72,  /* [2500] */
    (xdc_Char)0x65,  /* [2501] */
    (xdc_Char)0x67,  /* [2502] */
    (xdc_Char)0x69,  /* [2503] */
    (xdc_Char)0x73,  /* [2504] */
    (xdc_Char)0x74,  /* [2505] */
    (xdc_Char)0x65,  /* [2506] */
    (xdc_Char)0x72,  /* [2507] */
    (xdc_Char)0x65,  /* [2508] */
    (xdc_Char)0x64,  /* [2509] */
    (xdc_Char)0x54,  /* [2510] */
    (xdc_Char)0x72,  /* [2511] */
    (xdc_Char)0x61,  /* [2512] */
    (xdc_Char)0x6e,  /* [2513] */
    (xdc_Char)0x73,  /* [2514] */
    (xdc_Char)0x70,  /* [2515] */
    (xdc_Char)0x6f,  /* [2516] */
    (xdc_Char)0x72,  /* [2517] */
    (xdc_Char)0x74,  /* [2518] */
    (xdc_Char)0x3a,  /* [2519] */
    (xdc_Char)0x20,  /* [2520] */
    (xdc_Char)0x74,  /* [2521] */
    (xdc_Char)0x72,  /* [2522] */
    (xdc_Char)0x61,  /* [2523] */
    (xdc_Char)0x6e,  /* [2524] */
    (xdc_Char)0x73,  /* [2525] */
    (xdc_Char)0x70,  /* [2526] */
    (xdc_Char)0x6f,  /* [2527] */
    (xdc_Char)0x72,  /* [2528] */
    (xdc_Char)0x74,  /* [2529] */
    (xdc_Char)0x20,  /* [2530] */
    (xdc_Char)0x69,  /* [2531] */
    (xdc_Char)0x73,  /* [2532] */
    (xdc_Char)0x20,  /* [2533] */
    (xdc_Char)0x6e,  /* [2534] */
    (xdc_Char)0x6f,  /* [2535] */
    (xdc_Char)0x74,  /* [2536] */
    (xdc_Char)0x20,  /* [2537] */
    (xdc_Char)0x72,  /* [2538] */
    (xdc_Char)0x65,  /* [2539] */
    (xdc_Char)0x67,  /* [2540] */
    (xdc_Char)0x69,  /* [2541] */
    (xdc_Char)0x73,  /* [2542] */
    (xdc_Char)0x74,  /* [2543] */
    (xdc_Char)0x65,  /* [2544] */
    (xdc_Char)0x72,  /* [2545] */
    (xdc_Char)0x65,  /* [2546] */
    (xdc_Char)0x64,  /* [2547] */
    (xdc_Char)0x0,  /* [2548] */
    (xdc_Char)0x41,  /* [2549] */
    (xdc_Char)0x5f,  /* [2550] */
    (xdc_Char)0x69,  /* [2551] */
    (xdc_Char)0x6e,  /* [2552] */
    (xdc_Char)0x76,  /* [2553] */
    (xdc_Char)0x61,  /* [2554] */
    (xdc_Char)0x6c,  /* [2555] */
    (xdc_Char)0x69,  /* [2556] */
    (xdc_Char)0x64,  /* [2557] */
    (xdc_Char)0x55,  /* [2558] */
    (xdc_Char)0x6e,  /* [2559] */
    (xdc_Char)0x62,  /* [2560] */
    (xdc_Char)0x6c,  /* [2561] */
    (xdc_Char)0x6f,  /* [2562] */
    (xdc_Char)0x63,  /* [2563] */
    (xdc_Char)0x6b,  /* [2564] */
    (xdc_Char)0x3a,  /* [2565] */
    (xdc_Char)0x20,  /* [2566] */
    (xdc_Char)0x54,  /* [2567] */
    (xdc_Char)0x72,  /* [2568] */
    (xdc_Char)0x79,  /* [2569] */
    (xdc_Char)0x69,  /* [2570] */
    (xdc_Char)0x6e,  /* [2571] */
    (xdc_Char)0x67,  /* [2572] */
    (xdc_Char)0x20,  /* [2573] */
    (xdc_Char)0x74,  /* [2574] */
    (xdc_Char)0x6f,  /* [2575] */
    (xdc_Char)0x20,  /* [2576] */
    (xdc_Char)0x75,  /* [2577] */
    (xdc_Char)0x6e,  /* [2578] */
    (xdc_Char)0x62,  /* [2579] */
    (xdc_Char)0x6c,  /* [2580] */
    (xdc_Char)0x6f,  /* [2581] */
    (xdc_Char)0x63,  /* [2582] */
    (xdc_Char)0x6b,  /* [2583] */
    (xdc_Char)0x20,  /* [2584] */
    (xdc_Char)0x61,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x72,  /* [2587] */
    (xdc_Char)0x65,  /* [2588] */
    (xdc_Char)0x6d,  /* [2589] */
    (xdc_Char)0x6f,  /* [2590] */
    (xdc_Char)0x74,  /* [2591] */
    (xdc_Char)0x65,  /* [2592] */
    (xdc_Char)0x20,  /* [2593] */
    (xdc_Char)0x4d,  /* [2594] */
    (xdc_Char)0x65,  /* [2595] */
    (xdc_Char)0x73,  /* [2596] */
    (xdc_Char)0x73,  /* [2597] */
    (xdc_Char)0x61,  /* [2598] */
    (xdc_Char)0x67,  /* [2599] */
    (xdc_Char)0x65,  /* [2600] */
    (xdc_Char)0x51,  /* [2601] */
    (xdc_Char)0x20,  /* [2602] */
    (xdc_Char)0x6f,  /* [2603] */
    (xdc_Char)0x72,  /* [2604] */
    (xdc_Char)0x20,  /* [2605] */
    (xdc_Char)0x61,  /* [2606] */
    (xdc_Char)0x20,  /* [2607] */
    (xdc_Char)0x71,  /* [2608] */
    (xdc_Char)0x75,  /* [2609] */
    (xdc_Char)0x65,  /* [2610] */
    (xdc_Char)0x75,  /* [2611] */
    (xdc_Char)0x65,  /* [2612] */
    (xdc_Char)0x20,  /* [2613] */
    (xdc_Char)0x77,  /* [2614] */
    (xdc_Char)0x69,  /* [2615] */
    (xdc_Char)0x74,  /* [2616] */
    (xdc_Char)0x68,  /* [2617] */
    (xdc_Char)0x20,  /* [2618] */
    (xdc_Char)0x6e,  /* [2619] */
    (xdc_Char)0x6f,  /* [2620] */
    (xdc_Char)0x6e,  /* [2621] */
    (xdc_Char)0x2d,  /* [2622] */
    (xdc_Char)0x62,  /* [2623] */
    (xdc_Char)0x6c,  /* [2624] */
    (xdc_Char)0x6f,  /* [2625] */
    (xdc_Char)0x63,  /* [2626] */
    (xdc_Char)0x6b,  /* [2627] */
    (xdc_Char)0x69,  /* [2628] */
    (xdc_Char)0x6e,  /* [2629] */
    (xdc_Char)0x67,  /* [2630] */
    (xdc_Char)0x20,  /* [2631] */
    (xdc_Char)0x73,  /* [2632] */
    (xdc_Char)0x79,  /* [2633] */
    (xdc_Char)0x6e,  /* [2634] */
    (xdc_Char)0x63,  /* [2635] */
    (xdc_Char)0x68,  /* [2636] */
    (xdc_Char)0x72,  /* [2637] */
    (xdc_Char)0x6f,  /* [2638] */
    (xdc_Char)0x6e,  /* [2639] */
    (xdc_Char)0x69,  /* [2640] */
    (xdc_Char)0x7a,  /* [2641] */
    (xdc_Char)0x65,  /* [2642] */
    (xdc_Char)0x72,  /* [2643] */
    (xdc_Char)0x0,  /* [2644] */
    (xdc_Char)0x41,  /* [2645] */
    (xdc_Char)0x5f,  /* [2646] */
    (xdc_Char)0x69,  /* [2647] */
    (xdc_Char)0x64,  /* [2648] */
    (xdc_Char)0x54,  /* [2649] */
    (xdc_Char)0x6f,  /* [2650] */
    (xdc_Char)0x6f,  /* [2651] */
    (xdc_Char)0x4c,  /* [2652] */
    (xdc_Char)0x61,  /* [2653] */
    (xdc_Char)0x72,  /* [2654] */
    (xdc_Char)0x67,  /* [2655] */
    (xdc_Char)0x65,  /* [2656] */
    (xdc_Char)0x3a,  /* [2657] */
    (xdc_Char)0x20,  /* [2658] */
    (xdc_Char)0x69,  /* [2659] */
    (xdc_Char)0x64,  /* [2660] */
    (xdc_Char)0x20,  /* [2661] */
    (xdc_Char)0x63,  /* [2662] */
    (xdc_Char)0x61,  /* [2663] */
    (xdc_Char)0x6e,  /* [2664] */
    (xdc_Char)0x6e,  /* [2665] */
    (xdc_Char)0x6f,  /* [2666] */
    (xdc_Char)0x74,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x62,  /* [2669] */
    (xdc_Char)0x65,  /* [2670] */
    (xdc_Char)0x20,  /* [2671] */
    (xdc_Char)0x6c,  /* [2672] */
    (xdc_Char)0x61,  /* [2673] */
    (xdc_Char)0x72,  /* [2674] */
    (xdc_Char)0x67,  /* [2675] */
    (xdc_Char)0x65,  /* [2676] */
    (xdc_Char)0x72,  /* [2677] */
    (xdc_Char)0x20,  /* [2678] */
    (xdc_Char)0x74,  /* [2679] */
    (xdc_Char)0x68,  /* [2680] */
    (xdc_Char)0x61,  /* [2681] */
    (xdc_Char)0x6e,  /* [2682] */
    (xdc_Char)0x20,  /* [2683] */
    (xdc_Char)0x6e,  /* [2684] */
    (xdc_Char)0x75,  /* [2685] */
    (xdc_Char)0x6d,  /* [2686] */
    (xdc_Char)0x45,  /* [2687] */
    (xdc_Char)0x6e,  /* [2688] */
    (xdc_Char)0x74,  /* [2689] */
    (xdc_Char)0x72,  /* [2690] */
    (xdc_Char)0x69,  /* [2691] */
    (xdc_Char)0x65,  /* [2692] */
    (xdc_Char)0x73,  /* [2693] */
    (xdc_Char)0x0,  /* [2694] */
    (xdc_Char)0x41,  /* [2695] */
    (xdc_Char)0x5f,  /* [2696] */
    (xdc_Char)0x61,  /* [2697] */
    (xdc_Char)0x64,  /* [2698] */
    (xdc_Char)0x64,  /* [2699] */
    (xdc_Char)0x72,  /* [2700] */
    (xdc_Char)0x4f,  /* [2701] */
    (xdc_Char)0x75,  /* [2702] */
    (xdc_Char)0x74,  /* [2703] */
    (xdc_Char)0x4f,  /* [2704] */
    (xdc_Char)0x66,  /* [2705] */
    (xdc_Char)0x52,  /* [2706] */
    (xdc_Char)0x61,  /* [2707] */
    (xdc_Char)0x6e,  /* [2708] */
    (xdc_Char)0x67,  /* [2709] */
    (xdc_Char)0x65,  /* [2710] */
    (xdc_Char)0x3a,  /* [2711] */
    (xdc_Char)0x20,  /* [2712] */
    (xdc_Char)0x41,  /* [2713] */
    (xdc_Char)0x64,  /* [2714] */
    (xdc_Char)0x64,  /* [2715] */
    (xdc_Char)0x72,  /* [2716] */
    (xdc_Char)0x65,  /* [2717] */
    (xdc_Char)0x73,  /* [2718] */
    (xdc_Char)0x73,  /* [2719] */
    (xdc_Char)0x20,  /* [2720] */
    (xdc_Char)0x69,  /* [2721] */
    (xdc_Char)0x73,  /* [2722] */
    (xdc_Char)0x20,  /* [2723] */
    (xdc_Char)0x6f,  /* [2724] */
    (xdc_Char)0x75,  /* [2725] */
    (xdc_Char)0x74,  /* [2726] */
    (xdc_Char)0x20,  /* [2727] */
    (xdc_Char)0x6f,  /* [2728] */
    (xdc_Char)0x66,  /* [2729] */
    (xdc_Char)0x20,  /* [2730] */
    (xdc_Char)0x72,  /* [2731] */
    (xdc_Char)0x65,  /* [2732] */
    (xdc_Char)0x67,  /* [2733] */
    (xdc_Char)0x69,  /* [2734] */
    (xdc_Char)0x6f,  /* [2735] */
    (xdc_Char)0x6e,  /* [2736] */
    (xdc_Char)0x20,  /* [2737] */
    (xdc_Char)0x69,  /* [2738] */
    (xdc_Char)0x64,  /* [2739] */
    (xdc_Char)0x27,  /* [2740] */
    (xdc_Char)0x73,  /* [2741] */
    (xdc_Char)0x20,  /* [2742] */
    (xdc_Char)0x72,  /* [2743] */
    (xdc_Char)0x61,  /* [2744] */
    (xdc_Char)0x6e,  /* [2745] */
    (xdc_Char)0x67,  /* [2746] */
    (xdc_Char)0x65,  /* [2747] */
    (xdc_Char)0x0,  /* [2748] */
    (xdc_Char)0x41,  /* [2749] */
    (xdc_Char)0x5f,  /* [2750] */
    (xdc_Char)0x72,  /* [2751] */
    (xdc_Char)0x65,  /* [2752] */
    (xdc_Char)0x67,  /* [2753] */
    (xdc_Char)0x69,  /* [2754] */
    (xdc_Char)0x6f,  /* [2755] */
    (xdc_Char)0x6e,  /* [2756] */
    (xdc_Char)0x30,  /* [2757] */
    (xdc_Char)0x43,  /* [2758] */
    (xdc_Char)0x6c,  /* [2759] */
    (xdc_Char)0x65,  /* [2760] */
    (xdc_Char)0x61,  /* [2761] */
    (xdc_Char)0x72,  /* [2762] */
    (xdc_Char)0x3a,  /* [2763] */
    (xdc_Char)0x20,  /* [2764] */
    (xdc_Char)0x52,  /* [2765] */
    (xdc_Char)0x65,  /* [2766] */
    (xdc_Char)0x67,  /* [2767] */
    (xdc_Char)0x69,  /* [2768] */
    (xdc_Char)0x6f,  /* [2769] */
    (xdc_Char)0x6e,  /* [2770] */
    (xdc_Char)0x20,  /* [2771] */
    (xdc_Char)0x30,  /* [2772] */
    (xdc_Char)0x20,  /* [2773] */
    (xdc_Char)0x63,  /* [2774] */
    (xdc_Char)0x61,  /* [2775] */
    (xdc_Char)0x6e,  /* [2776] */
    (xdc_Char)0x6e,  /* [2777] */
    (xdc_Char)0x6f,  /* [2778] */
    (xdc_Char)0x74,  /* [2779] */
    (xdc_Char)0x20,  /* [2780] */
    (xdc_Char)0x62,  /* [2781] */
    (xdc_Char)0x65,  /* [2782] */
    (xdc_Char)0x20,  /* [2783] */
    (xdc_Char)0x63,  /* [2784] */
    (xdc_Char)0x6c,  /* [2785] */
    (xdc_Char)0x65,  /* [2786] */
    (xdc_Char)0x61,  /* [2787] */
    (xdc_Char)0x72,  /* [2788] */
    (xdc_Char)0x65,  /* [2789] */
    (xdc_Char)0x64,  /* [2790] */
    (xdc_Char)0x0,  /* [2791] */
    (xdc_Char)0x41,  /* [2792] */
    (xdc_Char)0x5f,  /* [2793] */
    (xdc_Char)0x72,  /* [2794] */
    (xdc_Char)0x65,  /* [2795] */
    (xdc_Char)0x67,  /* [2796] */
    (xdc_Char)0x69,  /* [2797] */
    (xdc_Char)0x6f,  /* [2798] */
    (xdc_Char)0x6e,  /* [2799] */
    (xdc_Char)0x30,  /* [2800] */
    (xdc_Char)0x49,  /* [2801] */
    (xdc_Char)0x6e,  /* [2802] */
    (xdc_Char)0x76,  /* [2803] */
    (xdc_Char)0x61,  /* [2804] */
    (xdc_Char)0x6c,  /* [2805] */
    (xdc_Char)0x69,  /* [2806] */
    (xdc_Char)0x64,  /* [2807] */
    (xdc_Char)0x3a,  /* [2808] */
    (xdc_Char)0x20,  /* [2809] */
    (xdc_Char)0x52,  /* [2810] */
    (xdc_Char)0x65,  /* [2811] */
    (xdc_Char)0x67,  /* [2812] */
    (xdc_Char)0x69,  /* [2813] */
    (xdc_Char)0x6f,  /* [2814] */
    (xdc_Char)0x6e,  /* [2815] */
    (xdc_Char)0x20,  /* [2816] */
    (xdc_Char)0x7a,  /* [2817] */
    (xdc_Char)0x65,  /* [2818] */
    (xdc_Char)0x72,  /* [2819] */
    (xdc_Char)0x6f,  /* [2820] */
    (xdc_Char)0x20,  /* [2821] */
    (xdc_Char)0x69,  /* [2822] */
    (xdc_Char)0x73,  /* [2823] */
    (xdc_Char)0x20,  /* [2824] */
    (xdc_Char)0x69,  /* [2825] */
    (xdc_Char)0x6e,  /* [2826] */
    (xdc_Char)0x76,  /* [2827] */
    (xdc_Char)0x61,  /* [2828] */
    (xdc_Char)0x6c,  /* [2829] */
    (xdc_Char)0x69,  /* [2830] */
    (xdc_Char)0x64,  /* [2831] */
    (xdc_Char)0x0,  /* [2832] */
    (xdc_Char)0x41,  /* [2833] */
    (xdc_Char)0x5f,  /* [2834] */
    (xdc_Char)0x72,  /* [2835] */
    (xdc_Char)0x65,  /* [2836] */
    (xdc_Char)0x67,  /* [2837] */
    (xdc_Char)0x69,  /* [2838] */
    (xdc_Char)0x6f,  /* [2839] */
    (xdc_Char)0x6e,  /* [2840] */
    (xdc_Char)0x49,  /* [2841] */
    (xdc_Char)0x6e,  /* [2842] */
    (xdc_Char)0x76,  /* [2843] */
    (xdc_Char)0x61,  /* [2844] */
    (xdc_Char)0x6c,  /* [2845] */
    (xdc_Char)0x69,  /* [2846] */
    (xdc_Char)0x64,  /* [2847] */
    (xdc_Char)0x3a,  /* [2848] */
    (xdc_Char)0x20,  /* [2849] */
    (xdc_Char)0x52,  /* [2850] */
    (xdc_Char)0x65,  /* [2851] */
    (xdc_Char)0x67,  /* [2852] */
    (xdc_Char)0x69,  /* [2853] */
    (xdc_Char)0x6f,  /* [2854] */
    (xdc_Char)0x6e,  /* [2855] */
    (xdc_Char)0x20,  /* [2856] */
    (xdc_Char)0x69,  /* [2857] */
    (xdc_Char)0x73,  /* [2858] */
    (xdc_Char)0x20,  /* [2859] */
    (xdc_Char)0x69,  /* [2860] */
    (xdc_Char)0x6e,  /* [2861] */
    (xdc_Char)0x76,  /* [2862] */
    (xdc_Char)0x61,  /* [2863] */
    (xdc_Char)0x6c,  /* [2864] */
    (xdc_Char)0x69,  /* [2865] */
    (xdc_Char)0x64,  /* [2866] */
    (xdc_Char)0x0,  /* [2867] */
    (xdc_Char)0x41,  /* [2868] */
    (xdc_Char)0x5f,  /* [2869] */
    (xdc_Char)0x72,  /* [2870] */
    (xdc_Char)0x65,  /* [2871] */
    (xdc_Char)0x73,  /* [2872] */
    (xdc_Char)0x65,  /* [2873] */
    (xdc_Char)0x72,  /* [2874] */
    (xdc_Char)0x76,  /* [2875] */
    (xdc_Char)0x65,  /* [2876] */
    (xdc_Char)0x54,  /* [2877] */
    (xdc_Char)0x6f,  /* [2878] */
    (xdc_Char)0x6f,  /* [2879] */
    (xdc_Char)0x4d,  /* [2880] */
    (xdc_Char)0x75,  /* [2881] */
    (xdc_Char)0x63,  /* [2882] */
    (xdc_Char)0x68,  /* [2883] */
    (xdc_Char)0x3a,  /* [2884] */
    (xdc_Char)0x20,  /* [2885] */
    (xdc_Char)0x54,  /* [2886] */
    (xdc_Char)0x72,  /* [2887] */
    (xdc_Char)0x79,  /* [2888] */
    (xdc_Char)0x69,  /* [2889] */
    (xdc_Char)0x6e,  /* [2890] */
    (xdc_Char)0x67,  /* [2891] */
    (xdc_Char)0x20,  /* [2892] */
    (xdc_Char)0x74,  /* [2893] */
    (xdc_Char)0x6f,  /* [2894] */
    (xdc_Char)0x20,  /* [2895] */
    (xdc_Char)0x72,  /* [2896] */
    (xdc_Char)0x65,  /* [2897] */
    (xdc_Char)0x73,  /* [2898] */
    (xdc_Char)0x65,  /* [2899] */
    (xdc_Char)0x72,  /* [2900] */
    (xdc_Char)0x76,  /* [2901] */
    (xdc_Char)0x65,  /* [2902] */
    (xdc_Char)0x20,  /* [2903] */
    (xdc_Char)0x74,  /* [2904] */
    (xdc_Char)0x6f,  /* [2905] */
    (xdc_Char)0x6f,  /* [2906] */
    (xdc_Char)0x20,  /* [2907] */
    (xdc_Char)0x6d,  /* [2908] */
    (xdc_Char)0x75,  /* [2909] */
    (xdc_Char)0x63,  /* [2910] */
    (xdc_Char)0x68,  /* [2911] */
    (xdc_Char)0x20,  /* [2912] */
    (xdc_Char)0x6d,  /* [2913] */
    (xdc_Char)0x65,  /* [2914] */
    (xdc_Char)0x6d,  /* [2915] */
    (xdc_Char)0x6f,  /* [2916] */
    (xdc_Char)0x72,  /* [2917] */
    (xdc_Char)0x79,  /* [2918] */
    (xdc_Char)0x0,  /* [2919] */
    (xdc_Char)0x41,  /* [2920] */
    (xdc_Char)0x5f,  /* [2921] */
    (xdc_Char)0x63,  /* [2922] */
    (xdc_Char)0x61,  /* [2923] */
    (xdc_Char)0x63,  /* [2924] */
    (xdc_Char)0x68,  /* [2925] */
    (xdc_Char)0x65,  /* [2926] */
    (xdc_Char)0x4c,  /* [2927] */
    (xdc_Char)0x69,  /* [2928] */
    (xdc_Char)0x6e,  /* [2929] */
    (xdc_Char)0x65,  /* [2930] */
    (xdc_Char)0x53,  /* [2931] */
    (xdc_Char)0x69,  /* [2932] */
    (xdc_Char)0x7a,  /* [2933] */
    (xdc_Char)0x65,  /* [2934] */
    (xdc_Char)0x49,  /* [2935] */
    (xdc_Char)0x73,  /* [2936] */
    (xdc_Char)0x5a,  /* [2937] */
    (xdc_Char)0x65,  /* [2938] */
    (xdc_Char)0x72,  /* [2939] */
    (xdc_Char)0x6f,  /* [2940] */
    (xdc_Char)0x3a,  /* [2941] */
    (xdc_Char)0x20,  /* [2942] */
    (xdc_Char)0x63,  /* [2943] */
    (xdc_Char)0x61,  /* [2944] */
    (xdc_Char)0x63,  /* [2945] */
    (xdc_Char)0x68,  /* [2946] */
    (xdc_Char)0x65,  /* [2947] */
    (xdc_Char)0x20,  /* [2948] */
    (xdc_Char)0x6c,  /* [2949] */
    (xdc_Char)0x69,  /* [2950] */
    (xdc_Char)0x6e,  /* [2951] */
    (xdc_Char)0x65,  /* [2952] */
    (xdc_Char)0x20,  /* [2953] */
    (xdc_Char)0x73,  /* [2954] */
    (xdc_Char)0x69,  /* [2955] */
    (xdc_Char)0x7a,  /* [2956] */
    (xdc_Char)0x65,  /* [2957] */
    (xdc_Char)0x20,  /* [2958] */
    (xdc_Char)0x63,  /* [2959] */
    (xdc_Char)0x61,  /* [2960] */
    (xdc_Char)0x6e,  /* [2961] */
    (xdc_Char)0x6e,  /* [2962] */
    (xdc_Char)0x6f,  /* [2963] */
    (xdc_Char)0x74,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x62,  /* [2966] */
    (xdc_Char)0x65,  /* [2967] */
    (xdc_Char)0x20,  /* [2968] */
    (xdc_Char)0x7a,  /* [2969] */
    (xdc_Char)0x65,  /* [2970] */
    (xdc_Char)0x72,  /* [2971] */
    (xdc_Char)0x6f,  /* [2972] */
    (xdc_Char)0x0,  /* [2973] */
    (xdc_Char)0x41,  /* [2974] */
    (xdc_Char)0x5f,  /* [2975] */
    (xdc_Char)0x6f,  /* [2976] */
    (xdc_Char)0x76,  /* [2977] */
    (xdc_Char)0x65,  /* [2978] */
    (xdc_Char)0x72,  /* [2979] */
    (xdc_Char)0x6c,  /* [2980] */
    (xdc_Char)0x61,  /* [2981] */
    (xdc_Char)0x70,  /* [2982] */
    (xdc_Char)0x3a,  /* [2983] */
    (xdc_Char)0x20,  /* [2984] */
    (xdc_Char)0x53,  /* [2985] */
    (xdc_Char)0x68,  /* [2986] */
    (xdc_Char)0x61,  /* [2987] */
    (xdc_Char)0x72,  /* [2988] */
    (xdc_Char)0x65,  /* [2989] */
    (xdc_Char)0x64,  /* [2990] */
    (xdc_Char)0x20,  /* [2991] */
    (xdc_Char)0x72,  /* [2992] */
    (xdc_Char)0x65,  /* [2993] */
    (xdc_Char)0x67,  /* [2994] */
    (xdc_Char)0x69,  /* [2995] */
    (xdc_Char)0x6f,  /* [2996] */
    (xdc_Char)0x6e,  /* [2997] */
    (xdc_Char)0x20,  /* [2998] */
    (xdc_Char)0x6f,  /* [2999] */
    (xdc_Char)0x76,  /* [3000] */
    (xdc_Char)0x65,  /* [3001] */
    (xdc_Char)0x72,  /* [3002] */
    (xdc_Char)0x6c,  /* [3003] */
    (xdc_Char)0x61,  /* [3004] */
    (xdc_Char)0x70,  /* [3005] */
    (xdc_Char)0x73,  /* [3006] */
    (xdc_Char)0x0,  /* [3007] */
    (xdc_Char)0x41,  /* [3008] */
    (xdc_Char)0x5f,  /* [3009] */
    (xdc_Char)0x61,  /* [3010] */
    (xdc_Char)0x6c,  /* [3011] */
    (xdc_Char)0x72,  /* [3012] */
    (xdc_Char)0x65,  /* [3013] */
    (xdc_Char)0x61,  /* [3014] */
    (xdc_Char)0x64,  /* [3015] */
    (xdc_Char)0x79,  /* [3016] */
    (xdc_Char)0x45,  /* [3017] */
    (xdc_Char)0x78,  /* [3018] */
    (xdc_Char)0x69,  /* [3019] */
    (xdc_Char)0x73,  /* [3020] */
    (xdc_Char)0x74,  /* [3021] */
    (xdc_Char)0x73,  /* [3022] */
    (xdc_Char)0x3a,  /* [3023] */
    (xdc_Char)0x20,  /* [3024] */
    (xdc_Char)0x54,  /* [3025] */
    (xdc_Char)0x72,  /* [3026] */
    (xdc_Char)0x79,  /* [3027] */
    (xdc_Char)0x69,  /* [3028] */
    (xdc_Char)0x6e,  /* [3029] */
    (xdc_Char)0x67,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x74,  /* [3032] */
    (xdc_Char)0x6f,  /* [3033] */
    (xdc_Char)0x20,  /* [3034] */
    (xdc_Char)0x6f,  /* [3035] */
    (xdc_Char)0x76,  /* [3036] */
    (xdc_Char)0x65,  /* [3037] */
    (xdc_Char)0x72,  /* [3038] */
    (xdc_Char)0x77,  /* [3039] */
    (xdc_Char)0x72,  /* [3040] */
    (xdc_Char)0x69,  /* [3041] */
    (xdc_Char)0x74,  /* [3042] */
    (xdc_Char)0x65,  /* [3043] */
    (xdc_Char)0x20,  /* [3044] */
    (xdc_Char)0x61,  /* [3045] */
    (xdc_Char)0x6e,  /* [3046] */
    (xdc_Char)0x20,  /* [3047] */
    (xdc_Char)0x65,  /* [3048] */
    (xdc_Char)0x78,  /* [3049] */
    (xdc_Char)0x69,  /* [3050] */
    (xdc_Char)0x73,  /* [3051] */
    (xdc_Char)0x74,  /* [3052] */
    (xdc_Char)0x69,  /* [3053] */
    (xdc_Char)0x6e,  /* [3054] */
    (xdc_Char)0x67,  /* [3055] */
    (xdc_Char)0x20,  /* [3056] */
    (xdc_Char)0x76,  /* [3057] */
    (xdc_Char)0x61,  /* [3058] */
    (xdc_Char)0x6c,  /* [3059] */
    (xdc_Char)0x69,  /* [3060] */
    (xdc_Char)0x64,  /* [3061] */
    (xdc_Char)0x20,  /* [3062] */
    (xdc_Char)0x65,  /* [3063] */
    (xdc_Char)0x6e,  /* [3064] */
    (xdc_Char)0x74,  /* [3065] */
    (xdc_Char)0x72,  /* [3066] */
    (xdc_Char)0x79,  /* [3067] */
    (xdc_Char)0x0,  /* [3068] */
    (xdc_Char)0x41,  /* [3069] */
    (xdc_Char)0x5f,  /* [3070] */
    (xdc_Char)0x6e,  /* [3071] */
    (xdc_Char)0x6f,  /* [3072] */
    (xdc_Char)0x48,  /* [3073] */
    (xdc_Char)0x65,  /* [3074] */
    (xdc_Char)0x61,  /* [3075] */
    (xdc_Char)0x70,  /* [3076] */
    (xdc_Char)0x3a,  /* [3077] */
    (xdc_Char)0x20,  /* [3078] */
    (xdc_Char)0x52,  /* [3079] */
    (xdc_Char)0x65,  /* [3080] */
    (xdc_Char)0x67,  /* [3081] */
    (xdc_Char)0x69,  /* [3082] */
    (xdc_Char)0x6f,  /* [3083] */
    (xdc_Char)0x6e,  /* [3084] */
    (xdc_Char)0x20,  /* [3085] */
    (xdc_Char)0x68,  /* [3086] */
    (xdc_Char)0x61,  /* [3087] */
    (xdc_Char)0x73,  /* [3088] */
    (xdc_Char)0x20,  /* [3089] */
    (xdc_Char)0x6e,  /* [3090] */
    (xdc_Char)0x6f,  /* [3091] */
    (xdc_Char)0x20,  /* [3092] */
    (xdc_Char)0x68,  /* [3093] */
    (xdc_Char)0x65,  /* [3094] */
    (xdc_Char)0x61,  /* [3095] */
    (xdc_Char)0x70,  /* [3096] */
    (xdc_Char)0x0,  /* [3097] */
    (xdc_Char)0x41,  /* [3098] */
    (xdc_Char)0x5f,  /* [3099] */
    (xdc_Char)0x61,  /* [3100] */
    (xdc_Char)0x64,  /* [3101] */
    (xdc_Char)0x64,  /* [3102] */
    (xdc_Char)0x72,  /* [3103] */
    (xdc_Char)0x4e,  /* [3104] */
    (xdc_Char)0x6f,  /* [3105] */
    (xdc_Char)0x74,  /* [3106] */
    (xdc_Char)0x49,  /* [3107] */
    (xdc_Char)0x6e,  /* [3108] */
    (xdc_Char)0x53,  /* [3109] */
    (xdc_Char)0x68,  /* [3110] */
    (xdc_Char)0x61,  /* [3111] */
    (xdc_Char)0x72,  /* [3112] */
    (xdc_Char)0x65,  /* [3113] */
    (xdc_Char)0x64,  /* [3114] */
    (xdc_Char)0x52,  /* [3115] */
    (xdc_Char)0x65,  /* [3116] */
    (xdc_Char)0x67,  /* [3117] */
    (xdc_Char)0x69,  /* [3118] */
    (xdc_Char)0x6f,  /* [3119] */
    (xdc_Char)0x6e,  /* [3120] */
    (xdc_Char)0x3a,  /* [3121] */
    (xdc_Char)0x20,  /* [3122] */
    (xdc_Char)0x41,  /* [3123] */
    (xdc_Char)0x64,  /* [3124] */
    (xdc_Char)0x64,  /* [3125] */
    (xdc_Char)0x72,  /* [3126] */
    (xdc_Char)0x65,  /* [3127] */
    (xdc_Char)0x73,  /* [3128] */
    (xdc_Char)0x73,  /* [3129] */
    (xdc_Char)0x20,  /* [3130] */
    (xdc_Char)0x6e,  /* [3131] */
    (xdc_Char)0x6f,  /* [3132] */
    (xdc_Char)0x74,  /* [3133] */
    (xdc_Char)0x20,  /* [3134] */
    (xdc_Char)0x69,  /* [3135] */
    (xdc_Char)0x6e,  /* [3136] */
    (xdc_Char)0x20,  /* [3137] */
    (xdc_Char)0x61,  /* [3138] */
    (xdc_Char)0x6e,  /* [3139] */
    (xdc_Char)0x79,  /* [3140] */
    (xdc_Char)0x20,  /* [3141] */
    (xdc_Char)0x73,  /* [3142] */
    (xdc_Char)0x68,  /* [3143] */
    (xdc_Char)0x61,  /* [3144] */
    (xdc_Char)0x72,  /* [3145] */
    (xdc_Char)0x65,  /* [3146] */
    (xdc_Char)0x64,  /* [3147] */
    (xdc_Char)0x20,  /* [3148] */
    (xdc_Char)0x72,  /* [3149] */
    (xdc_Char)0x65,  /* [3150] */
    (xdc_Char)0x67,  /* [3151] */
    (xdc_Char)0x69,  /* [3152] */
    (xdc_Char)0x6f,  /* [3153] */
    (xdc_Char)0x6e,  /* [3154] */
    (xdc_Char)0x0,  /* [3155] */
    (xdc_Char)0x41,  /* [3156] */
    (xdc_Char)0x5f,  /* [3157] */
    (xdc_Char)0x61,  /* [3158] */
    (xdc_Char)0x64,  /* [3159] */
    (xdc_Char)0x64,  /* [3160] */
    (xdc_Char)0x72,  /* [3161] */
    (xdc_Char)0x4e,  /* [3162] */
    (xdc_Char)0x6f,  /* [3163] */
    (xdc_Char)0x74,  /* [3164] */
    (xdc_Char)0x43,  /* [3165] */
    (xdc_Char)0x61,  /* [3166] */
    (xdc_Char)0x63,  /* [3167] */
    (xdc_Char)0x68,  /* [3168] */
    (xdc_Char)0x65,  /* [3169] */
    (xdc_Char)0x41,  /* [3170] */
    (xdc_Char)0x6c,  /* [3171] */
    (xdc_Char)0x69,  /* [3172] */
    (xdc_Char)0x67,  /* [3173] */
    (xdc_Char)0x6e,  /* [3174] */
    (xdc_Char)0x65,  /* [3175] */
    (xdc_Char)0x64,  /* [3176] */
    (xdc_Char)0x3a,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x41,  /* [3179] */
    (xdc_Char)0x64,  /* [3180] */
    (xdc_Char)0x64,  /* [3181] */
    (xdc_Char)0x72,  /* [3182] */
    (xdc_Char)0x65,  /* [3183] */
    (xdc_Char)0x73,  /* [3184] */
    (xdc_Char)0x73,  /* [3185] */
    (xdc_Char)0x20,  /* [3186] */
    (xdc_Char)0x69,  /* [3187] */
    (xdc_Char)0x73,  /* [3188] */
    (xdc_Char)0x20,  /* [3189] */
    (xdc_Char)0x6e,  /* [3190] */
    (xdc_Char)0x6f,  /* [3191] */
    (xdc_Char)0x74,  /* [3192] */
    (xdc_Char)0x20,  /* [3193] */
    (xdc_Char)0x63,  /* [3194] */
    (xdc_Char)0x61,  /* [3195] */
    (xdc_Char)0x63,  /* [3196] */
    (xdc_Char)0x68,  /* [3197] */
    (xdc_Char)0x65,  /* [3198] */
    (xdc_Char)0x20,  /* [3199] */
    (xdc_Char)0x61,  /* [3200] */
    (xdc_Char)0x6c,  /* [3201] */
    (xdc_Char)0x69,  /* [3202] */
    (xdc_Char)0x67,  /* [3203] */
    (xdc_Char)0x6e,  /* [3204] */
    (xdc_Char)0x65,  /* [3205] */
    (xdc_Char)0x64,  /* [3206] */
    (xdc_Char)0x0,  /* [3207] */
    (xdc_Char)0x41,  /* [3208] */
    (xdc_Char)0x5f,  /* [3209] */
    (xdc_Char)0x6e,  /* [3210] */
    (xdc_Char)0x75,  /* [3211] */
    (xdc_Char)0x6c,  /* [3212] */
    (xdc_Char)0x6c,  /* [3213] */
    (xdc_Char)0x41,  /* [3214] */
    (xdc_Char)0x72,  /* [3215] */
    (xdc_Char)0x67,  /* [3216] */
    (xdc_Char)0x75,  /* [3217] */
    (xdc_Char)0x6d,  /* [3218] */
    (xdc_Char)0x65,  /* [3219] */
    (xdc_Char)0x6e,  /* [3220] */
    (xdc_Char)0x74,  /* [3221] */
    (xdc_Char)0x3a,  /* [3222] */
    (xdc_Char)0x20,  /* [3223] */
    (xdc_Char)0x52,  /* [3224] */
    (xdc_Char)0x65,  /* [3225] */
    (xdc_Char)0x71,  /* [3226] */
    (xdc_Char)0x75,  /* [3227] */
    (xdc_Char)0x69,  /* [3228] */
    (xdc_Char)0x72,  /* [3229] */
    (xdc_Char)0x65,  /* [3230] */
    (xdc_Char)0x64,  /* [3231] */
    (xdc_Char)0x20,  /* [3232] */
    (xdc_Char)0x61,  /* [3233] */
    (xdc_Char)0x72,  /* [3234] */
    (xdc_Char)0x67,  /* [3235] */
    (xdc_Char)0x75,  /* [3236] */
    (xdc_Char)0x6d,  /* [3237] */
    (xdc_Char)0x65,  /* [3238] */
    (xdc_Char)0x6e,  /* [3239] */
    (xdc_Char)0x74,  /* [3240] */
    (xdc_Char)0x20,  /* [3241] */
    (xdc_Char)0x69,  /* [3242] */
    (xdc_Char)0x73,  /* [3243] */
    (xdc_Char)0x20,  /* [3244] */
    (xdc_Char)0x6e,  /* [3245] */
    (xdc_Char)0x75,  /* [3246] */
    (xdc_Char)0x6c,  /* [3247] */
    (xdc_Char)0x6c,  /* [3248] */
    (xdc_Char)0x0,  /* [3249] */
    (xdc_Char)0x41,  /* [3250] */
    (xdc_Char)0x5f,  /* [3251] */
    (xdc_Char)0x6e,  /* [3252] */
    (xdc_Char)0x75,  /* [3253] */
    (xdc_Char)0x6c,  /* [3254] */
    (xdc_Char)0x6c,  /* [3255] */
    (xdc_Char)0x50,  /* [3256] */
    (xdc_Char)0x6f,  /* [3257] */
    (xdc_Char)0x69,  /* [3258] */
    (xdc_Char)0x6e,  /* [3259] */
    (xdc_Char)0x74,  /* [3260] */
    (xdc_Char)0x65,  /* [3261] */
    (xdc_Char)0x72,  /* [3262] */
    (xdc_Char)0x3a,  /* [3263] */
    (xdc_Char)0x20,  /* [3264] */
    (xdc_Char)0x50,  /* [3265] */
    (xdc_Char)0x6f,  /* [3266] */
    (xdc_Char)0x69,  /* [3267] */
    (xdc_Char)0x6e,  /* [3268] */
    (xdc_Char)0x74,  /* [3269] */
    (xdc_Char)0x65,  /* [3270] */
    (xdc_Char)0x72,  /* [3271] */
    (xdc_Char)0x20,  /* [3272] */
    (xdc_Char)0x69,  /* [3273] */
    (xdc_Char)0x73,  /* [3274] */
    (xdc_Char)0x20,  /* [3275] */
    (xdc_Char)0x6e,  /* [3276] */
    (xdc_Char)0x75,  /* [3277] */
    (xdc_Char)0x6c,  /* [3278] */
    (xdc_Char)0x6c,  /* [3279] */
    (xdc_Char)0x0,  /* [3280] */
    (xdc_Char)0x41,  /* [3281] */
    (xdc_Char)0x5f,  /* [3282] */
    (xdc_Char)0x69,  /* [3283] */
    (xdc_Char)0x6e,  /* [3284] */
    (xdc_Char)0x76,  /* [3285] */
    (xdc_Char)0x50,  /* [3286] */
    (xdc_Char)0x61,  /* [3287] */
    (xdc_Char)0x72,  /* [3288] */
    (xdc_Char)0x61,  /* [3289] */
    (xdc_Char)0x6d,  /* [3290] */
    (xdc_Char)0x3a,  /* [3291] */
    (xdc_Char)0x20,  /* [3292] */
    (xdc_Char)0x49,  /* [3293] */
    (xdc_Char)0x6e,  /* [3294] */
    (xdc_Char)0x76,  /* [3295] */
    (xdc_Char)0x61,  /* [3296] */
    (xdc_Char)0x6c,  /* [3297] */
    (xdc_Char)0x69,  /* [3298] */
    (xdc_Char)0x64,  /* [3299] */
    (xdc_Char)0x20,  /* [3300] */
    (xdc_Char)0x63,  /* [3301] */
    (xdc_Char)0x6f,  /* [3302] */
    (xdc_Char)0x6e,  /* [3303] */
    (xdc_Char)0x66,  /* [3304] */
    (xdc_Char)0x69,  /* [3305] */
    (xdc_Char)0x67,  /* [3306] */
    (xdc_Char)0x75,  /* [3307] */
    (xdc_Char)0x72,  /* [3308] */
    (xdc_Char)0x61,  /* [3309] */
    (xdc_Char)0x74,  /* [3310] */
    (xdc_Char)0x69,  /* [3311] */
    (xdc_Char)0x6f,  /* [3312] */
    (xdc_Char)0x6e,  /* [3313] */
    (xdc_Char)0x20,  /* [3314] */
    (xdc_Char)0x70,  /* [3315] */
    (xdc_Char)0x61,  /* [3316] */
    (xdc_Char)0x72,  /* [3317] */
    (xdc_Char)0x61,  /* [3318] */
    (xdc_Char)0x6d,  /* [3319] */
    (xdc_Char)0x65,  /* [3320] */
    (xdc_Char)0x74,  /* [3321] */
    (xdc_Char)0x65,  /* [3322] */
    (xdc_Char)0x72,  /* [3323] */
    (xdc_Char)0x20,  /* [3324] */
    (xdc_Char)0x73,  /* [3325] */
    (xdc_Char)0x75,  /* [3326] */
    (xdc_Char)0x70,  /* [3327] */
    (xdc_Char)0x70,  /* [3328] */
    (xdc_Char)0x6c,  /* [3329] */
    (xdc_Char)0x69,  /* [3330] */
    (xdc_Char)0x65,  /* [3331] */
    (xdc_Char)0x64,  /* [3332] */
    (xdc_Char)0x0,  /* [3333] */
    (xdc_Char)0x41,  /* [3334] */
    (xdc_Char)0x5f,  /* [3335] */
    (xdc_Char)0x69,  /* [3336] */
    (xdc_Char)0x6e,  /* [3337] */
    (xdc_Char)0x74,  /* [3338] */
    (xdc_Char)0x65,  /* [3339] */
    (xdc_Char)0x72,  /* [3340] */
    (xdc_Char)0x6e,  /* [3341] */
    (xdc_Char)0x61,  /* [3342] */
    (xdc_Char)0x6c,  /* [3343] */
    (xdc_Char)0x3a,  /* [3344] */
    (xdc_Char)0x20,  /* [3345] */
    (xdc_Char)0x41,  /* [3346] */
    (xdc_Char)0x6e,  /* [3347] */
    (xdc_Char)0x20,  /* [3348] */
    (xdc_Char)0x69,  /* [3349] */
    (xdc_Char)0x6e,  /* [3350] */
    (xdc_Char)0x74,  /* [3351] */
    (xdc_Char)0x65,  /* [3352] */
    (xdc_Char)0x72,  /* [3353] */
    (xdc_Char)0x6e,  /* [3354] */
    (xdc_Char)0x61,  /* [3355] */
    (xdc_Char)0x6c,  /* [3356] */
    (xdc_Char)0x20,  /* [3357] */
    (xdc_Char)0x65,  /* [3358] */
    (xdc_Char)0x72,  /* [3359] */
    (xdc_Char)0x72,  /* [3360] */
    (xdc_Char)0x6f,  /* [3361] */
    (xdc_Char)0x72,  /* [3362] */
    (xdc_Char)0x20,  /* [3363] */
    (xdc_Char)0x68,  /* [3364] */
    (xdc_Char)0x61,  /* [3365] */
    (xdc_Char)0x73,  /* [3366] */
    (xdc_Char)0x20,  /* [3367] */
    (xdc_Char)0x6f,  /* [3368] */
    (xdc_Char)0x63,  /* [3369] */
    (xdc_Char)0x63,  /* [3370] */
    (xdc_Char)0x75,  /* [3371] */
    (xdc_Char)0x72,  /* [3372] */
    (xdc_Char)0x72,  /* [3373] */
    (xdc_Char)0x65,  /* [3374] */
    (xdc_Char)0x64,  /* [3375] */
    (xdc_Char)0x0,  /* [3376] */
    (xdc_Char)0x41,  /* [3377] */
    (xdc_Char)0x5f,  /* [3378] */
    (xdc_Char)0x61,  /* [3379] */
    (xdc_Char)0x6c,  /* [3380] */
    (xdc_Char)0x72,  /* [3381] */
    (xdc_Char)0x65,  /* [3382] */
    (xdc_Char)0x61,  /* [3383] */
    (xdc_Char)0x64,  /* [3384] */
    (xdc_Char)0x79,  /* [3385] */
    (xdc_Char)0x52,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x67,  /* [3388] */
    (xdc_Char)0x69,  /* [3389] */
    (xdc_Char)0x73,  /* [3390] */
    (xdc_Char)0x74,  /* [3391] */
    (xdc_Char)0x65,  /* [3392] */
    (xdc_Char)0x72,  /* [3393] */
    (xdc_Char)0x65,  /* [3394] */
    (xdc_Char)0x64,  /* [3395] */
    (xdc_Char)0x3a,  /* [3396] */
    (xdc_Char)0x20,  /* [3397] */
    (xdc_Char)0x4e,  /* [3398] */
    (xdc_Char)0x6f,  /* [3399] */
    (xdc_Char)0x74,  /* [3400] */
    (xdc_Char)0x69,  /* [3401] */
    (xdc_Char)0x66,  /* [3402] */
    (xdc_Char)0x79,  /* [3403] */
    (xdc_Char)0x20,  /* [3404] */
    (xdc_Char)0x69,  /* [3405] */
    (xdc_Char)0x6e,  /* [3406] */
    (xdc_Char)0x73,  /* [3407] */
    (xdc_Char)0x74,  /* [3408] */
    (xdc_Char)0x61,  /* [3409] */
    (xdc_Char)0x6e,  /* [3410] */
    (xdc_Char)0x63,  /* [3411] */
    (xdc_Char)0x65,  /* [3412] */
    (xdc_Char)0x20,  /* [3413] */
    (xdc_Char)0x66,  /* [3414] */
    (xdc_Char)0x6f,  /* [3415] */
    (xdc_Char)0x72,  /* [3416] */
    (xdc_Char)0x20,  /* [3417] */
    (xdc_Char)0x74,  /* [3418] */
    (xdc_Char)0x68,  /* [3419] */
    (xdc_Char)0x65,  /* [3420] */
    (xdc_Char)0x20,  /* [3421] */
    (xdc_Char)0x70,  /* [3422] */
    (xdc_Char)0x72,  /* [3423] */
    (xdc_Char)0x6f,  /* [3424] */
    (xdc_Char)0x63,  /* [3425] */
    (xdc_Char)0x65,  /* [3426] */
    (xdc_Char)0x73,  /* [3427] */
    (xdc_Char)0x73,  /* [3428] */
    (xdc_Char)0x6f,  /* [3429] */
    (xdc_Char)0x72,  /* [3430] */
    (xdc_Char)0x2f,  /* [3431] */
    (xdc_Char)0x6c,  /* [3432] */
    (xdc_Char)0x69,  /* [3433] */
    (xdc_Char)0x6e,  /* [3434] */
    (xdc_Char)0x65,  /* [3435] */
    (xdc_Char)0x20,  /* [3436] */
    (xdc_Char)0x61,  /* [3437] */
    (xdc_Char)0x6c,  /* [3438] */
    (xdc_Char)0x72,  /* [3439] */
    (xdc_Char)0x65,  /* [3440] */
    (xdc_Char)0x61,  /* [3441] */
    (xdc_Char)0x64,  /* [3442] */
    (xdc_Char)0x79,  /* [3443] */
    (xdc_Char)0x20,  /* [3444] */
    (xdc_Char)0x72,  /* [3445] */
    (xdc_Char)0x65,  /* [3446] */
    (xdc_Char)0x67,  /* [3447] */
    (xdc_Char)0x69,  /* [3448] */
    (xdc_Char)0x73,  /* [3449] */
    (xdc_Char)0x74,  /* [3450] */
    (xdc_Char)0x65,  /* [3451] */
    (xdc_Char)0x72,  /* [3452] */
    (xdc_Char)0x65,  /* [3453] */
    (xdc_Char)0x64,  /* [3454] */
    (xdc_Char)0x0,  /* [3455] */
    (xdc_Char)0x41,  /* [3456] */
    (xdc_Char)0x5f,  /* [3457] */
    (xdc_Char)0x6e,  /* [3458] */
    (xdc_Char)0x6f,  /* [3459] */
    (xdc_Char)0x74,  /* [3460] */
    (xdc_Char)0x52,  /* [3461] */
    (xdc_Char)0x65,  /* [3462] */
    (xdc_Char)0x67,  /* [3463] */
    (xdc_Char)0x69,  /* [3464] */
    (xdc_Char)0x73,  /* [3465] */
    (xdc_Char)0x74,  /* [3466] */
    (xdc_Char)0x65,  /* [3467] */
    (xdc_Char)0x72,  /* [3468] */
    (xdc_Char)0x65,  /* [3469] */
    (xdc_Char)0x64,  /* [3470] */
    (xdc_Char)0x3a,  /* [3471] */
    (xdc_Char)0x20,  /* [3472] */
    (xdc_Char)0x4e,  /* [3473] */
    (xdc_Char)0x6f,  /* [3474] */
    (xdc_Char)0x74,  /* [3475] */
    (xdc_Char)0x69,  /* [3476] */
    (xdc_Char)0x66,  /* [3477] */
    (xdc_Char)0x79,  /* [3478] */
    (xdc_Char)0x20,  /* [3479] */
    (xdc_Char)0x69,  /* [3480] */
    (xdc_Char)0x6e,  /* [3481] */
    (xdc_Char)0x73,  /* [3482] */
    (xdc_Char)0x74,  /* [3483] */
    (xdc_Char)0x61,  /* [3484] */
    (xdc_Char)0x6e,  /* [3485] */
    (xdc_Char)0x63,  /* [3486] */
    (xdc_Char)0x65,  /* [3487] */
    (xdc_Char)0x20,  /* [3488] */
    (xdc_Char)0x6e,  /* [3489] */
    (xdc_Char)0x6f,  /* [3490] */
    (xdc_Char)0x74,  /* [3491] */
    (xdc_Char)0x20,  /* [3492] */
    (xdc_Char)0x79,  /* [3493] */
    (xdc_Char)0x65,  /* [3494] */
    (xdc_Char)0x74,  /* [3495] */
    (xdc_Char)0x20,  /* [3496] */
    (xdc_Char)0x72,  /* [3497] */
    (xdc_Char)0x65,  /* [3498] */
    (xdc_Char)0x67,  /* [3499] */
    (xdc_Char)0x69,  /* [3500] */
    (xdc_Char)0x73,  /* [3501] */
    (xdc_Char)0x74,  /* [3502] */
    (xdc_Char)0x65,  /* [3503] */
    (xdc_Char)0x72,  /* [3504] */
    (xdc_Char)0x65,  /* [3505] */
    (xdc_Char)0x64,  /* [3506] */
    (xdc_Char)0x20,  /* [3507] */
    (xdc_Char)0x66,  /* [3508] */
    (xdc_Char)0x6f,  /* [3509] */
    (xdc_Char)0x72,  /* [3510] */
    (xdc_Char)0x20,  /* [3511] */
    (xdc_Char)0x74,  /* [3512] */
    (xdc_Char)0x68,  /* [3513] */
    (xdc_Char)0x65,  /* [3514] */
    (xdc_Char)0x20,  /* [3515] */
    (xdc_Char)0x70,  /* [3516] */
    (xdc_Char)0x72,  /* [3517] */
    (xdc_Char)0x6f,  /* [3518] */
    (xdc_Char)0x63,  /* [3519] */
    (xdc_Char)0x65,  /* [3520] */
    (xdc_Char)0x73,  /* [3521] */
    (xdc_Char)0x73,  /* [3522] */
    (xdc_Char)0x6f,  /* [3523] */
    (xdc_Char)0x72,  /* [3524] */
    (xdc_Char)0x2f,  /* [3525] */
    (xdc_Char)0x6c,  /* [3526] */
    (xdc_Char)0x69,  /* [3527] */
    (xdc_Char)0x6e,  /* [3528] */
    (xdc_Char)0x65,  /* [3529] */
    (xdc_Char)0x0,  /* [3530] */
    (xdc_Char)0x41,  /* [3531] */
    (xdc_Char)0x5f,  /* [3532] */
    (xdc_Char)0x72,  /* [3533] */
    (xdc_Char)0x65,  /* [3534] */
    (xdc_Char)0x73,  /* [3535] */
    (xdc_Char)0x65,  /* [3536] */
    (xdc_Char)0x72,  /* [3537] */
    (xdc_Char)0x76,  /* [3538] */
    (xdc_Char)0x65,  /* [3539] */
    (xdc_Char)0x64,  /* [3540] */
    (xdc_Char)0x45,  /* [3541] */
    (xdc_Char)0x76,  /* [3542] */
    (xdc_Char)0x65,  /* [3543] */
    (xdc_Char)0x6e,  /* [3544] */
    (xdc_Char)0x74,  /* [3545] */
    (xdc_Char)0x3a,  /* [3546] */
    (xdc_Char)0x20,  /* [3547] */
    (xdc_Char)0x49,  /* [3548] */
    (xdc_Char)0x6d,  /* [3549] */
    (xdc_Char)0x70,  /* [3550] */
    (xdc_Char)0x72,  /* [3551] */
    (xdc_Char)0x6f,  /* [3552] */
    (xdc_Char)0x70,  /* [3553] */
    (xdc_Char)0x65,  /* [3554] */
    (xdc_Char)0x72,  /* [3555] */
    (xdc_Char)0x20,  /* [3556] */
    (xdc_Char)0x75,  /* [3557] */
    (xdc_Char)0x73,  /* [3558] */
    (xdc_Char)0x65,  /* [3559] */
    (xdc_Char)0x20,  /* [3560] */
    (xdc_Char)0x6f,  /* [3561] */
    (xdc_Char)0x66,  /* [3562] */
    (xdc_Char)0x20,  /* [3563] */
    (xdc_Char)0x61,  /* [3564] */
    (xdc_Char)0x20,  /* [3565] */
    (xdc_Char)0x72,  /* [3566] */
    (xdc_Char)0x65,  /* [3567] */
    (xdc_Char)0x73,  /* [3568] */
    (xdc_Char)0x65,  /* [3569] */
    (xdc_Char)0x72,  /* [3570] */
    (xdc_Char)0x76,  /* [3571] */
    (xdc_Char)0x65,  /* [3572] */
    (xdc_Char)0x64,  /* [3573] */
    (xdc_Char)0x20,  /* [3574] */
    (xdc_Char)0x65,  /* [3575] */
    (xdc_Char)0x76,  /* [3576] */
    (xdc_Char)0x65,  /* [3577] */
    (xdc_Char)0x6e,  /* [3578] */
    (xdc_Char)0x74,  /* [3579] */
    (xdc_Char)0x0,  /* [3580] */
    (xdc_Char)0x41,  /* [3581] */
    (xdc_Char)0x5f,  /* [3582] */
    (xdc_Char)0x6f,  /* [3583] */
    (xdc_Char)0x75,  /* [3584] */
    (xdc_Char)0x74,  /* [3585] */
    (xdc_Char)0x4f,  /* [3586] */
    (xdc_Char)0x66,  /* [3587] */
    (xdc_Char)0x4f,  /* [3588] */
    (xdc_Char)0x72,  /* [3589] */
    (xdc_Char)0x64,  /* [3590] */
    (xdc_Char)0x65,  /* [3591] */
    (xdc_Char)0x72,  /* [3592] */
    (xdc_Char)0x4e,  /* [3593] */
    (xdc_Char)0x65,  /* [3594] */
    (xdc_Char)0x73,  /* [3595] */
    (xdc_Char)0x74,  /* [3596] */
    (xdc_Char)0x69,  /* [3597] */
    (xdc_Char)0x6e,  /* [3598] */
    (xdc_Char)0x67,  /* [3599] */
    (xdc_Char)0x3a,  /* [3600] */
    (xdc_Char)0x20,  /* [3601] */
    (xdc_Char)0x4f,  /* [3602] */
    (xdc_Char)0x75,  /* [3603] */
    (xdc_Char)0x74,  /* [3604] */
    (xdc_Char)0x20,  /* [3605] */
    (xdc_Char)0x6f,  /* [3606] */
    (xdc_Char)0x66,  /* [3607] */
    (xdc_Char)0x20,  /* [3608] */
    (xdc_Char)0x6f,  /* [3609] */
    (xdc_Char)0x72,  /* [3610] */
    (xdc_Char)0x64,  /* [3611] */
    (xdc_Char)0x65,  /* [3612] */
    (xdc_Char)0x72,  /* [3613] */
    (xdc_Char)0x20,  /* [3614] */
    (xdc_Char)0x6e,  /* [3615] */
    (xdc_Char)0x65,  /* [3616] */
    (xdc_Char)0x73,  /* [3617] */
    (xdc_Char)0x74,  /* [3618] */
    (xdc_Char)0x69,  /* [3619] */
    (xdc_Char)0x6e,  /* [3620] */
    (xdc_Char)0x67,  /* [3621] */
    (xdc_Char)0x0,  /* [3622] */
    (xdc_Char)0x41,  /* [3623] */
    (xdc_Char)0x5f,  /* [3624] */
    (xdc_Char)0x6e,  /* [3625] */
    (xdc_Char)0x6f,  /* [3626] */
    (xdc_Char)0x74,  /* [3627] */
    (xdc_Char)0x41,  /* [3628] */
    (xdc_Char)0x76,  /* [3629] */
    (xdc_Char)0x61,  /* [3630] */
    (xdc_Char)0x69,  /* [3631] */
    (xdc_Char)0x6c,  /* [3632] */
    (xdc_Char)0x61,  /* [3633] */
    (xdc_Char)0x62,  /* [3634] */
    (xdc_Char)0x6c,  /* [3635] */
    (xdc_Char)0x65,  /* [3636] */
    (xdc_Char)0x3a,  /* [3637] */
    (xdc_Char)0x20,  /* [3638] */
    (xdc_Char)0x73,  /* [3639] */
    (xdc_Char)0x74,  /* [3640] */
    (xdc_Char)0x61,  /* [3641] */
    (xdc_Char)0x74,  /* [3642] */
    (xdc_Char)0x69,  /* [3643] */
    (xdc_Char)0x63,  /* [3644] */
    (xdc_Char)0x20,  /* [3645] */
    (xdc_Char)0x63,  /* [3646] */
    (xdc_Char)0x72,  /* [3647] */
    (xdc_Char)0x65,  /* [3648] */
    (xdc_Char)0x61,  /* [3649] */
    (xdc_Char)0x74,  /* [3650] */
    (xdc_Char)0x65,  /* [3651] */
    (xdc_Char)0x64,  /* [3652] */
    (xdc_Char)0x20,  /* [3653] */
    (xdc_Char)0x74,  /* [3654] */
    (xdc_Char)0x69,  /* [3655] */
    (xdc_Char)0x6d,  /* [3656] */
    (xdc_Char)0x65,  /* [3657] */
    (xdc_Char)0x72,  /* [3658] */
    (xdc_Char)0x20,  /* [3659] */
    (xdc_Char)0x6e,  /* [3660] */
    (xdc_Char)0x6f,  /* [3661] */
    (xdc_Char)0x74,  /* [3662] */
    (xdc_Char)0x20,  /* [3663] */
    (xdc_Char)0x61,  /* [3664] */
    (xdc_Char)0x76,  /* [3665] */
    (xdc_Char)0x61,  /* [3666] */
    (xdc_Char)0x69,  /* [3667] */
    (xdc_Char)0x6c,  /* [3668] */
    (xdc_Char)0x61,  /* [3669] */
    (xdc_Char)0x62,  /* [3670] */
    (xdc_Char)0x6c,  /* [3671] */
    (xdc_Char)0x65,  /* [3672] */
    (xdc_Char)0x0,  /* [3673] */
    (xdc_Char)0x62,  /* [3674] */
    (xdc_Char)0x75,  /* [3675] */
    (xdc_Char)0x66,  /* [3676] */
    (xdc_Char)0x20,  /* [3677] */
    (xdc_Char)0x70,  /* [3678] */
    (xdc_Char)0x61,  /* [3679] */
    (xdc_Char)0x72,  /* [3680] */
    (xdc_Char)0x61,  /* [3681] */
    (xdc_Char)0x6d,  /* [3682] */
    (xdc_Char)0x65,  /* [3683] */
    (xdc_Char)0x74,  /* [3684] */
    (xdc_Char)0x65,  /* [3685] */
    (xdc_Char)0x72,  /* [3686] */
    (xdc_Char)0x20,  /* [3687] */
    (xdc_Char)0x63,  /* [3688] */
    (xdc_Char)0x61,  /* [3689] */
    (xdc_Char)0x6e,  /* [3690] */
    (xdc_Char)0x6e,  /* [3691] */
    (xdc_Char)0x6f,  /* [3692] */
    (xdc_Char)0x74,  /* [3693] */
    (xdc_Char)0x20,  /* [3694] */
    (xdc_Char)0x62,  /* [3695] */
    (xdc_Char)0x65,  /* [3696] */
    (xdc_Char)0x20,  /* [3697] */
    (xdc_Char)0x6e,  /* [3698] */
    (xdc_Char)0x75,  /* [3699] */
    (xdc_Char)0x6c,  /* [3700] */
    (xdc_Char)0x6c,  /* [3701] */
    (xdc_Char)0x0,  /* [3702] */
    (xdc_Char)0x62,  /* [3703] */
    (xdc_Char)0x75,  /* [3704] */
    (xdc_Char)0x66,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x6e,  /* [3707] */
    (xdc_Char)0x6f,  /* [3708] */
    (xdc_Char)0x74,  /* [3709] */
    (xdc_Char)0x20,  /* [3710] */
    (xdc_Char)0x70,  /* [3711] */
    (xdc_Char)0x72,  /* [3712] */
    (xdc_Char)0x6f,  /* [3713] */
    (xdc_Char)0x70,  /* [3714] */
    (xdc_Char)0x65,  /* [3715] */
    (xdc_Char)0x72,  /* [3716] */
    (xdc_Char)0x6c,  /* [3717] */
    (xdc_Char)0x79,  /* [3718] */
    (xdc_Char)0x20,  /* [3719] */
    (xdc_Char)0x61,  /* [3720] */
    (xdc_Char)0x6c,  /* [3721] */
    (xdc_Char)0x69,  /* [3722] */
    (xdc_Char)0x67,  /* [3723] */
    (xdc_Char)0x6e,  /* [3724] */
    (xdc_Char)0x65,  /* [3725] */
    (xdc_Char)0x64,  /* [3726] */
    (xdc_Char)0x0,  /* [3727] */
    (xdc_Char)0x61,  /* [3728] */
    (xdc_Char)0x6c,  /* [3729] */
    (xdc_Char)0x69,  /* [3730] */
    (xdc_Char)0x67,  /* [3731] */
    (xdc_Char)0x6e,  /* [3732] */
    (xdc_Char)0x20,  /* [3733] */
    (xdc_Char)0x70,  /* [3734] */
    (xdc_Char)0x61,  /* [3735] */
    (xdc_Char)0x72,  /* [3736] */
    (xdc_Char)0x61,  /* [3737] */
    (xdc_Char)0x6d,  /* [3738] */
    (xdc_Char)0x65,  /* [3739] */
    (xdc_Char)0x74,  /* [3740] */
    (xdc_Char)0x65,  /* [3741] */
    (xdc_Char)0x72,  /* [3742] */
    (xdc_Char)0x20,  /* [3743] */
    (xdc_Char)0x6d,  /* [3744] */
    (xdc_Char)0x75,  /* [3745] */
    (xdc_Char)0x73,  /* [3746] */
    (xdc_Char)0x74,  /* [3747] */
    (xdc_Char)0x20,  /* [3748] */
    (xdc_Char)0x62,  /* [3749] */
    (xdc_Char)0x65,  /* [3750] */
    (xdc_Char)0x20,  /* [3751] */
    (xdc_Char)0x30,  /* [3752] */
    (xdc_Char)0x20,  /* [3753] */
    (xdc_Char)0x6f,  /* [3754] */
    (xdc_Char)0x72,  /* [3755] */
    (xdc_Char)0x20,  /* [3756] */
    (xdc_Char)0x61,  /* [3757] */
    (xdc_Char)0x20,  /* [3758] */
    (xdc_Char)0x70,  /* [3759] */
    (xdc_Char)0x6f,  /* [3760] */
    (xdc_Char)0x77,  /* [3761] */
    (xdc_Char)0x65,  /* [3762] */
    (xdc_Char)0x72,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x6f,  /* [3765] */
    (xdc_Char)0x66,  /* [3766] */
    (xdc_Char)0x20,  /* [3767] */
    (xdc_Char)0x32,  /* [3768] */
    (xdc_Char)0x20,  /* [3769] */
    (xdc_Char)0x3e,  /* [3770] */
    (xdc_Char)0x3d,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x74,  /* [3773] */
    (xdc_Char)0x68,  /* [3774] */
    (xdc_Char)0x65,  /* [3775] */
    (xdc_Char)0x20,  /* [3776] */
    (xdc_Char)0x76,  /* [3777] */
    (xdc_Char)0x61,  /* [3778] */
    (xdc_Char)0x6c,  /* [3779] */
    (xdc_Char)0x75,  /* [3780] */
    (xdc_Char)0x65,  /* [3781] */
    (xdc_Char)0x20,  /* [3782] */
    (xdc_Char)0x6f,  /* [3783] */
    (xdc_Char)0x66,  /* [3784] */
    (xdc_Char)0x20,  /* [3785] */
    (xdc_Char)0x4d,  /* [3786] */
    (xdc_Char)0x65,  /* [3787] */
    (xdc_Char)0x6d,  /* [3788] */
    (xdc_Char)0x6f,  /* [3789] */
    (xdc_Char)0x72,  /* [3790] */
    (xdc_Char)0x79,  /* [3791] */
    (xdc_Char)0x5f,  /* [3792] */
    (xdc_Char)0x67,  /* [3793] */
    (xdc_Char)0x65,  /* [3794] */
    (xdc_Char)0x74,  /* [3795] */
    (xdc_Char)0x4d,  /* [3796] */
    (xdc_Char)0x61,  /* [3797] */
    (xdc_Char)0x78,  /* [3798] */
    (xdc_Char)0x44,  /* [3799] */
    (xdc_Char)0x65,  /* [3800] */
    (xdc_Char)0x66,  /* [3801] */
    (xdc_Char)0x61,  /* [3802] */
    (xdc_Char)0x75,  /* [3803] */
    (xdc_Char)0x6c,  /* [3804] */
    (xdc_Char)0x74,  /* [3805] */
    (xdc_Char)0x54,  /* [3806] */
    (xdc_Char)0x79,  /* [3807] */
    (xdc_Char)0x70,  /* [3808] */
    (xdc_Char)0x65,  /* [3809] */
    (xdc_Char)0x41,  /* [3810] */
    (xdc_Char)0x6c,  /* [3811] */
    (xdc_Char)0x69,  /* [3812] */
    (xdc_Char)0x67,  /* [3813] */
    (xdc_Char)0x6e,  /* [3814] */
    (xdc_Char)0x28,  /* [3815] */
    (xdc_Char)0x29,  /* [3816] */
    (xdc_Char)0x0,  /* [3817] */
    (xdc_Char)0x61,  /* [3818] */
    (xdc_Char)0x6c,  /* [3819] */
    (xdc_Char)0x69,  /* [3820] */
    (xdc_Char)0x67,  /* [3821] */
    (xdc_Char)0x6e,  /* [3822] */
    (xdc_Char)0x20,  /* [3823] */
    (xdc_Char)0x70,  /* [3824] */
    (xdc_Char)0x61,  /* [3825] */
    (xdc_Char)0x72,  /* [3826] */
    (xdc_Char)0x61,  /* [3827] */
    (xdc_Char)0x6d,  /* [3828] */
    (xdc_Char)0x65,  /* [3829] */
    (xdc_Char)0x74,  /* [3830] */
    (xdc_Char)0x65,  /* [3831] */
    (xdc_Char)0x72,  /* [3832] */
    (xdc_Char)0x20,  /* [3833] */
    (xdc_Char)0x31,  /* [3834] */
    (xdc_Char)0x29,  /* [3835] */
    (xdc_Char)0x20,  /* [3836] */
    (xdc_Char)0x6d,  /* [3837] */
    (xdc_Char)0x75,  /* [3838] */
    (xdc_Char)0x73,  /* [3839] */
    (xdc_Char)0x74,  /* [3840] */
    (xdc_Char)0x20,  /* [3841] */
    (xdc_Char)0x62,  /* [3842] */
    (xdc_Char)0x65,  /* [3843] */
    (xdc_Char)0x20,  /* [3844] */
    (xdc_Char)0x30,  /* [3845] */
    (xdc_Char)0x20,  /* [3846] */
    (xdc_Char)0x6f,  /* [3847] */
    (xdc_Char)0x72,  /* [3848] */
    (xdc_Char)0x20,  /* [3849] */
    (xdc_Char)0x61,  /* [3850] */
    (xdc_Char)0x20,  /* [3851] */
    (xdc_Char)0x70,  /* [3852] */
    (xdc_Char)0x6f,  /* [3853] */
    (xdc_Char)0x77,  /* [3854] */
    (xdc_Char)0x65,  /* [3855] */
    (xdc_Char)0x72,  /* [3856] */
    (xdc_Char)0x20,  /* [3857] */
    (xdc_Char)0x6f,  /* [3858] */
    (xdc_Char)0x66,  /* [3859] */
    (xdc_Char)0x20,  /* [3860] */
    (xdc_Char)0x32,  /* [3861] */
    (xdc_Char)0x20,  /* [3862] */
    (xdc_Char)0x61,  /* [3863] */
    (xdc_Char)0x6e,  /* [3864] */
    (xdc_Char)0x64,  /* [3865] */
    (xdc_Char)0x20,  /* [3866] */
    (xdc_Char)0x32,  /* [3867] */
    (xdc_Char)0x29,  /* [3868] */
    (xdc_Char)0x20,  /* [3869] */
    (xdc_Char)0x6e,  /* [3870] */
    (xdc_Char)0x6f,  /* [3871] */
    (xdc_Char)0x74,  /* [3872] */
    (xdc_Char)0x20,  /* [3873] */
    (xdc_Char)0x67,  /* [3874] */
    (xdc_Char)0x72,  /* [3875] */
    (xdc_Char)0x65,  /* [3876] */
    (xdc_Char)0x61,  /* [3877] */
    (xdc_Char)0x74,  /* [3878] */
    (xdc_Char)0x65,  /* [3879] */
    (xdc_Char)0x72,  /* [3880] */
    (xdc_Char)0x20,  /* [3881] */
    (xdc_Char)0x74,  /* [3882] */
    (xdc_Char)0x68,  /* [3883] */
    (xdc_Char)0x61,  /* [3884] */
    (xdc_Char)0x6e,  /* [3885] */
    (xdc_Char)0x20,  /* [3886] */
    (xdc_Char)0x74,  /* [3887] */
    (xdc_Char)0x68,  /* [3888] */
    (xdc_Char)0x65,  /* [3889] */
    (xdc_Char)0x20,  /* [3890] */
    (xdc_Char)0x68,  /* [3891] */
    (xdc_Char)0x65,  /* [3892] */
    (xdc_Char)0x61,  /* [3893] */
    (xdc_Char)0x70,  /* [3894] */
    (xdc_Char)0x73,  /* [3895] */
    (xdc_Char)0x20,  /* [3896] */
    (xdc_Char)0x61,  /* [3897] */
    (xdc_Char)0x6c,  /* [3898] */
    (xdc_Char)0x69,  /* [3899] */
    (xdc_Char)0x67,  /* [3900] */
    (xdc_Char)0x6e,  /* [3901] */
    (xdc_Char)0x6d,  /* [3902] */
    (xdc_Char)0x65,  /* [3903] */
    (xdc_Char)0x6e,  /* [3904] */
    (xdc_Char)0x74,  /* [3905] */
    (xdc_Char)0x0,  /* [3906] */
    (xdc_Char)0x62,  /* [3907] */
    (xdc_Char)0x6c,  /* [3908] */
    (xdc_Char)0x6f,  /* [3909] */
    (xdc_Char)0x63,  /* [3910] */
    (xdc_Char)0x6b,  /* [3911] */
    (xdc_Char)0x53,  /* [3912] */
    (xdc_Char)0x69,  /* [3913] */
    (xdc_Char)0x7a,  /* [3914] */
    (xdc_Char)0x65,  /* [3915] */
    (xdc_Char)0x20,  /* [3916] */
    (xdc_Char)0x63,  /* [3917] */
    (xdc_Char)0x61,  /* [3918] */
    (xdc_Char)0x6e,  /* [3919] */
    (xdc_Char)0x6e,  /* [3920] */
    (xdc_Char)0x6f,  /* [3921] */
    (xdc_Char)0x74,  /* [3922] */
    (xdc_Char)0x20,  /* [3923] */
    (xdc_Char)0x62,  /* [3924] */
    (xdc_Char)0x65,  /* [3925] */
    (xdc_Char)0x20,  /* [3926] */
    (xdc_Char)0x7a,  /* [3927] */
    (xdc_Char)0x65,  /* [3928] */
    (xdc_Char)0x72,  /* [3929] */
    (xdc_Char)0x6f,  /* [3930] */
    (xdc_Char)0x0,  /* [3931] */
    (xdc_Char)0x6e,  /* [3932] */
    (xdc_Char)0x75,  /* [3933] */
    (xdc_Char)0x6d,  /* [3934] */
    (xdc_Char)0x42,  /* [3935] */
    (xdc_Char)0x6c,  /* [3936] */
    (xdc_Char)0x6f,  /* [3937] */
    (xdc_Char)0x63,  /* [3938] */
    (xdc_Char)0x6b,  /* [3939] */
    (xdc_Char)0x73,  /* [3940] */
    (xdc_Char)0x20,  /* [3941] */
    (xdc_Char)0x63,  /* [3942] */
    (xdc_Char)0x61,  /* [3943] */
    (xdc_Char)0x6e,  /* [3944] */
    (xdc_Char)0x6e,  /* [3945] */
    (xdc_Char)0x6f,  /* [3946] */
    (xdc_Char)0x74,  /* [3947] */
    (xdc_Char)0x20,  /* [3948] */
    (xdc_Char)0x62,  /* [3949] */
    (xdc_Char)0x65,  /* [3950] */
    (xdc_Char)0x20,  /* [3951] */
    (xdc_Char)0x7a,  /* [3952] */
    (xdc_Char)0x65,  /* [3953] */
    (xdc_Char)0x72,  /* [3954] */
    (xdc_Char)0x6f,  /* [3955] */
    (xdc_Char)0x0,  /* [3956] */
    (xdc_Char)0x62,  /* [3957] */
    (xdc_Char)0x75,  /* [3958] */
    (xdc_Char)0x66,  /* [3959] */
    (xdc_Char)0x53,  /* [3960] */
    (xdc_Char)0x69,  /* [3961] */
    (xdc_Char)0x7a,  /* [3962] */
    (xdc_Char)0x65,  /* [3963] */
    (xdc_Char)0x20,  /* [3964] */
    (xdc_Char)0x63,  /* [3965] */
    (xdc_Char)0x61,  /* [3966] */
    (xdc_Char)0x6e,  /* [3967] */
    (xdc_Char)0x6e,  /* [3968] */
    (xdc_Char)0x6f,  /* [3969] */
    (xdc_Char)0x74,  /* [3970] */
    (xdc_Char)0x20,  /* [3971] */
    (xdc_Char)0x62,  /* [3972] */
    (xdc_Char)0x65,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x7a,  /* [3975] */
    (xdc_Char)0x65,  /* [3976] */
    (xdc_Char)0x72,  /* [3977] */
    (xdc_Char)0x6f,  /* [3978] */
    (xdc_Char)0x0,  /* [3979] */
    (xdc_Char)0x48,  /* [3980] */
    (xdc_Char)0x65,  /* [3981] */
    (xdc_Char)0x61,  /* [3982] */
    (xdc_Char)0x70,  /* [3983] */
    (xdc_Char)0x42,  /* [3984] */
    (xdc_Char)0x75,  /* [3985] */
    (xdc_Char)0x66,  /* [3986] */
    (xdc_Char)0x5f,  /* [3987] */
    (xdc_Char)0x63,  /* [3988] */
    (xdc_Char)0x72,  /* [3989] */
    (xdc_Char)0x65,  /* [3990] */
    (xdc_Char)0x61,  /* [3991] */
    (xdc_Char)0x74,  /* [3992] */
    (xdc_Char)0x65,  /* [3993] */
    (xdc_Char)0x27,  /* [3994] */
    (xdc_Char)0x73,  /* [3995] */
    (xdc_Char)0x20,  /* [3996] */
    (xdc_Char)0x62,  /* [3997] */
    (xdc_Char)0x75,  /* [3998] */
    (xdc_Char)0x66,  /* [3999] */
    (xdc_Char)0x53,  /* [4000] */
    (xdc_Char)0x69,  /* [4001] */
    (xdc_Char)0x7a,  /* [4002] */
    (xdc_Char)0x65,  /* [4003] */
    (xdc_Char)0x20,  /* [4004] */
    (xdc_Char)0x70,  /* [4005] */
    (xdc_Char)0x61,  /* [4006] */
    (xdc_Char)0x72,  /* [4007] */
    (xdc_Char)0x61,  /* [4008] */
    (xdc_Char)0x6d,  /* [4009] */
    (xdc_Char)0x65,  /* [4010] */
    (xdc_Char)0x74,  /* [4011] */
    (xdc_Char)0x65,  /* [4012] */
    (xdc_Char)0x72,  /* [4013] */
    (xdc_Char)0x20,  /* [4014] */
    (xdc_Char)0x69,  /* [4015] */
    (xdc_Char)0x73,  /* [4016] */
    (xdc_Char)0x20,  /* [4017] */
    (xdc_Char)0x69,  /* [4018] */
    (xdc_Char)0x6e,  /* [4019] */
    (xdc_Char)0x76,  /* [4020] */
    (xdc_Char)0x61,  /* [4021] */
    (xdc_Char)0x6c,  /* [4022] */
    (xdc_Char)0x69,  /* [4023] */
    (xdc_Char)0x64,  /* [4024] */
    (xdc_Char)0x20,  /* [4025] */
    (xdc_Char)0x28,  /* [4026] */
    (xdc_Char)0x74,  /* [4027] */
    (xdc_Char)0x6f,  /* [4028] */
    (xdc_Char)0x6f,  /* [4029] */
    (xdc_Char)0x20,  /* [4030] */
    (xdc_Char)0x73,  /* [4031] */
    (xdc_Char)0x6d,  /* [4032] */
    (xdc_Char)0x61,  /* [4033] */
    (xdc_Char)0x6c,  /* [4034] */
    (xdc_Char)0x6c,  /* [4035] */
    (xdc_Char)0x29,  /* [4036] */
    (xdc_Char)0x0,  /* [4037] */
    (xdc_Char)0x43,  /* [4038] */
    (xdc_Char)0x61,  /* [4039] */
    (xdc_Char)0x6e,  /* [4040] */
    (xdc_Char)0x6e,  /* [4041] */
    (xdc_Char)0x6f,  /* [4042] */
    (xdc_Char)0x74,  /* [4043] */
    (xdc_Char)0x20,  /* [4044] */
    (xdc_Char)0x63,  /* [4045] */
    (xdc_Char)0x61,  /* [4046] */
    (xdc_Char)0x6c,  /* [4047] */
    (xdc_Char)0x6c,  /* [4048] */
    (xdc_Char)0x20,  /* [4049] */
    (xdc_Char)0x48,  /* [4050] */
    (xdc_Char)0x65,  /* [4051] */
    (xdc_Char)0x61,  /* [4052] */
    (xdc_Char)0x70,  /* [4053] */
    (xdc_Char)0x42,  /* [4054] */
    (xdc_Char)0x75,  /* [4055] */
    (xdc_Char)0x66,  /* [4056] */
    (xdc_Char)0x5f,  /* [4057] */
    (xdc_Char)0x66,  /* [4058] */
    (xdc_Char)0x72,  /* [4059] */
    (xdc_Char)0x65,  /* [4060] */
    (xdc_Char)0x65,  /* [4061] */
    (xdc_Char)0x20,  /* [4062] */
    (xdc_Char)0x77,  /* [4063] */
    (xdc_Char)0x68,  /* [4064] */
    (xdc_Char)0x65,  /* [4065] */
    (xdc_Char)0x6e,  /* [4066] */
    (xdc_Char)0x20,  /* [4067] */
    (xdc_Char)0x6e,  /* [4068] */
    (xdc_Char)0x6f,  /* [4069] */
    (xdc_Char)0x20,  /* [4070] */
    (xdc_Char)0x62,  /* [4071] */
    (xdc_Char)0x6c,  /* [4072] */
    (xdc_Char)0x6f,  /* [4073] */
    (xdc_Char)0x63,  /* [4074] */
    (xdc_Char)0x6b,  /* [4075] */
    (xdc_Char)0x73,  /* [4076] */
    (xdc_Char)0x20,  /* [4077] */
    (xdc_Char)0x68,  /* [4078] */
    (xdc_Char)0x61,  /* [4079] */
    (xdc_Char)0x76,  /* [4080] */
    (xdc_Char)0x65,  /* [4081] */
    (xdc_Char)0x20,  /* [4082] */
    (xdc_Char)0x62,  /* [4083] */
    (xdc_Char)0x65,  /* [4084] */
    (xdc_Char)0x65,  /* [4085] */
    (xdc_Char)0x6e,  /* [4086] */
    (xdc_Char)0x20,  /* [4087] */
    (xdc_Char)0x61,  /* [4088] */
    (xdc_Char)0x6c,  /* [4089] */
    (xdc_Char)0x6c,  /* [4090] */
    (xdc_Char)0x6f,  /* [4091] */
    (xdc_Char)0x63,  /* [4092] */
    (xdc_Char)0x61,  /* [4093] */
    (xdc_Char)0x74,  /* [4094] */
    (xdc_Char)0x65,  /* [4095] */
    (xdc_Char)0x64,  /* [4096] */
    (xdc_Char)0x0,  /* [4097] */
    (xdc_Char)0x41,  /* [4098] */
    (xdc_Char)0x5f,  /* [4099] */
    (xdc_Char)0x69,  /* [4100] */
    (xdc_Char)0x6e,  /* [4101] */
    (xdc_Char)0x76,  /* [4102] */
    (xdc_Char)0x61,  /* [4103] */
    (xdc_Char)0x6c,  /* [4104] */
    (xdc_Char)0x69,  /* [4105] */
    (xdc_Char)0x64,  /* [4106] */
    (xdc_Char)0x46,  /* [4107] */
    (xdc_Char)0x72,  /* [4108] */
    (xdc_Char)0x65,  /* [4109] */
    (xdc_Char)0x65,  /* [4110] */
    (xdc_Char)0x3a,  /* [4111] */
    (xdc_Char)0x20,  /* [4112] */
    (xdc_Char)0x49,  /* [4113] */
    (xdc_Char)0x6e,  /* [4114] */
    (xdc_Char)0x76,  /* [4115] */
    (xdc_Char)0x61,  /* [4116] */
    (xdc_Char)0x6c,  /* [4117] */
    (xdc_Char)0x69,  /* [4118] */
    (xdc_Char)0x64,  /* [4119] */
    (xdc_Char)0x20,  /* [4120] */
    (xdc_Char)0x66,  /* [4121] */
    (xdc_Char)0x72,  /* [4122] */
    (xdc_Char)0x65,  /* [4123] */
    (xdc_Char)0x65,  /* [4124] */
    (xdc_Char)0x0,  /* [4125] */
    (xdc_Char)0x41,  /* [4126] */
    (xdc_Char)0x5f,  /* [4127] */
    (xdc_Char)0x7a,  /* [4128] */
    (xdc_Char)0x65,  /* [4129] */
    (xdc_Char)0x72,  /* [4130] */
    (xdc_Char)0x6f,  /* [4131] */
    (xdc_Char)0x42,  /* [4132] */
    (xdc_Char)0x6c,  /* [4133] */
    (xdc_Char)0x6f,  /* [4134] */
    (xdc_Char)0x63,  /* [4135] */
    (xdc_Char)0x6b,  /* [4136] */
    (xdc_Char)0x3a,  /* [4137] */
    (xdc_Char)0x20,  /* [4138] */
    (xdc_Char)0x43,  /* [4139] */
    (xdc_Char)0x61,  /* [4140] */
    (xdc_Char)0x6e,  /* [4141] */
    (xdc_Char)0x6e,  /* [4142] */
    (xdc_Char)0x6f,  /* [4143] */
    (xdc_Char)0x74,  /* [4144] */
    (xdc_Char)0x20,  /* [4145] */
    (xdc_Char)0x61,  /* [4146] */
    (xdc_Char)0x6c,  /* [4147] */
    (xdc_Char)0x6c,  /* [4148] */
    (xdc_Char)0x6f,  /* [4149] */
    (xdc_Char)0x63,  /* [4150] */
    (xdc_Char)0x61,  /* [4151] */
    (xdc_Char)0x74,  /* [4152] */
    (xdc_Char)0x65,  /* [4153] */
    (xdc_Char)0x20,  /* [4154] */
    (xdc_Char)0x73,  /* [4155] */
    (xdc_Char)0x69,  /* [4156] */
    (xdc_Char)0x7a,  /* [4157] */
    (xdc_Char)0x65,  /* [4158] */
    (xdc_Char)0x20,  /* [4159] */
    (xdc_Char)0x30,  /* [4160] */
    (xdc_Char)0x0,  /* [4161] */
    (xdc_Char)0x41,  /* [4162] */
    (xdc_Char)0x5f,  /* [4163] */
    (xdc_Char)0x68,  /* [4164] */
    (xdc_Char)0x65,  /* [4165] */
    (xdc_Char)0x61,  /* [4166] */
    (xdc_Char)0x70,  /* [4167] */
    (xdc_Char)0x53,  /* [4168] */
    (xdc_Char)0x69,  /* [4169] */
    (xdc_Char)0x7a,  /* [4170] */
    (xdc_Char)0x65,  /* [4171] */
    (xdc_Char)0x3a,  /* [4172] */
    (xdc_Char)0x20,  /* [4173] */
    (xdc_Char)0x52,  /* [4174] */
    (xdc_Char)0x65,  /* [4175] */
    (xdc_Char)0x71,  /* [4176] */
    (xdc_Char)0x75,  /* [4177] */
    (xdc_Char)0x65,  /* [4178] */
    (xdc_Char)0x73,  /* [4179] */
    (xdc_Char)0x74,  /* [4180] */
    (xdc_Char)0x65,  /* [4181] */
    (xdc_Char)0x64,  /* [4182] */
    (xdc_Char)0x20,  /* [4183] */
    (xdc_Char)0x68,  /* [4184] */
    (xdc_Char)0x65,  /* [4185] */
    (xdc_Char)0x61,  /* [4186] */
    (xdc_Char)0x70,  /* [4187] */
    (xdc_Char)0x20,  /* [4188] */
    (xdc_Char)0x73,  /* [4189] */
    (xdc_Char)0x69,  /* [4190] */
    (xdc_Char)0x7a,  /* [4191] */
    (xdc_Char)0x65,  /* [4192] */
    (xdc_Char)0x20,  /* [4193] */
    (xdc_Char)0x69,  /* [4194] */
    (xdc_Char)0x73,  /* [4195] */
    (xdc_Char)0x20,  /* [4196] */
    (xdc_Char)0x74,  /* [4197] */
    (xdc_Char)0x6f,  /* [4198] */
    (xdc_Char)0x6f,  /* [4199] */
    (xdc_Char)0x20,  /* [4200] */
    (xdc_Char)0x73,  /* [4201] */
    (xdc_Char)0x6d,  /* [4202] */
    (xdc_Char)0x61,  /* [4203] */
    (xdc_Char)0x6c,  /* [4204] */
    (xdc_Char)0x6c,  /* [4205] */
    (xdc_Char)0x0,  /* [4206] */
    (xdc_Char)0x41,  /* [4207] */
    (xdc_Char)0x5f,  /* [4208] */
    (xdc_Char)0x61,  /* [4209] */
    (xdc_Char)0x6c,  /* [4210] */
    (xdc_Char)0x69,  /* [4211] */
    (xdc_Char)0x67,  /* [4212] */
    (xdc_Char)0x6e,  /* [4213] */
    (xdc_Char)0x3a,  /* [4214] */
    (xdc_Char)0x20,  /* [4215] */
    (xdc_Char)0x52,  /* [4216] */
    (xdc_Char)0x65,  /* [4217] */
    (xdc_Char)0x71,  /* [4218] */
    (xdc_Char)0x75,  /* [4219] */
    (xdc_Char)0x65,  /* [4220] */
    (xdc_Char)0x73,  /* [4221] */
    (xdc_Char)0x74,  /* [4222] */
    (xdc_Char)0x65,  /* [4223] */
    (xdc_Char)0x64,  /* [4224] */
    (xdc_Char)0x20,  /* [4225] */
    (xdc_Char)0x61,  /* [4226] */
    (xdc_Char)0x6c,  /* [4227] */
    (xdc_Char)0x69,  /* [4228] */
    (xdc_Char)0x67,  /* [4229] */
    (xdc_Char)0x6e,  /* [4230] */
    (xdc_Char)0x20,  /* [4231] */
    (xdc_Char)0x69,  /* [4232] */
    (xdc_Char)0x73,  /* [4233] */
    (xdc_Char)0x20,  /* [4234] */
    (xdc_Char)0x6e,  /* [4235] */
    (xdc_Char)0x6f,  /* [4236] */
    (xdc_Char)0x74,  /* [4237] */
    (xdc_Char)0x20,  /* [4238] */
    (xdc_Char)0x61,  /* [4239] */
    (xdc_Char)0x20,  /* [4240] */
    (xdc_Char)0x70,  /* [4241] */
    (xdc_Char)0x6f,  /* [4242] */
    (xdc_Char)0x77,  /* [4243] */
    (xdc_Char)0x65,  /* [4244] */
    (xdc_Char)0x72,  /* [4245] */
    (xdc_Char)0x20,  /* [4246] */
    (xdc_Char)0x6f,  /* [4247] */
    (xdc_Char)0x66,  /* [4248] */
    (xdc_Char)0x20,  /* [4249] */
    (xdc_Char)0x32,  /* [4250] */
    (xdc_Char)0x0,  /* [4251] */
    (xdc_Char)0x49,  /* [4252] */
    (xdc_Char)0x6e,  /* [4253] */
    (xdc_Char)0x76,  /* [4254] */
    (xdc_Char)0x61,  /* [4255] */
    (xdc_Char)0x6c,  /* [4256] */
    (xdc_Char)0x69,  /* [4257] */
    (xdc_Char)0x64,  /* [4258] */
    (xdc_Char)0x20,  /* [4259] */
    (xdc_Char)0x62,  /* [4260] */
    (xdc_Char)0x6c,  /* [4261] */
    (xdc_Char)0x6f,  /* [4262] */
    (xdc_Char)0x63,  /* [4263] */
    (xdc_Char)0x6b,  /* [4264] */
    (xdc_Char)0x20,  /* [4265] */
    (xdc_Char)0x61,  /* [4266] */
    (xdc_Char)0x64,  /* [4267] */
    (xdc_Char)0x64,  /* [4268] */
    (xdc_Char)0x72,  /* [4269] */
    (xdc_Char)0x65,  /* [4270] */
    (xdc_Char)0x73,  /* [4271] */
    (xdc_Char)0x73,  /* [4272] */
    (xdc_Char)0x20,  /* [4273] */
    (xdc_Char)0x6f,  /* [4274] */
    (xdc_Char)0x6e,  /* [4275] */
    (xdc_Char)0x20,  /* [4276] */
    (xdc_Char)0x74,  /* [4277] */
    (xdc_Char)0x68,  /* [4278] */
    (xdc_Char)0x65,  /* [4279] */
    (xdc_Char)0x20,  /* [4280] */
    (xdc_Char)0x66,  /* [4281] */
    (xdc_Char)0x72,  /* [4282] */
    (xdc_Char)0x65,  /* [4283] */
    (xdc_Char)0x65,  /* [4284] */
    (xdc_Char)0x2e,  /* [4285] */
    (xdc_Char)0x20,  /* [4286] */
    (xdc_Char)0x46,  /* [4287] */
    (xdc_Char)0x61,  /* [4288] */
    (xdc_Char)0x69,  /* [4289] */
    (xdc_Char)0x6c,  /* [4290] */
    (xdc_Char)0x65,  /* [4291] */
    (xdc_Char)0x64,  /* [4292] */
    (xdc_Char)0x20,  /* [4293] */
    (xdc_Char)0x74,  /* [4294] */
    (xdc_Char)0x6f,  /* [4295] */
    (xdc_Char)0x20,  /* [4296] */
    (xdc_Char)0x66,  /* [4297] */
    (xdc_Char)0x72,  /* [4298] */
    (xdc_Char)0x65,  /* [4299] */
    (xdc_Char)0x65,  /* [4300] */
    (xdc_Char)0x20,  /* [4301] */
    (xdc_Char)0x62,  /* [4302] */
    (xdc_Char)0x6c,  /* [4303] */
    (xdc_Char)0x6f,  /* [4304] */
    (xdc_Char)0x63,  /* [4305] */
    (xdc_Char)0x6b,  /* [4306] */
    (xdc_Char)0x20,  /* [4307] */
    (xdc_Char)0x62,  /* [4308] */
    (xdc_Char)0x61,  /* [4309] */
    (xdc_Char)0x63,  /* [4310] */
    (xdc_Char)0x6b,  /* [4311] */
    (xdc_Char)0x20,  /* [4312] */
    (xdc_Char)0x74,  /* [4313] */
    (xdc_Char)0x6f,  /* [4314] */
    (xdc_Char)0x20,  /* [4315] */
    (xdc_Char)0x68,  /* [4316] */
    (xdc_Char)0x65,  /* [4317] */
    (xdc_Char)0x61,  /* [4318] */
    (xdc_Char)0x70,  /* [4319] */
    (xdc_Char)0x2e,  /* [4320] */
    (xdc_Char)0x0,  /* [4321] */
    (xdc_Char)0x41,  /* [4322] */
    (xdc_Char)0x5f,  /* [4323] */
    (xdc_Char)0x64,  /* [4324] */
    (xdc_Char)0x6f,  /* [4325] */
    (xdc_Char)0x75,  /* [4326] */
    (xdc_Char)0x62,  /* [4327] */
    (xdc_Char)0x6c,  /* [4328] */
    (xdc_Char)0x65,  /* [4329] */
    (xdc_Char)0x46,  /* [4330] */
    (xdc_Char)0x72,  /* [4331] */
    (xdc_Char)0x65,  /* [4332] */
    (xdc_Char)0x65,  /* [4333] */
    (xdc_Char)0x3a,  /* [4334] */
    (xdc_Char)0x20,  /* [4335] */
    (xdc_Char)0x48,  /* [4336] */
    (xdc_Char)0x65,  /* [4337] */
    (xdc_Char)0x61,  /* [4338] */
    (xdc_Char)0x70,  /* [4339] */
    (xdc_Char)0x20,  /* [4340] */
    (xdc_Char)0x61,  /* [4341] */
    (xdc_Char)0x6c,  /* [4342] */
    (xdc_Char)0x72,  /* [4343] */
    (xdc_Char)0x65,  /* [4344] */
    (xdc_Char)0x61,  /* [4345] */
    (xdc_Char)0x64,  /* [4346] */
    (xdc_Char)0x79,  /* [4347] */
    (xdc_Char)0x20,  /* [4348] */
    (xdc_Char)0x66,  /* [4349] */
    (xdc_Char)0x72,  /* [4350] */
    (xdc_Char)0x65,  /* [4351] */
    (xdc_Char)0x65,  /* [4352] */
    (xdc_Char)0x0,  /* [4353] */
    (xdc_Char)0x41,  /* [4354] */
    (xdc_Char)0x5f,  /* [4355] */
    (xdc_Char)0x62,  /* [4356] */
    (xdc_Char)0x75,  /* [4357] */
    (xdc_Char)0x66,  /* [4358] */
    (xdc_Char)0x4f,  /* [4359] */
    (xdc_Char)0x76,  /* [4360] */
    (xdc_Char)0x65,  /* [4361] */
    (xdc_Char)0x72,  /* [4362] */
    (xdc_Char)0x66,  /* [4363] */
    (xdc_Char)0x6c,  /* [4364] */
    (xdc_Char)0x6f,  /* [4365] */
    (xdc_Char)0x77,  /* [4366] */
    (xdc_Char)0x3a,  /* [4367] */
    (xdc_Char)0x20,  /* [4368] */
    (xdc_Char)0x42,  /* [4369] */
    (xdc_Char)0x75,  /* [4370] */
    (xdc_Char)0x66,  /* [4371] */
    (xdc_Char)0x66,  /* [4372] */
    (xdc_Char)0x65,  /* [4373] */
    (xdc_Char)0x72,  /* [4374] */
    (xdc_Char)0x20,  /* [4375] */
    (xdc_Char)0x6f,  /* [4376] */
    (xdc_Char)0x76,  /* [4377] */
    (xdc_Char)0x65,  /* [4378] */
    (xdc_Char)0x72,  /* [4379] */
    (xdc_Char)0x66,  /* [4380] */
    (xdc_Char)0x6c,  /* [4381] */
    (xdc_Char)0x6f,  /* [4382] */
    (xdc_Char)0x77,  /* [4383] */
    (xdc_Char)0x0,  /* [4384] */
    (xdc_Char)0x41,  /* [4385] */
    (xdc_Char)0x5f,  /* [4386] */
    (xdc_Char)0x6e,  /* [4387] */
    (xdc_Char)0x6f,  /* [4388] */
    (xdc_Char)0x74,  /* [4389] */
    (xdc_Char)0x45,  /* [4390] */
    (xdc_Char)0x6d,  /* [4391] */
    (xdc_Char)0x70,  /* [4392] */
    (xdc_Char)0x74,  /* [4393] */
    (xdc_Char)0x79,  /* [4394] */
    (xdc_Char)0x3a,  /* [4395] */
    (xdc_Char)0x20,  /* [4396] */
    (xdc_Char)0x48,  /* [4397] */
    (xdc_Char)0x65,  /* [4398] */
    (xdc_Char)0x61,  /* [4399] */
    (xdc_Char)0x70,  /* [4400] */
    (xdc_Char)0x20,  /* [4401] */
    (xdc_Char)0x6e,  /* [4402] */
    (xdc_Char)0x6f,  /* [4403] */
    (xdc_Char)0x74,  /* [4404] */
    (xdc_Char)0x20,  /* [4405] */
    (xdc_Char)0x65,  /* [4406] */
    (xdc_Char)0x6d,  /* [4407] */
    (xdc_Char)0x70,  /* [4408] */
    (xdc_Char)0x74,  /* [4409] */
    (xdc_Char)0x79,  /* [4410] */
    (xdc_Char)0x0,  /* [4411] */
    (xdc_Char)0x41,  /* [4412] */
    (xdc_Char)0x5f,  /* [4413] */
    (xdc_Char)0x6e,  /* [4414] */
    (xdc_Char)0x75,  /* [4415] */
    (xdc_Char)0x6c,  /* [4416] */
    (xdc_Char)0x6c,  /* [4417] */
    (xdc_Char)0x4f,  /* [4418] */
    (xdc_Char)0x62,  /* [4419] */
    (xdc_Char)0x6a,  /* [4420] */
    (xdc_Char)0x65,  /* [4421] */
    (xdc_Char)0x63,  /* [4422] */
    (xdc_Char)0x74,  /* [4423] */
    (xdc_Char)0x3a,  /* [4424] */
    (xdc_Char)0x20,  /* [4425] */
    (xdc_Char)0x48,  /* [4426] */
    (xdc_Char)0x65,  /* [4427] */
    (xdc_Char)0x61,  /* [4428] */
    (xdc_Char)0x70,  /* [4429] */
    (xdc_Char)0x54,  /* [4430] */
    (xdc_Char)0x72,  /* [4431] */
    (xdc_Char)0x61,  /* [4432] */
    (xdc_Char)0x63,  /* [4433] */
    (xdc_Char)0x6b,  /* [4434] */
    (xdc_Char)0x5f,  /* [4435] */
    (xdc_Char)0x70,  /* [4436] */
    (xdc_Char)0x72,  /* [4437] */
    (xdc_Char)0x69,  /* [4438] */
    (xdc_Char)0x6e,  /* [4439] */
    (xdc_Char)0x74,  /* [4440] */
    (xdc_Char)0x48,  /* [4441] */
    (xdc_Char)0x65,  /* [4442] */
    (xdc_Char)0x61,  /* [4443] */
    (xdc_Char)0x70,  /* [4444] */
    (xdc_Char)0x20,  /* [4445] */
    (xdc_Char)0x63,  /* [4446] */
    (xdc_Char)0x61,  /* [4447] */
    (xdc_Char)0x6c,  /* [4448] */
    (xdc_Char)0x6c,  /* [4449] */
    (xdc_Char)0x65,  /* [4450] */
    (xdc_Char)0x64,  /* [4451] */
    (xdc_Char)0x20,  /* [4452] */
    (xdc_Char)0x77,  /* [4453] */
    (xdc_Char)0x69,  /* [4454] */
    (xdc_Char)0x74,  /* [4455] */
    (xdc_Char)0x68,  /* [4456] */
    (xdc_Char)0x20,  /* [4457] */
    (xdc_Char)0x6e,  /* [4458] */
    (xdc_Char)0x75,  /* [4459] */
    (xdc_Char)0x6c,  /* [4460] */
    (xdc_Char)0x6c,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x6f,  /* [4463] */
    (xdc_Char)0x62,  /* [4464] */
    (xdc_Char)0x6a,  /* [4465] */
    (xdc_Char)0x0,  /* [4466] */
    (xdc_Char)0x41,  /* [4467] */
    (xdc_Char)0x5f,  /* [4468] */
    (xdc_Char)0x6e,  /* [4469] */
    (xdc_Char)0x6f,  /* [4470] */
    (xdc_Char)0x74,  /* [4471] */
    (xdc_Char)0x53,  /* [4472] */
    (xdc_Char)0x75,  /* [4473] */
    (xdc_Char)0x70,  /* [4474] */
    (xdc_Char)0x70,  /* [4475] */
    (xdc_Char)0x6f,  /* [4476] */
    (xdc_Char)0x72,  /* [4477] */
    (xdc_Char)0x74,  /* [4478] */
    (xdc_Char)0x65,  /* [4479] */
    (xdc_Char)0x64,  /* [4480] */
    (xdc_Char)0x3a,  /* [4481] */
    (xdc_Char)0x20,  /* [4482] */
    (xdc_Char)0x5b,  /* [4483] */
    (xdc_Char)0x65,  /* [4484] */
    (xdc_Char)0x6e,  /* [4485] */
    (xdc_Char)0x61,  /* [4486] */
    (xdc_Char)0x62,  /* [4487] */
    (xdc_Char)0x6c,  /* [4488] */
    (xdc_Char)0x65,  /* [4489] */
    (xdc_Char)0x2f,  /* [4490] */
    (xdc_Char)0x64,  /* [4491] */
    (xdc_Char)0x69,  /* [4492] */
    (xdc_Char)0x73,  /* [4493] */
    (xdc_Char)0x61,  /* [4494] */
    (xdc_Char)0x62,  /* [4495] */
    (xdc_Char)0x6c,  /* [4496] */
    (xdc_Char)0x65,  /* [4497] */
    (xdc_Char)0x5d,  /* [4498] */
    (xdc_Char)0x45,  /* [4499] */
    (xdc_Char)0x76,  /* [4500] */
    (xdc_Char)0x65,  /* [4501] */
    (xdc_Char)0x6e,  /* [4502] */
    (xdc_Char)0x74,  /* [4503] */
    (xdc_Char)0x20,  /* [4504] */
    (xdc_Char)0x6e,  /* [4505] */
    (xdc_Char)0x6f,  /* [4506] */
    (xdc_Char)0x74,  /* [4507] */
    (xdc_Char)0x20,  /* [4508] */
    (xdc_Char)0x73,  /* [4509] */
    (xdc_Char)0x75,  /* [4510] */
    (xdc_Char)0x70,  /* [4511] */
    (xdc_Char)0x70,  /* [4512] */
    (xdc_Char)0x6f,  /* [4513] */
    (xdc_Char)0x72,  /* [4514] */
    (xdc_Char)0x74,  /* [4515] */
    (xdc_Char)0x65,  /* [4516] */
    (xdc_Char)0x64,  /* [4517] */
    (xdc_Char)0x20,  /* [4518] */
    (xdc_Char)0x62,  /* [4519] */
    (xdc_Char)0x79,  /* [4520] */
    (xdc_Char)0x20,  /* [4521] */
    (xdc_Char)0x4e,  /* [4522] */
    (xdc_Char)0x6f,  /* [4523] */
    (xdc_Char)0x74,  /* [4524] */
    (xdc_Char)0x69,  /* [4525] */
    (xdc_Char)0x66,  /* [4526] */
    (xdc_Char)0x79,  /* [4527] */
    (xdc_Char)0x44,  /* [4528] */
    (xdc_Char)0x72,  /* [4529] */
    (xdc_Char)0x69,  /* [4530] */
    (xdc_Char)0x76,  /* [4531] */
    (xdc_Char)0x65,  /* [4532] */
    (xdc_Char)0x72,  /* [4533] */
    (xdc_Char)0x43,  /* [4534] */
    (xdc_Char)0x69,  /* [4535] */
    (xdc_Char)0x72,  /* [4536] */
    (xdc_Char)0x63,  /* [4537] */
    (xdc_Char)0x0,  /* [4538] */
    (xdc_Char)0x61,  /* [4539] */
    (xdc_Char)0x73,  /* [4540] */
    (xdc_Char)0x73,  /* [4541] */
    (xdc_Char)0x65,  /* [4542] */
    (xdc_Char)0x72,  /* [4543] */
    (xdc_Char)0x74,  /* [4544] */
    (xdc_Char)0x69,  /* [4545] */
    (xdc_Char)0x6f,  /* [4546] */
    (xdc_Char)0x6e,  /* [4547] */
    (xdc_Char)0x20,  /* [4548] */
    (xdc_Char)0x66,  /* [4549] */
    (xdc_Char)0x61,  /* [4550] */
    (xdc_Char)0x69,  /* [4551] */
    (xdc_Char)0x6c,  /* [4552] */
    (xdc_Char)0x75,  /* [4553] */
    (xdc_Char)0x72,  /* [4554] */
    (xdc_Char)0x65,  /* [4555] */
    (xdc_Char)0x25,  /* [4556] */
    (xdc_Char)0x73,  /* [4557] */
    (xdc_Char)0x25,  /* [4558] */
    (xdc_Char)0x73,  /* [4559] */
    (xdc_Char)0x0,  /* [4560] */
    (xdc_Char)0x25,  /* [4561] */
    (xdc_Char)0x24,  /* [4562] */
    (xdc_Char)0x53,  /* [4563] */
    (xdc_Char)0x0,  /* [4564] */
    (xdc_Char)0x6f,  /* [4565] */
    (xdc_Char)0x75,  /* [4566] */
    (xdc_Char)0x74,  /* [4567] */
    (xdc_Char)0x20,  /* [4568] */
    (xdc_Char)0x6f,  /* [4569] */
    (xdc_Char)0x66,  /* [4570] */
    (xdc_Char)0x20,  /* [4571] */
    (xdc_Char)0x6d,  /* [4572] */
    (xdc_Char)0x65,  /* [4573] */
    (xdc_Char)0x6d,  /* [4574] */
    (xdc_Char)0x6f,  /* [4575] */
    (xdc_Char)0x72,  /* [4576] */
    (xdc_Char)0x79,  /* [4577] */
    (xdc_Char)0x3a,  /* [4578] */
    (xdc_Char)0x20,  /* [4579] */
    (xdc_Char)0x68,  /* [4580] */
    (xdc_Char)0x65,  /* [4581] */
    (xdc_Char)0x61,  /* [4582] */
    (xdc_Char)0x70,  /* [4583] */
    (xdc_Char)0x3d,  /* [4584] */
    (xdc_Char)0x30,  /* [4585] */
    (xdc_Char)0x78,  /* [4586] */
    (xdc_Char)0x25,  /* [4587] */
    (xdc_Char)0x78,  /* [4588] */
    (xdc_Char)0x2c,  /* [4589] */
    (xdc_Char)0x20,  /* [4590] */
    (xdc_Char)0x73,  /* [4591] */
    (xdc_Char)0x69,  /* [4592] */
    (xdc_Char)0x7a,  /* [4593] */
    (xdc_Char)0x65,  /* [4594] */
    (xdc_Char)0x3d,  /* [4595] */
    (xdc_Char)0x25,  /* [4596] */
    (xdc_Char)0x75,  /* [4597] */
    (xdc_Char)0x0,  /* [4598] */
    (xdc_Char)0x25,  /* [4599] */
    (xdc_Char)0x73,  /* [4600] */
    (xdc_Char)0x20,  /* [4601] */
    (xdc_Char)0x30,  /* [4602] */
    (xdc_Char)0x78,  /* [4603] */
    (xdc_Char)0x25,  /* [4604] */
    (xdc_Char)0x78,  /* [4605] */
    (xdc_Char)0x0,  /* [4606] */
    (xdc_Char)0x45,  /* [4607] */
    (xdc_Char)0x5f,  /* [4608] */
    (xdc_Char)0x62,  /* [4609] */
    (xdc_Char)0x61,  /* [4610] */
    (xdc_Char)0x64,  /* [4611] */
    (xdc_Char)0x4c,  /* [4612] */
    (xdc_Char)0x65,  /* [4613] */
    (xdc_Char)0x76,  /* [4614] */
    (xdc_Char)0x65,  /* [4615] */
    (xdc_Char)0x6c,  /* [4616] */
    (xdc_Char)0x3a,  /* [4617] */
    (xdc_Char)0x20,  /* [4618] */
    (xdc_Char)0x42,  /* [4619] */
    (xdc_Char)0x61,  /* [4620] */
    (xdc_Char)0x64,  /* [4621] */
    (xdc_Char)0x20,  /* [4622] */
    (xdc_Char)0x66,  /* [4623] */
    (xdc_Char)0x69,  /* [4624] */
    (xdc_Char)0x6c,  /* [4625] */
    (xdc_Char)0x74,  /* [4626] */
    (xdc_Char)0x65,  /* [4627] */
    (xdc_Char)0x72,  /* [4628] */
    (xdc_Char)0x20,  /* [4629] */
    (xdc_Char)0x6c,  /* [4630] */
    (xdc_Char)0x65,  /* [4631] */
    (xdc_Char)0x76,  /* [4632] */
    (xdc_Char)0x65,  /* [4633] */
    (xdc_Char)0x6c,  /* [4634] */
    (xdc_Char)0x20,  /* [4635] */
    (xdc_Char)0x76,  /* [4636] */
    (xdc_Char)0x61,  /* [4637] */
    (xdc_Char)0x6c,  /* [4638] */
    (xdc_Char)0x75,  /* [4639] */
    (xdc_Char)0x65,  /* [4640] */
    (xdc_Char)0x3a,  /* [4641] */
    (xdc_Char)0x20,  /* [4642] */
    (xdc_Char)0x25,  /* [4643] */
    (xdc_Char)0x64,  /* [4644] */
    (xdc_Char)0x0,  /* [4645] */
    (xdc_Char)0x66,  /* [4646] */
    (xdc_Char)0x72,  /* [4647] */
    (xdc_Char)0x65,  /* [4648] */
    (xdc_Char)0x65,  /* [4649] */
    (xdc_Char)0x28,  /* [4650] */
    (xdc_Char)0x29,  /* [4651] */
    (xdc_Char)0x20,  /* [4652] */
    (xdc_Char)0x69,  /* [4653] */
    (xdc_Char)0x6e,  /* [4654] */
    (xdc_Char)0x76,  /* [4655] */
    (xdc_Char)0x61,  /* [4656] */
    (xdc_Char)0x6c,  /* [4657] */
    (xdc_Char)0x69,  /* [4658] */
    (xdc_Char)0x64,  /* [4659] */
    (xdc_Char)0x20,  /* [4660] */
    (xdc_Char)0x69,  /* [4661] */
    (xdc_Char)0x6e,  /* [4662] */
    (xdc_Char)0x20,  /* [4663] */
    (xdc_Char)0x67,  /* [4664] */
    (xdc_Char)0x72,  /* [4665] */
    (xdc_Char)0x6f,  /* [4666] */
    (xdc_Char)0x77,  /* [4667] */
    (xdc_Char)0x74,  /* [4668] */
    (xdc_Char)0x68,  /* [4669] */
    (xdc_Char)0x2d,  /* [4670] */
    (xdc_Char)0x6f,  /* [4671] */
    (xdc_Char)0x6e,  /* [4672] */
    (xdc_Char)0x6c,  /* [4673] */
    (xdc_Char)0x79,  /* [4674] */
    (xdc_Char)0x20,  /* [4675] */
    (xdc_Char)0x48,  /* [4676] */
    (xdc_Char)0x65,  /* [4677] */
    (xdc_Char)0x61,  /* [4678] */
    (xdc_Char)0x70,  /* [4679] */
    (xdc_Char)0x4d,  /* [4680] */
    (xdc_Char)0x69,  /* [4681] */
    (xdc_Char)0x6e,  /* [4682] */
    (xdc_Char)0x0,  /* [4683] */
    (xdc_Char)0x54,  /* [4684] */
    (xdc_Char)0x68,  /* [4685] */
    (xdc_Char)0x65,  /* [4686] */
    (xdc_Char)0x20,  /* [4687] */
    (xdc_Char)0x52,  /* [4688] */
    (xdc_Char)0x54,  /* [4689] */
    (xdc_Char)0x53,  /* [4690] */
    (xdc_Char)0x20,  /* [4691] */
    (xdc_Char)0x68,  /* [4692] */
    (xdc_Char)0x65,  /* [4693] */
    (xdc_Char)0x61,  /* [4694] */
    (xdc_Char)0x70,  /* [4695] */
    (xdc_Char)0x20,  /* [4696] */
    (xdc_Char)0x69,  /* [4697] */
    (xdc_Char)0x73,  /* [4698] */
    (xdc_Char)0x20,  /* [4699] */
    (xdc_Char)0x75,  /* [4700] */
    (xdc_Char)0x73,  /* [4701] */
    (xdc_Char)0x65,  /* [4702] */
    (xdc_Char)0x64,  /* [4703] */
    (xdc_Char)0x20,  /* [4704] */
    (xdc_Char)0x75,  /* [4705] */
    (xdc_Char)0x70,  /* [4706] */
    (xdc_Char)0x2e,  /* [4707] */
    (xdc_Char)0x20,  /* [4708] */
    (xdc_Char)0x45,  /* [4709] */
    (xdc_Char)0x78,  /* [4710] */
    (xdc_Char)0x61,  /* [4711] */
    (xdc_Char)0x6d,  /* [4712] */
    (xdc_Char)0x69,  /* [4713] */
    (xdc_Char)0x6e,  /* [4714] */
    (xdc_Char)0x65,  /* [4715] */
    (xdc_Char)0x20,  /* [4716] */
    (xdc_Char)0x50,  /* [4717] */
    (xdc_Char)0x72,  /* [4718] */
    (xdc_Char)0x6f,  /* [4719] */
    (xdc_Char)0x67,  /* [4720] */
    (xdc_Char)0x72,  /* [4721] */
    (xdc_Char)0x61,  /* [4722] */
    (xdc_Char)0x6d,  /* [4723] */
    (xdc_Char)0x2e,  /* [4724] */
    (xdc_Char)0x68,  /* [4725] */
    (xdc_Char)0x65,  /* [4726] */
    (xdc_Char)0x61,  /* [4727] */
    (xdc_Char)0x70,  /* [4728] */
    (xdc_Char)0x2e,  /* [4729] */
    (xdc_Char)0x0,  /* [4730] */
    (xdc_Char)0x45,  /* [4731] */
    (xdc_Char)0x5f,  /* [4732] */
    (xdc_Char)0x62,  /* [4733] */
    (xdc_Char)0x61,  /* [4734] */
    (xdc_Char)0x64,  /* [4735] */
    (xdc_Char)0x43,  /* [4736] */
    (xdc_Char)0x6f,  /* [4737] */
    (xdc_Char)0x6d,  /* [4738] */
    (xdc_Char)0x6d,  /* [4739] */
    (xdc_Char)0x61,  /* [4740] */
    (xdc_Char)0x6e,  /* [4741] */
    (xdc_Char)0x64,  /* [4742] */
    (xdc_Char)0x3a,  /* [4743] */
    (xdc_Char)0x20,  /* [4744] */
    (xdc_Char)0x52,  /* [4745] */
    (xdc_Char)0x65,  /* [4746] */
    (xdc_Char)0x63,  /* [4747] */
    (xdc_Char)0x65,  /* [4748] */
    (xdc_Char)0x69,  /* [4749] */
    (xdc_Char)0x76,  /* [4750] */
    (xdc_Char)0x65,  /* [4751] */
    (xdc_Char)0x64,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x69,  /* [4754] */
    (xdc_Char)0x6e,  /* [4755] */
    (xdc_Char)0x76,  /* [4756] */
    (xdc_Char)0x61,  /* [4757] */
    (xdc_Char)0x6c,  /* [4758] */
    (xdc_Char)0x69,  /* [4759] */
    (xdc_Char)0x64,  /* [4760] */
    (xdc_Char)0x20,  /* [4761] */
    (xdc_Char)0x63,  /* [4762] */
    (xdc_Char)0x6f,  /* [4763] */
    (xdc_Char)0x6d,  /* [4764] */
    (xdc_Char)0x6d,  /* [4765] */
    (xdc_Char)0x61,  /* [4766] */
    (xdc_Char)0x6e,  /* [4767] */
    (xdc_Char)0x64,  /* [4768] */
    (xdc_Char)0x2c,  /* [4769] */
    (xdc_Char)0x20,  /* [4770] */
    (xdc_Char)0x69,  /* [4771] */
    (xdc_Char)0x64,  /* [4772] */
    (xdc_Char)0x3a,  /* [4773] */
    (xdc_Char)0x20,  /* [4774] */
    (xdc_Char)0x25,  /* [4775] */
    (xdc_Char)0x64,  /* [4776] */
    (xdc_Char)0x2e,  /* [4777] */
    (xdc_Char)0x0,  /* [4778] */
    (xdc_Char)0x45,  /* [4779] */
    (xdc_Char)0x5f,  /* [4780] */
    (xdc_Char)0x75,  /* [4781] */
    (xdc_Char)0x6e,  /* [4782] */
    (xdc_Char)0x70,  /* [4783] */
    (xdc_Char)0x6c,  /* [4784] */
    (xdc_Char)0x75,  /* [4785] */
    (xdc_Char)0x67,  /* [4786] */
    (xdc_Char)0x67,  /* [4787] */
    (xdc_Char)0x65,  /* [4788] */
    (xdc_Char)0x64,  /* [4789] */
    (xdc_Char)0x45,  /* [4790] */
    (xdc_Char)0x76,  /* [4791] */
    (xdc_Char)0x65,  /* [4792] */
    (xdc_Char)0x6e,  /* [4793] */
    (xdc_Char)0x74,  /* [4794] */
    (xdc_Char)0x3a,  /* [4795] */
    (xdc_Char)0x20,  /* [4796] */
    (xdc_Char)0x45,  /* [4797] */
    (xdc_Char)0x76,  /* [4798] */
    (xdc_Char)0x65,  /* [4799] */
    (xdc_Char)0x6e,  /* [4800] */
    (xdc_Char)0x74,  /* [4801] */
    (xdc_Char)0x23,  /* [4802] */
    (xdc_Char)0x20,  /* [4803] */
    (xdc_Char)0x25,  /* [4804] */
    (xdc_Char)0x64,  /* [4805] */
    (xdc_Char)0x20,  /* [4806] */
    (xdc_Char)0x69,  /* [4807] */
    (xdc_Char)0x73,  /* [4808] */
    (xdc_Char)0x20,  /* [4809] */
    (xdc_Char)0x75,  /* [4810] */
    (xdc_Char)0x6e,  /* [4811] */
    (xdc_Char)0x70,  /* [4812] */
    (xdc_Char)0x6c,  /* [4813] */
    (xdc_Char)0x75,  /* [4814] */
    (xdc_Char)0x67,  /* [4815] */
    (xdc_Char)0x67,  /* [4816] */
    (xdc_Char)0x65,  /* [4817] */
    (xdc_Char)0x64,  /* [4818] */
    (xdc_Char)0x0,  /* [4819] */
    (xdc_Char)0x45,  /* [4820] */
    (xdc_Char)0x5f,  /* [4821] */
    (xdc_Char)0x65,  /* [4822] */
    (xdc_Char)0x78,  /* [4823] */
    (xdc_Char)0x63,  /* [4824] */
    (xdc_Char)0x65,  /* [4825] */
    (xdc_Char)0x70,  /* [4826] */
    (xdc_Char)0x74,  /* [4827] */
    (xdc_Char)0x69,  /* [4828] */
    (xdc_Char)0x6f,  /* [4829] */
    (xdc_Char)0x6e,  /* [4830] */
    (xdc_Char)0x4d,  /* [4831] */
    (xdc_Char)0x69,  /* [4832] */
    (xdc_Char)0x6e,  /* [4833] */
    (xdc_Char)0x3a,  /* [4834] */
    (xdc_Char)0x20,  /* [4835] */
    (xdc_Char)0x70,  /* [4836] */
    (xdc_Char)0x63,  /* [4837] */
    (xdc_Char)0x20,  /* [4838] */
    (xdc_Char)0x3d,  /* [4839] */
    (xdc_Char)0x20,  /* [4840] */
    (xdc_Char)0x30,  /* [4841] */
    (xdc_Char)0x78,  /* [4842] */
    (xdc_Char)0x25,  /* [4843] */
    (xdc_Char)0x30,  /* [4844] */
    (xdc_Char)0x38,  /* [4845] */
    (xdc_Char)0x78,  /* [4846] */
    (xdc_Char)0x2c,  /* [4847] */
    (xdc_Char)0x20,  /* [4848] */
    (xdc_Char)0x73,  /* [4849] */
    (xdc_Char)0x70,  /* [4850] */
    (xdc_Char)0x20,  /* [4851] */
    (xdc_Char)0x3d,  /* [4852] */
    (xdc_Char)0x20,  /* [4853] */
    (xdc_Char)0x30,  /* [4854] */
    (xdc_Char)0x78,  /* [4855] */
    (xdc_Char)0x25,  /* [4856] */
    (xdc_Char)0x30,  /* [4857] */
    (xdc_Char)0x38,  /* [4858] */
    (xdc_Char)0x78,  /* [4859] */
    (xdc_Char)0x2e,  /* [4860] */
    (xdc_Char)0xa,  /* [4861] */
    (xdc_Char)0x54,  /* [4862] */
    (xdc_Char)0x6f,  /* [4863] */
    (xdc_Char)0x20,  /* [4864] */
    (xdc_Char)0x73,  /* [4865] */
    (xdc_Char)0x65,  /* [4866] */
    (xdc_Char)0x65,  /* [4867] */
    (xdc_Char)0x20,  /* [4868] */
    (xdc_Char)0x6d,  /* [4869] */
    (xdc_Char)0x6f,  /* [4870] */
    (xdc_Char)0x72,  /* [4871] */
    (xdc_Char)0x65,  /* [4872] */
    (xdc_Char)0x20,  /* [4873] */
    (xdc_Char)0x65,  /* [4874] */
    (xdc_Char)0x78,  /* [4875] */
    (xdc_Char)0x63,  /* [4876] */
    (xdc_Char)0x65,  /* [4877] */
    (xdc_Char)0x70,  /* [4878] */
    (xdc_Char)0x74,  /* [4879] */
    (xdc_Char)0x69,  /* [4880] */
    (xdc_Char)0x6f,  /* [4881] */
    (xdc_Char)0x6e,  /* [4882] */
    (xdc_Char)0x20,  /* [4883] */
    (xdc_Char)0x64,  /* [4884] */
    (xdc_Char)0x65,  /* [4885] */
    (xdc_Char)0x74,  /* [4886] */
    (xdc_Char)0x61,  /* [4887] */
    (xdc_Char)0x69,  /* [4888] */
    (xdc_Char)0x6c,  /* [4889] */
    (xdc_Char)0x2c,  /* [4890] */
    (xdc_Char)0x20,  /* [4891] */
    (xdc_Char)0x75,  /* [4892] */
    (xdc_Char)0x73,  /* [4893] */
    (xdc_Char)0x65,  /* [4894] */
    (xdc_Char)0x20,  /* [4895] */
    (xdc_Char)0x52,  /* [4896] */
    (xdc_Char)0x4f,  /* [4897] */
    (xdc_Char)0x56,  /* [4898] */
    (xdc_Char)0x20,  /* [4899] */
    (xdc_Char)0x6f,  /* [4900] */
    (xdc_Char)0x72,  /* [4901] */
    (xdc_Char)0x20,  /* [4902] */
    (xdc_Char)0x73,  /* [4903] */
    (xdc_Char)0x65,  /* [4904] */
    (xdc_Char)0x74,  /* [4905] */
    (xdc_Char)0x20,  /* [4906] */
    (xdc_Char)0x27,  /* [4907] */
    (xdc_Char)0x74,  /* [4908] */
    (xdc_Char)0x69,  /* [4909] */
    (xdc_Char)0x2e,  /* [4910] */
    (xdc_Char)0x73,  /* [4911] */
    (xdc_Char)0x79,  /* [4912] */
    (xdc_Char)0x73,  /* [4913] */
    (xdc_Char)0x62,  /* [4914] */
    (xdc_Char)0x69,  /* [4915] */
    (xdc_Char)0x6f,  /* [4916] */
    (xdc_Char)0x73,  /* [4917] */
    (xdc_Char)0x2e,  /* [4918] */
    (xdc_Char)0x66,  /* [4919] */
    (xdc_Char)0x61,  /* [4920] */
    (xdc_Char)0x6d,  /* [4921] */
    (xdc_Char)0x69,  /* [4922] */
    (xdc_Char)0x6c,  /* [4923] */
    (xdc_Char)0x79,  /* [4924] */
    (xdc_Char)0x2e,  /* [4925] */
    (xdc_Char)0x63,  /* [4926] */
    (xdc_Char)0x36,  /* [4927] */
    (xdc_Char)0x34,  /* [4928] */
    (xdc_Char)0x70,  /* [4929] */
    (xdc_Char)0x2e,  /* [4930] */
    (xdc_Char)0x45,  /* [4931] */
    (xdc_Char)0x78,  /* [4932] */
    (xdc_Char)0x63,  /* [4933] */
    (xdc_Char)0x65,  /* [4934] */
    (xdc_Char)0x70,  /* [4935] */
    (xdc_Char)0x74,  /* [4936] */
    (xdc_Char)0x69,  /* [4937] */
    (xdc_Char)0x6f,  /* [4938] */
    (xdc_Char)0x6e,  /* [4939] */
    (xdc_Char)0x2e,  /* [4940] */
    (xdc_Char)0x65,  /* [4941] */
    (xdc_Char)0x6e,  /* [4942] */
    (xdc_Char)0x61,  /* [4943] */
    (xdc_Char)0x62,  /* [4944] */
    (xdc_Char)0x6c,  /* [4945] */
    (xdc_Char)0x65,  /* [4946] */
    (xdc_Char)0x50,  /* [4947] */
    (xdc_Char)0x72,  /* [4948] */
    (xdc_Char)0x69,  /* [4949] */
    (xdc_Char)0x6e,  /* [4950] */
    (xdc_Char)0x74,  /* [4951] */
    (xdc_Char)0x20,  /* [4952] */
    (xdc_Char)0x3d,  /* [4953] */
    (xdc_Char)0x20,  /* [4954] */
    (xdc_Char)0x74,  /* [4955] */
    (xdc_Char)0x72,  /* [4956] */
    (xdc_Char)0x75,  /* [4957] */
    (xdc_Char)0x65,  /* [4958] */
    (xdc_Char)0x3b,  /* [4959] */
    (xdc_Char)0x27,  /* [4960] */
    (xdc_Char)0x0,  /* [4961] */
    (xdc_Char)0x45,  /* [4962] */
    (xdc_Char)0x5f,  /* [4963] */
    (xdc_Char)0x65,  /* [4964] */
    (xdc_Char)0x78,  /* [4965] */
    (xdc_Char)0x63,  /* [4966] */
    (xdc_Char)0x65,  /* [4967] */
    (xdc_Char)0x70,  /* [4968] */
    (xdc_Char)0x74,  /* [4969] */
    (xdc_Char)0x69,  /* [4970] */
    (xdc_Char)0x6f,  /* [4971] */
    (xdc_Char)0x6e,  /* [4972] */
    (xdc_Char)0x4d,  /* [4973] */
    (xdc_Char)0x61,  /* [4974] */
    (xdc_Char)0x78,  /* [4975] */
    (xdc_Char)0x3a,  /* [4976] */
    (xdc_Char)0x20,  /* [4977] */
    (xdc_Char)0x70,  /* [4978] */
    (xdc_Char)0x63,  /* [4979] */
    (xdc_Char)0x20,  /* [4980] */
    (xdc_Char)0x3d,  /* [4981] */
    (xdc_Char)0x20,  /* [4982] */
    (xdc_Char)0x30,  /* [4983] */
    (xdc_Char)0x78,  /* [4984] */
    (xdc_Char)0x25,  /* [4985] */
    (xdc_Char)0x30,  /* [4986] */
    (xdc_Char)0x38,  /* [4987] */
    (xdc_Char)0x78,  /* [4988] */
    (xdc_Char)0x2c,  /* [4989] */
    (xdc_Char)0x20,  /* [4990] */
    (xdc_Char)0x73,  /* [4991] */
    (xdc_Char)0x70,  /* [4992] */
    (xdc_Char)0x20,  /* [4993] */
    (xdc_Char)0x3d,  /* [4994] */
    (xdc_Char)0x20,  /* [4995] */
    (xdc_Char)0x30,  /* [4996] */
    (xdc_Char)0x78,  /* [4997] */
    (xdc_Char)0x25,  /* [4998] */
    (xdc_Char)0x30,  /* [4999] */
    (xdc_Char)0x38,  /* [5000] */
    (xdc_Char)0x78,  /* [5001] */
    (xdc_Char)0x2e,  /* [5002] */
    (xdc_Char)0x0,  /* [5003] */
    (xdc_Char)0x45,  /* [5004] */
    (xdc_Char)0x5f,  /* [5005] */
    (xdc_Char)0x61,  /* [5006] */
    (xdc_Char)0x6c,  /* [5007] */
    (xdc_Char)0x72,  /* [5008] */
    (xdc_Char)0x65,  /* [5009] */
    (xdc_Char)0x61,  /* [5010] */
    (xdc_Char)0x64,  /* [5011] */
    (xdc_Char)0x79,  /* [5012] */
    (xdc_Char)0x44,  /* [5013] */
    (xdc_Char)0x65,  /* [5014] */
    (xdc_Char)0x66,  /* [5015] */
    (xdc_Char)0x69,  /* [5016] */
    (xdc_Char)0x6e,  /* [5017] */
    (xdc_Char)0x65,  /* [5018] */
    (xdc_Char)0x64,  /* [5019] */
    (xdc_Char)0x3a,  /* [5020] */
    (xdc_Char)0x20,  /* [5021] */
    (xdc_Char)0x48,  /* [5022] */
    (xdc_Char)0x77,  /* [5023] */
    (xdc_Char)0x69,  /* [5024] */
    (xdc_Char)0x20,  /* [5025] */
    (xdc_Char)0x61,  /* [5026] */
    (xdc_Char)0x6c,  /* [5027] */
    (xdc_Char)0x72,  /* [5028] */
    (xdc_Char)0x65,  /* [5029] */
    (xdc_Char)0x61,  /* [5030] */
    (xdc_Char)0x64,  /* [5031] */
    (xdc_Char)0x79,  /* [5032] */
    (xdc_Char)0x20,  /* [5033] */
    (xdc_Char)0x64,  /* [5034] */
    (xdc_Char)0x65,  /* [5035] */
    (xdc_Char)0x66,  /* [5036] */
    (xdc_Char)0x69,  /* [5037] */
    (xdc_Char)0x6e,  /* [5038] */
    (xdc_Char)0x65,  /* [5039] */
    (xdc_Char)0x64,  /* [5040] */
    (xdc_Char)0x3a,  /* [5041] */
    (xdc_Char)0x20,  /* [5042] */
    (xdc_Char)0x69,  /* [5043] */
    (xdc_Char)0x6e,  /* [5044] */
    (xdc_Char)0x74,  /* [5045] */
    (xdc_Char)0x72,  /* [5046] */
    (xdc_Char)0x23,  /* [5047] */
    (xdc_Char)0x20,  /* [5048] */
    (xdc_Char)0x25,  /* [5049] */
    (xdc_Char)0x64,  /* [5050] */
    (xdc_Char)0x0,  /* [5051] */
    (xdc_Char)0x45,  /* [5052] */
    (xdc_Char)0x5f,  /* [5053] */
    (xdc_Char)0x68,  /* [5054] */
    (xdc_Char)0x61,  /* [5055] */
    (xdc_Char)0x6e,  /* [5056] */
    (xdc_Char)0x64,  /* [5057] */
    (xdc_Char)0x6c,  /* [5058] */
    (xdc_Char)0x65,  /* [5059] */
    (xdc_Char)0x4e,  /* [5060] */
    (xdc_Char)0x6f,  /* [5061] */
    (xdc_Char)0x74,  /* [5062] */
    (xdc_Char)0x46,  /* [5063] */
    (xdc_Char)0x6f,  /* [5064] */
    (xdc_Char)0x75,  /* [5065] */
    (xdc_Char)0x6e,  /* [5066] */
    (xdc_Char)0x64,  /* [5067] */
    (xdc_Char)0x3a,  /* [5068] */
    (xdc_Char)0x20,  /* [5069] */
    (xdc_Char)0x48,  /* [5070] */
    (xdc_Char)0x77,  /* [5071] */
    (xdc_Char)0x69,  /* [5072] */
    (xdc_Char)0x20,  /* [5073] */
    (xdc_Char)0x68,  /* [5074] */
    (xdc_Char)0x61,  /* [5075] */
    (xdc_Char)0x6e,  /* [5076] */
    (xdc_Char)0x64,  /* [5077] */
    (xdc_Char)0x6c,  /* [5078] */
    (xdc_Char)0x65,  /* [5079] */
    (xdc_Char)0x20,  /* [5080] */
    (xdc_Char)0x6e,  /* [5081] */
    (xdc_Char)0x6f,  /* [5082] */
    (xdc_Char)0x74,  /* [5083] */
    (xdc_Char)0x20,  /* [5084] */
    (xdc_Char)0x66,  /* [5085] */
    (xdc_Char)0x6f,  /* [5086] */
    (xdc_Char)0x75,  /* [5087] */
    (xdc_Char)0x6e,  /* [5088] */
    (xdc_Char)0x64,  /* [5089] */
    (xdc_Char)0x3a,  /* [5090] */
    (xdc_Char)0x20,  /* [5091] */
    (xdc_Char)0x30,  /* [5092] */
    (xdc_Char)0x78,  /* [5093] */
    (xdc_Char)0x25,  /* [5094] */
    (xdc_Char)0x78,  /* [5095] */
    (xdc_Char)0x0,  /* [5096] */
    (xdc_Char)0x45,  /* [5097] */
    (xdc_Char)0x5f,  /* [5098] */
    (xdc_Char)0x73,  /* [5099] */
    (xdc_Char)0x74,  /* [5100] */
    (xdc_Char)0x61,  /* [5101] */
    (xdc_Char)0x63,  /* [5102] */
    (xdc_Char)0x6b,  /* [5103] */
    (xdc_Char)0x4f,  /* [5104] */
    (xdc_Char)0x76,  /* [5105] */
    (xdc_Char)0x65,  /* [5106] */
    (xdc_Char)0x72,  /* [5107] */
    (xdc_Char)0x66,  /* [5108] */
    (xdc_Char)0x6c,  /* [5109] */
    (xdc_Char)0x6f,  /* [5110] */
    (xdc_Char)0x77,  /* [5111] */
    (xdc_Char)0x3a,  /* [5112] */
    (xdc_Char)0x20,  /* [5113] */
    (xdc_Char)0x49,  /* [5114] */
    (xdc_Char)0x53,  /* [5115] */
    (xdc_Char)0x52,  /* [5116] */
    (xdc_Char)0x20,  /* [5117] */
    (xdc_Char)0x73,  /* [5118] */
    (xdc_Char)0x74,  /* [5119] */
    (xdc_Char)0x61,  /* [5120] */
    (xdc_Char)0x63,  /* [5121] */
    (xdc_Char)0x6b,  /* [5122] */
    (xdc_Char)0x20,  /* [5123] */
    (xdc_Char)0x6f,  /* [5124] */
    (xdc_Char)0x76,  /* [5125] */
    (xdc_Char)0x65,  /* [5126] */
    (xdc_Char)0x72,  /* [5127] */
    (xdc_Char)0x66,  /* [5128] */
    (xdc_Char)0x6c,  /* [5129] */
    (xdc_Char)0x6f,  /* [5130] */
    (xdc_Char)0x77,  /* [5131] */
    (xdc_Char)0x2e,  /* [5132] */
    (xdc_Char)0x0,  /* [5133] */
    (xdc_Char)0x45,  /* [5134] */
    (xdc_Char)0x5f,  /* [5135] */
    (xdc_Char)0x73,  /* [5136] */
    (xdc_Char)0x74,  /* [5137] */
    (xdc_Char)0x61,  /* [5138] */
    (xdc_Char)0x63,  /* [5139] */
    (xdc_Char)0x6b,  /* [5140] */
    (xdc_Char)0x4f,  /* [5141] */
    (xdc_Char)0x76,  /* [5142] */
    (xdc_Char)0x65,  /* [5143] */
    (xdc_Char)0x72,  /* [5144] */
    (xdc_Char)0x66,  /* [5145] */
    (xdc_Char)0x6c,  /* [5146] */
    (xdc_Char)0x6f,  /* [5147] */
    (xdc_Char)0x77,  /* [5148] */
    (xdc_Char)0x3a,  /* [5149] */
    (xdc_Char)0x20,  /* [5150] */
    (xdc_Char)0x54,  /* [5151] */
    (xdc_Char)0x61,  /* [5152] */
    (xdc_Char)0x73,  /* [5153] */
    (xdc_Char)0x6b,  /* [5154] */
    (xdc_Char)0x20,  /* [5155] */
    (xdc_Char)0x30,  /* [5156] */
    (xdc_Char)0x78,  /* [5157] */
    (xdc_Char)0x25,  /* [5158] */
    (xdc_Char)0x78,  /* [5159] */
    (xdc_Char)0x20,  /* [5160] */
    (xdc_Char)0x73,  /* [5161] */
    (xdc_Char)0x74,  /* [5162] */
    (xdc_Char)0x61,  /* [5163] */
    (xdc_Char)0x63,  /* [5164] */
    (xdc_Char)0x6b,  /* [5165] */
    (xdc_Char)0x20,  /* [5166] */
    (xdc_Char)0x6f,  /* [5167] */
    (xdc_Char)0x76,  /* [5168] */
    (xdc_Char)0x65,  /* [5169] */
    (xdc_Char)0x72,  /* [5170] */
    (xdc_Char)0x66,  /* [5171] */
    (xdc_Char)0x6c,  /* [5172] */
    (xdc_Char)0x6f,  /* [5173] */
    (xdc_Char)0x77,  /* [5174] */
    (xdc_Char)0x2e,  /* [5175] */
    (xdc_Char)0x0,  /* [5176] */
    (xdc_Char)0x45,  /* [5177] */
    (xdc_Char)0x5f,  /* [5178] */
    (xdc_Char)0x73,  /* [5179] */
    (xdc_Char)0x70,  /* [5180] */
    (xdc_Char)0x4f,  /* [5181] */
    (xdc_Char)0x75,  /* [5182] */
    (xdc_Char)0x74,  /* [5183] */
    (xdc_Char)0x4f,  /* [5184] */
    (xdc_Char)0x66,  /* [5185] */
    (xdc_Char)0x42,  /* [5186] */
    (xdc_Char)0x6f,  /* [5187] */
    (xdc_Char)0x75,  /* [5188] */
    (xdc_Char)0x6e,  /* [5189] */
    (xdc_Char)0x64,  /* [5190] */
    (xdc_Char)0x73,  /* [5191] */
    (xdc_Char)0x3a,  /* [5192] */
    (xdc_Char)0x20,  /* [5193] */
    (xdc_Char)0x54,  /* [5194] */
    (xdc_Char)0x61,  /* [5195] */
    (xdc_Char)0x73,  /* [5196] */
    (xdc_Char)0x6b,  /* [5197] */
    (xdc_Char)0x20,  /* [5198] */
    (xdc_Char)0x30,  /* [5199] */
    (xdc_Char)0x78,  /* [5200] */
    (xdc_Char)0x25,  /* [5201] */
    (xdc_Char)0x78,  /* [5202] */
    (xdc_Char)0x20,  /* [5203] */
    (xdc_Char)0x73,  /* [5204] */
    (xdc_Char)0x74,  /* [5205] */
    (xdc_Char)0x61,  /* [5206] */
    (xdc_Char)0x63,  /* [5207] */
    (xdc_Char)0x6b,  /* [5208] */
    (xdc_Char)0x20,  /* [5209] */
    (xdc_Char)0x65,  /* [5210] */
    (xdc_Char)0x72,  /* [5211] */
    (xdc_Char)0x72,  /* [5212] */
    (xdc_Char)0x6f,  /* [5213] */
    (xdc_Char)0x72,  /* [5214] */
    (xdc_Char)0x2c,  /* [5215] */
    (xdc_Char)0x20,  /* [5216] */
    (xdc_Char)0x53,  /* [5217] */
    (xdc_Char)0x50,  /* [5218] */
    (xdc_Char)0x20,  /* [5219] */
    (xdc_Char)0x3d,  /* [5220] */
    (xdc_Char)0x20,  /* [5221] */
    (xdc_Char)0x30,  /* [5222] */
    (xdc_Char)0x78,  /* [5223] */
    (xdc_Char)0x25,  /* [5224] */
    (xdc_Char)0x78,  /* [5225] */
    (xdc_Char)0x2e,  /* [5226] */
    (xdc_Char)0x0,  /* [5227] */
    (xdc_Char)0x45,  /* [5228] */
    (xdc_Char)0x5f,  /* [5229] */
    (xdc_Char)0x64,  /* [5230] */
    (xdc_Char)0x65,  /* [5231] */
    (xdc_Char)0x6c,  /* [5232] */
    (xdc_Char)0x65,  /* [5233] */
    (xdc_Char)0x74,  /* [5234] */
    (xdc_Char)0x65,  /* [5235] */
    (xdc_Char)0x4e,  /* [5236] */
    (xdc_Char)0x6f,  /* [5237] */
    (xdc_Char)0x74,  /* [5238] */
    (xdc_Char)0x41,  /* [5239] */
    (xdc_Char)0x6c,  /* [5240] */
    (xdc_Char)0x6c,  /* [5241] */
    (xdc_Char)0x6f,  /* [5242] */
    (xdc_Char)0x77,  /* [5243] */
    (xdc_Char)0x65,  /* [5244] */
    (xdc_Char)0x64,  /* [5245] */
    (xdc_Char)0x3a,  /* [5246] */
    (xdc_Char)0x20,  /* [5247] */
    (xdc_Char)0x54,  /* [5248] */
    (xdc_Char)0x61,  /* [5249] */
    (xdc_Char)0x73,  /* [5250] */
    (xdc_Char)0x6b,  /* [5251] */
    (xdc_Char)0x20,  /* [5252] */
    (xdc_Char)0x30,  /* [5253] */
    (xdc_Char)0x78,  /* [5254] */
    (xdc_Char)0x25,  /* [5255] */
    (xdc_Char)0x78,  /* [5256] */
    (xdc_Char)0x2e,  /* [5257] */
    (xdc_Char)0x0,  /* [5258] */
    (xdc_Char)0x45,  /* [5259] */
    (xdc_Char)0x5f,  /* [5260] */
    (xdc_Char)0x6d,  /* [5261] */
    (xdc_Char)0x61,  /* [5262] */
    (xdc_Char)0x78,  /* [5263] */
    (xdc_Char)0x52,  /* [5264] */
    (xdc_Char)0x65,  /* [5265] */
    (xdc_Char)0x61,  /* [5266] */
    (xdc_Char)0x63,  /* [5267] */
    (xdc_Char)0x68,  /* [5268] */
    (xdc_Char)0x65,  /* [5269] */
    (xdc_Char)0x64,  /* [5270] */
    (xdc_Char)0x3a,  /* [5271] */
    (xdc_Char)0x20,  /* [5272] */
    (xdc_Char)0x41,  /* [5273] */
    (xdc_Char)0x6c,  /* [5274] */
    (xdc_Char)0x6c,  /* [5275] */
    (xdc_Char)0x20,  /* [5276] */
    (xdc_Char)0x65,  /* [5277] */
    (xdc_Char)0x6e,  /* [5278] */
    (xdc_Char)0x74,  /* [5279] */
    (xdc_Char)0x72,  /* [5280] */
    (xdc_Char)0x69,  /* [5281] */
    (xdc_Char)0x65,  /* [5282] */
    (xdc_Char)0x73,  /* [5283] */
    (xdc_Char)0x20,  /* [5284] */
    (xdc_Char)0x69,  /* [5285] */
    (xdc_Char)0x6e,  /* [5286] */
    (xdc_Char)0x20,  /* [5287] */
    (xdc_Char)0x75,  /* [5288] */
    (xdc_Char)0x73,  /* [5289] */
    (xdc_Char)0x65,  /* [5290] */
    (xdc_Char)0x2e,  /* [5291] */
    (xdc_Char)0x20,  /* [5292] */
    (xdc_Char)0x4e,  /* [5293] */
    (xdc_Char)0x61,  /* [5294] */
    (xdc_Char)0x6d,  /* [5295] */
    (xdc_Char)0x65,  /* [5296] */
    (xdc_Char)0x53,  /* [5297] */
    (xdc_Char)0x65,  /* [5298] */
    (xdc_Char)0x72,  /* [5299] */
    (xdc_Char)0x76,  /* [5300] */
    (xdc_Char)0x65,  /* [5301] */
    (xdc_Char)0x72,  /* [5302] */
    (xdc_Char)0x2e,  /* [5303] */
    (xdc_Char)0x6d,  /* [5304] */
    (xdc_Char)0x61,  /* [5305] */
    (xdc_Char)0x78,  /* [5306] */
    (xdc_Char)0x52,  /* [5307] */
    (xdc_Char)0x75,  /* [5308] */
    (xdc_Char)0x6e,  /* [5309] */
    (xdc_Char)0x74,  /* [5310] */
    (xdc_Char)0x69,  /* [5311] */
    (xdc_Char)0x6d,  /* [5312] */
    (xdc_Char)0x65,  /* [5313] */
    (xdc_Char)0x45,  /* [5314] */
    (xdc_Char)0x6e,  /* [5315] */
    (xdc_Char)0x74,  /* [5316] */
    (xdc_Char)0x72,  /* [5317] */
    (xdc_Char)0x69,  /* [5318] */
    (xdc_Char)0x65,  /* [5319] */
    (xdc_Char)0x73,  /* [5320] */
    (xdc_Char)0x20,  /* [5321] */
    (xdc_Char)0x69,  /* [5322] */
    (xdc_Char)0x73,  /* [5323] */
    (xdc_Char)0x20,  /* [5324] */
    (xdc_Char)0x25,  /* [5325] */
    (xdc_Char)0x64,  /* [5326] */
    (xdc_Char)0x0,  /* [5327] */
    (xdc_Char)0x45,  /* [5328] */
    (xdc_Char)0x5f,  /* [5329] */
    (xdc_Char)0x65,  /* [5330] */
    (xdc_Char)0x6e,  /* [5331] */
    (xdc_Char)0x74,  /* [5332] */
    (xdc_Char)0x72,  /* [5333] */
    (xdc_Char)0x79,  /* [5334] */
    (xdc_Char)0x45,  /* [5335] */
    (xdc_Char)0x78,  /* [5336] */
    (xdc_Char)0x69,  /* [5337] */
    (xdc_Char)0x73,  /* [5338] */
    (xdc_Char)0x74,  /* [5339] */
    (xdc_Char)0x73,  /* [5340] */
    (xdc_Char)0x3a,  /* [5341] */
    (xdc_Char)0x20,  /* [5342] */
    (xdc_Char)0x25,  /* [5343] */
    (xdc_Char)0x73,  /* [5344] */
    (xdc_Char)0x20,  /* [5345] */
    (xdc_Char)0x6e,  /* [5346] */
    (xdc_Char)0x61,  /* [5347] */
    (xdc_Char)0x6d,  /* [5348] */
    (xdc_Char)0x65,  /* [5349] */
    (xdc_Char)0x20,  /* [5350] */
    (xdc_Char)0x61,  /* [5351] */
    (xdc_Char)0x6c,  /* [5352] */
    (xdc_Char)0x72,  /* [5353] */
    (xdc_Char)0x65,  /* [5354] */
    (xdc_Char)0x61,  /* [5355] */
    (xdc_Char)0x64,  /* [5356] */
    (xdc_Char)0x79,  /* [5357] */
    (xdc_Char)0x20,  /* [5358] */
    (xdc_Char)0x69,  /* [5359] */
    (xdc_Char)0x6e,  /* [5360] */
    (xdc_Char)0x20,  /* [5361] */
    (xdc_Char)0x74,  /* [5362] */
    (xdc_Char)0x61,  /* [5363] */
    (xdc_Char)0x62,  /* [5364] */
    (xdc_Char)0x6c,  /* [5365] */
    (xdc_Char)0x65,  /* [5366] */
    (xdc_Char)0x20,  /* [5367] */
    (xdc_Char)0x0,  /* [5368] */
    (xdc_Char)0x45,  /* [5369] */
    (xdc_Char)0x5f,  /* [5370] */
    (xdc_Char)0x67,  /* [5371] */
    (xdc_Char)0x61,  /* [5372] */
    (xdc_Char)0x74,  /* [5373] */
    (xdc_Char)0x65,  /* [5374] */
    (xdc_Char)0x55,  /* [5375] */
    (xdc_Char)0x6e,  /* [5376] */
    (xdc_Char)0x61,  /* [5377] */
    (xdc_Char)0x76,  /* [5378] */
    (xdc_Char)0x61,  /* [5379] */
    (xdc_Char)0x69,  /* [5380] */
    (xdc_Char)0x6c,  /* [5381] */
    (xdc_Char)0x61,  /* [5382] */
    (xdc_Char)0x62,  /* [5383] */
    (xdc_Char)0x6c,  /* [5384] */
    (xdc_Char)0x65,  /* [5385] */
    (xdc_Char)0x3a,  /* [5386] */
    (xdc_Char)0x20,  /* [5387] */
    (xdc_Char)0x4e,  /* [5388] */
    (xdc_Char)0x6f,  /* [5389] */
    (xdc_Char)0x20,  /* [5390] */
    (xdc_Char)0x67,  /* [5391] */
    (xdc_Char)0x61,  /* [5392] */
    (xdc_Char)0x74,  /* [5393] */
    (xdc_Char)0x65,  /* [5394] */
    (xdc_Char)0x73,  /* [5395] */
    (xdc_Char)0x20,  /* [5396] */
    (xdc_Char)0x6f,  /* [5397] */
    (xdc_Char)0x66,  /* [5398] */
    (xdc_Char)0x20,  /* [5399] */
    (xdc_Char)0x72,  /* [5400] */
    (xdc_Char)0x65,  /* [5401] */
    (xdc_Char)0x71,  /* [5402] */
    (xdc_Char)0x75,  /* [5403] */
    (xdc_Char)0x65,  /* [5404] */
    (xdc_Char)0x73,  /* [5405] */
    (xdc_Char)0x74,  /* [5406] */
    (xdc_Char)0x65,  /* [5407] */
    (xdc_Char)0x64,  /* [5408] */
    (xdc_Char)0x20,  /* [5409] */
    (xdc_Char)0x74,  /* [5410] */
    (xdc_Char)0x79,  /* [5411] */
    (xdc_Char)0x70,  /* [5412] */
    (xdc_Char)0x65,  /* [5413] */
    (xdc_Char)0x20,  /* [5414] */
    (xdc_Char)0x61,  /* [5415] */
    (xdc_Char)0x72,  /* [5416] */
    (xdc_Char)0x65,  /* [5417] */
    (xdc_Char)0x20,  /* [5418] */
    (xdc_Char)0x61,  /* [5419] */
    (xdc_Char)0x76,  /* [5420] */
    (xdc_Char)0x61,  /* [5421] */
    (xdc_Char)0x69,  /* [5422] */
    (xdc_Char)0x6c,  /* [5423] */
    (xdc_Char)0x61,  /* [5424] */
    (xdc_Char)0x62,  /* [5425] */
    (xdc_Char)0x6c,  /* [5426] */
    (xdc_Char)0x65,  /* [5427] */
    (xdc_Char)0x0,  /* [5428] */
    (xdc_Char)0x45,  /* [5429] */
    (xdc_Char)0x5f,  /* [5430] */
    (xdc_Char)0x6c,  /* [5431] */
    (xdc_Char)0x6f,  /* [5432] */
    (xdc_Char)0x63,  /* [5433] */
    (xdc_Char)0x61,  /* [5434] */
    (xdc_Char)0x6c,  /* [5435] */
    (xdc_Char)0x47,  /* [5436] */
    (xdc_Char)0x61,  /* [5437] */
    (xdc_Char)0x74,  /* [5438] */
    (xdc_Char)0x65,  /* [5439] */
    (xdc_Char)0x3a,  /* [5440] */
    (xdc_Char)0x20,  /* [5441] */
    (xdc_Char)0x4f,  /* [5442] */
    (xdc_Char)0x6e,  /* [5443] */
    (xdc_Char)0x6c,  /* [5444] */
    (xdc_Char)0x79,  /* [5445] */
    (xdc_Char)0x20,  /* [5446] */
    (xdc_Char)0x63,  /* [5447] */
    (xdc_Char)0x72,  /* [5448] */
    (xdc_Char)0x65,  /* [5449] */
    (xdc_Char)0x61,  /* [5450] */
    (xdc_Char)0x74,  /* [5451] */
    (xdc_Char)0x6f,  /* [5452] */
    (xdc_Char)0x72,  /* [5453] */
    (xdc_Char)0x20,  /* [5454] */
    (xdc_Char)0x63,  /* [5455] */
    (xdc_Char)0x61,  /* [5456] */
    (xdc_Char)0x6e,  /* [5457] */
    (xdc_Char)0x20,  /* [5458] */
    (xdc_Char)0x6f,  /* [5459] */
    (xdc_Char)0x70,  /* [5460] */
    (xdc_Char)0x65,  /* [5461] */
    (xdc_Char)0x6e,  /* [5462] */
    (xdc_Char)0x20,  /* [5463] */
    (xdc_Char)0x6c,  /* [5464] */
    (xdc_Char)0x6f,  /* [5465] */
    (xdc_Char)0x63,  /* [5466] */
    (xdc_Char)0x61,  /* [5467] */
    (xdc_Char)0x6c,  /* [5468] */
    (xdc_Char)0x20,  /* [5469] */
    (xdc_Char)0x47,  /* [5470] */
    (xdc_Char)0x61,  /* [5471] */
    (xdc_Char)0x74,  /* [5472] */
    (xdc_Char)0x65,  /* [5473] */
    (xdc_Char)0x0,  /* [5474] */
    (xdc_Char)0x45,  /* [5475] */
    (xdc_Char)0x5f,  /* [5476] */
    (xdc_Char)0x6d,  /* [5477] */
    (xdc_Char)0x61,  /* [5478] */
    (xdc_Char)0x78,  /* [5479] */
    (xdc_Char)0x52,  /* [5480] */
    (xdc_Char)0x65,  /* [5481] */
    (xdc_Char)0x61,  /* [5482] */
    (xdc_Char)0x63,  /* [5483] */
    (xdc_Char)0x68,  /* [5484] */
    (xdc_Char)0x65,  /* [5485] */
    (xdc_Char)0x64,  /* [5486] */
    (xdc_Char)0x3a,  /* [5487] */
    (xdc_Char)0x20,  /* [5488] */
    (xdc_Char)0x41,  /* [5489] */
    (xdc_Char)0x6c,  /* [5490] */
    (xdc_Char)0x6c,  /* [5491] */
    (xdc_Char)0x20,  /* [5492] */
    (xdc_Char)0x6f,  /* [5493] */
    (xdc_Char)0x62,  /* [5494] */
    (xdc_Char)0x6a,  /* [5495] */
    (xdc_Char)0x65,  /* [5496] */
    (xdc_Char)0x63,  /* [5497] */
    (xdc_Char)0x74,  /* [5498] */
    (xdc_Char)0x73,  /* [5499] */
    (xdc_Char)0x20,  /* [5500] */
    (xdc_Char)0x69,  /* [5501] */
    (xdc_Char)0x6e,  /* [5502] */
    (xdc_Char)0x20,  /* [5503] */
    (xdc_Char)0x75,  /* [5504] */
    (xdc_Char)0x73,  /* [5505] */
    (xdc_Char)0x65,  /* [5506] */
    (xdc_Char)0x2e,  /* [5507] */
    (xdc_Char)0x20,  /* [5508] */
    (xdc_Char)0x4d,  /* [5509] */
    (xdc_Char)0x65,  /* [5510] */
    (xdc_Char)0x73,  /* [5511] */
    (xdc_Char)0x73,  /* [5512] */
    (xdc_Char)0x61,  /* [5513] */
    (xdc_Char)0x67,  /* [5514] */
    (xdc_Char)0x65,  /* [5515] */
    (xdc_Char)0x51,  /* [5516] */
    (xdc_Char)0x2e,  /* [5517] */
    (xdc_Char)0x6d,  /* [5518] */
    (xdc_Char)0x61,  /* [5519] */
    (xdc_Char)0x78,  /* [5520] */
    (xdc_Char)0x52,  /* [5521] */
    (xdc_Char)0x75,  /* [5522] */
    (xdc_Char)0x6e,  /* [5523] */
    (xdc_Char)0x74,  /* [5524] */
    (xdc_Char)0x69,  /* [5525] */
    (xdc_Char)0x6d,  /* [5526] */
    (xdc_Char)0x65,  /* [5527] */
    (xdc_Char)0x45,  /* [5528] */
    (xdc_Char)0x6e,  /* [5529] */
    (xdc_Char)0x74,  /* [5530] */
    (xdc_Char)0x72,  /* [5531] */
    (xdc_Char)0x69,  /* [5532] */
    (xdc_Char)0x65,  /* [5533] */
    (xdc_Char)0x73,  /* [5534] */
    (xdc_Char)0x20,  /* [5535] */
    (xdc_Char)0x69,  /* [5536] */
    (xdc_Char)0x73,  /* [5537] */
    (xdc_Char)0x20,  /* [5538] */
    (xdc_Char)0x25,  /* [5539] */
    (xdc_Char)0x64,  /* [5540] */
    (xdc_Char)0x0,  /* [5541] */
    (xdc_Char)0x45,  /* [5542] */
    (xdc_Char)0x5f,  /* [5543] */
    (xdc_Char)0x75,  /* [5544] */
    (xdc_Char)0x6e,  /* [5545] */
    (xdc_Char)0x72,  /* [5546] */
    (xdc_Char)0x65,  /* [5547] */
    (xdc_Char)0x67,  /* [5548] */
    (xdc_Char)0x69,  /* [5549] */
    (xdc_Char)0x73,  /* [5550] */
    (xdc_Char)0x74,  /* [5551] */
    (xdc_Char)0x65,  /* [5552] */
    (xdc_Char)0x72,  /* [5553] */
    (xdc_Char)0x48,  /* [5554] */
    (xdc_Char)0x65,  /* [5555] */
    (xdc_Char)0x61,  /* [5556] */
    (xdc_Char)0x70,  /* [5557] */
    (xdc_Char)0x49,  /* [5558] */
    (xdc_Char)0x64,  /* [5559] */
    (xdc_Char)0x3a,  /* [5560] */
    (xdc_Char)0x20,  /* [5561] */
    (xdc_Char)0x48,  /* [5562] */
    (xdc_Char)0x65,  /* [5563] */
    (xdc_Char)0x61,  /* [5564] */
    (xdc_Char)0x70,  /* [5565] */
    (xdc_Char)0x20,  /* [5566] */
    (xdc_Char)0x69,  /* [5567] */
    (xdc_Char)0x64,  /* [5568] */
    (xdc_Char)0x20,  /* [5569] */
    (xdc_Char)0x25,  /* [5570] */
    (xdc_Char)0x64,  /* [5571] */
    (xdc_Char)0x20,  /* [5572] */
    (xdc_Char)0x6e,  /* [5573] */
    (xdc_Char)0x6f,  /* [5574] */
    (xdc_Char)0x74,  /* [5575] */
    (xdc_Char)0x20,  /* [5576] */
    (xdc_Char)0x72,  /* [5577] */
    (xdc_Char)0x65,  /* [5578] */
    (xdc_Char)0x67,  /* [5579] */
    (xdc_Char)0x69,  /* [5580] */
    (xdc_Char)0x73,  /* [5581] */
    (xdc_Char)0x74,  /* [5582] */
    (xdc_Char)0x65,  /* [5583] */
    (xdc_Char)0x72,  /* [5584] */
    (xdc_Char)0x65,  /* [5585] */
    (xdc_Char)0x64,  /* [5586] */
    (xdc_Char)0x0,  /* [5587] */
    (xdc_Char)0x45,  /* [5588] */
    (xdc_Char)0x5f,  /* [5589] */
    (xdc_Char)0x6e,  /* [5590] */
    (xdc_Char)0x61,  /* [5591] */
    (xdc_Char)0x6d,  /* [5592] */
    (xdc_Char)0x65,  /* [5593] */
    (xdc_Char)0x46,  /* [5594] */
    (xdc_Char)0x61,  /* [5595] */
    (xdc_Char)0x69,  /* [5596] */
    (xdc_Char)0x6c,  /* [5597] */
    (xdc_Char)0x65,  /* [5598] */
    (xdc_Char)0x64,  /* [5599] */
    (xdc_Char)0x3a,  /* [5600] */
    (xdc_Char)0x20,  /* [5601] */
    (xdc_Char)0x27,  /* [5602] */
    (xdc_Char)0x25,  /* [5603] */
    (xdc_Char)0x73,  /* [5604] */
    (xdc_Char)0x27,  /* [5605] */
    (xdc_Char)0x20,  /* [5606] */
    (xdc_Char)0x6e,  /* [5607] */
    (xdc_Char)0x61,  /* [5608] */
    (xdc_Char)0x6d,  /* [5609] */
    (xdc_Char)0x65,  /* [5610] */
    (xdc_Char)0x20,  /* [5611] */
    (xdc_Char)0x66,  /* [5612] */
    (xdc_Char)0x61,  /* [5613] */
    (xdc_Char)0x69,  /* [5614] */
    (xdc_Char)0x6c,  /* [5615] */
    (xdc_Char)0x65,  /* [5616] */
    (xdc_Char)0x64,  /* [5617] */
    (xdc_Char)0x20,  /* [5618] */
    (xdc_Char)0x74,  /* [5619] */
    (xdc_Char)0x6f,  /* [5620] */
    (xdc_Char)0x20,  /* [5621] */
    (xdc_Char)0x62,  /* [5622] */
    (xdc_Char)0x65,  /* [5623] */
    (xdc_Char)0x20,  /* [5624] */
    (xdc_Char)0x61,  /* [5625] */
    (xdc_Char)0x64,  /* [5626] */
    (xdc_Char)0x64,  /* [5627] */
    (xdc_Char)0x65,  /* [5628] */
    (xdc_Char)0x64,  /* [5629] */
    (xdc_Char)0x20,  /* [5630] */
    (xdc_Char)0x74,  /* [5631] */
    (xdc_Char)0x6f,  /* [5632] */
    (xdc_Char)0x20,  /* [5633] */
    (xdc_Char)0x4e,  /* [5634] */
    (xdc_Char)0x61,  /* [5635] */
    (xdc_Char)0x6d,  /* [5636] */
    (xdc_Char)0x65,  /* [5637] */
    (xdc_Char)0x53,  /* [5638] */
    (xdc_Char)0x65,  /* [5639] */
    (xdc_Char)0x72,  /* [5640] */
    (xdc_Char)0x76,  /* [5641] */
    (xdc_Char)0x65,  /* [5642] */
    (xdc_Char)0x72,  /* [5643] */
    (xdc_Char)0x0,  /* [5644] */
    (xdc_Char)0x45,  /* [5645] */
    (xdc_Char)0x5f,  /* [5646] */
    (xdc_Char)0x69,  /* [5647] */
    (xdc_Char)0x6e,  /* [5648] */
    (xdc_Char)0x74,  /* [5649] */
    (xdc_Char)0x65,  /* [5650] */
    (xdc_Char)0x72,  /* [5651] */
    (xdc_Char)0x6e,  /* [5652] */
    (xdc_Char)0x61,  /* [5653] */
    (xdc_Char)0x6c,  /* [5654] */
    (xdc_Char)0x3a,  /* [5655] */
    (xdc_Char)0x20,  /* [5656] */
    (xdc_Char)0x41,  /* [5657] */
    (xdc_Char)0x6e,  /* [5658] */
    (xdc_Char)0x20,  /* [5659] */
    (xdc_Char)0x69,  /* [5660] */
    (xdc_Char)0x6e,  /* [5661] */
    (xdc_Char)0x74,  /* [5662] */
    (xdc_Char)0x65,  /* [5663] */
    (xdc_Char)0x72,  /* [5664] */
    (xdc_Char)0x6e,  /* [5665] */
    (xdc_Char)0x61,  /* [5666] */
    (xdc_Char)0x6c,  /* [5667] */
    (xdc_Char)0x20,  /* [5668] */
    (xdc_Char)0x65,  /* [5669] */
    (xdc_Char)0x72,  /* [5670] */
    (xdc_Char)0x72,  /* [5671] */
    (xdc_Char)0x6f,  /* [5672] */
    (xdc_Char)0x72,  /* [5673] */
    (xdc_Char)0x20,  /* [5674] */
    (xdc_Char)0x6f,  /* [5675] */
    (xdc_Char)0x63,  /* [5676] */
    (xdc_Char)0x63,  /* [5677] */
    (xdc_Char)0x75,  /* [5678] */
    (xdc_Char)0x72,  /* [5679] */
    (xdc_Char)0x72,  /* [5680] */
    (xdc_Char)0x65,  /* [5681] */
    (xdc_Char)0x64,  /* [5682] */
    (xdc_Char)0x0,  /* [5683] */
    (xdc_Char)0x45,  /* [5684] */
    (xdc_Char)0x5f,  /* [5685] */
    (xdc_Char)0x76,  /* [5686] */
    (xdc_Char)0x65,  /* [5687] */
    (xdc_Char)0x72,  /* [5688] */
    (xdc_Char)0x73,  /* [5689] */
    (xdc_Char)0x69,  /* [5690] */
    (xdc_Char)0x6f,  /* [5691] */
    (xdc_Char)0x6e,  /* [5692] */
    (xdc_Char)0x4d,  /* [5693] */
    (xdc_Char)0x69,  /* [5694] */
    (xdc_Char)0x73,  /* [5695] */
    (xdc_Char)0x6d,  /* [5696] */
    (xdc_Char)0x61,  /* [5697] */
    (xdc_Char)0x74,  /* [5698] */
    (xdc_Char)0x63,  /* [5699] */
    (xdc_Char)0x68,  /* [5700] */
    (xdc_Char)0x3a,  /* [5701] */
    (xdc_Char)0x20,  /* [5702] */
    (xdc_Char)0x49,  /* [5703] */
    (xdc_Char)0x50,  /* [5704] */
    (xdc_Char)0x43,  /* [5705] */
    (xdc_Char)0x20,  /* [5706] */
    (xdc_Char)0x4d,  /* [5707] */
    (xdc_Char)0x6f,  /* [5708] */
    (xdc_Char)0x64,  /* [5709] */
    (xdc_Char)0x75,  /* [5710] */
    (xdc_Char)0x6c,  /* [5711] */
    (xdc_Char)0x65,  /* [5712] */
    (xdc_Char)0x20,  /* [5713] */
    (xdc_Char)0x76,  /* [5714] */
    (xdc_Char)0x65,  /* [5715] */
    (xdc_Char)0x72,  /* [5716] */
    (xdc_Char)0x73,  /* [5717] */
    (xdc_Char)0x69,  /* [5718] */
    (xdc_Char)0x6f,  /* [5719] */
    (xdc_Char)0x6e,  /* [5720] */
    (xdc_Char)0x20,  /* [5721] */
    (xdc_Char)0x6d,  /* [5722] */
    (xdc_Char)0x69,  /* [5723] */
    (xdc_Char)0x73,  /* [5724] */
    (xdc_Char)0x6d,  /* [5725] */
    (xdc_Char)0x61,  /* [5726] */
    (xdc_Char)0x74,  /* [5727] */
    (xdc_Char)0x63,  /* [5728] */
    (xdc_Char)0x68,  /* [5729] */
    (xdc_Char)0x3a,  /* [5730] */
    (xdc_Char)0x20,  /* [5731] */
    (xdc_Char)0x63,  /* [5732] */
    (xdc_Char)0x72,  /* [5733] */
    (xdc_Char)0x65,  /* [5734] */
    (xdc_Char)0x61,  /* [5735] */
    (xdc_Char)0x74,  /* [5736] */
    (xdc_Char)0x6f,  /* [5737] */
    (xdc_Char)0x72,  /* [5738] */
    (xdc_Char)0x3a,  /* [5739] */
    (xdc_Char)0x20,  /* [5740] */
    (xdc_Char)0x25,  /* [5741] */
    (xdc_Char)0x64,  /* [5742] */
    (xdc_Char)0x2c,  /* [5743] */
    (xdc_Char)0x20,  /* [5744] */
    (xdc_Char)0x6f,  /* [5745] */
    (xdc_Char)0x70,  /* [5746] */
    (xdc_Char)0x65,  /* [5747] */
    (xdc_Char)0x6e,  /* [5748] */
    (xdc_Char)0x65,  /* [5749] */
    (xdc_Char)0x72,  /* [5750] */
    (xdc_Char)0x3a,  /* [5751] */
    (xdc_Char)0x20,  /* [5752] */
    (xdc_Char)0x25,  /* [5753] */
    (xdc_Char)0x64,  /* [5754] */
    (xdc_Char)0x0,  /* [5755] */
    (xdc_Char)0x45,  /* [5756] */
    (xdc_Char)0x5f,  /* [5757] */
    (xdc_Char)0x70,  /* [5758] */
    (xdc_Char)0x72,  /* [5759] */
    (xdc_Char)0x69,  /* [5760] */
    (xdc_Char)0x6f,  /* [5761] */
    (xdc_Char)0x72,  /* [5762] */
    (xdc_Char)0x69,  /* [5763] */
    (xdc_Char)0x74,  /* [5764] */
    (xdc_Char)0x79,  /* [5765] */
    (xdc_Char)0x3a,  /* [5766] */
    (xdc_Char)0x20,  /* [5767] */
    (xdc_Char)0x54,  /* [5768] */
    (xdc_Char)0x68,  /* [5769] */
    (xdc_Char)0x72,  /* [5770] */
    (xdc_Char)0x65,  /* [5771] */
    (xdc_Char)0x61,  /* [5772] */
    (xdc_Char)0x64,  /* [5773] */
    (xdc_Char)0x20,  /* [5774] */
    (xdc_Char)0x70,  /* [5775] */
    (xdc_Char)0x72,  /* [5776] */
    (xdc_Char)0x69,  /* [5777] */
    (xdc_Char)0x6f,  /* [5778] */
    (xdc_Char)0x72,  /* [5779] */
    (xdc_Char)0x69,  /* [5780] */
    (xdc_Char)0x74,  /* [5781] */
    (xdc_Char)0x79,  /* [5782] */
    (xdc_Char)0x20,  /* [5783] */
    (xdc_Char)0x69,  /* [5784] */
    (xdc_Char)0x73,  /* [5785] */
    (xdc_Char)0x20,  /* [5786] */
    (xdc_Char)0x69,  /* [5787] */
    (xdc_Char)0x6e,  /* [5788] */
    (xdc_Char)0x76,  /* [5789] */
    (xdc_Char)0x61,  /* [5790] */
    (xdc_Char)0x6c,  /* [5791] */
    (xdc_Char)0x69,  /* [5792] */
    (xdc_Char)0x64,  /* [5793] */
    (xdc_Char)0x20,  /* [5794] */
    (xdc_Char)0x25,  /* [5795] */
    (xdc_Char)0x64,  /* [5796] */
    (xdc_Char)0x0,  /* [5797] */
    (xdc_Char)0x45,  /* [5798] */
    (xdc_Char)0x5f,  /* [5799] */
    (xdc_Char)0x69,  /* [5800] */
    (xdc_Char)0x6e,  /* [5801] */
    (xdc_Char)0x76,  /* [5802] */
    (xdc_Char)0x61,  /* [5803] */
    (xdc_Char)0x6c,  /* [5804] */
    (xdc_Char)0x69,  /* [5805] */
    (xdc_Char)0x64,  /* [5806] */
    (xdc_Char)0x54,  /* [5807] */
    (xdc_Char)0x69,  /* [5808] */
    (xdc_Char)0x6d,  /* [5809] */
    (xdc_Char)0x65,  /* [5810] */
    (xdc_Char)0x72,  /* [5811] */
    (xdc_Char)0x3a,  /* [5812] */
    (xdc_Char)0x20,  /* [5813] */
    (xdc_Char)0x49,  /* [5814] */
    (xdc_Char)0x6e,  /* [5815] */
    (xdc_Char)0x76,  /* [5816] */
    (xdc_Char)0x61,  /* [5817] */
    (xdc_Char)0x6c,  /* [5818] */
    (xdc_Char)0x69,  /* [5819] */
    (xdc_Char)0x64,  /* [5820] */
    (xdc_Char)0x20,  /* [5821] */
    (xdc_Char)0x54,  /* [5822] */
    (xdc_Char)0x69,  /* [5823] */
    (xdc_Char)0x6d,  /* [5824] */
    (xdc_Char)0x65,  /* [5825] */
    (xdc_Char)0x72,  /* [5826] */
    (xdc_Char)0x20,  /* [5827] */
    (xdc_Char)0x49,  /* [5828] */
    (xdc_Char)0x64,  /* [5829] */
    (xdc_Char)0x20,  /* [5830] */
    (xdc_Char)0x25,  /* [5831] */
    (xdc_Char)0x64,  /* [5832] */
    (xdc_Char)0x0,  /* [5833] */
    (xdc_Char)0x45,  /* [5834] */
    (xdc_Char)0x5f,  /* [5835] */
    (xdc_Char)0x6e,  /* [5836] */
    (xdc_Char)0x6f,  /* [5837] */
    (xdc_Char)0x74,  /* [5838] */
    (xdc_Char)0x41,  /* [5839] */
    (xdc_Char)0x76,  /* [5840] */
    (xdc_Char)0x61,  /* [5841] */
    (xdc_Char)0x69,  /* [5842] */
    (xdc_Char)0x6c,  /* [5843] */
    (xdc_Char)0x61,  /* [5844] */
    (xdc_Char)0x62,  /* [5845] */
    (xdc_Char)0x6c,  /* [5846] */
    (xdc_Char)0x65,  /* [5847] */
    (xdc_Char)0x3a,  /* [5848] */
    (xdc_Char)0x20,  /* [5849] */
    (xdc_Char)0x54,  /* [5850] */
    (xdc_Char)0x69,  /* [5851] */
    (xdc_Char)0x6d,  /* [5852] */
    (xdc_Char)0x65,  /* [5853] */
    (xdc_Char)0x72,  /* [5854] */
    (xdc_Char)0x20,  /* [5855] */
    (xdc_Char)0x6e,  /* [5856] */
    (xdc_Char)0x6f,  /* [5857] */
    (xdc_Char)0x74,  /* [5858] */
    (xdc_Char)0x20,  /* [5859] */
    (xdc_Char)0x61,  /* [5860] */
    (xdc_Char)0x76,  /* [5861] */
    (xdc_Char)0x61,  /* [5862] */
    (xdc_Char)0x69,  /* [5863] */
    (xdc_Char)0x6c,  /* [5864] */
    (xdc_Char)0x61,  /* [5865] */
    (xdc_Char)0x62,  /* [5866] */
    (xdc_Char)0x6c,  /* [5867] */
    (xdc_Char)0x65,  /* [5868] */
    (xdc_Char)0x20,  /* [5869] */
    (xdc_Char)0x25,  /* [5870] */
    (xdc_Char)0x64,  /* [5871] */
    (xdc_Char)0x0,  /* [5872] */
    (xdc_Char)0x45,  /* [5873] */
    (xdc_Char)0x5f,  /* [5874] */
    (xdc_Char)0x63,  /* [5875] */
    (xdc_Char)0x61,  /* [5876] */
    (xdc_Char)0x6e,  /* [5877] */
    (xdc_Char)0x6e,  /* [5878] */
    (xdc_Char)0x6f,  /* [5879] */
    (xdc_Char)0x74,  /* [5880] */
    (xdc_Char)0x53,  /* [5881] */
    (xdc_Char)0x75,  /* [5882] */
    (xdc_Char)0x70,  /* [5883] */
    (xdc_Char)0x70,  /* [5884] */
    (xdc_Char)0x6f,  /* [5885] */
    (xdc_Char)0x72,  /* [5886] */
    (xdc_Char)0x74,  /* [5887] */
    (xdc_Char)0x3a,  /* [5888] */
    (xdc_Char)0x20,  /* [5889] */
    (xdc_Char)0x54,  /* [5890] */
    (xdc_Char)0x69,  /* [5891] */
    (xdc_Char)0x6d,  /* [5892] */
    (xdc_Char)0x65,  /* [5893] */
    (xdc_Char)0x72,  /* [5894] */
    (xdc_Char)0x20,  /* [5895] */
    (xdc_Char)0x63,  /* [5896] */
    (xdc_Char)0x61,  /* [5897] */
    (xdc_Char)0x6e,  /* [5898] */
    (xdc_Char)0x6e,  /* [5899] */
    (xdc_Char)0x6f,  /* [5900] */
    (xdc_Char)0x74,  /* [5901] */
    (xdc_Char)0x20,  /* [5902] */
    (xdc_Char)0x73,  /* [5903] */
    (xdc_Char)0x75,  /* [5904] */
    (xdc_Char)0x70,  /* [5905] */
    (xdc_Char)0x70,  /* [5906] */
    (xdc_Char)0x6f,  /* [5907] */
    (xdc_Char)0x72,  /* [5908] */
    (xdc_Char)0x74,  /* [5909] */
    (xdc_Char)0x20,  /* [5910] */
    (xdc_Char)0x72,  /* [5911] */
    (xdc_Char)0x65,  /* [5912] */
    (xdc_Char)0x71,  /* [5913] */
    (xdc_Char)0x75,  /* [5914] */
    (xdc_Char)0x65,  /* [5915] */
    (xdc_Char)0x73,  /* [5916] */
    (xdc_Char)0x74,  /* [5917] */
    (xdc_Char)0x65,  /* [5918] */
    (xdc_Char)0x64,  /* [5919] */
    (xdc_Char)0x20,  /* [5920] */
    (xdc_Char)0x70,  /* [5921] */
    (xdc_Char)0x65,  /* [5922] */
    (xdc_Char)0x72,  /* [5923] */
    (xdc_Char)0x69,  /* [5924] */
    (xdc_Char)0x6f,  /* [5925] */
    (xdc_Char)0x64,  /* [5926] */
    (xdc_Char)0x20,  /* [5927] */
    (xdc_Char)0x25,  /* [5928] */
    (xdc_Char)0x64,  /* [5929] */
    (xdc_Char)0x0,  /* [5930] */
    (xdc_Char)0x72,  /* [5931] */
    (xdc_Char)0x65,  /* [5932] */
    (xdc_Char)0x71,  /* [5933] */
    (xdc_Char)0x75,  /* [5934] */
    (xdc_Char)0x65,  /* [5935] */
    (xdc_Char)0x73,  /* [5936] */
    (xdc_Char)0x74,  /* [5937] */
    (xdc_Char)0x65,  /* [5938] */
    (xdc_Char)0x64,  /* [5939] */
    (xdc_Char)0x20,  /* [5940] */
    (xdc_Char)0x73,  /* [5941] */
    (xdc_Char)0x69,  /* [5942] */
    (xdc_Char)0x7a,  /* [5943] */
    (xdc_Char)0x65,  /* [5944] */
    (xdc_Char)0x20,  /* [5945] */
    (xdc_Char)0x69,  /* [5946] */
    (xdc_Char)0x73,  /* [5947] */
    (xdc_Char)0x20,  /* [5948] */
    (xdc_Char)0x74,  /* [5949] */
    (xdc_Char)0x6f,  /* [5950] */
    (xdc_Char)0x6f,  /* [5951] */
    (xdc_Char)0x20,  /* [5952] */
    (xdc_Char)0x62,  /* [5953] */
    (xdc_Char)0x69,  /* [5954] */
    (xdc_Char)0x67,  /* [5955] */
    (xdc_Char)0x3a,  /* [5956] */
    (xdc_Char)0x20,  /* [5957] */
    (xdc_Char)0x68,  /* [5958] */
    (xdc_Char)0x61,  /* [5959] */
    (xdc_Char)0x6e,  /* [5960] */
    (xdc_Char)0x64,  /* [5961] */
    (xdc_Char)0x6c,  /* [5962] */
    (xdc_Char)0x65,  /* [5963] */
    (xdc_Char)0x3d,  /* [5964] */
    (xdc_Char)0x30,  /* [5965] */
    (xdc_Char)0x78,  /* [5966] */
    (xdc_Char)0x25,  /* [5967] */
    (xdc_Char)0x78,  /* [5968] */
    (xdc_Char)0x2c,  /* [5969] */
    (xdc_Char)0x20,  /* [5970] */
    (xdc_Char)0x73,  /* [5971] */
    (xdc_Char)0x69,  /* [5972] */
    (xdc_Char)0x7a,  /* [5973] */
    (xdc_Char)0x65,  /* [5974] */
    (xdc_Char)0x3d,  /* [5975] */
    (xdc_Char)0x25,  /* [5976] */
    (xdc_Char)0x75,  /* [5977] */
    (xdc_Char)0x0,  /* [5978] */
    (xdc_Char)0x6f,  /* [5979] */
    (xdc_Char)0x75,  /* [5980] */
    (xdc_Char)0x74,  /* [5981] */
    (xdc_Char)0x20,  /* [5982] */
    (xdc_Char)0x6f,  /* [5983] */
    (xdc_Char)0x66,  /* [5984] */
    (xdc_Char)0x20,  /* [5985] */
    (xdc_Char)0x6d,  /* [5986] */
    (xdc_Char)0x65,  /* [5987] */
    (xdc_Char)0x6d,  /* [5988] */
    (xdc_Char)0x6f,  /* [5989] */
    (xdc_Char)0x72,  /* [5990] */
    (xdc_Char)0x79,  /* [5991] */
    (xdc_Char)0x3a,  /* [5992] */
    (xdc_Char)0x20,  /* [5993] */
    (xdc_Char)0x68,  /* [5994] */
    (xdc_Char)0x61,  /* [5995] */
    (xdc_Char)0x6e,  /* [5996] */
    (xdc_Char)0x64,  /* [5997] */
    (xdc_Char)0x6c,  /* [5998] */
    (xdc_Char)0x65,  /* [5999] */
    (xdc_Char)0x3d,  /* [6000] */
    (xdc_Char)0x30,  /* [6001] */
    (xdc_Char)0x78,  /* [6002] */
    (xdc_Char)0x25,  /* [6003] */
    (xdc_Char)0x78,  /* [6004] */
    (xdc_Char)0x2c,  /* [6005] */
    (xdc_Char)0x20,  /* [6006] */
    (xdc_Char)0x73,  /* [6007] */
    (xdc_Char)0x69,  /* [6008] */
    (xdc_Char)0x7a,  /* [6009] */
    (xdc_Char)0x65,  /* [6010] */
    (xdc_Char)0x3d,  /* [6011] */
    (xdc_Char)0x25,  /* [6012] */
    (xdc_Char)0x75,  /* [6013] */
    (xdc_Char)0x0,  /* [6014] */
    (xdc_Char)0x3c,  /* [6015] */
    (xdc_Char)0x2d,  /* [6016] */
    (xdc_Char)0x2d,  /* [6017] */
    (xdc_Char)0x20,  /* [6018] */
    (xdc_Char)0x63,  /* [6019] */
    (xdc_Char)0x6f,  /* [6020] */
    (xdc_Char)0x6e,  /* [6021] */
    (xdc_Char)0x73,  /* [6022] */
    (xdc_Char)0x74,  /* [6023] */
    (xdc_Char)0x72,  /* [6024] */
    (xdc_Char)0x75,  /* [6025] */
    (xdc_Char)0x63,  /* [6026] */
    (xdc_Char)0x74,  /* [6027] */
    (xdc_Char)0x3a,  /* [6028] */
    (xdc_Char)0x20,  /* [6029] */
    (xdc_Char)0x25,  /* [6030] */
    (xdc_Char)0x70,  /* [6031] */
    (xdc_Char)0x28,  /* [6032] */
    (xdc_Char)0x27,  /* [6033] */
    (xdc_Char)0x25,  /* [6034] */
    (xdc_Char)0x73,  /* [6035] */
    (xdc_Char)0x27,  /* [6036] */
    (xdc_Char)0x29,  /* [6037] */
    (xdc_Char)0x0,  /* [6038] */
    (xdc_Char)0x3c,  /* [6039] */
    (xdc_Char)0x2d,  /* [6040] */
    (xdc_Char)0x2d,  /* [6041] */
    (xdc_Char)0x20,  /* [6042] */
    (xdc_Char)0x63,  /* [6043] */
    (xdc_Char)0x72,  /* [6044] */
    (xdc_Char)0x65,  /* [6045] */
    (xdc_Char)0x61,  /* [6046] */
    (xdc_Char)0x74,  /* [6047] */
    (xdc_Char)0x65,  /* [6048] */
    (xdc_Char)0x3a,  /* [6049] */
    (xdc_Char)0x20,  /* [6050] */
    (xdc_Char)0x25,  /* [6051] */
    (xdc_Char)0x70,  /* [6052] */
    (xdc_Char)0x28,  /* [6053] */
    (xdc_Char)0x27,  /* [6054] */
    (xdc_Char)0x25,  /* [6055] */
    (xdc_Char)0x73,  /* [6056] */
    (xdc_Char)0x27,  /* [6057] */
    (xdc_Char)0x29,  /* [6058] */
    (xdc_Char)0x0,  /* [6059] */
    (xdc_Char)0x2d,  /* [6060] */
    (xdc_Char)0x2d,  /* [6061] */
    (xdc_Char)0x3e,  /* [6062] */
    (xdc_Char)0x20,  /* [6063] */
    (xdc_Char)0x64,  /* [6064] */
    (xdc_Char)0x65,  /* [6065] */
    (xdc_Char)0x73,  /* [6066] */
    (xdc_Char)0x74,  /* [6067] */
    (xdc_Char)0x72,  /* [6068] */
    (xdc_Char)0x75,  /* [6069] */
    (xdc_Char)0x63,  /* [6070] */
    (xdc_Char)0x74,  /* [6071] */
    (xdc_Char)0x3a,  /* [6072] */
    (xdc_Char)0x20,  /* [6073] */
    (xdc_Char)0x28,  /* [6074] */
    (xdc_Char)0x25,  /* [6075] */
    (xdc_Char)0x70,  /* [6076] */
    (xdc_Char)0x29,  /* [6077] */
    (xdc_Char)0x0,  /* [6078] */
    (xdc_Char)0x2d,  /* [6079] */
    (xdc_Char)0x2d,  /* [6080] */
    (xdc_Char)0x3e,  /* [6081] */
    (xdc_Char)0x20,  /* [6082] */
    (xdc_Char)0x64,  /* [6083] */
    (xdc_Char)0x65,  /* [6084] */
    (xdc_Char)0x6c,  /* [6085] */
    (xdc_Char)0x65,  /* [6086] */
    (xdc_Char)0x74,  /* [6087] */
    (xdc_Char)0x65,  /* [6088] */
    (xdc_Char)0x3a,  /* [6089] */
    (xdc_Char)0x20,  /* [6090] */
    (xdc_Char)0x28,  /* [6091] */
    (xdc_Char)0x25,  /* [6092] */
    (xdc_Char)0x70,  /* [6093] */
    (xdc_Char)0x29,  /* [6094] */
    (xdc_Char)0x0,  /* [6095] */
    (xdc_Char)0x45,  /* [6096] */
    (xdc_Char)0x52,  /* [6097] */
    (xdc_Char)0x52,  /* [6098] */
    (xdc_Char)0x4f,  /* [6099] */
    (xdc_Char)0x52,  /* [6100] */
    (xdc_Char)0x3a,  /* [6101] */
    (xdc_Char)0x20,  /* [6102] */
    (xdc_Char)0x25,  /* [6103] */
    (xdc_Char)0x24,  /* [6104] */
    (xdc_Char)0x46,  /* [6105] */
    (xdc_Char)0x25,  /* [6106] */
    (xdc_Char)0x24,  /* [6107] */
    (xdc_Char)0x53,  /* [6108] */
    (xdc_Char)0x0,  /* [6109] */
    (xdc_Char)0x57,  /* [6110] */
    (xdc_Char)0x41,  /* [6111] */
    (xdc_Char)0x52,  /* [6112] */
    (xdc_Char)0x4e,  /* [6113] */
    (xdc_Char)0x49,  /* [6114] */
    (xdc_Char)0x4e,  /* [6115] */
    (xdc_Char)0x47,  /* [6116] */
    (xdc_Char)0x3a,  /* [6117] */
    (xdc_Char)0x20,  /* [6118] */
    (xdc_Char)0x25,  /* [6119] */
    (xdc_Char)0x24,  /* [6120] */
    (xdc_Char)0x46,  /* [6121] */
    (xdc_Char)0x25,  /* [6122] */
    (xdc_Char)0x24,  /* [6123] */
    (xdc_Char)0x53,  /* [6124] */
    (xdc_Char)0x0,  /* [6125] */
    (xdc_Char)0x25,  /* [6126] */
    (xdc_Char)0x24,  /* [6127] */
    (xdc_Char)0x46,  /* [6128] */
    (xdc_Char)0x25,  /* [6129] */
    (xdc_Char)0x24,  /* [6130] */
    (xdc_Char)0x53,  /* [6131] */
    (xdc_Char)0x0,  /* [6132] */
    (xdc_Char)0x53,  /* [6133] */
    (xdc_Char)0x74,  /* [6134] */
    (xdc_Char)0x61,  /* [6135] */
    (xdc_Char)0x72,  /* [6136] */
    (xdc_Char)0x74,  /* [6137] */
    (xdc_Char)0x3a,  /* [6138] */
    (xdc_Char)0x20,  /* [6139] */
    (xdc_Char)0x25,  /* [6140] */
    (xdc_Char)0x24,  /* [6141] */
    (xdc_Char)0x53,  /* [6142] */
    (xdc_Char)0x0,  /* [6143] */
    (xdc_Char)0x53,  /* [6144] */
    (xdc_Char)0x74,  /* [6145] */
    (xdc_Char)0x6f,  /* [6146] */
    (xdc_Char)0x70,  /* [6147] */
    (xdc_Char)0x3a,  /* [6148] */
    (xdc_Char)0x20,  /* [6149] */
    (xdc_Char)0x25,  /* [6150] */
    (xdc_Char)0x24,  /* [6151] */
    (xdc_Char)0x53,  /* [6152] */
    (xdc_Char)0x0,  /* [6153] */
    (xdc_Char)0x53,  /* [6154] */
    (xdc_Char)0x74,  /* [6155] */
    (xdc_Char)0x61,  /* [6156] */
    (xdc_Char)0x72,  /* [6157] */
    (xdc_Char)0x74,  /* [6158] */
    (xdc_Char)0x49,  /* [6159] */
    (xdc_Char)0x6e,  /* [6160] */
    (xdc_Char)0x73,  /* [6161] */
    (xdc_Char)0x74,  /* [6162] */
    (xdc_Char)0x61,  /* [6163] */
    (xdc_Char)0x6e,  /* [6164] */
    (xdc_Char)0x63,  /* [6165] */
    (xdc_Char)0x65,  /* [6166] */
    (xdc_Char)0x3a,  /* [6167] */
    (xdc_Char)0x20,  /* [6168] */
    (xdc_Char)0x25,  /* [6169] */
    (xdc_Char)0x24,  /* [6170] */
    (xdc_Char)0x53,  /* [6171] */
    (xdc_Char)0x0,  /* [6172] */
    (xdc_Char)0x53,  /* [6173] */
    (xdc_Char)0x74,  /* [6174] */
    (xdc_Char)0x6f,  /* [6175] */
    (xdc_Char)0x70,  /* [6176] */
    (xdc_Char)0x49,  /* [6177] */
    (xdc_Char)0x6e,  /* [6178] */
    (xdc_Char)0x73,  /* [6179] */
    (xdc_Char)0x74,  /* [6180] */
    (xdc_Char)0x61,  /* [6181] */
    (xdc_Char)0x6e,  /* [6182] */
    (xdc_Char)0x63,  /* [6183] */
    (xdc_Char)0x65,  /* [6184] */
    (xdc_Char)0x3a,  /* [6185] */
    (xdc_Char)0x20,  /* [6186] */
    (xdc_Char)0x25,  /* [6187] */
    (xdc_Char)0x24,  /* [6188] */
    (xdc_Char)0x53,  /* [6189] */
    (xdc_Char)0x0,  /* [6190] */
    (xdc_Char)0x4c,  /* [6191] */
    (xdc_Char)0x4d,  /* [6192] */
    (xdc_Char)0x5f,  /* [6193] */
    (xdc_Char)0x62,  /* [6194] */
    (xdc_Char)0x65,  /* [6195] */
    (xdc_Char)0x67,  /* [6196] */
    (xdc_Char)0x69,  /* [6197] */
    (xdc_Char)0x6e,  /* [6198] */
    (xdc_Char)0x3a,  /* [6199] */
    (xdc_Char)0x20,  /* [6200] */
    (xdc_Char)0x68,  /* [6201] */
    (xdc_Char)0x77,  /* [6202] */
    (xdc_Char)0x69,  /* [6203] */
    (xdc_Char)0x3a,  /* [6204] */
    (xdc_Char)0x20,  /* [6205] */
    (xdc_Char)0x30,  /* [6206] */
    (xdc_Char)0x78,  /* [6207] */
    (xdc_Char)0x25,  /* [6208] */
    (xdc_Char)0x78,  /* [6209] */
    (xdc_Char)0x2c,  /* [6210] */
    (xdc_Char)0x20,  /* [6211] */
    (xdc_Char)0x66,  /* [6212] */
    (xdc_Char)0x75,  /* [6213] */
    (xdc_Char)0x6e,  /* [6214] */
    (xdc_Char)0x63,  /* [6215] */
    (xdc_Char)0x3a,  /* [6216] */
    (xdc_Char)0x20,  /* [6217] */
    (xdc_Char)0x30,  /* [6218] */
    (xdc_Char)0x78,  /* [6219] */
    (xdc_Char)0x25,  /* [6220] */
    (xdc_Char)0x78,  /* [6221] */
    (xdc_Char)0x2c,  /* [6222] */
    (xdc_Char)0x20,  /* [6223] */
    (xdc_Char)0x70,  /* [6224] */
    (xdc_Char)0x72,  /* [6225] */
    (xdc_Char)0x65,  /* [6226] */
    (xdc_Char)0x54,  /* [6227] */
    (xdc_Char)0x68,  /* [6228] */
    (xdc_Char)0x72,  /* [6229] */
    (xdc_Char)0x65,  /* [6230] */
    (xdc_Char)0x61,  /* [6231] */
    (xdc_Char)0x64,  /* [6232] */
    (xdc_Char)0x3a,  /* [6233] */
    (xdc_Char)0x20,  /* [6234] */
    (xdc_Char)0x25,  /* [6235] */
    (xdc_Char)0x64,  /* [6236] */
    (xdc_Char)0x2c,  /* [6237] */
    (xdc_Char)0x20,  /* [6238] */
    (xdc_Char)0x69,  /* [6239] */
    (xdc_Char)0x6e,  /* [6240] */
    (xdc_Char)0x74,  /* [6241] */
    (xdc_Char)0x4e,  /* [6242] */
    (xdc_Char)0x75,  /* [6243] */
    (xdc_Char)0x6d,  /* [6244] */
    (xdc_Char)0x3a,  /* [6245] */
    (xdc_Char)0x20,  /* [6246] */
    (xdc_Char)0x25,  /* [6247] */
    (xdc_Char)0x64,  /* [6248] */
    (xdc_Char)0x2c,  /* [6249] */
    (xdc_Char)0x20,  /* [6250] */
    (xdc_Char)0x69,  /* [6251] */
    (xdc_Char)0x72,  /* [6252] */
    (xdc_Char)0x70,  /* [6253] */
    (xdc_Char)0x3a,  /* [6254] */
    (xdc_Char)0x20,  /* [6255] */
    (xdc_Char)0x30,  /* [6256] */
    (xdc_Char)0x78,  /* [6257] */
    (xdc_Char)0x25,  /* [6258] */
    (xdc_Char)0x78,  /* [6259] */
    (xdc_Char)0x0,  /* [6260] */
    (xdc_Char)0x4c,  /* [6261] */
    (xdc_Char)0x44,  /* [6262] */
    (xdc_Char)0x5f,  /* [6263] */
    (xdc_Char)0x65,  /* [6264] */
    (xdc_Char)0x6e,  /* [6265] */
    (xdc_Char)0x64,  /* [6266] */
    (xdc_Char)0x3a,  /* [6267] */
    (xdc_Char)0x20,  /* [6268] */
    (xdc_Char)0x68,  /* [6269] */
    (xdc_Char)0x77,  /* [6270] */
    (xdc_Char)0x69,  /* [6271] */
    (xdc_Char)0x3a,  /* [6272] */
    (xdc_Char)0x20,  /* [6273] */
    (xdc_Char)0x30,  /* [6274] */
    (xdc_Char)0x78,  /* [6275] */
    (xdc_Char)0x25,  /* [6276] */
    (xdc_Char)0x78,  /* [6277] */
    (xdc_Char)0x0,  /* [6278] */
    (xdc_Char)0x4c,  /* [6279] */
    (xdc_Char)0x57,  /* [6280] */
    (xdc_Char)0x5f,  /* [6281] */
    (xdc_Char)0x64,  /* [6282] */
    (xdc_Char)0x65,  /* [6283] */
    (xdc_Char)0x6c,  /* [6284] */
    (xdc_Char)0x61,  /* [6285] */
    (xdc_Char)0x79,  /* [6286] */
    (xdc_Char)0x65,  /* [6287] */
    (xdc_Char)0x64,  /* [6288] */
    (xdc_Char)0x3a,  /* [6289] */
    (xdc_Char)0x20,  /* [6290] */
    (xdc_Char)0x64,  /* [6291] */
    (xdc_Char)0x65,  /* [6292] */
    (xdc_Char)0x6c,  /* [6293] */
    (xdc_Char)0x61,  /* [6294] */
    (xdc_Char)0x79,  /* [6295] */
    (xdc_Char)0x3a,  /* [6296] */
    (xdc_Char)0x20,  /* [6297] */
    (xdc_Char)0x25,  /* [6298] */
    (xdc_Char)0x64,  /* [6299] */
    (xdc_Char)0x0,  /* [6300] */
    (xdc_Char)0x4c,  /* [6301] */
    (xdc_Char)0x4d,  /* [6302] */
    (xdc_Char)0x5f,  /* [6303] */
    (xdc_Char)0x74,  /* [6304] */
    (xdc_Char)0x69,  /* [6305] */
    (xdc_Char)0x63,  /* [6306] */
    (xdc_Char)0x6b,  /* [6307] */
    (xdc_Char)0x3a,  /* [6308] */
    (xdc_Char)0x20,  /* [6309] */
    (xdc_Char)0x74,  /* [6310] */
    (xdc_Char)0x69,  /* [6311] */
    (xdc_Char)0x63,  /* [6312] */
    (xdc_Char)0x6b,  /* [6313] */
    (xdc_Char)0x3a,  /* [6314] */
    (xdc_Char)0x20,  /* [6315] */
    (xdc_Char)0x25,  /* [6316] */
    (xdc_Char)0x64,  /* [6317] */
    (xdc_Char)0x0,  /* [6318] */
    (xdc_Char)0x4c,  /* [6319] */
    (xdc_Char)0x4d,  /* [6320] */
    (xdc_Char)0x5f,  /* [6321] */
    (xdc_Char)0x62,  /* [6322] */
    (xdc_Char)0x65,  /* [6323] */
    (xdc_Char)0x67,  /* [6324] */
    (xdc_Char)0x69,  /* [6325] */
    (xdc_Char)0x6e,  /* [6326] */
    (xdc_Char)0x3a,  /* [6327] */
    (xdc_Char)0x20,  /* [6328] */
    (xdc_Char)0x63,  /* [6329] */
    (xdc_Char)0x6c,  /* [6330] */
    (xdc_Char)0x6b,  /* [6331] */
    (xdc_Char)0x3a,  /* [6332] */
    (xdc_Char)0x20,  /* [6333] */
    (xdc_Char)0x30,  /* [6334] */
    (xdc_Char)0x78,  /* [6335] */
    (xdc_Char)0x25,  /* [6336] */
    (xdc_Char)0x78,  /* [6337] */
    (xdc_Char)0x2c,  /* [6338] */
    (xdc_Char)0x20,  /* [6339] */
    (xdc_Char)0x66,  /* [6340] */
    (xdc_Char)0x75,  /* [6341] */
    (xdc_Char)0x6e,  /* [6342] */
    (xdc_Char)0x63,  /* [6343] */
    (xdc_Char)0x3a,  /* [6344] */
    (xdc_Char)0x20,  /* [6345] */
    (xdc_Char)0x30,  /* [6346] */
    (xdc_Char)0x78,  /* [6347] */
    (xdc_Char)0x25,  /* [6348] */
    (xdc_Char)0x78,  /* [6349] */
    (xdc_Char)0x0,  /* [6350] */
    (xdc_Char)0x4c,  /* [6351] */
    (xdc_Char)0x4d,  /* [6352] */
    (xdc_Char)0x5f,  /* [6353] */
    (xdc_Char)0x70,  /* [6354] */
    (xdc_Char)0x6f,  /* [6355] */
    (xdc_Char)0x73,  /* [6356] */
    (xdc_Char)0x74,  /* [6357] */
    (xdc_Char)0x3a,  /* [6358] */
    (xdc_Char)0x20,  /* [6359] */
    (xdc_Char)0x73,  /* [6360] */
    (xdc_Char)0x65,  /* [6361] */
    (xdc_Char)0x6d,  /* [6362] */
    (xdc_Char)0x3a,  /* [6363] */
    (xdc_Char)0x20,  /* [6364] */
    (xdc_Char)0x30,  /* [6365] */
    (xdc_Char)0x78,  /* [6366] */
    (xdc_Char)0x25,  /* [6367] */
    (xdc_Char)0x78,  /* [6368] */
    (xdc_Char)0x2c,  /* [6369] */
    (xdc_Char)0x20,  /* [6370] */
    (xdc_Char)0x63,  /* [6371] */
    (xdc_Char)0x6f,  /* [6372] */
    (xdc_Char)0x75,  /* [6373] */
    (xdc_Char)0x6e,  /* [6374] */
    (xdc_Char)0x74,  /* [6375] */
    (xdc_Char)0x3a,  /* [6376] */
    (xdc_Char)0x20,  /* [6377] */
    (xdc_Char)0x25,  /* [6378] */
    (xdc_Char)0x64,  /* [6379] */
    (xdc_Char)0x0,  /* [6380] */
    (xdc_Char)0x4c,  /* [6381] */
    (xdc_Char)0x4d,  /* [6382] */
    (xdc_Char)0x5f,  /* [6383] */
    (xdc_Char)0x70,  /* [6384] */
    (xdc_Char)0x65,  /* [6385] */
    (xdc_Char)0x6e,  /* [6386] */
    (xdc_Char)0x64,  /* [6387] */
    (xdc_Char)0x3a,  /* [6388] */
    (xdc_Char)0x20,  /* [6389] */
    (xdc_Char)0x73,  /* [6390] */
    (xdc_Char)0x65,  /* [6391] */
    (xdc_Char)0x6d,  /* [6392] */
    (xdc_Char)0x3a,  /* [6393] */
    (xdc_Char)0x20,  /* [6394] */
    (xdc_Char)0x30,  /* [6395] */
    (xdc_Char)0x78,  /* [6396] */
    (xdc_Char)0x25,  /* [6397] */
    (xdc_Char)0x78,  /* [6398] */
    (xdc_Char)0x2c,  /* [6399] */
    (xdc_Char)0x20,  /* [6400] */
    (xdc_Char)0x63,  /* [6401] */
    (xdc_Char)0x6f,  /* [6402] */
    (xdc_Char)0x75,  /* [6403] */
    (xdc_Char)0x6e,  /* [6404] */
    (xdc_Char)0x74,  /* [6405] */
    (xdc_Char)0x3a,  /* [6406] */
    (xdc_Char)0x20,  /* [6407] */
    (xdc_Char)0x25,  /* [6408] */
    (xdc_Char)0x64,  /* [6409] */
    (xdc_Char)0x2c,  /* [6410] */
    (xdc_Char)0x20,  /* [6411] */
    (xdc_Char)0x74,  /* [6412] */
    (xdc_Char)0x69,  /* [6413] */
    (xdc_Char)0x6d,  /* [6414] */
    (xdc_Char)0x65,  /* [6415] */
    (xdc_Char)0x6f,  /* [6416] */
    (xdc_Char)0x75,  /* [6417] */
    (xdc_Char)0x74,  /* [6418] */
    (xdc_Char)0x3a,  /* [6419] */
    (xdc_Char)0x20,  /* [6420] */
    (xdc_Char)0x25,  /* [6421] */
    (xdc_Char)0x64,  /* [6422] */
    (xdc_Char)0x0,  /* [6423] */
    (xdc_Char)0x4c,  /* [6424] */
    (xdc_Char)0x4d,  /* [6425] */
    (xdc_Char)0x5f,  /* [6426] */
    (xdc_Char)0x62,  /* [6427] */
    (xdc_Char)0x65,  /* [6428] */
    (xdc_Char)0x67,  /* [6429] */
    (xdc_Char)0x69,  /* [6430] */
    (xdc_Char)0x6e,  /* [6431] */
    (xdc_Char)0x3a,  /* [6432] */
    (xdc_Char)0x20,  /* [6433] */
    (xdc_Char)0x73,  /* [6434] */
    (xdc_Char)0x77,  /* [6435] */
    (xdc_Char)0x69,  /* [6436] */
    (xdc_Char)0x3a,  /* [6437] */
    (xdc_Char)0x20,  /* [6438] */
    (xdc_Char)0x30,  /* [6439] */
    (xdc_Char)0x78,  /* [6440] */
    (xdc_Char)0x25,  /* [6441] */
    (xdc_Char)0x78,  /* [6442] */
    (xdc_Char)0x2c,  /* [6443] */
    (xdc_Char)0x20,  /* [6444] */
    (xdc_Char)0x66,  /* [6445] */
    (xdc_Char)0x75,  /* [6446] */
    (xdc_Char)0x6e,  /* [6447] */
    (xdc_Char)0x63,  /* [6448] */
    (xdc_Char)0x3a,  /* [6449] */
    (xdc_Char)0x20,  /* [6450] */
    (xdc_Char)0x30,  /* [6451] */
    (xdc_Char)0x78,  /* [6452] */
    (xdc_Char)0x25,  /* [6453] */
    (xdc_Char)0x78,  /* [6454] */
    (xdc_Char)0x2c,  /* [6455] */
    (xdc_Char)0x20,  /* [6456] */
    (xdc_Char)0x70,  /* [6457] */
    (xdc_Char)0x72,  /* [6458] */
    (xdc_Char)0x65,  /* [6459] */
    (xdc_Char)0x54,  /* [6460] */
    (xdc_Char)0x68,  /* [6461] */
    (xdc_Char)0x72,  /* [6462] */
    (xdc_Char)0x65,  /* [6463] */
    (xdc_Char)0x61,  /* [6464] */
    (xdc_Char)0x64,  /* [6465] */
    (xdc_Char)0x3a,  /* [6466] */
    (xdc_Char)0x20,  /* [6467] */
    (xdc_Char)0x25,  /* [6468] */
    (xdc_Char)0x64,  /* [6469] */
    (xdc_Char)0x0,  /* [6470] */
    (xdc_Char)0x4c,  /* [6471] */
    (xdc_Char)0x44,  /* [6472] */
    (xdc_Char)0x5f,  /* [6473] */
    (xdc_Char)0x65,  /* [6474] */
    (xdc_Char)0x6e,  /* [6475] */
    (xdc_Char)0x64,  /* [6476] */
    (xdc_Char)0x3a,  /* [6477] */
    (xdc_Char)0x20,  /* [6478] */
    (xdc_Char)0x73,  /* [6479] */
    (xdc_Char)0x77,  /* [6480] */
    (xdc_Char)0x69,  /* [6481] */
    (xdc_Char)0x3a,  /* [6482] */
    (xdc_Char)0x20,  /* [6483] */
    (xdc_Char)0x30,  /* [6484] */
    (xdc_Char)0x78,  /* [6485] */
    (xdc_Char)0x25,  /* [6486] */
    (xdc_Char)0x78,  /* [6487] */
    (xdc_Char)0x0,  /* [6488] */
    (xdc_Char)0x4c,  /* [6489] */
    (xdc_Char)0x4d,  /* [6490] */
    (xdc_Char)0x5f,  /* [6491] */
    (xdc_Char)0x70,  /* [6492] */
    (xdc_Char)0x6f,  /* [6493] */
    (xdc_Char)0x73,  /* [6494] */
    (xdc_Char)0x74,  /* [6495] */
    (xdc_Char)0x3a,  /* [6496] */
    (xdc_Char)0x20,  /* [6497] */
    (xdc_Char)0x73,  /* [6498] */
    (xdc_Char)0x77,  /* [6499] */
    (xdc_Char)0x69,  /* [6500] */
    (xdc_Char)0x3a,  /* [6501] */
    (xdc_Char)0x20,  /* [6502] */
    (xdc_Char)0x30,  /* [6503] */
    (xdc_Char)0x78,  /* [6504] */
    (xdc_Char)0x25,  /* [6505] */
    (xdc_Char)0x78,  /* [6506] */
    (xdc_Char)0x2c,  /* [6507] */
    (xdc_Char)0x20,  /* [6508] */
    (xdc_Char)0x66,  /* [6509] */
    (xdc_Char)0x75,  /* [6510] */
    (xdc_Char)0x6e,  /* [6511] */
    (xdc_Char)0x63,  /* [6512] */
    (xdc_Char)0x3a,  /* [6513] */
    (xdc_Char)0x20,  /* [6514] */
    (xdc_Char)0x30,  /* [6515] */
    (xdc_Char)0x78,  /* [6516] */
    (xdc_Char)0x25,  /* [6517] */
    (xdc_Char)0x78,  /* [6518] */
    (xdc_Char)0x2c,  /* [6519] */
    (xdc_Char)0x20,  /* [6520] */
    (xdc_Char)0x70,  /* [6521] */
    (xdc_Char)0x72,  /* [6522] */
    (xdc_Char)0x69,  /* [6523] */
    (xdc_Char)0x3a,  /* [6524] */
    (xdc_Char)0x20,  /* [6525] */
    (xdc_Char)0x25,  /* [6526] */
    (xdc_Char)0x64,  /* [6527] */
    (xdc_Char)0x0,  /* [6528] */
    (xdc_Char)0x4c,  /* [6529] */
    (xdc_Char)0x4d,  /* [6530] */
    (xdc_Char)0x5f,  /* [6531] */
    (xdc_Char)0x73,  /* [6532] */
    (xdc_Char)0x77,  /* [6533] */
    (xdc_Char)0x69,  /* [6534] */
    (xdc_Char)0x74,  /* [6535] */
    (xdc_Char)0x63,  /* [6536] */
    (xdc_Char)0x68,  /* [6537] */
    (xdc_Char)0x3a,  /* [6538] */
    (xdc_Char)0x20,  /* [6539] */
    (xdc_Char)0x6f,  /* [6540] */
    (xdc_Char)0x6c,  /* [6541] */
    (xdc_Char)0x64,  /* [6542] */
    (xdc_Char)0x74,  /* [6543] */
    (xdc_Char)0x73,  /* [6544] */
    (xdc_Char)0x6b,  /* [6545] */
    (xdc_Char)0x3a,  /* [6546] */
    (xdc_Char)0x20,  /* [6547] */
    (xdc_Char)0x30,  /* [6548] */
    (xdc_Char)0x78,  /* [6549] */
    (xdc_Char)0x25,  /* [6550] */
    (xdc_Char)0x78,  /* [6551] */
    (xdc_Char)0x2c,  /* [6552] */
    (xdc_Char)0x20,  /* [6553] */
    (xdc_Char)0x6f,  /* [6554] */
    (xdc_Char)0x6c,  /* [6555] */
    (xdc_Char)0x64,  /* [6556] */
    (xdc_Char)0x66,  /* [6557] */
    (xdc_Char)0x75,  /* [6558] */
    (xdc_Char)0x6e,  /* [6559] */
    (xdc_Char)0x63,  /* [6560] */
    (xdc_Char)0x3a,  /* [6561] */
    (xdc_Char)0x20,  /* [6562] */
    (xdc_Char)0x30,  /* [6563] */
    (xdc_Char)0x78,  /* [6564] */
    (xdc_Char)0x25,  /* [6565] */
    (xdc_Char)0x78,  /* [6566] */
    (xdc_Char)0x2c,  /* [6567] */
    (xdc_Char)0x20,  /* [6568] */
    (xdc_Char)0x6e,  /* [6569] */
    (xdc_Char)0x65,  /* [6570] */
    (xdc_Char)0x77,  /* [6571] */
    (xdc_Char)0x74,  /* [6572] */
    (xdc_Char)0x73,  /* [6573] */
    (xdc_Char)0x6b,  /* [6574] */
    (xdc_Char)0x3a,  /* [6575] */
    (xdc_Char)0x20,  /* [6576] */
    (xdc_Char)0x30,  /* [6577] */
    (xdc_Char)0x78,  /* [6578] */
    (xdc_Char)0x25,  /* [6579] */
    (xdc_Char)0x78,  /* [6580] */
    (xdc_Char)0x2c,  /* [6581] */
    (xdc_Char)0x20,  /* [6582] */
    (xdc_Char)0x6e,  /* [6583] */
    (xdc_Char)0x65,  /* [6584] */
    (xdc_Char)0x77,  /* [6585] */
    (xdc_Char)0x66,  /* [6586] */
    (xdc_Char)0x75,  /* [6587] */
    (xdc_Char)0x6e,  /* [6588] */
    (xdc_Char)0x63,  /* [6589] */
    (xdc_Char)0x3a,  /* [6590] */
    (xdc_Char)0x20,  /* [6591] */
    (xdc_Char)0x30,  /* [6592] */
    (xdc_Char)0x78,  /* [6593] */
    (xdc_Char)0x25,  /* [6594] */
    (xdc_Char)0x78,  /* [6595] */
    (xdc_Char)0x0,  /* [6596] */
    (xdc_Char)0x4c,  /* [6597] */
    (xdc_Char)0x4d,  /* [6598] */
    (xdc_Char)0x5f,  /* [6599] */
    (xdc_Char)0x73,  /* [6600] */
    (xdc_Char)0x6c,  /* [6601] */
    (xdc_Char)0x65,  /* [6602] */
    (xdc_Char)0x65,  /* [6603] */
    (xdc_Char)0x70,  /* [6604] */
    (xdc_Char)0x3a,  /* [6605] */
    (xdc_Char)0x20,  /* [6606] */
    (xdc_Char)0x74,  /* [6607] */
    (xdc_Char)0x73,  /* [6608] */
    (xdc_Char)0x6b,  /* [6609] */
    (xdc_Char)0x3a,  /* [6610] */
    (xdc_Char)0x20,  /* [6611] */
    (xdc_Char)0x30,  /* [6612] */
    (xdc_Char)0x78,  /* [6613] */
    (xdc_Char)0x25,  /* [6614] */
    (xdc_Char)0x78,  /* [6615] */
    (xdc_Char)0x2c,  /* [6616] */
    (xdc_Char)0x20,  /* [6617] */
    (xdc_Char)0x66,  /* [6618] */
    (xdc_Char)0x75,  /* [6619] */
    (xdc_Char)0x6e,  /* [6620] */
    (xdc_Char)0x63,  /* [6621] */
    (xdc_Char)0x3a,  /* [6622] */
    (xdc_Char)0x20,  /* [6623] */
    (xdc_Char)0x30,  /* [6624] */
    (xdc_Char)0x78,  /* [6625] */
    (xdc_Char)0x25,  /* [6626] */
    (xdc_Char)0x78,  /* [6627] */
    (xdc_Char)0x2c,  /* [6628] */
    (xdc_Char)0x20,  /* [6629] */
    (xdc_Char)0x74,  /* [6630] */
    (xdc_Char)0x69,  /* [6631] */
    (xdc_Char)0x6d,  /* [6632] */
    (xdc_Char)0x65,  /* [6633] */
    (xdc_Char)0x6f,  /* [6634] */
    (xdc_Char)0x75,  /* [6635] */
    (xdc_Char)0x74,  /* [6636] */
    (xdc_Char)0x3a,  /* [6637] */
    (xdc_Char)0x20,  /* [6638] */
    (xdc_Char)0x25,  /* [6639] */
    (xdc_Char)0x64,  /* [6640] */
    (xdc_Char)0x0,  /* [6641] */
    (xdc_Char)0x4c,  /* [6642] */
    (xdc_Char)0x44,  /* [6643] */
    (xdc_Char)0x5f,  /* [6644] */
    (xdc_Char)0x72,  /* [6645] */
    (xdc_Char)0x65,  /* [6646] */
    (xdc_Char)0x61,  /* [6647] */
    (xdc_Char)0x64,  /* [6648] */
    (xdc_Char)0x79,  /* [6649] */
    (xdc_Char)0x3a,  /* [6650] */
    (xdc_Char)0x20,  /* [6651] */
    (xdc_Char)0x74,  /* [6652] */
    (xdc_Char)0x73,  /* [6653] */
    (xdc_Char)0x6b,  /* [6654] */
    (xdc_Char)0x3a,  /* [6655] */
    (xdc_Char)0x20,  /* [6656] */
    (xdc_Char)0x30,  /* [6657] */
    (xdc_Char)0x78,  /* [6658] */
    (xdc_Char)0x25,  /* [6659] */
    (xdc_Char)0x78,  /* [6660] */
    (xdc_Char)0x2c,  /* [6661] */
    (xdc_Char)0x20,  /* [6662] */
    (xdc_Char)0x66,  /* [6663] */
    (xdc_Char)0x75,  /* [6664] */
    (xdc_Char)0x6e,  /* [6665] */
    (xdc_Char)0x63,  /* [6666] */
    (xdc_Char)0x3a,  /* [6667] */
    (xdc_Char)0x20,  /* [6668] */
    (xdc_Char)0x30,  /* [6669] */
    (xdc_Char)0x78,  /* [6670] */
    (xdc_Char)0x25,  /* [6671] */
    (xdc_Char)0x78,  /* [6672] */
    (xdc_Char)0x2c,  /* [6673] */
    (xdc_Char)0x20,  /* [6674] */
    (xdc_Char)0x70,  /* [6675] */
    (xdc_Char)0x72,  /* [6676] */
    (xdc_Char)0x69,  /* [6677] */
    (xdc_Char)0x3a,  /* [6678] */
    (xdc_Char)0x20,  /* [6679] */
    (xdc_Char)0x25,  /* [6680] */
    (xdc_Char)0x64,  /* [6681] */
    (xdc_Char)0x0,  /* [6682] */
    (xdc_Char)0x4c,  /* [6683] */
    (xdc_Char)0x44,  /* [6684] */
    (xdc_Char)0x5f,  /* [6685] */
    (xdc_Char)0x62,  /* [6686] */
    (xdc_Char)0x6c,  /* [6687] */
    (xdc_Char)0x6f,  /* [6688] */
    (xdc_Char)0x63,  /* [6689] */
    (xdc_Char)0x6b,  /* [6690] */
    (xdc_Char)0x3a,  /* [6691] */
    (xdc_Char)0x20,  /* [6692] */
    (xdc_Char)0x74,  /* [6693] */
    (xdc_Char)0x73,  /* [6694] */
    (xdc_Char)0x6b,  /* [6695] */
    (xdc_Char)0x3a,  /* [6696] */
    (xdc_Char)0x20,  /* [6697] */
    (xdc_Char)0x30,  /* [6698] */
    (xdc_Char)0x78,  /* [6699] */
    (xdc_Char)0x25,  /* [6700] */
    (xdc_Char)0x78,  /* [6701] */
    (xdc_Char)0x2c,  /* [6702] */
    (xdc_Char)0x20,  /* [6703] */
    (xdc_Char)0x66,  /* [6704] */
    (xdc_Char)0x75,  /* [6705] */
    (xdc_Char)0x6e,  /* [6706] */
    (xdc_Char)0x63,  /* [6707] */
    (xdc_Char)0x3a,  /* [6708] */
    (xdc_Char)0x20,  /* [6709] */
    (xdc_Char)0x30,  /* [6710] */
    (xdc_Char)0x78,  /* [6711] */
    (xdc_Char)0x25,  /* [6712] */
    (xdc_Char)0x78,  /* [6713] */
    (xdc_Char)0x0,  /* [6714] */
    (xdc_Char)0x4c,  /* [6715] */
    (xdc_Char)0x4d,  /* [6716] */
    (xdc_Char)0x5f,  /* [6717] */
    (xdc_Char)0x79,  /* [6718] */
    (xdc_Char)0x69,  /* [6719] */
    (xdc_Char)0x65,  /* [6720] */
    (xdc_Char)0x6c,  /* [6721] */
    (xdc_Char)0x64,  /* [6722] */
    (xdc_Char)0x3a,  /* [6723] */
    (xdc_Char)0x20,  /* [6724] */
    (xdc_Char)0x74,  /* [6725] */
    (xdc_Char)0x73,  /* [6726] */
    (xdc_Char)0x6b,  /* [6727] */
    (xdc_Char)0x3a,  /* [6728] */
    (xdc_Char)0x20,  /* [6729] */
    (xdc_Char)0x30,  /* [6730] */
    (xdc_Char)0x78,  /* [6731] */
    (xdc_Char)0x25,  /* [6732] */
    (xdc_Char)0x78,  /* [6733] */
    (xdc_Char)0x2c,  /* [6734] */
    (xdc_Char)0x20,  /* [6735] */
    (xdc_Char)0x66,  /* [6736] */
    (xdc_Char)0x75,  /* [6737] */
    (xdc_Char)0x6e,  /* [6738] */
    (xdc_Char)0x63,  /* [6739] */
    (xdc_Char)0x3a,  /* [6740] */
    (xdc_Char)0x20,  /* [6741] */
    (xdc_Char)0x30,  /* [6742] */
    (xdc_Char)0x78,  /* [6743] */
    (xdc_Char)0x25,  /* [6744] */
    (xdc_Char)0x78,  /* [6745] */
    (xdc_Char)0x2c,  /* [6746] */
    (xdc_Char)0x20,  /* [6747] */
    (xdc_Char)0x63,  /* [6748] */
    (xdc_Char)0x75,  /* [6749] */
    (xdc_Char)0x72,  /* [6750] */
    (xdc_Char)0x72,  /* [6751] */
    (xdc_Char)0x54,  /* [6752] */
    (xdc_Char)0x68,  /* [6753] */
    (xdc_Char)0x72,  /* [6754] */
    (xdc_Char)0x65,  /* [6755] */
    (xdc_Char)0x61,  /* [6756] */
    (xdc_Char)0x64,  /* [6757] */
    (xdc_Char)0x3a,  /* [6758] */
    (xdc_Char)0x20,  /* [6759] */
    (xdc_Char)0x25,  /* [6760] */
    (xdc_Char)0x64,  /* [6761] */
    (xdc_Char)0x0,  /* [6762] */
    (xdc_Char)0x4c,  /* [6763] */
    (xdc_Char)0x4d,  /* [6764] */
    (xdc_Char)0x5f,  /* [6765] */
    (xdc_Char)0x73,  /* [6766] */
    (xdc_Char)0x65,  /* [6767] */
    (xdc_Char)0x74,  /* [6768] */
    (xdc_Char)0x50,  /* [6769] */
    (xdc_Char)0x72,  /* [6770] */
    (xdc_Char)0x69,  /* [6771] */
    (xdc_Char)0x3a,  /* [6772] */
    (xdc_Char)0x20,  /* [6773] */
    (xdc_Char)0x74,  /* [6774] */
    (xdc_Char)0x73,  /* [6775] */
    (xdc_Char)0x6b,  /* [6776] */
    (xdc_Char)0x3a,  /* [6777] */
    (xdc_Char)0x20,  /* [6778] */
    (xdc_Char)0x30,  /* [6779] */
    (xdc_Char)0x78,  /* [6780] */
    (xdc_Char)0x25,  /* [6781] */
    (xdc_Char)0x78,  /* [6782] */
    (xdc_Char)0x2c,  /* [6783] */
    (xdc_Char)0x20,  /* [6784] */
    (xdc_Char)0x66,  /* [6785] */
    (xdc_Char)0x75,  /* [6786] */
    (xdc_Char)0x6e,  /* [6787] */
    (xdc_Char)0x63,  /* [6788] */
    (xdc_Char)0x3a,  /* [6789] */
    (xdc_Char)0x20,  /* [6790] */
    (xdc_Char)0x30,  /* [6791] */
    (xdc_Char)0x78,  /* [6792] */
    (xdc_Char)0x25,  /* [6793] */
    (xdc_Char)0x78,  /* [6794] */
    (xdc_Char)0x2c,  /* [6795] */
    (xdc_Char)0x20,  /* [6796] */
    (xdc_Char)0x6f,  /* [6797] */
    (xdc_Char)0x6c,  /* [6798] */
    (xdc_Char)0x64,  /* [6799] */
    (xdc_Char)0x50,  /* [6800] */
    (xdc_Char)0x72,  /* [6801] */
    (xdc_Char)0x69,  /* [6802] */
    (xdc_Char)0x3a,  /* [6803] */
    (xdc_Char)0x20,  /* [6804] */
    (xdc_Char)0x25,  /* [6805] */
    (xdc_Char)0x64,  /* [6806] */
    (xdc_Char)0x2c,  /* [6807] */
    (xdc_Char)0x20,  /* [6808] */
    (xdc_Char)0x6e,  /* [6809] */
    (xdc_Char)0x65,  /* [6810] */
    (xdc_Char)0x77,  /* [6811] */
    (xdc_Char)0x50,  /* [6812] */
    (xdc_Char)0x72,  /* [6813] */
    (xdc_Char)0x69,  /* [6814] */
    (xdc_Char)0x20,  /* [6815] */
    (xdc_Char)0x25,  /* [6816] */
    (xdc_Char)0x64,  /* [6817] */
    (xdc_Char)0x0,  /* [6818] */
    (xdc_Char)0x4c,  /* [6819] */
    (xdc_Char)0x44,  /* [6820] */
    (xdc_Char)0x5f,  /* [6821] */
    (xdc_Char)0x65,  /* [6822] */
    (xdc_Char)0x78,  /* [6823] */
    (xdc_Char)0x69,  /* [6824] */
    (xdc_Char)0x74,  /* [6825] */
    (xdc_Char)0x3a,  /* [6826] */
    (xdc_Char)0x20,  /* [6827] */
    (xdc_Char)0x74,  /* [6828] */
    (xdc_Char)0x73,  /* [6829] */
    (xdc_Char)0x6b,  /* [6830] */
    (xdc_Char)0x3a,  /* [6831] */
    (xdc_Char)0x20,  /* [6832] */
    (xdc_Char)0x30,  /* [6833] */
    (xdc_Char)0x78,  /* [6834] */
    (xdc_Char)0x25,  /* [6835] */
    (xdc_Char)0x78,  /* [6836] */
    (xdc_Char)0x2c,  /* [6837] */
    (xdc_Char)0x20,  /* [6838] */
    (xdc_Char)0x66,  /* [6839] */
    (xdc_Char)0x75,  /* [6840] */
    (xdc_Char)0x6e,  /* [6841] */
    (xdc_Char)0x63,  /* [6842] */
    (xdc_Char)0x3a,  /* [6843] */
    (xdc_Char)0x20,  /* [6844] */
    (xdc_Char)0x30,  /* [6845] */
    (xdc_Char)0x78,  /* [6846] */
    (xdc_Char)0x25,  /* [6847] */
    (xdc_Char)0x78,  /* [6848] */
    (xdc_Char)0x0,  /* [6849] */
    (xdc_Char)0x4c,  /* [6850] */
    (xdc_Char)0x4d,  /* [6851] */
    (xdc_Char)0x5f,  /* [6852] */
    (xdc_Char)0x73,  /* [6853] */
    (xdc_Char)0x65,  /* [6854] */
    (xdc_Char)0x74,  /* [6855] */
    (xdc_Char)0x41,  /* [6856] */
    (xdc_Char)0x66,  /* [6857] */
    (xdc_Char)0x66,  /* [6858] */
    (xdc_Char)0x69,  /* [6859] */
    (xdc_Char)0x6e,  /* [6860] */
    (xdc_Char)0x69,  /* [6861] */
    (xdc_Char)0x74,  /* [6862] */
    (xdc_Char)0x79,  /* [6863] */
    (xdc_Char)0x3a,  /* [6864] */
    (xdc_Char)0x20,  /* [6865] */
    (xdc_Char)0x74,  /* [6866] */
    (xdc_Char)0x73,  /* [6867] */
    (xdc_Char)0x6b,  /* [6868] */
    (xdc_Char)0x3a,  /* [6869] */
    (xdc_Char)0x20,  /* [6870] */
    (xdc_Char)0x30,  /* [6871] */
    (xdc_Char)0x78,  /* [6872] */
    (xdc_Char)0x25,  /* [6873] */
    (xdc_Char)0x78,  /* [6874] */
    (xdc_Char)0x2c,  /* [6875] */
    (xdc_Char)0x20,  /* [6876] */
    (xdc_Char)0x66,  /* [6877] */
    (xdc_Char)0x75,  /* [6878] */
    (xdc_Char)0x6e,  /* [6879] */
    (xdc_Char)0x63,  /* [6880] */
    (xdc_Char)0x3a,  /* [6881] */
    (xdc_Char)0x20,  /* [6882] */
    (xdc_Char)0x30,  /* [6883] */
    (xdc_Char)0x78,  /* [6884] */
    (xdc_Char)0x25,  /* [6885] */
    (xdc_Char)0x78,  /* [6886] */
    (xdc_Char)0x2c,  /* [6887] */
    (xdc_Char)0x20,  /* [6888] */
    (xdc_Char)0x6f,  /* [6889] */
    (xdc_Char)0x6c,  /* [6890] */
    (xdc_Char)0x64,  /* [6891] */
    (xdc_Char)0x43,  /* [6892] */
    (xdc_Char)0x6f,  /* [6893] */
    (xdc_Char)0x72,  /* [6894] */
    (xdc_Char)0x65,  /* [6895] */
    (xdc_Char)0x3a,  /* [6896] */
    (xdc_Char)0x20,  /* [6897] */
    (xdc_Char)0x25,  /* [6898] */
    (xdc_Char)0x64,  /* [6899] */
    (xdc_Char)0x2c,  /* [6900] */
    (xdc_Char)0x20,  /* [6901] */
    (xdc_Char)0x6f,  /* [6902] */
    (xdc_Char)0x6c,  /* [6903] */
    (xdc_Char)0x64,  /* [6904] */
    (xdc_Char)0x41,  /* [6905] */
    (xdc_Char)0x66,  /* [6906] */
    (xdc_Char)0x66,  /* [6907] */
    (xdc_Char)0x69,  /* [6908] */
    (xdc_Char)0x6e,  /* [6909] */
    (xdc_Char)0x69,  /* [6910] */
    (xdc_Char)0x74,  /* [6911] */
    (xdc_Char)0x79,  /* [6912] */
    (xdc_Char)0x20,  /* [6913] */
    (xdc_Char)0x25,  /* [6914] */
    (xdc_Char)0x64,  /* [6915] */
    (xdc_Char)0x2c,  /* [6916] */
    (xdc_Char)0x20,  /* [6917] */
    (xdc_Char)0x6e,  /* [6918] */
    (xdc_Char)0x65,  /* [6919] */
    (xdc_Char)0x77,  /* [6920] */
    (xdc_Char)0x41,  /* [6921] */
    (xdc_Char)0x66,  /* [6922] */
    (xdc_Char)0x66,  /* [6923] */
    (xdc_Char)0x69,  /* [6924] */
    (xdc_Char)0x6e,  /* [6925] */
    (xdc_Char)0x69,  /* [6926] */
    (xdc_Char)0x74,  /* [6927] */
    (xdc_Char)0x79,  /* [6928] */
    (xdc_Char)0x20,  /* [6929] */
    (xdc_Char)0x25,  /* [6930] */
    (xdc_Char)0x64,  /* [6931] */
    (xdc_Char)0x0,  /* [6932] */
    (xdc_Char)0x4c,  /* [6933] */
    (xdc_Char)0x44,  /* [6934] */
    (xdc_Char)0x5f,  /* [6935] */
    (xdc_Char)0x73,  /* [6936] */
    (xdc_Char)0x63,  /* [6937] */
    (xdc_Char)0x68,  /* [6938] */
    (xdc_Char)0x65,  /* [6939] */
    (xdc_Char)0x64,  /* [6940] */
    (xdc_Char)0x75,  /* [6941] */
    (xdc_Char)0x6c,  /* [6942] */
    (xdc_Char)0x65,  /* [6943] */
    (xdc_Char)0x3a,  /* [6944] */
    (xdc_Char)0x20,  /* [6945] */
    (xdc_Char)0x63,  /* [6946] */
    (xdc_Char)0x6f,  /* [6947] */
    (xdc_Char)0x72,  /* [6948] */
    (xdc_Char)0x65,  /* [6949] */
    (xdc_Char)0x49,  /* [6950] */
    (xdc_Char)0x64,  /* [6951] */
    (xdc_Char)0x3a,  /* [6952] */
    (xdc_Char)0x20,  /* [6953] */
    (xdc_Char)0x25,  /* [6954] */
    (xdc_Char)0x64,  /* [6955] */
    (xdc_Char)0x2c,  /* [6956] */
    (xdc_Char)0x20,  /* [6957] */
    (xdc_Char)0x77,  /* [6958] */
    (xdc_Char)0x6f,  /* [6959] */
    (xdc_Char)0x72,  /* [6960] */
    (xdc_Char)0x6b,  /* [6961] */
    (xdc_Char)0x46,  /* [6962] */
    (xdc_Char)0x6c,  /* [6963] */
    (xdc_Char)0x61,  /* [6964] */
    (xdc_Char)0x67,  /* [6965] */
    (xdc_Char)0x3a,  /* [6966] */
    (xdc_Char)0x20,  /* [6967] */
    (xdc_Char)0x25,  /* [6968] */
    (xdc_Char)0x64,  /* [6969] */
    (xdc_Char)0x2c,  /* [6970] */
    (xdc_Char)0x20,  /* [6971] */
    (xdc_Char)0x63,  /* [6972] */
    (xdc_Char)0x75,  /* [6973] */
    (xdc_Char)0x72,  /* [6974] */
    (xdc_Char)0x53,  /* [6975] */
    (xdc_Char)0x65,  /* [6976] */
    (xdc_Char)0x74,  /* [6977] */
    (xdc_Char)0x4c,  /* [6978] */
    (xdc_Char)0x6f,  /* [6979] */
    (xdc_Char)0x63,  /* [6980] */
    (xdc_Char)0x61,  /* [6981] */
    (xdc_Char)0x6c,  /* [6982] */
    (xdc_Char)0x3a,  /* [6983] */
    (xdc_Char)0x20,  /* [6984] */
    (xdc_Char)0x25,  /* [6985] */
    (xdc_Char)0x64,  /* [6986] */
    (xdc_Char)0x2c,  /* [6987] */
    (xdc_Char)0x20,  /* [6988] */
    (xdc_Char)0x63,  /* [6989] */
    (xdc_Char)0x75,  /* [6990] */
    (xdc_Char)0x72,  /* [6991] */
    (xdc_Char)0x53,  /* [6992] */
    (xdc_Char)0x65,  /* [6993] */
    (xdc_Char)0x74,  /* [6994] */
    (xdc_Char)0x58,  /* [6995] */
    (xdc_Char)0x3a,  /* [6996] */
    (xdc_Char)0x20,  /* [6997] */
    (xdc_Char)0x25,  /* [6998] */
    (xdc_Char)0x64,  /* [6999] */
    (xdc_Char)0x2c,  /* [7000] */
    (xdc_Char)0x20,  /* [7001] */
    (xdc_Char)0x63,  /* [7002] */
    (xdc_Char)0x75,  /* [7003] */
    (xdc_Char)0x72,  /* [7004] */
    (xdc_Char)0x4d,  /* [7005] */
    (xdc_Char)0x61,  /* [7006] */
    (xdc_Char)0x73,  /* [7007] */
    (xdc_Char)0x6b,  /* [7008] */
    (xdc_Char)0x4c,  /* [7009] */
    (xdc_Char)0x6f,  /* [7010] */
    (xdc_Char)0x63,  /* [7011] */
    (xdc_Char)0x61,  /* [7012] */
    (xdc_Char)0x6c,  /* [7013] */
    (xdc_Char)0x3a,  /* [7014] */
    (xdc_Char)0x20,  /* [7015] */
    (xdc_Char)0x25,  /* [7016] */
    (xdc_Char)0x64,  /* [7017] */
    (xdc_Char)0x0,  /* [7018] */
    (xdc_Char)0x4c,  /* [7019] */
    (xdc_Char)0x44,  /* [7020] */
    (xdc_Char)0x5f,  /* [7021] */
    (xdc_Char)0x6e,  /* [7022] */
    (xdc_Char)0x6f,  /* [7023] */
    (xdc_Char)0x57,  /* [7024] */
    (xdc_Char)0x6f,  /* [7025] */
    (xdc_Char)0x72,  /* [7026] */
    (xdc_Char)0x6b,  /* [7027] */
    (xdc_Char)0x3a,  /* [7028] */
    (xdc_Char)0x20,  /* [7029] */
    (xdc_Char)0x63,  /* [7030] */
    (xdc_Char)0x6f,  /* [7031] */
    (xdc_Char)0x72,  /* [7032] */
    (xdc_Char)0x65,  /* [7033] */
    (xdc_Char)0x49,  /* [7034] */
    (xdc_Char)0x64,  /* [7035] */
    (xdc_Char)0x3a,  /* [7036] */
    (xdc_Char)0x20,  /* [7037] */
    (xdc_Char)0x25,  /* [7038] */
    (xdc_Char)0x64,  /* [7039] */
    (xdc_Char)0x2c,  /* [7040] */
    (xdc_Char)0x20,  /* [7041] */
    (xdc_Char)0x63,  /* [7042] */
    (xdc_Char)0x75,  /* [7043] */
    (xdc_Char)0x72,  /* [7044] */
    (xdc_Char)0x53,  /* [7045] */
    (xdc_Char)0x65,  /* [7046] */
    (xdc_Char)0x74,  /* [7047] */
    (xdc_Char)0x4c,  /* [7048] */
    (xdc_Char)0x6f,  /* [7049] */
    (xdc_Char)0x63,  /* [7050] */
    (xdc_Char)0x61,  /* [7051] */
    (xdc_Char)0x6c,  /* [7052] */
    (xdc_Char)0x3a,  /* [7053] */
    (xdc_Char)0x20,  /* [7054] */
    (xdc_Char)0x25,  /* [7055] */
    (xdc_Char)0x64,  /* [7056] */
    (xdc_Char)0x2c,  /* [7057] */
    (xdc_Char)0x20,  /* [7058] */
    (xdc_Char)0x63,  /* [7059] */
    (xdc_Char)0x75,  /* [7060] */
    (xdc_Char)0x72,  /* [7061] */
    (xdc_Char)0x53,  /* [7062] */
    (xdc_Char)0x65,  /* [7063] */
    (xdc_Char)0x74,  /* [7064] */
    (xdc_Char)0x58,  /* [7065] */
    (xdc_Char)0x3a,  /* [7066] */
    (xdc_Char)0x20,  /* [7067] */
    (xdc_Char)0x25,  /* [7068] */
    (xdc_Char)0x3a,  /* [7069] */
    (xdc_Char)0x64,  /* [7070] */
    (xdc_Char)0x2c,  /* [7071] */
    (xdc_Char)0x20,  /* [7072] */
    (xdc_Char)0x63,  /* [7073] */
    (xdc_Char)0x75,  /* [7074] */
    (xdc_Char)0x72,  /* [7075] */
    (xdc_Char)0x4d,  /* [7076] */
    (xdc_Char)0x61,  /* [7077] */
    (xdc_Char)0x73,  /* [7078] */
    (xdc_Char)0x6b,  /* [7079] */
    (xdc_Char)0x4c,  /* [7080] */
    (xdc_Char)0x6f,  /* [7081] */
    (xdc_Char)0x63,  /* [7082] */
    (xdc_Char)0x61,  /* [7083] */
    (xdc_Char)0x6c,  /* [7084] */
    (xdc_Char)0x3a,  /* [7085] */
    (xdc_Char)0x20,  /* [7086] */
    (xdc_Char)0x25,  /* [7087] */
    (xdc_Char)0x64,  /* [7088] */
    (xdc_Char)0x0,  /* [7089] */
    (xdc_Char)0x78,  /* [7090] */
    (xdc_Char)0x64,  /* [7091] */
    (xdc_Char)0x63,  /* [7092] */
    (xdc_Char)0x2e,  /* [7093] */
    (xdc_Char)0x0,  /* [7094] */
    (xdc_Char)0x72,  /* [7095] */
    (xdc_Char)0x75,  /* [7096] */
    (xdc_Char)0x6e,  /* [7097] */
    (xdc_Char)0x74,  /* [7098] */
    (xdc_Char)0x69,  /* [7099] */
    (xdc_Char)0x6d,  /* [7100] */
    (xdc_Char)0x65,  /* [7101] */
    (xdc_Char)0x2e,  /* [7102] */
    (xdc_Char)0x0,  /* [7103] */
    (xdc_Char)0x41,  /* [7104] */
    (xdc_Char)0x73,  /* [7105] */
    (xdc_Char)0x73,  /* [7106] */
    (xdc_Char)0x65,  /* [7107] */
    (xdc_Char)0x72,  /* [7108] */
    (xdc_Char)0x74,  /* [7109] */
    (xdc_Char)0x0,  /* [7110] */
    (xdc_Char)0x43,  /* [7111] */
    (xdc_Char)0x6f,  /* [7112] */
    (xdc_Char)0x72,  /* [7113] */
    (xdc_Char)0x65,  /* [7114] */
    (xdc_Char)0x0,  /* [7115] */
    (xdc_Char)0x44,  /* [7116] */
    (xdc_Char)0x65,  /* [7117] */
    (xdc_Char)0x66,  /* [7118] */
    (xdc_Char)0x61,  /* [7119] */
    (xdc_Char)0x75,  /* [7120] */
    (xdc_Char)0x6c,  /* [7121] */
    (xdc_Char)0x74,  /* [7122] */
    (xdc_Char)0x73,  /* [7123] */
    (xdc_Char)0x0,  /* [7124] */
    (xdc_Char)0x44,  /* [7125] */
    (xdc_Char)0x69,  /* [7126] */
    (xdc_Char)0x61,  /* [7127] */
    (xdc_Char)0x67,  /* [7128] */
    (xdc_Char)0x73,  /* [7129] */
    (xdc_Char)0x0,  /* [7130] */
    (xdc_Char)0x45,  /* [7131] */
    (xdc_Char)0x72,  /* [7132] */
    (xdc_Char)0x72,  /* [7133] */
    (xdc_Char)0x6f,  /* [7134] */
    (xdc_Char)0x72,  /* [7135] */
    (xdc_Char)0x0,  /* [7136] */
    (xdc_Char)0x47,  /* [7137] */
    (xdc_Char)0x61,  /* [7138] */
    (xdc_Char)0x74,  /* [7139] */
    (xdc_Char)0x65,  /* [7140] */
    (xdc_Char)0x0,  /* [7141] */
    (xdc_Char)0x4c,  /* [7142] */
    (xdc_Char)0x6f,  /* [7143] */
    (xdc_Char)0x67,  /* [7144] */
    (xdc_Char)0x0,  /* [7145] */
    (xdc_Char)0x4d,  /* [7146] */
    (xdc_Char)0x61,  /* [7147] */
    (xdc_Char)0x69,  /* [7148] */
    (xdc_Char)0x6e,  /* [7149] */
    (xdc_Char)0x0,  /* [7150] */
    (xdc_Char)0x4d,  /* [7151] */
    (xdc_Char)0x65,  /* [7152] */
    (xdc_Char)0x6d,  /* [7153] */
    (xdc_Char)0x6f,  /* [7154] */
    (xdc_Char)0x72,  /* [7155] */
    (xdc_Char)0x79,  /* [7156] */
    (xdc_Char)0x0,  /* [7157] */
    (xdc_Char)0x52,  /* [7158] */
    (xdc_Char)0x65,  /* [7159] */
    (xdc_Char)0x67,  /* [7160] */
    (xdc_Char)0x69,  /* [7161] */
    (xdc_Char)0x73,  /* [7162] */
    (xdc_Char)0x74,  /* [7163] */
    (xdc_Char)0x72,  /* [7164] */
    (xdc_Char)0x79,  /* [7165] */
    (xdc_Char)0x0,  /* [7166] */
    (xdc_Char)0x53,  /* [7167] */
    (xdc_Char)0x74,  /* [7168] */
    (xdc_Char)0x61,  /* [7169] */
    (xdc_Char)0x72,  /* [7170] */
    (xdc_Char)0x74,  /* [7171] */
    (xdc_Char)0x75,  /* [7172] */
    (xdc_Char)0x70,  /* [7173] */
    (xdc_Char)0x0,  /* [7174] */
    (xdc_Char)0x53,  /* [7175] */
    (xdc_Char)0x79,  /* [7176] */
    (xdc_Char)0x73,  /* [7177] */
    (xdc_Char)0x74,  /* [7178] */
    (xdc_Char)0x65,  /* [7179] */
    (xdc_Char)0x6d,  /* [7180] */
    (xdc_Char)0x0,  /* [7181] */
    (xdc_Char)0x53,  /* [7182] */
    (xdc_Char)0x79,  /* [7183] */
    (xdc_Char)0x73,  /* [7184] */
    (xdc_Char)0x53,  /* [7185] */
    (xdc_Char)0x74,  /* [7186] */
    (xdc_Char)0x64,  /* [7187] */
    (xdc_Char)0x0,  /* [7188] */
    (xdc_Char)0x54,  /* [7189] */
    (xdc_Char)0x65,  /* [7190] */
    (xdc_Char)0x78,  /* [7191] */
    (xdc_Char)0x74,  /* [7192] */
    (xdc_Char)0x0,  /* [7193] */
    (xdc_Char)0x74,  /* [7194] */
    (xdc_Char)0x69,  /* [7195] */
    (xdc_Char)0x2e,  /* [7196] */
    (xdc_Char)0x0,  /* [7197] */
    (xdc_Char)0x73,  /* [7198] */
    (xdc_Char)0x79,  /* [7199] */
    (xdc_Char)0x73,  /* [7200] */
    (xdc_Char)0x62,  /* [7201] */
    (xdc_Char)0x69,  /* [7202] */
    (xdc_Char)0x6f,  /* [7203] */
    (xdc_Char)0x73,  /* [7204] */
    (xdc_Char)0x2e,  /* [7205] */
    (xdc_Char)0x0,  /* [7206] */
    (xdc_Char)0x66,  /* [7207] */
    (xdc_Char)0x61,  /* [7208] */
    (xdc_Char)0x6d,  /* [7209] */
    (xdc_Char)0x69,  /* [7210] */
    (xdc_Char)0x6c,  /* [7211] */
    (xdc_Char)0x79,  /* [7212] */
    (xdc_Char)0x2e,  /* [7213] */
    (xdc_Char)0x0,  /* [7214] */
    (xdc_Char)0x63,  /* [7215] */
    (xdc_Char)0x36,  /* [7216] */
    (xdc_Char)0x34,  /* [7217] */
    (xdc_Char)0x70,  /* [7218] */
    (xdc_Char)0x2e,  /* [7219] */
    (xdc_Char)0x0,  /* [7220] */
    (xdc_Char)0x45,  /* [7221] */
    (xdc_Char)0x78,  /* [7222] */
    (xdc_Char)0x63,  /* [7223] */
    (xdc_Char)0x65,  /* [7224] */
    (xdc_Char)0x70,  /* [7225] */
    (xdc_Char)0x74,  /* [7226] */
    (xdc_Char)0x69,  /* [7227] */
    (xdc_Char)0x6f,  /* [7228] */
    (xdc_Char)0x6e,  /* [7229] */
    (xdc_Char)0x0,  /* [7230] */
    (xdc_Char)0x48,  /* [7231] */
    (xdc_Char)0x77,  /* [7232] */
    (xdc_Char)0x69,  /* [7233] */
    (xdc_Char)0x0,  /* [7234] */
    (xdc_Char)0x68,  /* [7235] */
    (xdc_Char)0x61,  /* [7236] */
    (xdc_Char)0x6c,  /* [7237] */
    (xdc_Char)0x2e,  /* [7238] */
    (xdc_Char)0x0,  /* [7239] */
    (xdc_Char)0x54,  /* [7240] */
    (xdc_Char)0x69,  /* [7241] */
    (xdc_Char)0x6d,  /* [7242] */
    (xdc_Char)0x65,  /* [7243] */
    (xdc_Char)0x72,  /* [7244] */
    (xdc_Char)0x0,  /* [7245] */
    (xdc_Char)0x6b,  /* [7246] */
    (xdc_Char)0x6e,  /* [7247] */
    (xdc_Char)0x6c,  /* [7248] */
    (xdc_Char)0x2e,  /* [7249] */
    (xdc_Char)0x0,  /* [7250] */
    (xdc_Char)0x43,  /* [7251] */
    (xdc_Char)0x6c,  /* [7252] */
    (xdc_Char)0x6f,  /* [7253] */
    (xdc_Char)0x63,  /* [7254] */
    (xdc_Char)0x6b,  /* [7255] */
    (xdc_Char)0x0,  /* [7256] */
    (xdc_Char)0x49,  /* [7257] */
    (xdc_Char)0x64,  /* [7258] */
    (xdc_Char)0x6c,  /* [7259] */
    (xdc_Char)0x65,  /* [7260] */
    (xdc_Char)0x0,  /* [7261] */
    (xdc_Char)0x49,  /* [7262] */
    (xdc_Char)0x6e,  /* [7263] */
    (xdc_Char)0x74,  /* [7264] */
    (xdc_Char)0x72,  /* [7265] */
    (xdc_Char)0x69,  /* [7266] */
    (xdc_Char)0x6e,  /* [7267] */
    (xdc_Char)0x73,  /* [7268] */
    (xdc_Char)0x69,  /* [7269] */
    (xdc_Char)0x63,  /* [7270] */
    (xdc_Char)0x73,  /* [7271] */
    (xdc_Char)0x0,  /* [7272] */
    (xdc_Char)0x51,  /* [7273] */
    (xdc_Char)0x75,  /* [7274] */
    (xdc_Char)0x65,  /* [7275] */
    (xdc_Char)0x75,  /* [7276] */
    (xdc_Char)0x65,  /* [7277] */
    (xdc_Char)0x0,  /* [7278] */
    (xdc_Char)0x53,  /* [7279] */
    (xdc_Char)0x65,  /* [7280] */
    (xdc_Char)0x6d,  /* [7281] */
    (xdc_Char)0x61,  /* [7282] */
    (xdc_Char)0x70,  /* [7283] */
    (xdc_Char)0x68,  /* [7284] */
    (xdc_Char)0x6f,  /* [7285] */
    (xdc_Char)0x72,  /* [7286] */
    (xdc_Char)0x65,  /* [7287] */
    (xdc_Char)0x0,  /* [7288] */
    (xdc_Char)0x53,  /* [7289] */
    (xdc_Char)0x77,  /* [7290] */
    (xdc_Char)0x69,  /* [7291] */
    (xdc_Char)0x0,  /* [7292] */
    (xdc_Char)0x54,  /* [7293] */
    (xdc_Char)0x61,  /* [7294] */
    (xdc_Char)0x73,  /* [7295] */
    (xdc_Char)0x6b,  /* [7296] */
    (xdc_Char)0x0,  /* [7297] */
    (xdc_Char)0x67,  /* [7298] */
    (xdc_Char)0x61,  /* [7299] */
    (xdc_Char)0x74,  /* [7300] */
    (xdc_Char)0x65,  /* [7301] */
    (xdc_Char)0x73,  /* [7302] */
    (xdc_Char)0x2e,  /* [7303] */
    (xdc_Char)0x0,  /* [7304] */
    (xdc_Char)0x47,  /* [7305] */
    (xdc_Char)0x61,  /* [7306] */
    (xdc_Char)0x74,  /* [7307] */
    (xdc_Char)0x65,  /* [7308] */
    (xdc_Char)0x48,  /* [7309] */
    (xdc_Char)0x77,  /* [7310] */
    (xdc_Char)0x69,  /* [7311] */
    (xdc_Char)0x0,  /* [7312] */
    (xdc_Char)0x47,  /* [7313] */
    (xdc_Char)0x61,  /* [7314] */
    (xdc_Char)0x74,  /* [7315] */
    (xdc_Char)0x65,  /* [7316] */
    (xdc_Char)0x53,  /* [7317] */
    (xdc_Char)0x77,  /* [7318] */
    (xdc_Char)0x69,  /* [7319] */
    (xdc_Char)0x0,  /* [7320] */
    (xdc_Char)0x47,  /* [7321] */
    (xdc_Char)0x61,  /* [7322] */
    (xdc_Char)0x74,  /* [7323] */
    (xdc_Char)0x65,  /* [7324] */
    (xdc_Char)0x4d,  /* [7325] */
    (xdc_Char)0x75,  /* [7326] */
    (xdc_Char)0x74,  /* [7327] */
    (xdc_Char)0x65,  /* [7328] */
    (xdc_Char)0x78,  /* [7329] */
    (xdc_Char)0x0,  /* [7330] */
    (xdc_Char)0x73,  /* [7331] */
    (xdc_Char)0x64,  /* [7332] */
    (xdc_Char)0x6f,  /* [7333] */
    (xdc_Char)0x2e,  /* [7334] */
    (xdc_Char)0x0,  /* [7335] */
    (xdc_Char)0x75,  /* [7336] */
    (xdc_Char)0x74,  /* [7337] */
    (xdc_Char)0x69,  /* [7338] */
    (xdc_Char)0x6c,  /* [7339] */
    (xdc_Char)0x73,  /* [7340] */
    (xdc_Char)0x2e,  /* [7341] */
    (xdc_Char)0x0,  /* [7342] */
    (xdc_Char)0x4e,  /* [7343] */
    (xdc_Char)0x61,  /* [7344] */
    (xdc_Char)0x6d,  /* [7345] */
    (xdc_Char)0x65,  /* [7346] */
    (xdc_Char)0x53,  /* [7347] */
    (xdc_Char)0x65,  /* [7348] */
    (xdc_Char)0x72,  /* [7349] */
    (xdc_Char)0x76,  /* [7350] */
    (xdc_Char)0x65,  /* [7351] */
    (xdc_Char)0x72,  /* [7352] */
    (xdc_Char)0x52,  /* [7353] */
    (xdc_Char)0x65,  /* [7354] */
    (xdc_Char)0x6d,  /* [7355] */
    (xdc_Char)0x6f,  /* [7356] */
    (xdc_Char)0x74,  /* [7357] */
    (xdc_Char)0x65,  /* [7358] */
    (xdc_Char)0x4e,  /* [7359] */
    (xdc_Char)0x75,  /* [7360] */
    (xdc_Char)0x6c,  /* [7361] */
    (xdc_Char)0x6c,  /* [7362] */
    (xdc_Char)0x0,  /* [7363] */
    (xdc_Char)0x4d,  /* [7364] */
    (xdc_Char)0x75,  /* [7365] */
    (xdc_Char)0x6c,  /* [7366] */
    (xdc_Char)0x74,  /* [7367] */
    (xdc_Char)0x69,  /* [7368] */
    (xdc_Char)0x50,  /* [7369] */
    (xdc_Char)0x72,  /* [7370] */
    (xdc_Char)0x6f,  /* [7371] */
    (xdc_Char)0x63,  /* [7372] */
    (xdc_Char)0x0,  /* [7373] */
    (xdc_Char)0x4c,  /* [7374] */
    (xdc_Char)0x69,  /* [7375] */
    (xdc_Char)0x73,  /* [7376] */
    (xdc_Char)0x74,  /* [7377] */
    (xdc_Char)0x0,  /* [7378] */
    (xdc_Char)0x69,  /* [7379] */
    (xdc_Char)0x70,  /* [7380] */
    (xdc_Char)0x63,  /* [7381] */
    (xdc_Char)0x2e,  /* [7382] */
    (xdc_Char)0x0,  /* [7383] */
    (xdc_Char)0x4e,  /* [7384] */
    (xdc_Char)0x6f,  /* [7385] */
    (xdc_Char)0x74,  /* [7386] */
    (xdc_Char)0x69,  /* [7387] */
    (xdc_Char)0x66,  /* [7388] */
    (xdc_Char)0x79,  /* [7389] */
    (xdc_Char)0x0,  /* [7390] */
    (xdc_Char)0x63,  /* [7391] */
    (xdc_Char)0x36,  /* [7392] */
    (xdc_Char)0x36,  /* [7393] */
    (xdc_Char)0x2e,  /* [7394] */
    (xdc_Char)0x0,  /* [7395] */
    (xdc_Char)0x43,  /* [7396] */
    (xdc_Char)0x61,  /* [7397] */
    (xdc_Char)0x63,  /* [7398] */
    (xdc_Char)0x68,  /* [7399] */
    (xdc_Char)0x65,  /* [7400] */
    (xdc_Char)0x0,  /* [7401] */
    (xdc_Char)0x42,  /* [7402] */
    (xdc_Char)0x49,  /* [7403] */
    (xdc_Char)0x4f,  /* [7404] */
    (xdc_Char)0x53,  /* [7405] */
    (xdc_Char)0x0,  /* [7406] */
    (xdc_Char)0x63,  /* [7407] */
    (xdc_Char)0x36,  /* [7408] */
    (xdc_Char)0x32,  /* [7409] */
    (xdc_Char)0x2e,  /* [7410] */
    (xdc_Char)0x0,  /* [7411] */
    (xdc_Char)0x54,  /* [7412] */
    (xdc_Char)0x61,  /* [7413] */
    (xdc_Char)0x73,  /* [7414] */
    (xdc_Char)0x6b,  /* [7415] */
    (xdc_Char)0x53,  /* [7416] */
    (xdc_Char)0x75,  /* [7417] */
    (xdc_Char)0x70,  /* [7418] */
    (xdc_Char)0x70,  /* [7419] */
    (xdc_Char)0x6f,  /* [7420] */
    (xdc_Char)0x72,  /* [7421] */
    (xdc_Char)0x74,  /* [7422] */
    (xdc_Char)0x0,  /* [7423] */
    (xdc_Char)0x49,  /* [7424] */
    (xdc_Char)0x6e,  /* [7425] */
    (xdc_Char)0x74,  /* [7426] */
    (xdc_Char)0x72,  /* [7427] */
    (xdc_Char)0x69,  /* [7428] */
    (xdc_Char)0x6e,  /* [7429] */
    (xdc_Char)0x73,  /* [7430] */
    (xdc_Char)0x69,  /* [7431] */
    (xdc_Char)0x63,  /* [7432] */
    (xdc_Char)0x73,  /* [7433] */
    (xdc_Char)0x53,  /* [7434] */
    (xdc_Char)0x75,  /* [7435] */
    (xdc_Char)0x70,  /* [7436] */
    (xdc_Char)0x70,  /* [7437] */
    (xdc_Char)0x6f,  /* [7438] */
    (xdc_Char)0x72,  /* [7439] */
    (xdc_Char)0x74,  /* [7440] */
    (xdc_Char)0x0,  /* [7441] */
    (xdc_Char)0x74,  /* [7442] */
    (xdc_Char)0x69,  /* [7443] */
    (xdc_Char)0x6d,  /* [7444] */
    (xdc_Char)0x65,  /* [7445] */
    (xdc_Char)0x72,  /* [7446] */
    (xdc_Char)0x73,  /* [7447] */
    (xdc_Char)0x2e,  /* [7448] */
    (xdc_Char)0x0,  /* [7449] */
    (xdc_Char)0x74,  /* [7450] */
    (xdc_Char)0x69,  /* [7451] */
    (xdc_Char)0x6d,  /* [7452] */
    (xdc_Char)0x65,  /* [7453] */
    (xdc_Char)0x72,  /* [7454] */
    (xdc_Char)0x36,  /* [7455] */
    (xdc_Char)0x34,  /* [7456] */
    (xdc_Char)0x2e,  /* [7457] */
    (xdc_Char)0x0,  /* [7458] */
    (xdc_Char)0x74,  /* [7459] */
    (xdc_Char)0x63,  /* [7460] */
    (xdc_Char)0x69,  /* [7461] */
    (xdc_Char)0x36,  /* [7462] */
    (xdc_Char)0x34,  /* [7463] */
    (xdc_Char)0x38,  /* [7464] */
    (xdc_Char)0x38,  /* [7465] */
    (xdc_Char)0x2e,  /* [7466] */
    (xdc_Char)0x0,  /* [7467] */
    (xdc_Char)0x54,  /* [7468] */
    (xdc_Char)0x69,  /* [7469] */
    (xdc_Char)0x6d,  /* [7470] */
    (xdc_Char)0x65,  /* [7471] */
    (xdc_Char)0x72,  /* [7472] */
    (xdc_Char)0x53,  /* [7473] */
    (xdc_Char)0x75,  /* [7474] */
    (xdc_Char)0x70,  /* [7475] */
    (xdc_Char)0x70,  /* [7476] */
    (xdc_Char)0x6f,  /* [7477] */
    (xdc_Char)0x72,  /* [7478] */
    (xdc_Char)0x74,  /* [7479] */
    (xdc_Char)0x0,  /* [7480] */
    (xdc_Char)0x68,  /* [7481] */
    (xdc_Char)0x65,  /* [7482] */
    (xdc_Char)0x61,  /* [7483] */
    (xdc_Char)0x70,  /* [7484] */
    (xdc_Char)0x73,  /* [7485] */
    (xdc_Char)0x2e,  /* [7486] */
    (xdc_Char)0x0,  /* [7487] */
    (xdc_Char)0x48,  /* [7488] */
    (xdc_Char)0x65,  /* [7489] */
    (xdc_Char)0x61,  /* [7490] */
    (xdc_Char)0x70,  /* [7491] */
    (xdc_Char)0x4d,  /* [7492] */
    (xdc_Char)0x65,  /* [7493] */
    (xdc_Char)0x6d,  /* [7494] */
    (xdc_Char)0x0,  /* [7495] */
    (xdc_Char)0x6e,  /* [7496] */
    (xdc_Char)0x6f,  /* [7497] */
    (xdc_Char)0x74,  /* [7498] */
    (xdc_Char)0x69,  /* [7499] */
    (xdc_Char)0x66,  /* [7500] */
    (xdc_Char)0x79,  /* [7501] */
    (xdc_Char)0x44,  /* [7502] */
    (xdc_Char)0x72,  /* [7503] */
    (xdc_Char)0x69,  /* [7504] */
    (xdc_Char)0x76,  /* [7505] */
    (xdc_Char)0x65,  /* [7506] */
    (xdc_Char)0x72,  /* [7507] */
    (xdc_Char)0x73,  /* [7508] */
    (xdc_Char)0x2e,  /* [7509] */
    (xdc_Char)0x0,  /* [7510] */
    (xdc_Char)0x4e,  /* [7511] */
    (xdc_Char)0x6f,  /* [7512] */
    (xdc_Char)0x74,  /* [7513] */
    (xdc_Char)0x69,  /* [7514] */
    (xdc_Char)0x66,  /* [7515] */
    (xdc_Char)0x79,  /* [7516] */
    (xdc_Char)0x53,  /* [7517] */
    (xdc_Char)0x65,  /* [7518] */
    (xdc_Char)0x74,  /* [7519] */
    (xdc_Char)0x75,  /* [7520] */
    (xdc_Char)0x70,  /* [7521] */
    (xdc_Char)0x4e,  /* [7522] */
    (xdc_Char)0x75,  /* [7523] */
    (xdc_Char)0x6c,  /* [7524] */
    (xdc_Char)0x6c,  /* [7525] */
    (xdc_Char)0x0,  /* [7526] */
    (xdc_Char)0x74,  /* [7527] */
    (xdc_Char)0x69,  /* [7528] */
    (xdc_Char)0x2e,  /* [7529] */
    (xdc_Char)0x73,  /* [7530] */
    (xdc_Char)0x79,  /* [7531] */
    (xdc_Char)0x73,  /* [7532] */
    (xdc_Char)0x62,  /* [7533] */
    (xdc_Char)0x69,  /* [7534] */
    (xdc_Char)0x6f,  /* [7535] */
    (xdc_Char)0x73,  /* [7536] */
    (xdc_Char)0x2e,  /* [7537] */
    (xdc_Char)0x6b,  /* [7538] */
    (xdc_Char)0x6e,  /* [7539] */
    (xdc_Char)0x6c,  /* [7540] */
    (xdc_Char)0x2e,  /* [7541] */
    (xdc_Char)0x54,  /* [7542] */
    (xdc_Char)0x61,  /* [7543] */
    (xdc_Char)0x73,  /* [7544] */
    (xdc_Char)0x6b,  /* [7545] */
    (xdc_Char)0x2e,  /* [7546] */
    (xdc_Char)0x49,  /* [7547] */
    (xdc_Char)0x64,  /* [7548] */
    (xdc_Char)0x6c,  /* [7549] */
    (xdc_Char)0x65,  /* [7550] */
    (xdc_Char)0x54,  /* [7551] */
    (xdc_Char)0x61,  /* [7552] */
    (xdc_Char)0x73,  /* [7553] */
    (xdc_Char)0x6b,  /* [7554] */
    (xdc_Char)0x0,  /* [7555] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[58] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1bb2,  /* left */
        (xdc_Bits16)0x1bb7,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bc0,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bc7,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bcc,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bd5,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bdb,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1be1,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1be6,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bea,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bef,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bf6,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1bff,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1c07,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1c0e,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1c15,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x1c1a,  /* left */
        (xdc_Bits16)0x1c1e,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1c27,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1c2f,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1c35,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1c3f,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1c43,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1c3f,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1c48,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1c4e,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c53,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c59,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c5e,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c69,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c6f,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c79,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1c7d,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1c82,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x1c89,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x1c91,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8020,  /* left */
        (xdc_Bits16)0x1c99,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x1c1a,  /* left */
        (xdc_Bits16)0x1ca3,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x1ca8,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x1caf,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x1cc4,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8025,  /* left */
        (xdc_Bits16)0x1cce,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x1cd3,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1cd8,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1cdf,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x1ce4,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1cea,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x1cef,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802e,  /* left */
        (xdc_Bits16)0x1cf4,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802e,  /* left */
        (xdc_Bits16)0x1d00,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1d12,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x8031,  /* left */
        (xdc_Bits16)0x1d1a,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032,  /* left */
        (xdc_Bits16)0x1c48,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1d23,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8034,  /* left */
        (xdc_Bits16)0x1d2c,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1d39,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8036,  /* left */
        (xdc_Bits16)0x1d40,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1d48,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8038,  /* left */
        (xdc_Bits16)0x1d57,  /* right */
    },  /* [57] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1d84;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x3a;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== ti.sdo.ipc.Notify FUNCTION STUBS ========
 */

/* detach__E */
xdc_Int ti_sdo_ipc_Notify_detach__E( xdc_UInt16 remoteProcId ) 
{
    return ti_sdo_ipc_Notify_detach__F(remoteProcId);
}

/* exec__E */
xdc_Void ti_sdo_ipc_Notify_exec__E( ti_sdo_ipc_Notify_Handle __inst, xdc_UInt32 eventId, xdc_UInt32 payload ) 
{
    ti_sdo_ipc_Notify_exec__F((void*)__inst, eventId, payload);
}

/* Module_startup */
xdc_Int ti_sdo_ipc_Notify_Module_startup__E( xdc_Int state )
{
    return ti_sdo_ipc_Notify_Module_startup__F(state);
}


/*
 * ======== ti.sdo.utils.MultiProc FUNCTION STUBS ========
 */

/* getClusterId__E */
xdc_UInt16 ti_sdo_utils_MultiProc_getClusterId__E( xdc_UInt16 procId ) 
{
    return ti_sdo_utils_MultiProc_getClusterId__F(procId);
}

/* dummy__E */
xdc_Void ti_sdo_utils_MultiProc_dummy__E( void ) 
{
    ti_sdo_utils_MultiProc_dummy__F();
}


/*
 * ======== ti.sdo.utils.NameServerRemoteNull FUNCTION STUBS ========
 */

/* get__E */
xdc_Int ti_sdo_utils_NameServerRemoteNull_get__E( ti_sdo_utils_NameServerRemoteNull_Handle __inst, xdc_String instanceName, xdc_String name, xdc_Ptr value, xdc_UInt32* valueLen, xdc_runtime_knl_ISync_Handle syncHandle, xdc_runtime_Error_Block* eb ) 
{
    return ti_sdo_utils_NameServerRemoteNull_get__F((void*)__inst, instanceName, name, value, valueLen, syncHandle, eb);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_Exception_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_Exception_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.c64p.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_c64p_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_c64p_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c64p_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c64p_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_family_c66_Cache_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_c66_Cache_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateSwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateSwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateSwi_query__F(qual);
}


/*
 * ======== ti.sysbios.hal.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_hal_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_timers_timer64_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_timers_timer64_Timer_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_String control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_String file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_String modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_String modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_String namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_String name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_String xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysStd FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysStd_abort__E( xdc_String str ) 
{
    xdc_runtime_SysStd_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysStd_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysStd_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysStd_flush__E( void ) 
{
    xdc_runtime_SysStd_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysStd_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysStd_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysStd_ready__E( void ) 
{
    return xdc_runtime_SysStd_ready__F();
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_String str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_String pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== ti.sdo.ipc.Notify_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateSwi */

/* Module__startupDone__S */
xdc_Bool ti_sdo_ipc_Notify_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateSwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sdo_ipc_Notify_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_ipc_Notify_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateSwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateSwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sdo_ipc_Notify_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateSwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sdo_ipc_Notify_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateSwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_ipc_Notify_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateSwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sdo_ipc_Notify_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateSwi_query(qual);
}

/* enter__E */
xdc_IArg ti_sdo_ipc_Notify_Module_GateProxy_enter__E( ti_sdo_ipc_Notify_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateSwi_enter((ti_sysbios_gates_GateSwi_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sdo_ipc_Notify_Module_GateProxy_leave__E( ti_sdo_ipc_Notify_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateSwi_leave((ti_sysbios_gates_GateSwi_Handle)__inst, key);
}


/*
 * ======== ti.sdo.ipc.Notify_SetupProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sdo.ipc.notifyDrivers.NotifySetupNull */

/* Module__startupDone__S */
xdc_Bool ti_sdo_ipc_Notify_SetupProxy_Module__startupDone__S( void ) 
{
    return ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__startupDone__S();
}

/* attach__E */
xdc_Int ti_sdo_ipc_Notify_SetupProxy_attach__E( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr )
{
    return ti_sdo_ipc_notifyDrivers_NotifySetupNull_attach(remoteProcId, sharedAddr);
}

/* sharedMemReq__E */
xdc_SizeT ti_sdo_ipc_Notify_SetupProxy_sharedMemReq__E( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr )
{
    return ti_sdo_ipc_notifyDrivers_NotifySetupNull_sharedMemReq(remoteProcId, sharedAddr);
}

/* numIntLines__E */
xdc_UInt16 ti_sdo_ipc_Notify_SetupProxy_numIntLines__E( xdc_UInt16 remoteProcId )
{
    return ti_sdo_ipc_notifyDrivers_NotifySetupNull_numIntLines(remoteProcId);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_c64p_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_c64p_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_c64p_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_c64p_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_c64p_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_c64p_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_c64p_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_c64p_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_c64p_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_c64p_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_c64p_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_c64p_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_c64p_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_c64p_Hwi_getFunc((ti_sysbios_family_c64p_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_c64p_Hwi_setFunc((ti_sysbios_family_c64p_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_c64p_Hwi_getHookContext((ti_sysbios_family_c64p_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_c64p_Hwi_setHookContext((ti_sysbios_family_c64p_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_c64p_Hwi_getIrp((ti_sysbios_family_c64p_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.timers.timer64.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_timers_timer64_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_timers_timer64_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_timers_timer64_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_timers_timer64_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_timers_timer64_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_timers_timer64_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_timers_timer64_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_timers_timer64_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_timers_timer64_Timer_getMaxTicks((ti_sysbios_timers_timer64_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_timers_timer64_Timer_setNextTick((ti_sysbios_timers_timer64_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_timer64_Timer_start((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_timers_timer64_Timer_stop((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_timers_timer64_Timer_setPeriod((ti_sysbios_timers_timer64_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_timers_timer64_Timer_setPeriodMicroSecs((ti_sysbios_timers_timer64_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getPeriod((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getCount((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_timers_timer64_Timer_getFreq((ti_sysbios_timers_timer64_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_timers_timer64_Timer_getFunc((ti_sysbios_timers_timer64_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_timers_timer64_Timer_setFunc((ti_sysbios_timers_timer64_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_timers_timer64_Timer_trigger((ti_sysbios_timers_timer64_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_timers_timer64_Timer_getExpiredCounts((ti_sysbios_timers_timer64_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_c62_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c62.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c62_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_c62_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_c62_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_c62_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_c62_TaskSupport_getDefaultStackSize();
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.c64p.tci6488.TimerSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDone__S();
}

/* enable__E */
xdc_Void ti_sysbios_timers_timer64_Timer_TimerSupportProxy_enable__E( xdc_UInt timerId, xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_c64p_tci6488_TimerSupport_enable(timerId, eb);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysStd_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_String str )
{
    xdc_runtime_SysStd_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysStd_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysStd_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysStd_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysStd_ready();
}


/*
 * ======== ti.sdo.ipc.Notify OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_ipc_Notify_Object2__ s0; char c; } ti_sdo_ipc_Notify___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_ipc_Notify_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sdo_ipc_Notify_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_ipc_Notify___S1) - sizeof(ti_sdo_ipc_Notify_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_ipc_Notify_Object2__), /* objSize */
    (Ptr)&ti_sdo_ipc_Notify_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_ipc_Notify_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.utils.List OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_utils_List_Object2__ s0; char c; } ti_sdo_utils_List___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_List_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sdo_utils_List_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_utils_List___S1) - sizeof(ti_sdo_utils_List_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_utils_List_Object2__), /* objSize */
    (Ptr)&ti_sdo_utils_List_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_utils_List_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.utils.NameServerRemoteNull OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sdo_utils_NameServerRemoteNull_Object2__ s0; char c; } ti_sdo_utils_NameServerRemoteNull___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sdo_utils_NameServerRemoteNull_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sdo_utils_NameServerRemoteNull_Module__root__V.link, /* modLink */
    sizeof(ti_sdo_utils_NameServerRemoteNull___S1) - sizeof(ti_sdo_utils_NameServerRemoteNull_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sdo_utils_NameServerRemoteNull_Object2__), /* objSize */
    (Ptr)&ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sdo_utils_NameServerRemoteNull_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.c64p.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_c64p_Hwi_Object2__ s0; char c; } ti_sysbios_family_c64p_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_c64p_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_c64p_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_c64p_Hwi___S1) - sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_c64p_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_c64p_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateSwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateSwi_Object2__ s0; char c; } ti_sysbios_gates_GateSwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateSwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateSwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateSwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateSwi___S1) - sizeof(ti_sysbios_gates_GateSwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateSwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateSwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateSwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.timers.timer64.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_timers_timer64_Timer_Object2__ s0; char c; } ti_sysbios_timers_timer64_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_timers_timer64_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_timers_timer64_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_timers_timer64_Timer___S1) - sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_timers_timer64_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_timers_timer64_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sdo.ipc.Notify SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_ipc_Notify_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_ipc_Notify_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_ipc_Notify_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_ipc_Notify_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_ipc_Notify_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_ipc_Notify_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_ipc_Notify_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_ipc_Notify_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_ipc_Notify_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_ipc_Notify_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_ipc_Notify_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_ipc_Notify_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_ipc_Notify_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_ipc_Notify_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_ipc_Notify_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_ipc_Notify_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_ipc_Notify_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_ipc_Notify_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_ipc_Notify_Module__startupDone__S( void ) 
{
    return ti_sdo_ipc_Notify_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_ipc_Notify_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32810;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_ipc_Notify_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_ipc_Notify_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_ipc_Notify_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_ipc_Notify_Object__*)oa) + i;
    }

    if (ti_sdo_ipc_Notify_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_ipc_Notify_Object__*)ti_sdo_ipc_Notify_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_ipc_Notify_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_ipc_Notify_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_ipc_Notify_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_ipc_Notify_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_ipc_Notify_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_ipc_Notify_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_ipc_Notify___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_ipc_Notify_Params prms;
    ti_sdo_ipc_Notify_Object* obj;
    int iStat;

    ti_sdo_ipc_Notify_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_ipc_Notify_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sdo_ipc_Notify_Instance_init__F(obj, args->driverHandle, args->remoteProcId, args->lineId, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sdo_ipc_Notify_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_ipc_Notify_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_ipc_Notify_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_ipc_Notify_Object__DESC__C, obj, (xdc_Fxn)ti_sdo_ipc_Notify_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_ipc_Notify_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_ipc_Notify_Object__DESC__C, *((ti_sdo_ipc_Notify_Object**)instp), (xdc_Fxn)ti_sdo_ipc_Notify_Instance_finalize__F, 0, FALSE);
    *((ti_sdo_ipc_Notify_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.ipc.Notify_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_ipc_Notify_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_ipc_Notify_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_ipc_Notify_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_ipc_Notify_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_ipc_Notify_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_ipc_Notify_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_ipc_Notify_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_ipc_Notify_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_ipc_Notify_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_ipc_Notify_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_ipc_Notify_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_ipc_Notify_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_ipc_Notify_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_ipc_Notify_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_ipc_Notify_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_ipc_Notify_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_ipc_Notify_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_ipc_Notify_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sdo_ipc_Notify_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sdo_ipc_Notify_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateSwi_Module__FXNS__C;
}



/*
 * ======== ti.sdo.ipc.Notify_SetupProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sdo_ipc_Notify_SetupProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sdo_ipc_Notify_SetupProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__FXNS__C;
}


/*
 * ======== ti.sdo.ipc.notifyDrivers.NotifySetupNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sdo.utils.List SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_utils_List_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_utils_List_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_utils_List_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_utils_List_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_utils_List_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_utils_List_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_utils_List_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_utils_List_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_utils_List_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_utils_List_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_utils_List_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_utils_List_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_utils_List_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_utils_List_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_utils_List_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_utils_List_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_utils_List_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_utils_List_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_utils_List_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_utils_List_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32808;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_utils_List_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_utils_List_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_utils_List_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_utils_List_Object__*)oa) + i;
    }

    if (ti_sdo_utils_List_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_utils_List_Object__*)ti_sdo_utils_List_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_utils_List_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_utils_List_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_utils_List_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_utils_List_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_utils_List_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_utils_List_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_utils_List___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_utils_List_Params prms;
    ti_sdo_utils_List_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_utils_List_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sdo_utils_List_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_utils_List_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_List_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_utils_List_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_List_Object__DESC__C, *((ti_sdo_utils_List_Object**)instp), NULL, -1, FALSE);
    *((ti_sdo_utils_List_Handle*)instp) = NULL;
}


/*
 * ======== ti.sdo.utils.MultiProc SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sdo_utils_MultiProc_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sdo.utils.NameServerRemoteNull SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sdo_utils_NameServerRemoteNull_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sdo_utils_NameServerRemoteNull_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sdo_utils_NameServerRemoteNull_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sdo_utils_NameServerRemoteNull_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sdo_utils_NameServerRemoteNull_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sdo_utils_NameServerRemoteNull_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sdo_utils_NameServerRemoteNull_Object__*)oa) + i;
    }

    if (ti_sdo_utils_NameServerRemoteNull_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sdo_utils_NameServerRemoteNull_Object__*)ti_sdo_utils_NameServerRemoteNull_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sdo_utils_NameServerRemoteNull_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sdo_utils_NameServerRemoteNull_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sdo_utils_NameServerRemoteNull_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sdo_utils_NameServerRemoteNull_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sdo_utils_NameServerRemoteNull_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sdo_utils_NameServerRemoteNull_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sdo_utils_NameServerRemoteNull___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sdo_utils_NameServerRemoteNull_Params prms;
    ti_sdo_utils_NameServerRemoteNull_Object* obj;

    ti_sdo_utils_NameServerRemoteNull_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sdo_utils_NameServerRemoteNull_Instance_init__F(obj, args->procId, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sdo_utils_NameServerRemoteNull_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sdo_utils_NameServerRemoteNull_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, *((ti_sdo_utils_NameServerRemoteNull_Object**)instp), NULL, -1, FALSE);
    *((ti_sdo_utils_NameServerRemoteNull_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.c62.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c62.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c62_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c64p.Exception SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Exception_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Exception_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.c64p.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_c64p_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_c64p_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_c64p_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_c64p_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_c64p_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_c64p_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_c64p_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_c64p_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_c64p_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_c64p_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c64p_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_c64p_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32788;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_c64p_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_c64p_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_c64p_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_c64p_Hwi_Object__*)ti_sysbios_family_c64p_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_c64p_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_c64p_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_c64p_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_c64p_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_c64p_Hwi_Params prms;
    ti_sysbios_family_c64p_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_c64p_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_c64p_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_c64p_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_c64p_Hwi_Object__DESC__C, *((ti_sysbios_family_c64p_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_c64p_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_c64p_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.c64p.tci6488.TimerSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.c66.Cache SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_c66_Cache_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_c66_Cache_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateSwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateSwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateSwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateSwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateSwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateSwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateSwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateSwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateSwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateSwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateSwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateSwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateSwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateSwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateSwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateSwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateSwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateSwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateSwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateSwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateSwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateSwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateSwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateSwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateSwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateSwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateSwi_Object__*)ti_sysbios_gates_GateSwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateSwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateSwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateSwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateSwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateSwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateSwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateSwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateSwi_Params prms;
    ti_sysbios_gates_GateSwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateSwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateSwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateSwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateSwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateSwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateSwi_Object__DESC__C, *((ti_sysbios_gates_GateSwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateSwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32790;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32791;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32823;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.timers.timer64.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_timers_timer64_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_timers_timer64_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_timers_timer64_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_timers_timer64_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_timers_timer64_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_timers_timer64_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_timers_timer64_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_timers_timer64_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_timers_timer64_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_timers_timer64_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_timers_timer64_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_timers_timer64_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_timers_timer64_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32819;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_timers_timer64_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_timers_timer64_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_timers_timer64_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_timers_timer64_Timer_Object__*)ti_sysbios_timers_timer64_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_timers_timer64_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_timers_timer64_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_timers_timer64_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_timers_timer64_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_timers_timer64_Timer_Params prms;
    ti_sysbios_timers_timer64_Timer_Object* obj;
    int iStat;

    ti_sysbios_timers_timer64_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_timers_timer64_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_timers_timer64_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_timers_timer64_Timer_Object__DESC__C, *((ti_sysbios_timers_timer64_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_timers_timer64_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_timers_timer64_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.timers.timer64.Timer_TimerSupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_timers_timer64_Timer_TimerSupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysStd SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysStd_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysStd_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */


/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
#pragma DATA_SECTION(ti_sdo_ipc_interfaces_INotifySetup_Interface__BASE__C, ".const:ti_sdo_ipc_interfaces_INotifySetup_Interface__BASE__C");
#pragma DATA_SECTION(ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_ITimerSupport_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__FXNS__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateSwi_Module__FXNS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__FXNS__C, ".const:xdc_runtime_SysStd_Module__FXNS__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Object__PARAMS__C, ".const:ti_sdo_ipc_Notify_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__PARAMS__C, ".const:ti_sdo_utils_List_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateSwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Object__DESC__C, ".const:ti_sdo_ipc_Notify_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Object__PARAMS__C, ".const:ti_sdo_ipc_Notify_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__diagsEnabled__C, ".const:ti_sdo_ipc_Notify_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__diagsIncluded__C, ".const:ti_sdo_ipc_Notify_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__diagsMask__C, ".const:ti_sdo_ipc_Notify_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__gateObj__C, ".const:ti_sdo_ipc_Notify_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__gatePrms__C, ".const:ti_sdo_ipc_Notify_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__id__C, ".const:ti_sdo_ipc_Notify_Module__id__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__loggerDefined__C, ".const:ti_sdo_ipc_Notify_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__loggerObj__C, ".const:ti_sdo_ipc_Notify_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__loggerFxn0__C, ".const:ti_sdo_ipc_Notify_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__loggerFxn1__C, ".const:ti_sdo_ipc_Notify_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__loggerFxn2__C, ".const:ti_sdo_ipc_Notify_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__loggerFxn4__C, ".const:ti_sdo_ipc_Notify_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__loggerFxn8__C, ".const:ti_sdo_ipc_Notify_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Module__startupDoneFxn__C, ".const:ti_sdo_ipc_Notify_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Object__count__C, ".const:ti_sdo_ipc_Notify_Object__count__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Object__heap__C, ".const:ti_sdo_ipc_Notify_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Object__sizeof__C, ".const:ti_sdo_ipc_Notify_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_Object__table__C, ".const:ti_sdo_ipc_Notify_Object__table__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_A_alreadyRegistered__C, ".const:ti_sdo_ipc_Notify_A_alreadyRegistered__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_A_notRegistered__C, ".const:ti_sdo_ipc_Notify_A_notRegistered__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_A_reservedEvent__C, ".const:ti_sdo_ipc_Notify_A_reservedEvent__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_A_outOfOrderNesting__C, ".const:ti_sdo_ipc_Notify_A_outOfOrderNesting__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_A_invArgument__C, ".const:ti_sdo_ipc_Notify_A_invArgument__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_A_internal__C, ".const:ti_sdo_ipc_Notify_A_internal__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_numEvents__C, ".const:ti_sdo_ipc_Notify_numEvents__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_sendEventPollCount__C, ".const:ti_sdo_ipc_Notify_sendEventPollCount__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_numLines__C, ".const:ti_sdo_ipc_Notify_numLines__C");
#pragma DATA_SECTION(ti_sdo_ipc_Notify_reservedEvents__C, ".const:ti_sdo_ipc_Notify_reservedEvents__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsEnabled__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsIncluded__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsMask__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gateObj__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gatePrms__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__id__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__id__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerDefined__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerObj__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn0__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn1__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn2__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn4__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn8__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__startupDoneFxn__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__count__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__count__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__heap__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__sizeof__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__table__C, ".const:ti_sdo_ipc_notifyDrivers_NotifySetupNull_Object__table__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__DESC__C, ".const:ti_sdo_utils_List_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__PARAMS__C, ".const:ti_sdo_utils_List_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__diagsEnabled__C, ".const:ti_sdo_utils_List_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__diagsIncluded__C, ".const:ti_sdo_utils_List_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__diagsMask__C, ".const:ti_sdo_utils_List_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__gateObj__C, ".const:ti_sdo_utils_List_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__gatePrms__C, ".const:ti_sdo_utils_List_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__id__C, ".const:ti_sdo_utils_List_Module__id__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerDefined__C, ".const:ti_sdo_utils_List_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerObj__C, ".const:ti_sdo_utils_List_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn0__C, ".const:ti_sdo_utils_List_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn1__C, ".const:ti_sdo_utils_List_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn2__C, ".const:ti_sdo_utils_List_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn4__C, ".const:ti_sdo_utils_List_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__loggerFxn8__C, ".const:ti_sdo_utils_List_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Module__startupDoneFxn__C, ".const:ti_sdo_utils_List_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__count__C, ".const:ti_sdo_utils_List_Object__count__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__heap__C, ".const:ti_sdo_utils_List_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__sizeof__C, ".const:ti_sdo_utils_List_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_utils_List_Object__table__C, ".const:ti_sdo_utils_List_Object__table__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_nameList__A, ".const:ti_sdo_utils_MultiProc_nameList__A");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__diagsEnabled__C, ".const:ti_sdo_utils_MultiProc_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__diagsIncluded__C, ".const:ti_sdo_utils_MultiProc_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__diagsMask__C, ".const:ti_sdo_utils_MultiProc_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__gateObj__C, ".const:ti_sdo_utils_MultiProc_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__gatePrms__C, ".const:ti_sdo_utils_MultiProc_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__id__C, ".const:ti_sdo_utils_MultiProc_Module__id__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerDefined__C, ".const:ti_sdo_utils_MultiProc_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerObj__C, ".const:ti_sdo_utils_MultiProc_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn0__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn1__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn2__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn4__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__loggerFxn8__C, ".const:ti_sdo_utils_MultiProc_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Module__startupDoneFxn__C, ".const:ti_sdo_utils_MultiProc_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Object__count__C, ".const:ti_sdo_utils_MultiProc_Object__count__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Object__heap__C, ".const:ti_sdo_utils_MultiProc_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Object__sizeof__C, ".const:ti_sdo_utils_MultiProc_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_Object__table__C, ".const:ti_sdo_utils_MultiProc_Object__table__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_A_invalidMultiProcId__C, ".const:ti_sdo_utils_MultiProc_A_invalidMultiProcId__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_A_invalidProcName__C, ".const:ti_sdo_utils_MultiProc_A_invalidProcName__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_nameList__C, ".const:ti_sdo_utils_MultiProc_nameList__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_numProcsInCluster__C, ".const:ti_sdo_utils_MultiProc_numProcsInCluster__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_numProcessors__C, ".const:ti_sdo_utils_MultiProc_numProcessors__C");
#pragma DATA_SECTION(ti_sdo_utils_MultiProc_procIdList__C, ".const:ti_sdo_utils_MultiProc_procIdList__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__DESC__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__DESC__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__gateObj__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__id__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__id__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C, ".const:ti_sdo_utils_NameServerRemoteNull_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__count__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__count__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__heap__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__heap__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__sizeof__C");
#pragma DATA_SECTION(ti_sdo_utils_NameServerRemoteNull_Object__table__C, ".const:ti_sdo_utils_NameServerRemoteNull_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_c62_IntrinsicsSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__id__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c62_TaskSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__count__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_Object__table__C, ".const:ti_sysbios_family_c62_TaskSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_c62_TaskSupport_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_family_c62_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_c62_TaskSupport_stackAlignment__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Exception_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Exception_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__id__C, ".const:ti_sysbios_family_c64p_Exception_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Exception_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_Exception_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__count__C, ".const:ti_sysbios_family_c64p_Exception_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__heap__C, ".const:ti_sysbios_family_c64p_Exception_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Exception_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_Object__table__C, ".const:ti_sysbios_family_c64p_Exception_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMin__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMin__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_E_exceptionMax__C, ".const:ti_sysbios_family_c64p_Exception_E_exceptionMax__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enableExternalMPC__C, ".const:ti_sysbios_family_c64p_Exception_enableExternalMPC__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_enablePrint__C, ".const:ti_sysbios_family_c64p_Exception_enablePrint__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_exceptionHook__C, ".const:ti_sysbios_family_c64p_Exception_exceptionHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_internalHook__C, ".const:ti_sysbios_family_c64p_Exception_internalHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_externalHook__C, ".const:ti_sysbios_family_c64p_Exception_externalHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_nmiHook__C, ".const:ti_sysbios_family_c64p_Exception_nmiHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Exception_returnHook__C, ".const:ti_sysbios_family_c64p_Exception_returnHook__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__DESC__C, ".const:ti_sysbios_family_c64p_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_c64p_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__id__C, ".const:ti_sysbios_family_c64p_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__count__C, ".const:ti_sysbios_family_c64p_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__heap__C, ".const:ti_sysbios_family_c64p_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_c64p_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_Object__table__C, ".const:ti_sysbios_family_c64p_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_c64p_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_c64p_Hwi_E_alreadyDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_E_handleNotFound__C, ".const:ti_sysbios_family_c64p_Hwi_E_handleNotFound__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LM_begin__C, ".const:ti_sysbios_family_c64p_Hwi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_LD_end__C, ".const:ti_sysbios_family_c64p_Hwi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_enableException__C, ".const:ti_sysbios_family_c64p_Hwi_enableException__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiDisable__C, ".const:ti_sysbios_family_c64p_Hwi_swiDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_swiRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskDisable__C, ".const:ti_sysbios_family_c64p_Hwi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_c64p_Hwi_taskRestoreHwi__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_Hwi_hooks__C, ".const:ti_sysbios_family_c64p_Hwi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__id__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Object__count__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Object__heap__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Object__sizeof__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c64p_tci6488_TimerSupport_Object__table__C, ".const:ti_sysbios_family_c64p_tci6488_TimerSupport_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__diagsEnabled__C, ".const:ti_sysbios_family_c66_Cache_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__diagsIncluded__C, ".const:ti_sysbios_family_c66_Cache_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__diagsMask__C, ".const:ti_sysbios_family_c66_Cache_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__gateObj__C, ".const:ti_sysbios_family_c66_Cache_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__gatePrms__C, ".const:ti_sysbios_family_c66_Cache_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__id__C, ".const:ti_sysbios_family_c66_Cache_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerDefined__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerObj__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn0__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn1__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn2__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn4__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__loggerFxn8__C, ".const:ti_sysbios_family_c66_Cache_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Module__startupDoneFxn__C, ".const:ti_sysbios_family_c66_Cache_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Object__count__C, ".const:ti_sysbios_family_c66_Cache_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Object__heap__C, ".const:ti_sysbios_family_c66_Cache_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Object__sizeof__C, ".const:ti_sysbios_family_c66_Cache_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_Object__table__C, ".const:ti_sysbios_family_c66_Cache_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_initSize__C, ".const:ti_sysbios_family_c66_Cache_initSize__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_atomicBlockSize__C, ".const:ti_sysbios_family_c66_Cache_atomicBlockSize__C");
#pragma DATA_SECTION(ti_sysbios_family_c66_Cache_marvalues__C, ".const:ti_sysbios_family_c66_Cache_marvalues__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__DESC__C, ".const:ti_sysbios_gates_GateSwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateSwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateSwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateSwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateSwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateSwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateSwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__id__C, ".const:ti_sysbios_gates_GateSwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateSwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateSwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__count__C, ".const:ti_sysbios_gates_GateSwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__heap__C, ".const:ti_sysbios_gates_GateSwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateSwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_Object__table__C, ".const:ti_sysbios_gates_GateSwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_gates_GateSwi_A_badContext__C, ".const:ti_sysbios_gates_GateSwi_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__DESC__C, ".const:ti_sysbios_timers_timer64_Timer_Object__DESC__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__PARAMS__C, ".const:ti_sysbios_timers_timer64_Timer_Object__PARAMS__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__A, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__A");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsEnabled__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsIncluded__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__diagsMask__C, ".const:ti_sysbios_timers_timer64_Timer_Module__diagsMask__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gateObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gateObj__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__gatePrms__C, ".const:ti_sysbios_timers_timer64_Timer_Module__gatePrms__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__id__C, ".const:ti_sysbios_timers_timer64_Timer_Module__id__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerDefined__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerObj__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerObj__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn0__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn1__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn2__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn4__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_timers_timer64_Timer_Module__loggerFxn8__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_timers_timer64_Timer_Module__startupDoneFxn__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__count__C, ".const:ti_sysbios_timers_timer64_Timer_Object__count__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__heap__C, ".const:ti_sysbios_timers_timer64_Timer_Object__heap__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__sizeof__C, ".const:ti_sysbios_timers_timer64_Timer_Object__sizeof__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_Object__table__C, ".const:ti_sysbios_timers_timer64_Timer_Object__table__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_A_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_A_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_invalidTimer__C, ".const:ti_sysbios_timers_timer64_Timer_E_invalidTimer__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_notAvailable__C, ".const:ti_sysbios_timers_timer64_Timer_E_notAvailable__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_E_cannotSupport__C, ".const:ti_sysbios_timers_timer64_Timer_E_cannotSupport__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_anyMask__C, ".const:ti_sysbios_timers_timer64_Timer_anyMask__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_defaultHalf__C, ".const:ti_sysbios_timers_timer64_Timer_defaultHalf__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_timerSettings__C, ".const:ti_sysbios_timers_timer64_Timer_timerSettings__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_startupNeeded__C, ".const:ti_sysbios_timers_timer64_Timer_startupNeeded__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_freqDivisor__C, ".const:ti_sysbios_timers_timer64_Timer_freqDivisor__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numTimerDevices__C, ".const:ti_sysbios_timers_timer64_Timer_numTimerDevices__C");
#pragma DATA_SECTION(ti_sysbios_timers_timer64_Timer_numLocalTimers__C, ".const:ti_sysbios_timers_timer64_Timer_numLocalTimers__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsEnabled__C, ".const:xdc_runtime_SysStd_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsIncluded__C, ".const:xdc_runtime_SysStd_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__diagsMask__C, ".const:xdc_runtime_SysStd_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__gateObj__C, ".const:xdc_runtime_SysStd_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__gatePrms__C, ".const:xdc_runtime_SysStd_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__id__C, ".const:xdc_runtime_SysStd_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerDefined__C, ".const:xdc_runtime_SysStd_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerObj__C, ".const:xdc_runtime_SysStd_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn0__C, ".const:xdc_runtime_SysStd_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn1__C, ".const:xdc_runtime_SysStd_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn2__C, ".const:xdc_runtime_SysStd_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn4__C, ".const:xdc_runtime_SysStd_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__loggerFxn8__C, ".const:xdc_runtime_SysStd_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Module__startupDoneFxn__C, ".const:xdc_runtime_SysStd_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__count__C, ".const:xdc_runtime_SysStd_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__heap__C, ".const:xdc_runtime_SysStd_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__sizeof__C, ".const:xdc_runtime_SysStd_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_SysStd_Object__table__C, ".const:xdc_runtime_SysStd_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
