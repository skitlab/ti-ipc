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

public class ti_sdo_ipc_interfaces
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
        Global.callFxn("loadPackage", xdcO, "xdc");
        Global.callFxn("loadPackage", xdcO, "xdc.corevers");
        Global.callFxn("loadPackage", xdcO, "xdc.runtime");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sdo.ipc.interfaces", new Value.Obj("ti.sdo.ipc.interfaces", pkgP));
    }

    void INotifyDriver$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.INotifyDriver.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.interfaces.INotifyDriver", new Value.Obj("ti.sdo.ipc.interfaces.INotifyDriver", po));
        pkgV.bind("INotifyDriver", vo);
        // decls 
        // insts 
        Object insP = om.bind("ti.sdo.ipc.interfaces.INotifyDriver.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.INotifyDriver$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.ipc.interfaces.INotifyDriver.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.INotifyDriver$$Params", new Proto.Obj());
        om.bind("ti.sdo.ipc.interfaces.INotifyDriver.Params", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.INotifyDriver$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.interfaces.INotifyDriver.Instance_State", new Proto.Str(po, false));
        om.bind("ti.sdo.ipc.interfaces.INotifyDriver.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.ipc.interfaces.INotifyDriver.Object", om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Instance_State", "ti.sdo.ipc.interfaces"));
        }//isROV
    }

    void INotifySetup$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.INotifySetup.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.interfaces.INotifySetup", new Value.Obj("ti.sdo.ipc.interfaces.INotifySetup", po));
        pkgV.bind("INotifySetup", vo);
        // decls 
    }

    void IGateMPSupport$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.IGateMPSupport.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.interfaces.IGateMPSupport", new Value.Obj("ti.sdo.ipc.interfaces.IGateMPSupport", po));
        pkgV.bind("IGateMPSupport", vo);
        // decls 
        // insts 
        Object insP = om.bind("ti.sdo.ipc.interfaces.IGateMPSupport.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.IGateMPSupport$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.ipc.interfaces.IGateMPSupport.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.IGateMPSupport$$Params", new Proto.Obj());
        om.bind("ti.sdo.ipc.interfaces.IGateMPSupport.Params", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.IGateMPSupport$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.interfaces.IGateMPSupport.Instance_State", new Proto.Str(po, false));
        om.bind("ti.sdo.ipc.interfaces.IGateMPSupport.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.ipc.interfaces.IGateMPSupport.Object", om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Instance_State", "ti.sdo.ipc.interfaces"));
        }//isROV
    }

    void IMessageQTransport$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.interfaces.IMessageQTransport", new Value.Obj("ti.sdo.ipc.interfaces.IMessageQTransport", po));
        pkgV.bind("IMessageQTransport", vo);
        // decls 
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Status", new Proto.Enm("ti.sdo.ipc.interfaces.IMessageQTransport.Status"));
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Reason", new Proto.Enm("ti.sdo.ipc.interfaces.IMessageQTransport.Reason"));
        // insts 
        Object insP = om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.IMessageQTransport$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.IMessageQTransport$$Params", new Proto.Obj());
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Params", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.IMessageQTransport$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Instance_State", new Proto.Str(po, false));
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Object", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Instance_State", "ti.sdo.ipc.interfaces"));
        }//isROV
    }

    void ITransportSetup$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.ipc.interfaces.ITransportSetup.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.ipc.interfaces.ITransportSetup", new Value.Obj("ti.sdo.ipc.interfaces.ITransportSetup", po));
        pkgV.bind("ITransportSetup", vo);
        // decls 
    }

    void INotifyDriver$$CONSTS()
    {
        // interface INotifyDriver
    }

    void INotifySetup$$CONSTS()
    {
        // interface INotifySetup
    }

    void IGateMPSupport$$CONSTS()
    {
        // interface IGateMPSupport
    }

    void IMessageQTransport$$CONSTS()
    {
        // interface IMessageQTransport
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.S_SUCCESS", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Status", "ti.sdo.ipc.interfaces"), "ti.sdo.ipc.interfaces.IMessageQTransport.S_SUCCESS", xdc.services.intern.xsr.Enum.intValue(0L)+0));
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.E_FAIL", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Status", "ti.sdo.ipc.interfaces"), "ti.sdo.ipc.interfaces.IMessageQTransport.E_FAIL", xdc.services.intern.xsr.Enum.intValue(Global.eval("-1"))+0));
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.E_ERROR", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Status", "ti.sdo.ipc.interfaces"), "ti.sdo.ipc.interfaces.IMessageQTransport.E_ERROR", xdc.services.intern.xsr.Enum.intValue(Global.eval("-2"))+0));
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_FAILEDPUT", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason", "ti.sdo.ipc.interfaces"), "ti.sdo.ipc.interfaces.IMessageQTransport.Reason_FAILEDPUT", 0));
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_INTERNALERR", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason", "ti.sdo.ipc.interfaces"), "ti.sdo.ipc.interfaces.IMessageQTransport.Reason_INTERNALERR", 1));
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_PHYSICALERR", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason", "ti.sdo.ipc.interfaces"), "ti.sdo.ipc.interfaces.IMessageQTransport.Reason_PHYSICALERR", 2));
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_FAILEDALLOC", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason", "ti.sdo.ipc.interfaces"), "ti.sdo.ipc.interfaces.IMessageQTransport.Reason_FAILEDALLOC", 3));
    }

    void ITransportSetup$$CONSTS()
    {
        // interface ITransportSetup
    }

    void INotifyDriver$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void INotifySetup$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void IGateMPSupport$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void IMessageQTransport$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void ITransportSetup$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void INotifyDriver$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void INotifySetup$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void IGateMPSupport$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn IGateMPSupport.getNumResources
        fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.interfaces.IGateMPSupport$$getNumResources", new Proto.Fxn(om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Module", "ti.sdo.ipc.interfaces"), Proto.Elm.newCNum("(xdc_UInt)"), 0, 0, false));
        // fxn IGateMPSupport.getRemoteStatus$view
        fxn = (Proto.Fxn)om.bind("ti.sdo.ipc.interfaces.IGateMPSupport$$getRemoteStatus$view", new Proto.Fxn(om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Module", "ti.sdo.ipc.interfaces"), $$T_Str, 1, 1, false));
                fxn.addArg(0, "handle", (Proto)om.findStrict("xdc.runtime.IGateProvider.Handle", "ti.sdo.ipc.interfaces"), $$UNDEF);
    }

    void IMessageQTransport$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void ITransportSetup$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void INotifyDriver$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void INotifySetup$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void IGateMPSupport$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void IMessageQTransport$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void ITransportSetup$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void INotifyDriver$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Module", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.INotifyDriver.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.ipc.interfaces"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Instance", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.INotifyDriver.Instance", $$Instance);
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver$$Params", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.INotifyDriver.Params", $$Params);
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
    }

    void INotifySetup$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifySetup.Module", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.INotifySetup.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.ipc.interfaces"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
    }

    void IGateMPSupport$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Module", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.IGateMPSupport.Module", om.findStrict("xdc.runtime.IGateProvider.Module", "ti.sdo.ipc.interfaces"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_BLOCKING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
                po.addFld("Q_PREEMPTING", Proto.Elm.newCNum("(xdc_Int)"), 2L, "rh");
        if (isCFG) {
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Instance", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.IGateMPSupport.Instance", om.findStrict("xdc.runtime.IGateProvider.Instance", "ti.sdo.ipc.interfaces"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_BLOCKING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
                po.addFld("Q_PREEMPTING", Proto.Elm.newCNum("(xdc_Int)"), 2L, "rh");
        if (isCFG) {
            po.addFld("resourceId", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
            po.addFld("openFlag", $$T_Bool, false, "w");
            po.addFld("regionId", Proto.Elm.newCNum("(xdc_UInt16)"), 0L, "w");
            po.addFld("sharedAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport$$Params", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.IGateMPSupport.Params", om.findStrict("xdc.runtime.IGateProvider$$Params", "ti.sdo.ipc.interfaces"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_BLOCKING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
                po.addFld("Q_PREEMPTING", Proto.Elm.newCNum("(xdc_Int)"), 2L, "rh");
        if (isCFG) {
            po.addFld("resourceId", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
            po.addFld("openFlag", $$T_Bool, false, "w");
            po.addFld("regionId", Proto.Elm.newCNum("(xdc_UInt16)"), 0L, "w");
            po.addFld("sharedAddr", new Proto.Adr("xdc_Ptr", "Pv"), null, "w");
        }//isCFG
    }

    void IMessageQTransport$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Module", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.IMessageQTransport.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.ipc.interfaces"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("errFxn", new Proto.Adr("xdc_Void(*)(ti_sdo_ipc_interfaces_IMessageQTransport_Reason,ti_sdo_ipc_interfaces_IMessageQTransport_Handle,xdc_Ptr,xdc_UArg)", "PFv"), null, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Instance", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.IMessageQTransport.Instance", $$Instance);
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("priority", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport$$Params", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.IMessageQTransport.Params", $$Params);
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("priority", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
        }//isCFG
        // typedef IMessageQTransport.ErrFxn
        om.bind("ti.sdo.ipc.interfaces.IMessageQTransport.ErrFxn", new Proto.Adr("xdc_Void(*)(ti_sdo_ipc_interfaces_IMessageQTransport_Reason,ti_sdo_ipc_interfaces_IMessageQTransport_Handle,xdc_Ptr,xdc_UArg)", "PFv"));
    }

    void ITransportSetup$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.ITransportSetup.Module", "ti.sdo.ipc.interfaces");
        po.init("ti.sdo.ipc.interfaces.ITransportSetup.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.ipc.interfaces"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("priority", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
        }//isCFG
    }

    void INotifyDriver$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver", "ti.sdo.ipc.interfaces");
    }

    void INotifySetup$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifySetup", "ti.sdo.ipc.interfaces");
    }

    void IGateMPSupport$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport", "ti.sdo.ipc.interfaces");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport$$Instance_State", "ti.sdo.ipc.interfaces");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
    }

    void IMessageQTransport$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport", "ti.sdo.ipc.interfaces");
    }

    void ITransportSetup$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.ITransportSetup", "ti.sdo.ipc.interfaces");
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sdo.ipc.interfaces.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sdo.ipc.interfaces"));
        Scriptable cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/ipc/interfaces/package.xs");
        om.bind("xdc.IPackage$$capsule", cap);
        Object fxn;
                fxn = Global.get(cap, "init");
                if (fxn != null) pkgP.addFxn("init", (Proto.Fxn)om.findStrict("xdc.IPackage$$init", "ti.sdo.ipc.interfaces"), fxn);
                fxn = Global.get(cap, "close");
                if (fxn != null) pkgP.addFxn("close", (Proto.Fxn)om.findStrict("xdc.IPackage$$close", "ti.sdo.ipc.interfaces"), fxn);
                fxn = Global.get(cap, "validate");
                if (fxn != null) pkgP.addFxn("validate", (Proto.Fxn)om.findStrict("xdc.IPackage$$validate", "ti.sdo.ipc.interfaces"), fxn);
                fxn = Global.get(cap, "exit");
                if (fxn != null) pkgP.addFxn("exit", (Proto.Fxn)om.findStrict("xdc.IPackage$$exit", "ti.sdo.ipc.interfaces"), fxn);
                fxn = Global.get(cap, "getLibs");
                if (fxn != null) pkgP.addFxn("getLibs", (Proto.Fxn)om.findStrict("xdc.IPackage$$getLibs", "ti.sdo.ipc.interfaces"), fxn);
                fxn = Global.get(cap, "getSects");
                if (fxn != null) pkgP.addFxn("getSects", (Proto.Fxn)om.findStrict("xdc.IPackage$$getSects", "ti.sdo.ipc.interfaces"), fxn);
        pkgP.bind("$capsule", cap);
        pkgV.init2(pkgP, "ti.sdo.ipc.interfaces", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sdo.ipc.interfaces");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sdo.ipc.interfaces.");
        pkgV.bind("$vers", Global.newArray("1, 0, 0, 0"));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sdo.ipc.interfaces'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.a28L',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.a28FP',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.a64P',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.a64Pe',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.a674',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.ae64P',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.ae64Pe',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.ae674',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.ae64T',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.ae66',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.ae66e',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.ae9',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.aea8f',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.aea8fnv',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.aem3',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.aem4',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.aem4f',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.aearp32',\n");
            sb.append("'lib/ipc/debug/ti.sdo.ipc.interfaces.aearp32F',\n");
            sb.append("'lib/smpipc/debug/ti.sdo.ipc.interfaces.aem3',\n");
            sb.append("'lib/smpipc/debug/ti.sdo.ipc.interfaces.aem4',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.a28L', {target: 'ti.targets.C28_large', suffix: '28L'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.a28FP', {target: 'ti.targets.C28_float', suffix: '28FP'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.a64P', {target: 'ti.targets.C64P', suffix: '64P'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.a64Pe', {target: 'ti.targets.C64P_big_endian', suffix: '64Pe'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.a674', {target: 'ti.targets.C674', suffix: '674'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.ae64P', {target: 'ti.targets.elf.C64P', suffix: 'e64P'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.ae64Pe', {target: 'ti.targets.elf.C64P_big_endian', suffix: 'e64Pe'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.ae64T', {target: 'ti.targets.elf.C64T', suffix: 'e64T'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.aearp32', {target: 'ti.targets.arp32.elf.ARP32', suffix: 'earp32'}],\n");
            sb.append("['lib/ipc/debug/ti.sdo.ipc.interfaces.aearp32F', {target: 'ti.targets.arp32.elf.ARP32_far', suffix: 'earp32F'}],\n");
            sb.append("['lib/smpipc/debug/ti.sdo.ipc.interfaces.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/smpipc/debug/ti.sdo.ipc.interfaces.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void INotifyDriver$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver", "ti.sdo.ipc.interfaces");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Module", "ti.sdo.ipc.interfaces");
        vo.init2(po, "ti.sdo.ipc.interfaces.INotifyDriver", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Interface");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("Instance", om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Instance", "ti.sdo.ipc.interfaces"));
        vo.bind("Params", om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Params", "ti.sdo.ipc.interfaces"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Params", "ti.sdo.ipc.interfaces")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.ipc.interfaces.INotifyDriver.Handle", "ti.sdo.ipc.interfaces"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.interfaces", "ti.sdo.ipc.interfaces"));
        tdefs.clear();
        proxies.clear();
        inherits.clear();
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$interfaces")).add(vo);
        pkgV.bind("INotifyDriver", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("INotifyDriver");
        vo.seal(null);
    }

    void INotifySetup$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifySetup", "ti.sdo.ipc.interfaces");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.INotifySetup.Module", "ti.sdo.ipc.interfaces");
        vo.init2(po, "ti.sdo.ipc.interfaces.INotifySetup", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Interface");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("$package", om.findStrict("ti.sdo.ipc.interfaces", "ti.sdo.ipc.interfaces"));
        tdefs.clear();
        proxies.clear();
        inherits.clear();
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$interfaces")).add(vo);
        pkgV.bind("INotifySetup", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("INotifySetup");
        vo.seal(null);
    }

    void IGateMPSupport$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport", "ti.sdo.ipc.interfaces");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Module", "ti.sdo.ipc.interfaces");
        vo.init2(po, "ti.sdo.ipc.interfaces.IGateMPSupport", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Interface");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("Instance", om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Instance", "ti.sdo.ipc.interfaces"));
        vo.bind("Params", om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Params", "ti.sdo.ipc.interfaces"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Params", "ti.sdo.ipc.interfaces")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.ipc.interfaces.IGateMPSupport.Handle", "ti.sdo.ipc.interfaces"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.interfaces", "ti.sdo.ipc.interfaces"));
        tdefs.clear();
        proxies.clear();
        inherits.clear();
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("xdc.runtime");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$interfaces")).add(vo);
        pkgV.bind("IGateMPSupport", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("IGateMPSupport");
        vo.seal(null);
    }

    void IMessageQTransport$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport", "ti.sdo.ipc.interfaces");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Module", "ti.sdo.ipc.interfaces");
        vo.init2(po, "ti.sdo.ipc.interfaces.IMessageQTransport", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Interface");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("Instance", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Instance", "ti.sdo.ipc.interfaces"));
        vo.bind("Params", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Params", "ti.sdo.ipc.interfaces"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Params", "ti.sdo.ipc.interfaces")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Handle", "ti.sdo.ipc.interfaces"));
        vo.bind("$package", om.findStrict("ti.sdo.ipc.interfaces", "ti.sdo.ipc.interfaces"));
        tdefs.clear();
        proxies.clear();
        inherits.clear();
        vo.bind("Status", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Status", "ti.sdo.ipc.interfaces"));
        vo.bind("Reason", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason", "ti.sdo.ipc.interfaces"));
        vo.bind("ErrFxn", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.ErrFxn", "ti.sdo.ipc.interfaces"));
        vo.bind("S_SUCCESS", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.S_SUCCESS", "ti.sdo.ipc.interfaces"));
        vo.bind("E_FAIL", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.E_FAIL", "ti.sdo.ipc.interfaces"));
        vo.bind("E_ERROR", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.E_ERROR", "ti.sdo.ipc.interfaces"));
        vo.bind("Reason_FAILEDPUT", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_FAILEDPUT", "ti.sdo.ipc.interfaces"));
        vo.bind("Reason_INTERNALERR", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_INTERNALERR", "ti.sdo.ipc.interfaces"));
        vo.bind("Reason_PHYSICALERR", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_PHYSICALERR", "ti.sdo.ipc.interfaces"));
        vo.bind("Reason_FAILEDALLOC", om.findStrict("ti.sdo.ipc.interfaces.IMessageQTransport.Reason_FAILEDALLOC", "ti.sdo.ipc.interfaces"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$interfaces")).add(vo);
        pkgV.bind("IMessageQTransport", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("IMessageQTransport");
        vo.seal(null);
    }

    void ITransportSetup$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.ipc.interfaces.ITransportSetup", "ti.sdo.ipc.interfaces");
        po = (Proto.Obj)om.findStrict("ti.sdo.ipc.interfaces.ITransportSetup.Module", "ti.sdo.ipc.interfaces");
        vo.init2(po, "ti.sdo.ipc.interfaces.ITransportSetup", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Interface");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("$package", om.findStrict("ti.sdo.ipc.interfaces", "ti.sdo.ipc.interfaces"));
        tdefs.clear();
        proxies.clear();
        inherits.clear();
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$interfaces")).add(vo);
        pkgV.bind("ITransportSetup", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("ITransportSetup");
        vo.seal(null);
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
        }//isCFG
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sdo.ipc.interfaces.INotifyDriver")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.interfaces.INotifySetup")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.interfaces.IGateMPSupport")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.interfaces.IMessageQTransport")).bless();
        ((Value.Obj)om.getv("ti.sdo.ipc.interfaces.ITransportSetup")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sdo.ipc.interfaces")).add(pkgV);
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
        INotifyDriver$$OBJECTS();
        INotifySetup$$OBJECTS();
        IGateMPSupport$$OBJECTS();
        IMessageQTransport$$OBJECTS();
        ITransportSetup$$OBJECTS();
        INotifyDriver$$CONSTS();
        INotifySetup$$CONSTS();
        IGateMPSupport$$CONSTS();
        IMessageQTransport$$CONSTS();
        ITransportSetup$$CONSTS();
        INotifyDriver$$CREATES();
        INotifySetup$$CREATES();
        IGateMPSupport$$CREATES();
        IMessageQTransport$$CREATES();
        ITransportSetup$$CREATES();
        INotifyDriver$$FUNCTIONS();
        INotifySetup$$FUNCTIONS();
        IGateMPSupport$$FUNCTIONS();
        IMessageQTransport$$FUNCTIONS();
        ITransportSetup$$FUNCTIONS();
        INotifyDriver$$SIZES();
        INotifySetup$$SIZES();
        IGateMPSupport$$SIZES();
        IMessageQTransport$$SIZES();
        ITransportSetup$$SIZES();
        INotifyDriver$$TYPES();
        INotifySetup$$TYPES();
        IGateMPSupport$$TYPES();
        IMessageQTransport$$TYPES();
        ITransportSetup$$TYPES();
        if (isROV) {
            INotifyDriver$$ROV();
            INotifySetup$$ROV();
            IGateMPSupport$$ROV();
            IMessageQTransport$$ROV();
            ITransportSetup$$ROV();
        }//isROV
        $$SINGLETONS();
        INotifyDriver$$SINGLETONS();
        INotifySetup$$SINGLETONS();
        IGateMPSupport$$SINGLETONS();
        IMessageQTransport$$SINGLETONS();
        ITransportSetup$$SINGLETONS();
        $$INITIALIZATION();
    }
}
