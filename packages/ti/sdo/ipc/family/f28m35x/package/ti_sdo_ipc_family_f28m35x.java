/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y35
 */
import java.util.*;
import org.mozilla.javascript.*;
import xdc.services.intern.xsr.*;
import xdc.services.spec.Session;

public class ti_sdo_ipc_family_f28m35x
{
    static final String VERS = "@(#) xdc-y35\n";

    static final Proto.Elm $$T_Bool = Proto.Elm.newBool();
    static final Proto.Elm $$T_Num = Proto.Elm.newNum();
    static final Proto.Elm $$T_Str = Proto.Elm.newStr();
    static final Proto.Elm $$T_Obj = Proto.Elm.newObj();

    static final Proto.Fxn $$T_Met = new Proto.Fxn(null, null, 0, -1, false);
    static final Proto.Map $$T_Map = new Proto.Map($$T_Obj);
    static final Proto.Arr $$T_Vec = new Proto.Arr($$T_Obj);

    static final XScriptO $$DEFAULT = Value.DEFAULT;
    static final Object $$UNDEF = Undefined.instance;

    static final Proto.Obj $$Package = (Proto.Obj)Global.get("$$Package");
    static final Proto.Obj $$Module = (Proto.Obj)Global.get("$$Module");
    static final Proto.Obj $$Instance = (Proto.Obj)Global.get("$$Instance");
    static final Proto.Obj $$Params = (Proto.Obj)Global.get("$$Params");

    static final Object $$objFldGet = Global.get("$$objFldGet");
    static final Object $$objFldSet = Global.get("$$objFldSet");
    static final Object $$proxyGet = Global.get("$$proxyGet");
    static final Object $$proxySet = Global.get("$$proxySet");
    static final Object $$delegGet = Global.get("$$delegGet");
    static final Object $$delegSet = Global.get("$$delegSet");

    Scriptable xdcO;
    Session ses;
    Value.Obj om;

    boolean isROV;
    boolean isCFG;

    Proto.Obj pkgP;
    Value.Obj pkgV;

    ArrayList<Object> imports = new ArrayList<Object>();
    ArrayList<Object> loggables = new ArrayList<Object>();
    ArrayList<Object> mcfgs = new ArrayList<Object>();
    ArrayList<Object> icfgs = new ArrayList<Object>();
    ArrayList<String> inherits = new ArrayList<String>();
    ArrayList<Object> proxies = new ArrayList<Object>();
    ArrayList<Object> sizes = new ArrayList<Object>();
    ArrayList<Object> tdefs = new ArrayList<Object>();

    void $$IMPORTS()
    {
        Global.callFxn("loadPackage", xdcO, "ti.sdo.ipc");
        Global.callFxn("loadPackage", xdcO, "xdc");
        Global.callFxn("loadPackage", xdcO, "xdc.corevers");
        Global.callFxn("loadPackage", xdcO, "xdc.runtime");
        Global.callFxn("loadPackage", xdcO, "ti.sysbios.knl");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.utils");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.ipc.notifyDrivers");
        Global.callFxn("loadPackage", xdcO, "ti.sdo.ipc.interfaces");
        Global.callFxn("loadPackage", xdcO, "xdc.rov");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sdo.ipc.family.f28m35x", new Value.Obj("ti.sdo.ipc.family.f28m35x", pkgP));
    }

    void IpcMgr$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr", new Value.Obj("ti.sdo.ipc.family.f28m35x.IpcMgr", po));
        pkgV.bind("IpcMgr", vo);
        // decls 
    }

    void NameServerBlock$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock", new Value.Obj("ti.sdo.ipc.family.f28m35x.NameServerBlock", po));
        pkgV.bind("NameServerBlock", vo);
        // decls 
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Status", om.findStrict("ti.sdo.utils.INameServerRemote.Status", "ti.sdo.ipc.family.f28m35x"));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Message", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Params", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.Object", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        }//isROV
    }

    void NotifyDriverCirc$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc", new Value.Obj("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc", po));
        pkgV.bind("NotifyDriverCirc", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$BasicView", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.BasicView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$EventDataView", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventDataView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$EventEntry", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Params", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Object", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        }//isROV
    }

    void TransportCirc$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc", new Value.Obj("ti.sdo.ipc.family.f28m35x.TransportCirc", po));
        pkgV.bind("TransportCirc", vo);
        // decls 
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Status", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Status", "ti.sdo.ipc.family.f28m35x"));
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Reason", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason", "ti.sdo.ipc.family.f28m35x"));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$BasicView", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.BasicView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$EventDataView", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.EventDataView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$Params", new Proto.Obj());
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.Object", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        }//isROV
    }

    void IpcMgr$$CONSTS()
    {
        // module IpcMgr
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.NOFETCH", 1L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.NODMAWRITE", 2L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.NOCPUWRITE", 4L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.MWRALLOW", 0x400FB980L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.MEMCNF", 0x400FB930L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.MSxMSEL", 0x400FB210L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.MSxSRCR", 0x400FB220L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.C28RTESTINIT", 0x4920L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.C28RINITDONE", 0x4930L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.MTOCRTESTINIT", 0x400FB260L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.MTOCRINITDONE", 0x400FB288L);
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.init", new Extern("ti_sdo_ipc_family_f28m35x_IpcMgr_init__I", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.notifyCircAttach", new Extern("ti_sdo_ipc_family_f28m35x_IpcMgr_notifyCircAttach__I", "xdc_Int(*)(xdc_UInt16,xdc_Ptr,xdc_Ptr)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.nameServerAttach", new Extern("ti_sdo_ipc_family_f28m35x_IpcMgr_nameServerAttach__I", "xdc_Int(*)(xdc_UInt16,xdc_Ptr,xdc_Ptr)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr.transportCircAttach", new Extern("ti_sdo_ipc_family_f28m35x_IpcMgr_transportCircAttach__I", "xdc_Int(*)(xdc_UInt16,xdc_Ptr,xdc_Ptr)", true, false));
    }

    void NameServerBlock$$CONSTS()
    {
        // module NameServerBlock
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.bufLen", 11L);
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.attach", new Extern("ti_sdo_ipc_family_f28m35x_NameServerBlock_attach__E", "xdc_Int(*)(xdc_UInt16,xdc_Ptr)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.detach", new Extern("ti_sdo_ipc_family_f28m35x_NameServerBlock_detach__E", "xdc_Int(*)(xdc_UInt16)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.sharedMemReq", new Extern("ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq__E", "xdc_SizeT(*)(xdc_Ptr)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.cbFxn", new Extern("ti_sdo_ipc_family_f28m35x_NameServerBlock_cbFxn__I", "xdc_Void(*)(xdc_UInt16,xdc_UInt16,xdc_UInt32,xdc_UArg,xdc_UInt32)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.strncpy", new Extern("ti_sdo_ipc_family_f28m35x_NameServerBlock_strncpy__I", "xdc_Char*(*)(xdc_Char*,xdc_Char*,xdc_SizeT)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock.swiFxn", new Extern("ti_sdo_ipc_family_f28m35x_NameServerBlock_swiFxn__I", "xdc_Void(*)(xdc_UArg)", true, false));
    }

    void NotifyDriverCirc$$CONSTS()
    {
        // module NotifyDriverCirc
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.sharedMemReq", new Extern("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq__E", "xdc_SizeT(*)(ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params*)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.intEnable", new Extern("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intEnable__I", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.intDisable", new Extern("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intDisable__I", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.intSend", new Extern("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intSend__I", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.intClear", new Extern("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_intClear__I", "xdc_UInt(*)(xdc_Void)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.isr", new Extern("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_isr__I", "xdc_Void(*)(xdc_UArg)", true, false));
    }

    void TransportCirc$$CONSTS()
    {
        // module TransportCirc
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.setErrFxn", new Extern("ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn__E", "xdc_Void(*)(xdc_Void(*)(ti_sdo_ipc_interfaces_IMessageQTransport_Reason,ti_sdo_ipc_interfaces_IMessageQTransport_Handle,xdc_Ptr,xdc_UArg))", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.close", new Extern("ti_sdo_ipc_family_f28m35x_TransportCirc_close__E", "xdc_Void(*)(ti_sdo_ipc_family_f28m35x_TransportCirc_Handle*)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.sharedMemReq", new Extern("ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq__E", "xdc_SizeT(*)(ti_sdo_ipc_family_f28m35x_TransportCirc_Params*)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.swiFxn", new Extern("ti_sdo_ipc_family_f28m35x_TransportCirc_swiFxn__I", "xdc_Void(*)(xdc_UArg)", true, false));
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc.notifyFxn", new Extern("ti_sdo_ipc_family_f28m35x_TransportCirc_notifyFxn__I", "xdc_Void(*)(xdc_UInt16,xdc_UInt16,xdc_UInt32,xdc_UArg,xdc_UInt32)", true, false));
    }

    void IpcMgr$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void NameServerBlock$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$NameServerBlock$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.ipc.family.f28m35x.NameServerBlock.create() called before xdc.useModule('ti.sdo.ipc.family.f28m35x.NameServerBlock')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst.$args.procId, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$create", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Module", "ti.sdo.ipc.family.f28m35x"), om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance", "ti.sdo.ipc.family.f28m35x"), 2, 1, false));
                        fxn.addArg(0, "procId", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF);
                        fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Params", "ti.sdo.ipc.family.f28m35x"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$NameServerBlock$$create = function( procId, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.ipc.family.f28m35x']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {procId:procId});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, [procId]);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$construct", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Module", "ti.sdo.ipc.family.f28m35x"), null, 3, 1, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Object", "ti.sdo.ipc.family.f28m35x"), null);
                        fxn.addArg(1, "procId", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF);
                        fxn.addArg(2, "__params", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Params", "ti.sdo.ipc.family.f28m35x"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$NameServerBlock$$construct = function( __obj, procId, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {procId:procId});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void NotifyDriverCirc$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$NotifyDriverCirc$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.create() called before xdc.useModule('ti.sdo.ipc.family.f28m35x.NotifyDriverCirc')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$create", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Module", "ti.sdo.ipc.family.f28m35x"), om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance", "ti.sdo.ipc.family.f28m35x"), 1, 0, false));
                        fxn.addArg(0, "__params", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Params", "ti.sdo.ipc.family.f28m35x"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$NotifyDriverCirc$$create = function( __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.ipc.family.f28m35x']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, []);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$construct", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Module", "ti.sdo.ipc.family.f28m35x"), null, 2, 0, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Object", "ti.sdo.ipc.family.f28m35x"), null);
                        fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Params", "ti.sdo.ipc.family.f28m35x"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$NotifyDriverCirc$$construct = function( __obj, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void TransportCirc$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$TransportCirc$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.ipc.family.f28m35x.TransportCirc.create() called before xdc.useModule('ti.sdo.ipc.family.f28m35x.TransportCirc')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst.$args.procId, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$create", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Module", "ti.sdo.ipc.family.f28m35x"), om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance", "ti.sdo.ipc.family.f28m35x"), 2, 1, false));
                        fxn.addArg(0, "procId", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF);
                        fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Params", "ti.sdo.ipc.family.f28m35x"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$TransportCirc$$create = function( procId, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.ipc.family.f28m35x']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {procId:procId});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, [procId]);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$construct", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Module", "ti.sdo.ipc.family.f28m35x"), null, 3, 1, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$Object", "ti.sdo.ipc.family.f28m35x"), null);
                        fxn.addArg(1, "procId", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF);
                        fxn.addArg(2, "__params", (Proto)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Params", "ti.sdo.ipc.family.f28m35x"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$ipc$family$f28m35x$TransportCirc$$construct = function( __obj, procId, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {procId:procId});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void IpcMgr$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void NameServerBlock$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn NameServerBlock.sharedMemReqMeta
        fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$sharedMemReqMeta", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Module", "ti.sdo.ipc.family.f28m35x"), Proto.Elm.newCNum("(xdc_SizeT)"), 1, 1, false));
                fxn.addArg(0, "params", new Proto.Adr("ti_sdo_ipc_family_f28m35x_NameServerBlock_Params*", "PS"), $$UNDEF);
    }

    void NotifyDriverCirc$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn NotifyDriverCirc.sharedMemReqMeta
        fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$sharedMemReqMeta", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Module", "ti.sdo.ipc.family.f28m35x"), Proto.Elm.newCNum("(xdc_SizeT)"), 1, 1, false));
                fxn.addArg(0, "params", new Proto.Adr("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params*", "PS"), $$UNDEF);
    }

    void TransportCirc$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn TransportCirc.sharedMemReqMeta
        fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$sharedMemReqMeta", new Proto.Fxn(om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Module", "ti.sdo.ipc.family.f28m35x"), Proto.Elm.newCNum("(xdc_SizeT)"), 1, 1, false));
                fxn.addArg(0, "params", new Proto.Adr("ti_sdo_ipc_family_f28m35x_TransportCirc_Params*", "PS"), $$UNDEF);
    }

    void IpcMgr$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void NameServerBlock$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", "ti.sdo.ipc.family.f28m35x");
        sizes.clear();
        sizes.add(Global.newArray("request", "UInt32"));
        sizes.add(Global.newArray("response", "UInt32"));
        sizes.add(Global.newArray("requestStatus", "UInt32"));
        sizes.add(Global.newArray("value", "UInt32"));
        sizes.add(Global.newArray("valueLen", "UInt32"));
        sizes.add(Global.newArray("instanceName", "A8;UInt32"));
        sizes.add(Global.newArray("name", "A8;UInt32"));
        sizes.add(Global.newArray("valueBuf", "A11;UInt32"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock.Message']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock.Message']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock.Message'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State", "ti.sdo.ipc.family.f28m35x");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("readRequest", "UPtr"));
        sizes.add(Global.newArray("readResponse", "UPtr"));
        sizes.add(Global.newArray("writeRequest", "UPtr"));
        sizes.add(Global.newArray("writeResponse", "UPtr"));
        sizes.add(Global.newArray("regionId", "UInt16"));
        sizes.add(Global.newArray("remoteProcId", "UInt16"));
        sizes.add(Global.newArray("semRemoteWait", "Sti.sysbios.knl.Semaphore;Instance_State"));
        sizes.add(Global.newArray("semMultiBlock", "Sti.sysbios.knl.Semaphore;Instance_State"));
        sizes.add(Global.newArray("swiObj", "Sti.sysbios.knl.Swi;Instance_State"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void NotifyDriverCirc$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry", "ti.sdo.ipc.family.f28m35x");
        sizes.clear();
        sizes.add(Global.newArray("eventid", "UInt32"));
        sizes.add(Global.newArray("payload", "UInt32"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State", "ti.sdo.ipc.family.f28m35x");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("putBuffer", "UPtr"));
        sizes.add(Global.newArray("putReadIndex", "UPtr"));
        sizes.add(Global.newArray("putWriteIndex", "UPtr"));
        sizes.add(Global.newArray("getBuffer", "UPtr"));
        sizes.add(Global.newArray("getReadIndex", "UPtr"));
        sizes.add(Global.newArray("getWriteIndex", "UPtr"));
        sizes.add(Global.newArray("evtRegMask", "UInt32"));
        sizes.add(Global.newArray("notifyHandle", "UPtr"));
        sizes.add(Global.newArray("remoteProcId", "UInt16"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void TransportCirc$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State", "ti.sdo.ipc.family.f28m35x");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("putBuffer", "UPtr"));
        sizes.add(Global.newArray("putReadIndex", "UPtr"));
        sizes.add(Global.newArray("putWriteIndex", "UPtr"));
        sizes.add(Global.newArray("getBuffer", "UPtr"));
        sizes.add(Global.newArray("getReadIndex", "UPtr"));
        sizes.add(Global.newArray("getWriteIndex", "UPtr"));
        sizes.add(Global.newArray("allocSize", "USize"));
        sizes.add(Global.newArray("remoteProcId", "UInt16"));
        sizes.add(Global.newArray("priority", "UInt16"));
        sizes.add(Global.newArray("swiObj", "Sti.sysbios.knl.Swi;Instance_State"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void IpcMgr$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/f28m35x/IpcMgr.xs");
        om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr.Module", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.IpcMgr.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("NOFETCH", Proto.Elm.newCNum("(xdc_Bits32)"), 1L, "rh");
                po.addFld("NODMAWRITE", Proto.Elm.newCNum("(xdc_Bits32)"), 2L, "rh");
                po.addFld("NOCPUWRITE", Proto.Elm.newCNum("(xdc_Bits32)"), 4L, "rh");
                po.addFld("MWRALLOW", Proto.Elm.newCNum("(xdc_UInt32)"), 0x400FB980L, "rh");
                po.addFld("MEMCNF", Proto.Elm.newCNum("(xdc_UInt32)"), 0x400FB930L, "rh");
                po.addFld("MSxMSEL", Proto.Elm.newCNum("(xdc_UInt32)"), 0x400FB210L, "rh");
                po.addFld("MSxSRCR", Proto.Elm.newCNum("(xdc_UInt32)"), 0x400FB220L, "rh");
                po.addFld("C28RTESTINIT", Proto.Elm.newCNum("(xdc_UInt32)"), 0x4920L, "rh");
                po.addFld("C28RINITDONE", Proto.Elm.newCNum("(xdc_UInt32)"), 0x4930L, "rh");
                po.addFld("MTOCRTESTINIT", Proto.Elm.newCNum("(xdc_UInt32)"), 0x400FB260L, "rh");
                po.addFld("MTOCRINITDONE", Proto.Elm.newCNum("(xdc_UInt32)"), 0x400FB288L, "rh");
        if (isCFG) {
            po.addFld("A_internal", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.ipc.family.f28m35x"), Global.newObject("msg", "A_internal: An internal error has occurred"), "w");
            po.addFld("A_invParam", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.ipc.family.f28m35x"), Global.newObject("msg", "A_invParam: Invalid configuration parameter supplied"), "w");
            po.addFld("A_notEnoughMemory", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.ipc.family.f28m35x"), Global.newObject("msg", "A_notEnoughMemory: There is not enough memory for operation"), "w");
            po.addFld("A_nullArgument", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.ipc.family.f28m35x"), Global.newObject("msg", "A_nullArgument: Required argument is null"), "w");
            po.addFld("E_internal", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.ipc.family.f28m35x"), Global.newObject("msg", "E_internal: An internal error occurred"), "w");
            po.addFld("genLinkerSections", $$T_Bool, true, "wh");
            po.addFld("ipcSetFlag", Proto.Elm.newCNum("(xdc_UInt32)"), 3L, "w");
            po.addFld("messageQSize", Proto.Elm.newCNum("(xdc_UInt32)"), 128L, "w");
            po.addFld("messageQEventId", Proto.Elm.newCNum("(xdc_UInt16)"), 2L, "w");
            po.addFld("nameServerEventId", Proto.Elm.newCNum("(xdc_UInt16)"), 4L, "w");
            po.addFld("numNotifyMsgs", Proto.Elm.newCNum("(xdc_UInt32)"), 32L, "w");
            po.addFld("numMessageQMsgs", Proto.Elm.newCNum("(xdc_UInt32)"), 4L, "w");
            po.addFld("sharedMemoryEnable", Proto.Elm.newCNum("(xdc_Bits32)"), 0xffffffffL, "w");
            po.addFld("sharedMemoryOwnerMask", Proto.Elm.newCNum("(xdc_Bits32)"), 0L, "w");
            po.addFld("sharedMemoryAccess", new Proto.Arr(Proto.Elm.newCNum("(xdc_Bits32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
            po.addFld("readAddr", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
            po.addFld("writeAddr", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
            po.addFld("sharedMemSizeUsed", Proto.Elm.newCNum("(xdc_UInt32)"), $$UNDEF, "w");
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.IpcMgr$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
    }

    void NameServerBlock$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/f28m35x/NameServerBlock.xs");
        om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Module", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NameServerBlock.Module", om.findStrict("ti.sdo.utils.INameServerRemote.Module", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("bufLen", Proto.Elm.newCNum("(xdc_UInt)"), 11L, "rh");
        if (isCFG) {
            po.addFld("A_invalidValueLen", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.ipc.family.f28m35x"), Global.newObject("msg", "A_invalidValueLen: Invalid valueLen (too large)"), "w");
            po.addFld("notifyEventId", Proto.Elm.newCNum("(xdc_UInt32)"), 4L, "w");
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$create", "ti.sdo.ipc.family.f28m35x"), Global.get("ti$sdo$ipc$family$f28m35x$NameServerBlock$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$construct", "ti.sdo.ipc.family.f28m35x"), Global.get("ti$sdo$ipc$family$f28m35x$NameServerBlock$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NameServerBlock$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
                po.addFxn("sharedMemReqMeta", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$sharedMemReqMeta", "ti.sdo.ipc.family.f28m35x"), Global.get(cap, "sharedMemReqMeta"));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance", om.findStrict("ti.sdo.utils.INameServerRemote.Instance", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("bufLen", Proto.Elm.newCNum("(xdc_UInt)"), 11L, "rh");
        if (isCFG) {
            po.addFld("readAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("writeAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Params", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NameServerBlock.Params", om.findStrict("ti.sdo.utils.INameServerRemote$$Params", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("bufLen", Proto.Elm.newCNum("(xdc_UInt)"), 11L, "rh");
        if (isCFG) {
            po.addFld("readAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("writeAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Object", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NameServerBlock.Object", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance", "ti.sdo.ipc.family.f28m35x"));
        // struct NameServerBlock.Message
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Message", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("request", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
                po.addFld("response", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
                po.addFld("requestStatus", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
                po.addFld("value", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
                po.addFld("valueLen", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
                po.addFld("instanceName", new Proto.Arr(Proto.Elm.newCNum("(xdc_Bits32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
                po.addFld("name", new Proto.Arr(Proto.Elm.newCNum("(xdc_Bits32)"), false, xdc.services.intern.xsr.Enum.intValue(8L)), $$DEFAULT, "w");
                po.addFld("valueBuf", new Proto.Arr(Proto.Elm.newCNum("(xdc_Bits32)"), false, xdc.services.intern.xsr.Enum.intValue(11L)), $$DEFAULT, "w");
        // struct NameServerBlock.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Instance_State", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("readRequest", new Proto.Adr("ti_sdo_ipc_family_f28m35x_NameServerBlock_Message*", "PS"), $$UNDEF, "w");
                po.addFld("readResponse", new Proto.Adr("ti_sdo_ipc_family_f28m35x_NameServerBlock_Message*", "PS"), $$UNDEF, "w");
                po.addFld("writeRequest", new Proto.Adr("ti_sdo_ipc_family_f28m35x_NameServerBlock_Message*", "PS"), $$UNDEF, "w");
                po.addFld("writeResponse", new Proto.Adr("ti_sdo_ipc_family_f28m35x_NameServerBlock_Message*", "PS"), $$UNDEF, "w");
                po.addFld("regionId", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF, "w");
                po.addFld("remoteProcId", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF, "w");
                po.addFldV("semRemoteWait", (Proto)om.findStrict("ti.sysbios.knl.Semaphore.Object", "ti.sdo.ipc.family.f28m35x"), $$DEFAULT, "wh", $$objFldGet, $$objFldSet);
                po.addFld("Object_field_semRemoteWait", (Proto)om.findStrict("ti.sysbios.knl.Semaphore.Object", "ti.sdo.ipc.family.f28m35x"), $$DEFAULT, "w");
                po.addFldV("semMultiBlock", (Proto)om.findStrict("ti.sysbios.knl.Semaphore.Object", "ti.sdo.ipc.family.f28m35x"), $$DEFAULT, "wh", $$objFldGet, $$objFldSet);
                po.addFld("Object_field_semMultiBlock", (Proto)om.findStrict("ti.sysbios.knl.Semaphore.Object", "ti.sdo.ipc.family.f28m35x"), $$DEFAULT, "w");
                po.addFldV("swiObj", (Proto)om.findStrict("ti.sysbios.knl.Swi.Object", "ti.sdo.ipc.family.f28m35x"), $$DEFAULT, "wh", $$objFldGet, $$objFldSet);
                po.addFld("Object_field_swiObj", (Proto)om.findStrict("ti.sysbios.knl.Swi.Object", "ti.sdo.ipc.family.f28m35x"), $$DEFAULT, "w");
    }

    void NotifyDriverCirc$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/f28m35x/NotifyDriverCirc.xs");
        om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Module", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Module", om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Module", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("rovViewInfo", (Proto)om.findStrict("xdc.rov.ViewInfo.Instance", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "wh");
            po.addFld("A_notSupported", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.ipc.family.f28m35x"), Global.newObject("msg", "A_notSupported: [enable/disable]Event not supported by NotifyDriverCirc"), "w");
            po.addFld("numMsgs", Proto.Elm.newCNum("(xdc_UInt)"), 16L, "w");
            po.addFld("localIntId", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
            po.addFld("remoteIntId", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
            po.addFld("maxIndex", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
            po.addFld("modIndex", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$create", "ti.sdo.ipc.family.f28m35x"), Global.get("ti$sdo$ipc$family$f28m35x$NotifyDriverCirc$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$construct", "ti.sdo.ipc.family.f28m35x"), Global.get("ti$sdo$ipc$family$f28m35x$NotifyDriverCirc$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
                po.addFxn("sharedMemReqMeta", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$sharedMemReqMeta", "ti.sdo.ipc.family.f28m35x"), Global.get(cap, "sharedMemReqMeta"));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance", om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Instance", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("readAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("writeAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Params", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Params", om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver$$Params", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("readAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("writeAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Object", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Object", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance", "ti.sdo.ipc.family.f28m35x"));
        // struct NotifyDriverCirc.BasicView
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$BasicView", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.BasicView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("remoteProcName", $$T_Str, $$UNDEF, "w");
                po.addFld("bufSize", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("spinCount", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("maxSpinWait", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
        // struct NotifyDriverCirc.EventDataView
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$EventDataView", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventDataView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("index", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("buffer", $$T_Str, $$UNDEF, "w");
                po.addFld("addr", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("eventId", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("payload", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        // struct NotifyDriverCirc.EventEntry
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$EventEntry", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("eventid", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
                po.addFld("payload", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
        // struct NotifyDriverCirc.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Instance_State", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("putBuffer", new Proto.Adr("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_EventEntry*", "PS"), $$UNDEF, "w");
                po.addFld("putReadIndex", new Proto.Adr("xdc_Bits32*", "Pn"), $$UNDEF, "w");
                po.addFld("putWriteIndex", new Proto.Adr("xdc_Bits32*", "Pn"), $$UNDEF, "w");
                po.addFld("getBuffer", new Proto.Adr("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_EventEntry*", "PS"), $$UNDEF, "w");
                po.addFld("getReadIndex", new Proto.Adr("xdc_Bits32*", "Pn"), $$UNDEF, "w");
                po.addFld("getWriteIndex", new Proto.Adr("xdc_Bits32*", "Pn"), $$UNDEF, "w");
                po.addFld("evtRegMask", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
                po.addFld("notifyHandle", (Proto)om.findStrict("ti.sdo.ipc.Notify.Handle", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "w");
                po.addFld("remoteProcId", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF, "w");
    }

    void TransportCirc$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/f28m35x/TransportCirc.xs");
        om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Module", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.TransportCirc.Module", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Module", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("rovViewInfo", (Proto)om.findStrict("xdc.rov.ViewInfo.Instance", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "wh");
            po.addFld("notifyEventId", Proto.Elm.newCNum("(xdc_UInt16)"), 2L, "w");
            po.addFld("numMsgs", Proto.Elm.newCNum("(xdc_UInt)"), 4L, "w");
            po.addFld("maxMsgSizeInBytes", Proto.Elm.newCNum("(xdc_UInt)"), 128L, "w");
            po.addFld("maxIndex", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
            po.addFld("msgSize", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$create", "ti.sdo.ipc.family.f28m35x"), Global.get("ti$sdo$ipc$family$f28m35x$TransportCirc$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$construct", "ti.sdo.ipc.family.f28m35x"), Global.get("ti$sdo$ipc$family$f28m35x$TransportCirc$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.ipc.family.f28m35x.TransportCirc$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
                po.addFxn("sharedMemReqMeta", (Proto.Fxn)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$sharedMemReqMeta", "ti.sdo.ipc.family.f28m35x"), Global.get(cap, "sharedMemReqMeta"));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Instance", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("openFlag", $$T_Bool, false, "w");
            po.addFld("readAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("writeAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$Params", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.TransportCirc.Params", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport$$Params", "ti.sdo.ipc.family.f28m35x"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("openFlag", $$T_Bool, false, "w");
            po.addFld("readAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
            po.addFld("writeAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.ipc.family.f28m35x"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$Object", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.TransportCirc.Object", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance", "ti.sdo.ipc.family.f28m35x"));
        // struct TransportCirc.BasicView
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$BasicView", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.TransportCirc.BasicView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("remoteProcName", $$T_Str, $$UNDEF, "w");
        // struct TransportCirc.EventDataView
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$EventDataView", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.TransportCirc.EventDataView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("index", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("buffer", $$T_Str, $$UNDEF, "w");
                po.addFld("addr", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("message", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        // struct TransportCirc.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$Instance_State", "ti.sdo.ipc.family.f28m35x");
        po.init("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("putBuffer", new Proto.Adr("xdc_Ptr*", "PPv"), $$UNDEF, "w");
                po.addFld("putReadIndex", new Proto.Adr("xdc_Bits32*", "Pn"), $$UNDEF, "w");
                po.addFld("putWriteIndex", new Proto.Adr("xdc_Bits32*", "Pn"), $$UNDEF, "w");
                po.addFld("getBuffer", new Proto.Adr("xdc_Ptr*", "PPv"), $$UNDEF, "w");
                po.addFld("getReadIndex", new Proto.Adr("xdc_Bits32*", "Pn"), $$UNDEF, "w");
                po.addFld("getWriteIndex", new Proto.Adr("xdc_Bits32*", "Pn"), $$UNDEF, "w");
                po.addFld("allocSize", Proto.Elm.newCNum("(xdc_SizeT)"), $$UNDEF, "w");
                po.addFld("remoteProcId", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF, "w");
                po.addFld("priority", Proto.Elm.newCNum("(xdc_UInt16)"), $$UNDEF, "w");
                po.addFldV("swiObj", (Proto)om.findStrict("ti.sysbios.knl.Swi.Object", "ti.sdo.ipc.family.f28m35x"), $$DEFAULT, "wh", $$objFldGet, $$objFldSet);
                po.addFld("Object_field_swiObj", (Proto)om.findStrict("ti.sysbios.knl.Swi.Object", "ti.sdo.ipc.family.f28m35x"), $$DEFAULT, "w");
    }

    void IpcMgr$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr", "ti.sdo.ipc.family.f28m35x");
    }

    void NameServerBlock$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock", "ti.sdo.ipc.family.f28m35x");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Instance_State", "ti.sdo.ipc.family.f28m35x");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("Message$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Message", "ti.sdo.ipc.family.f28m35x");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$Instance_State", "ti.sdo.ipc.family.f28m35x");
        po.bind("readRequest$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", "isScalar", false));
        po.bind("readResponse$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", "isScalar", false));
        po.bind("writeRequest$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", "isScalar", false));
        po.bind("writeResponse$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", "isScalar", false));
    }

    void NotifyDriverCirc$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc", "ti.sdo.ipc.family.f28m35x");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Instance_State", "ti.sdo.ipc.family.f28m35x");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("EventEntry$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$EventEntry", "ti.sdo.ipc.family.f28m35x");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$Instance_State", "ti.sdo.ipc.family.f28m35x");
        po.bind("putBuffer$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry", "isScalar", false));
        po.bind("getBuffer$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry", "isScalar", false));
    }

    void TransportCirc$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc", "ti.sdo.ipc.family.f28m35x");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$Instance_State", "ti.sdo.ipc.family.f28m35x");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$Instance_State", "ti.sdo.ipc.family.f28m35x");
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sdo.ipc.family.f28m35x.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sdo.ipc.family.f28m35x"));
        Scriptable cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/family/f28m35x/package.xs");
        om.bind("xdc.IPackage$$capsule", cap);
        Object fxn;
                fxn = Global.get(cap, "init");
                if (fxn != null) pkgP.addFxn("init", (Proto.Fxn)om.findStrict("xdc.IPackage$$init", "ti.sdo.ipc.family.f28m35x"), fxn);
                fxn = Global.get(cap, "close");
                if (fxn != null) pkgP.addFxn("close", (Proto.Fxn)om.findStrict("xdc.IPackage$$close", "ti.sdo.ipc.family.f28m35x"), fxn);
                fxn = Global.get(cap, "validate");
                if (fxn != null) pkgP.addFxn("validate", (Proto.Fxn)om.findStrict("xdc.IPackage$$validate", "ti.sdo.ipc.family.f28m35x"), fxn);
                fxn = Global.get(cap, "exit");
                if (fxn != null) pkgP.addFxn("exit", (Proto.Fxn)om.findStrict("xdc.IPackage$$exit", "ti.sdo.ipc.family.f28m35x"), fxn);
                fxn = Global.get(cap, "getLibs");
                if (fxn != null) pkgP.addFxn("getLibs", (Proto.Fxn)om.findStrict("xdc.IPackage$$getLibs", "ti.sdo.ipc.family.f28m35x"), fxn);
                fxn = Global.get(cap, "getSects");
                if (fxn != null) pkgP.addFxn("getSects", (Proto.Fxn)om.findStrict("xdc.IPackage$$getSects", "ti.sdo.ipc.family.f28m35x"), fxn);
        pkgP.bind("$capsule", cap);
        pkgV.init2(pkgP, "ti.sdo.ipc.family.f28m35x", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sdo.ipc.family.f28m35x");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sdo.ipc.family.f28m35x.");
        pkgV.bind("$vers", Global.newArray("1, 0, 0, 0"));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        imports.add(Global.newArray("ti.sdo.ipc", Global.newArray()));
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sdo.ipc.family.f28m35x'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.family.f28m35x.a28FP',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.family.f28m35x.aem3',\n");
            sb.append("'lib/smpipc/debug/ti.sdo.ipc.family.f28m35x.aem3',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.family.f28m35x.a28FP', {target: 'ti.targets.C28_float', suffix: '28FP'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.family.f28m35x.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/smpipc/debug/ti.sdo.ipc.family.f28m35x.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void IpcMgr$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr", "ti.sdo.ipc.family.f28m35x");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr.Module", "ti.sdo.ipc.family.f28m35x");
        vo.init2(po, "ti.sdo.ipc.family.f28m35x.IpcMgr", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr$$capsule", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.family.f28m35x", "ti.sdo.ipc.family.f28m35x"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        mcfgs.add("A_internal");
        mcfgs.add("A_invParam");
        mcfgs.add("A_notEnoughMemory");
        mcfgs.add("A_nullArgument");
        mcfgs.add("E_internal");
        mcfgs.add("ipcSetFlag");
        mcfgs.add("messageQSize");
        mcfgs.add("messageQEventId");
        mcfgs.add("nameServerEventId");
        mcfgs.add("numNotifyMsgs");
        mcfgs.add("numMessageQMsgs");
        mcfgs.add("sharedMemoryEnable");
        mcfgs.add("sharedMemoryOwnerMask");
        mcfgs.add("sharedMemoryAccess");
        mcfgs.add("readAddr");
        mcfgs.add("writeAddr");
        mcfgs.add("sharedMemSizeUsed");
        icfgs.add("sharedMemSizeUsed");
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.ipc.family.f28m35x")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 0);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("init", om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr.init", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("notifyCircAttach", om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr.notifyCircAttach", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("nameServerAttach", om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr.nameServerAttach", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("transportCircAttach", om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr.transportCircAttach", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_ipc_family_f28m35x_IpcMgr_Module__startupDone__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray("E_internal"));
        vo.bind("$$assertDescCfgs", Global.newArray("A_internal", "A_invParam", "A_notEnoughMemory", "A_nullArgument"));
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 1);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("IpcMgr", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("IpcMgr");
    }

    void NameServerBlock$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock", "ti.sdo.ipc.family.f28m35x");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Module", "ti.sdo.ipc.family.f28m35x");
        vo.init2(po, "ti.sdo.ipc.family.f28m35x.NameServerBlock", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock$$capsule", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Instance", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Params", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Params", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Params", "ti.sdo.ipc.family.f28m35x")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Handle", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.family.f28m35x", "ti.sdo.ipc.family.f28m35x"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("Status", om.findStrict("ti.sdo.utils.INameServerRemote.Status", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Message", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Message", "ti.sdo.ipc.family.f28m35x"));
        mcfgs.add("A_invalidValueLen");
        mcfgs.add("notifyEventId");
        vo.bind("Instance_State", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("S_SUCCESS", om.findStrict("ti.sdo.utils.INameServerRemote.S_SUCCESS", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("E_FAIL", om.findStrict("ti.sdo.utils.INameServerRemote.E_FAIL", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("E_ERROR", om.findStrict("ti.sdo.utils.INameServerRemote.E_ERROR", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.utils");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.ipc.family.f28m35x")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", om.has("ti.sdo.ipc.family.f28m35x.NameServerBlock$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$ipc$family$f28m35x$NameServerBlock$$__initObject"));
        }//isCFG
        vo.bind("attach", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.attach", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("detach", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.detach", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("sharedMemReq", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.sharedMemReq", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("cbFxn", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.cbFxn", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("strncpy", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.strncpy", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("swiFxn", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.swiFxn", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_ipc_family_f28m35x_NameServerBlock_Handle__label__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_Module__startupDone__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__create__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__delete__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__destruct__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__get__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__first__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_Object__next__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_Params__init__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_attach__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_detach__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_sharedMemReq__E", "ti_sdo_ipc_family_f28m35x_NameServerBlock_get__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray("A_invalidValueLen"));
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock.Object", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "get", "entry", "%p, \"%s\", \"%s\", %p, %p, %p, %p", "exit", "%d"));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("NameServerBlock", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("NameServerBlock");
    }

    void NotifyDriverCirc$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc", "ti.sdo.ipc.family.f28m35x");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Module", "ti.sdo.ipc.family.f28m35x");
        vo.init2(po, "ti.sdo.ipc.family.f28m35x.NotifyDriverCirc", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$capsule", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Instance", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Params", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Params", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Params", "ti.sdo.ipc.family.f28m35x")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Handle", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.family.f28m35x", "ti.sdo.ipc.family.f28m35x"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("BasicView", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.BasicView", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.BasicView", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("EventDataView", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventDataView", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventDataView", "ti.sdo.ipc.family.f28m35x"));
        mcfgs.add("A_notSupported");
        mcfgs.add("numMsgs");
        mcfgs.add("localIntId");
        icfgs.add("localIntId");
        mcfgs.add("remoteIntId");
        icfgs.add("remoteIntId");
        mcfgs.add("maxIndex");
        icfgs.add("maxIndex");
        mcfgs.add("modIndex");
        icfgs.add("modIndex");
        vo.bind("EventEntry", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.EventEntry", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Instance_State", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.ipc.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.ipc.family.f28m35x")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", om.has("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$ipc$family$f28m35x$NotifyDriverCirc$$__initObject"));
        }//isCFG
        vo.bind("sharedMemReq", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.sharedMemReq", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("intEnable", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.intEnable", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("intDisable", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.intDisable", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("intSend", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.intSend", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("intClear", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.intClear", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("isr", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.isr", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Handle__label__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Module__startupDone__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__create__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__delete__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__destruct__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__get__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__first__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Object__next__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_Params__init__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_registerEvent__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_unregisterEvent__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sendEvent__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disable__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enable__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_disableEvent__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_enableEvent__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_setNotifyHandle__E", "ti_sdo_ipc_family_f28m35x_NotifyDriverCirc_sharedMemReq__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray("A_notSupported"));
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc.Object", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "sharedMemReq", "entry", "%p", "exit", "0x%x"));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("NotifyDriverCirc", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("NotifyDriverCirc");
    }

    void TransportCirc$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc", "ti.sdo.ipc.family.f28m35x");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Module", "ti.sdo.ipc.family.f28m35x");
        vo.init2(po, "ti.sdo.ipc.family.f28m35x.TransportCirc", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc$$capsule", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Instance", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Params", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Params", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Params", "ti.sdo.ipc.family.f28m35x")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Handle", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.family.f28m35x", "ti.sdo.ipc.family.f28m35x"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("Status", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Status", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Reason", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason", "ti.sdo.ipc.family.f28m35x"));
        mcfgs.add("errFxn");
        vo.bind("ErrFxn", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.ErrFxn", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("BasicView", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.BasicView", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.BasicView", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("EventDataView", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.EventDataView", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.EventDataView", "ti.sdo.ipc.family.f28m35x"));
        mcfgs.add("notifyEventId");
        mcfgs.add("numMsgs");
        mcfgs.add("maxMsgSizeInBytes");
        mcfgs.add("maxIndex");
        icfgs.add("maxIndex");
        mcfgs.add("msgSize");
        icfgs.add("msgSize");
        vo.bind("Instance_State", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        tdefs.add(om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Instance_State", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("S_SUCCESS", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.S_SUCCESS", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("E_FAIL", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.E_FAIL", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("E_ERROR", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.E_ERROR", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Reason_FAILEDPUT", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_FAILEDPUT", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Reason_INTERNALERR", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_INTERNALERR", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Reason_PHYSICALERR", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_PHYSICALERR", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("Reason_FAILEDALLOC", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_FAILEDALLOC", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sdo.ipc.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.ipc.family.f28m35x")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", om.has("ti.sdo.ipc.family.f28m35x.TransportCirc$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$ipc$family$f28m35x$TransportCirc$$__initObject"));
        }//isCFG
        vo.bind("setErrFxn", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.setErrFxn", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("close", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.close", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("sharedMemReq", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.sharedMemReq", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("swiFxn", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.swiFxn", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("notifyFxn", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.notifyFxn", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_ipc_family_f28m35x_TransportCirc_Handle__label__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_Module__startupDone__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__create__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__delete__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__destruct__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__get__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__first__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_Object__next__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_Params__init__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_setErrFxn__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_getStatus__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_put__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_control__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_close__E", "ti_sdo_ipc_family_f28m35x_TransportCirc_sharedMemReq__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc.Object", "ti.sdo.ipc.family.f28m35x"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "setErrFxn", "entry", "%p", "exit", ""));
        loggables.add(Global.newObject("name", "close", "entry", "%p", "exit", ""));
        loggables.add(Global.newObject("name", "sharedMemReq", "entry", "%p", "exit", "0x%x"));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("TransportCirc", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("TransportCirc");
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
            Object srcP = ((XScriptO)om.findStrict("xdc.runtime.IInstance", "ti.sdo.ipc.family.f28m35x")).findStrict("PARAMS", "ti.sdo.ipc.family.f28m35x");
            Scriptable dstP;

            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock", "ti.sdo.ipc.family.f28m35x")).findStrict("PARAMS", "ti.sdo.ipc.family.f28m35x");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc", "ti.sdo.ipc.family.f28m35x")).findStrict("PARAMS", "ti.sdo.ipc.family.f28m35x");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc", "ti.sdo.ipc.family.f28m35x")).findStrict("PARAMS", "ti.sdo.ipc.family.f28m35x");
            Global.put(dstP, "instance", srcP);
        }//isCFG
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.ipc.family.f28m35x.IpcMgr", "ti.sdo.ipc.family.f28m35x"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.ipc.family.f28m35x.NameServerBlock", "ti.sdo.ipc.family.f28m35x"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc", "ti.sdo.ipc.family.f28m35x"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc", "ti.sdo.ipc.family.f28m35x"));
        if (isCFG) {
            vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc", "ti.sdo.ipc.family.f28m35x");
            Global.put(vo, "rovViewInfo", Global.callFxn("create", (Scriptable)om.find("xdc.rov.ViewInfo"), Global.newObject("viewMap", Global.newArray(new Object[]{Global.newArray(new Object[]{"Basic", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE"), "viewInitFxn", "viewInitBasic", "structName", "BasicView")}), Global.newArray(new Object[]{"Events", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE_DATA"), "viewInitFxn", "viewInitData", "structName", "EventDataView")})}))));
        }//isCFG
        if (isCFG) {
            vo = (Value.Obj)om.findStrict("ti.sdo.ipc.family.f28m35x.TransportCirc", "ti.sdo.ipc.family.f28m35x");
            Global.put(vo, "rovViewInfo", Global.callFxn("create", (Scriptable)om.find("xdc.rov.ViewInfo"), Global.newObject("viewMap", Global.newArray(new Object[]{Global.newArray(new Object[]{"Basic", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE"), "viewInitFxn", "viewInitBasic", "structName", "BasicView")}), Global.newArray(new Object[]{"Events", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE_DATA"), "viewInitFxn", "viewInitData", "structName", "EventDataView")})}))));
        }//isCFG
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sdo.ipc.family.f28m35x.IpcMgr")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.family.f28m35x.NameServerBlock")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.family.f28m35x.NotifyDriverCirc")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.family.f28m35x.TransportCirc")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sdo.ipc.family.f28m35x")).add(pkgV);
    }

    public void exec( Scriptable xdcO, Session ses )
    {
        this.xdcO = xdcO;
        this.ses = ses;
        om = (Value.Obj)xdcO.get("om", null);

        Object o = om.geto("$name");
        String s = o instanceof String ? (String)o : null;
        isCFG = s != null && s.equals("cfg");
        isROV = s != null && s.equals("rov");

        $$IMPORTS();
        $$OBJECTS();
        IpcMgr$$OBJECTS();
        NameServerBlock$$OBJECTS();
        NotifyDriverCirc$$OBJECTS();
        TransportCirc$$OBJECTS();
        IpcMgr$$CONSTS();
        NameServerBlock$$CONSTS();
        NotifyDriverCirc$$CONSTS();
        TransportCirc$$CONSTS();
        IpcMgr$$CREATES();
        NameServerBlock$$CREATES();
        NotifyDriverCirc$$CREATES();
        TransportCirc$$CREATES();
        IpcMgr$$FUNCTIONS();
        NameServerBlock$$FUNCTIONS();
        NotifyDriverCirc$$FUNCTIONS();
        TransportCirc$$FUNCTIONS();
        IpcMgr$$SIZES();
        NameServerBlock$$SIZES();
        NotifyDriverCirc$$SIZES();
        TransportCirc$$SIZES();
        IpcMgr$$TYPES();
        NameServerBlock$$TYPES();
        NotifyDriverCirc$$TYPES();
        TransportCirc$$TYPES();
        if (isROV) {
            IpcMgr$$ROV();
            NameServerBlock$$ROV();
            NotifyDriverCirc$$ROV();
            TransportCirc$$ROV();
        }//isROV
        $$SINGLETONS();
        IpcMgr$$SINGLETONS();
        NameServerBlock$$SINGLETONS();
        NotifyDriverCirc$$SINGLETONS();
        TransportCirc$$SINGLETONS();
        $$INITIALIZATION();
    }
}
