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

public class ti_sdo_io
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
        Global.callFxn("loadPackage", xdcO, "ti.sdo.utils");
        Global.callFxn("loadPackage", xdcO, "xdc.runtime.knl");
        Global.callFxn("loadPackage", xdcO, "xdc.rov");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sdo.io.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sdo.io", new Value.Obj("ti.sdo.io", pkgP));
    }

    void Build$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.Build.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.Build", new Value.Obj("ti.sdo.io.Build", po));
        pkgV.bind("Build", vo);
        // decls 
    }

    void DriverTypes$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.DriverTypes.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.DriverTypes", new Value.Obj("ti.sdo.io.DriverTypes", po));
        pkgV.bind("DriverTypes", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.io.DriverTypes$$PacketCmdDesc", new Proto.Obj());
        om.bind("ti.sdo.io.DriverTypes.PacketCmdDesc", new Proto.Str(spo, false));
        om.bind("ti.sdo.io.DriverTypes$$PacketCmd", new Proto.Tel());
        spo = (Proto.Obj)om.bind("ti.sdo.io.DriverTypes$$ControlCmdDesc", new Proto.Obj());
        om.bind("ti.sdo.io.DriverTypes.ControlCmdDesc", new Proto.Str(spo, false));
        om.bind("ti.sdo.io.DriverTypes$$ControlCmd", new Proto.Tel());
        spo = (Proto.Obj)om.bind("ti.sdo.io.DriverTypes$$Packet", new Proto.Obj());
        om.bind("ti.sdo.io.DriverTypes.Packet", new Proto.Str(spo, false));
        om.bind("ti.sdo.io.DriverTypes.IOMode", new Proto.Enm("ti.sdo.io.DriverTypes.IOMode"));
    }

    void DriverTable$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.DriverTable.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.DriverTable", new Value.Obj("ti.sdo.io.DriverTable", po));
        pkgV.bind("DriverTable", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.io.DriverTable$$Entry", new Proto.Obj());
        om.bind("ti.sdo.io.DriverTable.Entry", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.DriverTable$$Module_State", new Proto.Obj());
        om.bind("ti.sdo.io.DriverTable.Module_State", new Proto.Str(spo, false));
    }

    void Stream$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.Stream.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.Stream", new Value.Obj("ti.sdo.io.Stream", po));
        pkgV.bind("Stream", vo);
        // decls 
        spo = (Proto.Obj)om.bind("ti.sdo.io.Stream$$BasicView", new Proto.Obj());
        om.bind("ti.sdo.io.Stream.BasicView", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.Stream$$Entry", new Proto.Obj());
        om.bind("ti.sdo.io.Stream.Entry", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.Stream$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.io.Stream.Instance_State", new Proto.Str(spo, false));
        spo = (Proto.Obj)om.bind("ti.sdo.io.Stream$$Module_State", new Proto.Obj());
        om.bind("ti.sdo.io.Stream.Module_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sdo.io.Stream.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.Stream$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.Stream.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.Stream$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.Stream.Params", new Proto.Str(po, false));
        om.bind("ti.sdo.io.Stream.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.io.Stream.Object", om.findStrict("ti.sdo.io.Stream.Instance_State", "ti.sdo.io"));
        }//isROV
    }

    void IDriver$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.IDriver.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.IDriver", new Value.Obj("ti.sdo.io.IDriver", po));
        pkgV.bind("IDriver", vo);
        // decls 
        // insts 
        Object insP = om.bind("ti.sdo.io.IDriver.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.IDriver$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.IDriver.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.IDriver$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.IDriver.Params", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.IDriver$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.io.IDriver.Instance_State", new Proto.Str(po, false));
        om.bind("ti.sdo.io.IDriver.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.io.IDriver.Object", om.findStrict("ti.sdo.io.IDriver.Instance_State", "ti.sdo.io"));
        }//isROV
    }

    void IConverter$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.IConverter.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.IConverter", new Value.Obj("ti.sdo.io.IConverter", po));
        pkgV.bind("IConverter", vo);
        // decls 
        // insts 
        Object insP = om.bind("ti.sdo.io.IConverter.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.IConverter$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.IConverter.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.IConverter$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.IConverter.Params", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sdo.io.IConverter$$Instance_State", new Proto.Obj());
        om.bind("ti.sdo.io.IConverter.Instance_State", new Proto.Str(po, false));
        om.bind("ti.sdo.io.IConverter.Handle", insP);
        if (isROV) {
            om.bind("ti.sdo.io.IConverter.Object", om.findStrict("ti.sdo.io.IConverter.Instance_State", "ti.sdo.io"));
        }//isROV
    }

    void Build$$CONSTS()
    {
        // module Build
    }

    void DriverTypes$$CONSTS()
    {
        // module DriverTypes
        om.bind("ti.sdo.io.DriverTypes.COMPLETED", 0x0L);
        om.bind("ti.sdo.io.DriverTypes.PENDING", 0x1L);
        om.bind("ti.sdo.io.DriverTypes.ERROR", 0x2L);
        om.bind("ti.sdo.io.DriverTypes.INPUT", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.io.DriverTypes.IOMode", "ti.sdo.io"), "ti.sdo.io.DriverTypes.INPUT", 0));
        om.bind("ti.sdo.io.DriverTypes.OUTPUT", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.io.DriverTypes.IOMode", "ti.sdo.io"), "ti.sdo.io.DriverTypes.OUTPUT", 1));
        om.bind("ti.sdo.io.DriverTypes.INOUT", xdc.services.intern.xsr.Enum.make((Proto.Enm)om.findStrict("ti.sdo.io.DriverTypes.IOMode", "ti.sdo.io"), "ti.sdo.io.DriverTypes.INOUT", 2));
        om.bind("ti.sdo.io.DriverTypes.NOERROR", 0L);
    }

    void DriverTable$$CONSTS()
    {
        // module DriverTable
        om.bind("ti.sdo.io.DriverTable.add", new Extern("ti_sdo_io_DriverTable_add__E", "xdc_Void(*)(xdc_String,ti_sdo_io_IDriver_Handle,xdc_runtime_Error_Block*)", true, false));
        om.bind("ti.sdo.io.DriverTable.remove", new Extern("ti_sdo_io_DriverTable_remove__E", "xdc_Void(*)(xdc_String,xdc_runtime_Error_Block*)", true, false));
        om.bind("ti.sdo.io.DriverTable.match", new Extern("ti_sdo_io_DriverTable_match__E", "xdc_Int(*)(xdc_String,ti_sdo_io_IDriver_Handle*,xdc_runtime_Error_Block*)", true, false));
    }

    void Stream$$CONSTS()
    {
        // module Stream
        om.bind("ti.sdo.io.Stream.INPUT", 0L);
        om.bind("ti.sdo.io.Stream.OUTPUT", 1L);
        om.bind("ti.sdo.io.Stream.INOUT", 2L);
        om.bind("ti.sdo.io.Stream.add", new Extern("ti_sdo_io_Stream_add__E", "xdc_Void(*)(xdc_String,ti_sdo_io_IConverter_Handle,xdc_runtime_Error_Block*)", true, false));
        om.bind("ti.sdo.io.Stream.remove", new Extern("ti_sdo_io_Stream_remove__E", "xdc_Void(*)(xdc_String,xdc_runtime_Error_Block*)", true, false));
        om.bind("ti.sdo.io.Stream.match", new Extern("ti_sdo_io_Stream_match__E", "xdc_Int(*)(xdc_String,ti_sdo_io_IConverter_Handle*,xdc_runtime_Error_Block*)", true, false));
        om.bind("ti.sdo.io.Stream.completedLog", new Extern("ti_sdo_io_Stream_completedLog__E", "xdc_Void(*)(xdc_UArg,xdc_UArg,xdc_UArg)", true, false));
        om.bind("ti.sdo.io.Stream.internalCallback", new Extern("ti_sdo_io_Stream_internalCallback__I", "xdc_Void(*)(xdc_UArg)", true, false));
        om.bind("ti.sdo.io.Stream.postInit", new Extern("ti_sdo_io_Stream_postInit__I", "xdc_Int(*)(ti_sdo_io_Stream_Object*,xdc_runtime_Error_Block*)", true, false));
        om.bind("ti.sdo.io.Stream.issueX", new Extern("ti_sdo_io_Stream_issueX__I", "xdc_Void(*)(ti_sdo_io_Stream_Object*,xdc_Ptr,xdc_SizeT,xdc_UArg,ti_sdo_io_DriverTypes_PacketCmd,xdc_runtime_Error_Block*)", true, false));
    }

    void IDriver$$CONSTS()
    {
        // interface IDriver
    }

    void IConverter$$CONSTS()
    {
        // interface IConverter
        om.bind("ti.sdo.io.IConverter.Q_TERMINATING", 1L);
    }

    void Build$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void DriverTypes$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void DriverTable$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void Stream$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sdo$io$Stream$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sdo.io.Stream.create() called before xdc.useModule('ti.sdo.io.Stream')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst.$args.name, inst.$args.mode, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.Stream$$create", new Proto.Fxn(om.findStrict("ti.sdo.io.Stream.Module", "ti.sdo.io"), om.findStrict("ti.sdo.io.Stream.Instance", "ti.sdo.io"), 3, 2, false));
                        fxn.addArg(0, "name", $$T_Str, $$UNDEF);
                        fxn.addArg(1, "mode", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF);
                        fxn.addArg(2, "__params", (Proto)om.findStrict("ti.sdo.io.Stream.Params", "ti.sdo.io"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$Stream$$create = function( name, mode, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.Stream'];\n");
                sb.append("var __inst = xdc.om['ti.sdo.io.Stream.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.io']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {name:name, mode:mode});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sdo.io.Stream'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, [name, mode]);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.Stream'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sdo.io.Stream$$construct", new Proto.Fxn(om.findStrict("ti.sdo.io.Stream.Module", "ti.sdo.io"), null, 4, 2, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.io.Stream$$Object", "ti.sdo.io"), null);
                        fxn.addArg(1, "name", $$T_Str, $$UNDEF);
                        fxn.addArg(2, "mode", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF);
                        fxn.addArg(3, "__params", (Proto)om.findStrict("ti.sdo.io.Stream.Params", "ti.sdo.io"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sdo$io$Stream$$construct = function( __obj, name, mode, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sdo.io.Stream'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {name:name, mode:mode});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sdo.io.Stream'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sdo.io.Stream'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void IDriver$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void IConverter$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void Build$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn Build.getDefs
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.Build$$getDefs", new Proto.Fxn(om.findStrict("ti.sdo.io.Build.Module", "ti.sdo.io"), $$T_Str, 0, 0, false));
        // fxn Build.getCFiles
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.Build$$getCFiles", new Proto.Fxn(om.findStrict("ti.sdo.io.Build.Module", "ti.sdo.io"), $$T_Str, 1, 1, false));
                fxn.addArg(0, "target", $$T_Str, $$UNDEF);
        // fxn Build.getAsmFiles
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.Build$$getAsmFiles", new Proto.Fxn(om.findStrict("ti.sdo.io.Build.Module", "ti.sdo.io"), $$T_Obj, 1, 1, false));
                fxn.addArg(0, "target", $$T_Str, $$UNDEF);
        // fxn Build.buildLibs
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.Build$$buildLibs", new Proto.Fxn(om.findStrict("ti.sdo.io.Build.Module", "ti.sdo.io"), null, 0, -1, false));
        // fxn Build.getLibs
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.Build$$getLibs", new Proto.Fxn(om.findStrict("ti.sdo.io.Build.Module", "ti.sdo.io"), null, 0, -1, false));
    }

    void DriverTypes$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void DriverTable$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn DriverTable.addMeta
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.DriverTable$$addMeta", new Proto.Fxn(om.findStrict("ti.sdo.io.DriverTable.Module", "ti.sdo.io"), null, 2, 2, false));
                fxn.addArg(0, "name", $$T_Str, $$UNDEF);
                fxn.addArg(1, "driverHandle", (Proto)om.findStrict("ti.sdo.io.IDriver.Handle", "ti.sdo.io"), $$UNDEF);
    }

    void Stream$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn Stream.addMeta
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.Stream$$addMeta", new Proto.Fxn(om.findStrict("ti.sdo.io.Stream.Module", "ti.sdo.io"), null, 2, 2, false));
                fxn.addArg(0, "name", $$T_Str, $$UNDEF);
                fxn.addArg(1, "handle", (Proto)om.findStrict("ti.sdo.io.IConverter.Handle", "ti.sdo.io"), $$UNDEF);
    }

    void IDriver$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void IConverter$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Build$$SIZES()
    {
    }

    void DriverTypes$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.io.DriverTypes.Packet", "ti.sdo.io");
        sizes.clear();
        sizes.add(Global.newArray("link", "Sti.sdo.utils.List;Elem"));
        sizes.add(Global.newArray("addr", "UPtr"));
        sizes.add(Global.newArray("origSize", "USize"));
        sizes.add(Global.newArray("size", "USize"));
        sizes.add(Global.newArray("arg", "UIArg"));
        sizes.add(Global.newArray("cmd", "Eti.sdo.io.DriverTypes;PacketCmd"));
        sizes.add(Global.newArray("error", "Exdc.runtime.Error;Id"));
        sizes.add(Global.newArray("misc", "UIArg"));
        sizes.add(Global.newArray("status", "TInt"));
        sizes.add(Global.newArray("drvArg", "UIArg"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.DriverTypes.Packet']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.DriverTypes.Packet']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.DriverTypes.Packet'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void DriverTable$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.io.DriverTable.Entry", "ti.sdo.io");
        sizes.clear();
        sizes.add(Global.newArray("name", "UPtr"));
        sizes.add(Global.newArray("handle", "UPtr"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.DriverTable.Entry']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.DriverTable.Entry']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.DriverTable.Entry'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.io.DriverTable.Module_State", "ti.sdo.io");
        sizes.clear();
        sizes.add(Global.newArray("drvTable", "UPtr"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.DriverTable.Module_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.DriverTable.Module_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.DriverTable.Module_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void Stream$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sdo.io.Stream.Entry", "ti.sdo.io");
        sizes.clear();
        sizes.add(Global.newArray("name", "UPtr"));
        sizes.add(Global.newArray("handle", "UPtr"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.Stream.Entry']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.Stream.Entry']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.Stream.Entry'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.io.Stream.Instance_State", "ti.sdo.io");
        sizes.clear();
        sizes.add(Global.newArray("name", "UPtr"));
        sizes.add(Global.newArray("chanParams", "UIArg"));
        sizes.add(Global.newArray("drvAdapHdl", "UShort"));
        sizes.add(Global.newArray("packets", "UPtr"));
        sizes.add(Global.newArray("maxIssues", "UInt"));
        sizes.add(Global.newArray("issued", "UInt"));
        sizes.add(Global.newArray("ready", "UInt"));
        sizes.add(Global.newArray("mode", "UInt"));
        sizes.add(Global.newArray("packetHeap", "UPtr"));
        sizes.add(Global.newArray("complete", "UPtr"));
        sizes.add(Global.newArray("userSync", "UShort"));
        sizes.add(Global.newArray("convHandle", "UPtr"));
        sizes.add(Global.newArray("freeList", "Sti.sdo.utils.List;Instance_State"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.Stream.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.Stream.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.Stream.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
        so = (Proto.Str)om.findStrict("ti.sdo.io.Stream.Module_State", "ti.sdo.io");
        sizes.clear();
        sizes.add(Global.newArray("convTable", "UPtr"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sdo.io.Stream.Module_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sdo.io.Stream.Module_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sdo.io.Stream.Module_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void IDriver$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void IConverter$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void Build$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/Build.xs");
        om.bind("ti.sdo.io.Build$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Build.Module", "ti.sdo.io");
        po.init("ti.sdo.io.Build.Module", $$Module);
                po.addFld("$hostonly", $$T_Num, 1, "r");
        po.addFld("libDir", $$T_Str, null, "wh");
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.Build$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.Build$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.Build$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
                po.addFxn("getDefs", (Proto.Fxn)om.findStrict("ti.sdo.io.Build$$getDefs", "ti.sdo.io"), Global.get(cap, "getDefs"));
                po.addFxn("getCFiles", (Proto.Fxn)om.findStrict("ti.sdo.io.Build$$getCFiles", "ti.sdo.io"), Global.get(cap, "getCFiles"));
                po.addFxn("getAsmFiles", (Proto.Fxn)om.findStrict("ti.sdo.io.Build$$getAsmFiles", "ti.sdo.io"), Global.get(cap, "getAsmFiles"));
                po.addFxn("buildLibs", (Proto.Fxn)om.findStrict("ti.sdo.io.Build$$buildLibs", "ti.sdo.io"), Global.get(cap, "buildLibs"));
                po.addFxn("getLibs", (Proto.Fxn)om.findStrict("ti.sdo.io.Build$$getLibs", "ti.sdo.io"), Global.get(cap, "getLibs"));
    }

    void DriverTypes$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/DriverTypes.xs");
        om.bind("ti.sdo.io.DriverTypes$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTypes.Module", "ti.sdo.io");
        po.init("ti.sdo.io.DriverTypes.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.io"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("COMPLETED", Proto.Elm.newCNum("(xdc_UInt)"), 0x0L, "rh");
                po.addFld("PENDING", Proto.Elm.newCNum("(xdc_UInt)"), 0x1L, "rh");
                po.addFld("ERROR", Proto.Elm.newCNum("(xdc_UInt)"), 0x2L, "rh");
                po.addFld("NOERROR", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "rh");
        if (isCFG) {
            po.addFld("READ", (Proto)om.findStrict("ti.sdo.io.DriverTypes$$PacketCmd", "ti.sdo.io"), $$DEFAULT, "r");
            po.addFld("WRITE", (Proto)om.findStrict("ti.sdo.io.DriverTypes$$PacketCmd", "ti.sdo.io"), $$DEFAULT, "r");
            po.addFld("CHAN_ABORT", (Proto)om.findStrict("ti.sdo.io.DriverTypes$$ControlCmd", "ti.sdo.io"), $$DEFAULT, "r");
            po.addFld("CHAN_RESET", (Proto)om.findStrict("ti.sdo.io.DriverTypes$$ControlCmd", "ti.sdo.io"), $$DEFAULT, "r");
            po.addFld("DEVICE_RESET", (Proto)om.findStrict("ti.sdo.io.DriverTypes$$ControlCmd", "ti.sdo.io"), $$DEFAULT, "r");
            po.addFld("EBADIO", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "Generic Failure"), "w");
            po.addFld("EBADMODE", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "Illegal Mode"), "w");
            po.addFld("ENOTIMPL", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "Not implemented"), "w");
            po.addFld("EBADARGS", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "Bad args"), "w");
            po.addFld("EINUSE", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "Channel in use"), "w");
            po.addFld("EINVALIDDEV", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "Invalid devNum"), "w");
            po.addFld("EABORTED", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "Aborted Packet"), "w");
            po.addFld("LM_startIO", (Proto)om.findStrict("xdc.runtime.Log$$Event", "ti.sdo.io"), Global.newObject("mask", Global.eval("0x0100 | 0x0200"), "msg", "LM_startIO: buf: 0x%x, size: 0x%x, arg: 0x%x"), "w");
            po.addFld("LM_ioComplete", (Proto)om.findStrict("xdc.runtime.Log$$Event", "ti.sdo.io"), Global.newObject("mask", Global.eval("0x0100 | 0x0200"), "msg", "LM_ioComplete: buf: 0x%x, size: 0x%x, arg: 0x%x"), "w");
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.DriverTypes$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.DriverTypes$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.io.DriverTypes$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.DriverTypes$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        // struct DriverTypes.PacketCmdDesc
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTypes$$PacketCmdDesc", "ti.sdo.io");
        po.init("ti.sdo.io.DriverTypes.PacketCmdDesc", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("val", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
        // typedef DriverTypes.PacketCmd
        pt = (Proto.Typedef)om.findStrict("ti.sdo.io.DriverTypes$$PacketCmd", "ti.sdo.io");
        pt.init("ti.sdo.io.DriverTypes.PacketCmd", (Proto)om.findStrict("ti.sdo.io.DriverTypes.PacketCmdDesc", "ti.sdo.io"), Global.get(cap, "PacketCmd$encode"));
        om.bind("ti.sdo.io.DriverTypes.PacketCmd", pt);
        // struct DriverTypes.ControlCmdDesc
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTypes$$ControlCmdDesc", "ti.sdo.io");
        po.init("ti.sdo.io.DriverTypes.ControlCmdDesc", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("val", Proto.Elm.newCNum("(xdc_Bits32)"), $$UNDEF, "w");
        // typedef DriverTypes.ControlCmd
        pt = (Proto.Typedef)om.findStrict("ti.sdo.io.DriverTypes$$ControlCmd", "ti.sdo.io");
        pt.init("ti.sdo.io.DriverTypes.ControlCmd", (Proto)om.findStrict("ti.sdo.io.DriverTypes.ControlCmdDesc", "ti.sdo.io"), Global.get(cap, "ControlCmd$encode"));
        om.bind("ti.sdo.io.DriverTypes.ControlCmd", pt);
        // struct DriverTypes.Packet
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTypes$$Packet", "ti.sdo.io");
        po.init("ti.sdo.io.DriverTypes.Packet", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("link", (Proto)om.findStrict("ti.sdo.utils.List.Elem", "ti.sdo.io"), $$DEFAULT, "w");
                po.addFld("addr", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
                po.addFld("origSize", Proto.Elm.newCNum("(xdc_SizeT)"), $$UNDEF, "w");
                po.addFld("size", Proto.Elm.newCNum("(xdc_SizeT)"), $$UNDEF, "w");
                po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("cmd", (Proto)om.findStrict("ti.sdo.io.DriverTypes$$PacketCmd", "ti.sdo.io"), $$DEFAULT, "w");
                po.addFld("error", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), $$DEFAULT, "w");
                po.addFld("misc", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("status", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF, "w");
                po.addFld("drvArg", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
        // typedef DriverTypes.DoneFxn
        om.bind("ti.sdo.io.DriverTypes.DoneFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg,ti_sdo_io_DriverTypes_Packet*)", "PFv"));
    }

    void DriverTable$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/DriverTable.xs");
        om.bind("ti.sdo.io.DriverTable$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTable.Module", "ti.sdo.io");
        po.init("ti.sdo.io.DriverTable.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.io"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("maxRuntimeEntries", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
            po.addFld("gate", (Proto)om.findStrict("xdc.runtime.IGateProvider.Handle", "ti.sdo.io"), null, "w");
            po.addFld("maxNameLen", Proto.Elm.newCNum("(xdc_UInt)"), 16L, "w");
            po.addFld("tableSection", $$T_Str, null, "wh");
            po.addFld("staticEntries", new Proto.Arr((Proto)om.findStrict("ti.sdo.io.DriverTable.Entry", "ti.sdo.io"), false), $$DEFAULT, "wh");
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.DriverTable$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.DriverTable$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.io.DriverTable$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.DriverTable$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
                po.addFxn("addMeta", (Proto.Fxn)om.findStrict("ti.sdo.io.DriverTable$$addMeta", "ti.sdo.io"), Global.get(cap, "addMeta"));
        // struct DriverTable.Entry
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTable$$Entry", "ti.sdo.io");
        po.init("ti.sdo.io.DriverTable.Entry", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("name", $$T_Str, $$UNDEF, "w");
                po.addFld("handle", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        // struct DriverTable.Module_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTable$$Module_State", "ti.sdo.io");
        po.init("ti.sdo.io.DriverTable.Module_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("drvTable", (Proto)om.findStrict("ti.sdo.utils.NameServer.Handle", "ti.sdo.io"), $$UNDEF, "w");
    }

    void Stream$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/Stream.xs");
        om.bind("ti.sdo.io.Stream$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream.Module", "ti.sdo.io");
        po.init("ti.sdo.io.Stream.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.io"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("INPUT", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "rh");
                po.addFld("OUTPUT", Proto.Elm.newCNum("(xdc_UInt)"), 1L, "rh");
                po.addFld("INOUT", Proto.Elm.newCNum("(xdc_UInt)"), 2L, "rh");
        if (isCFG) {
            po.addFld("E_notFound", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "E_notFound: %s name not found"), "w");
            po.addFld("E_noPackets", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "E_noPackets: No packets available. maxIssues is %d"), "w");
            po.addFld("E_noBuffersIssued", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "E_noBuffersIssued: No outstanding buffers"), "w");
            po.addFld("E_timeout", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sdo.io"), Global.newObject("msg", "E_timeout: Timeout"), "w");
            po.addFld("A_badMode", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.io"), Global.newObject("msg", "A_badMode: Bad Mode"), "w");
            po.addFld("A_pendingReclaims", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.io"), Global.newObject("msg", "A_pendingReclaims: Packets issued but not reclaimed"), "w");
            po.addFld("A_syncNonBlocking", (Proto)om.findStrict("xdc.runtime.Assert$$Id", "ti.sdo.io"), Global.newObject("msg", "A_syncNonBlocking: ISync should have blocking quality"), "w");
            po.addFld("maxRuntimeEntries", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "w");
            po.addFld("gate", (Proto)om.findStrict("xdc.runtime.IGateProvider.Handle", "ti.sdo.io"), null, "w");
            po.addFld("maxNameLen", Proto.Elm.newCNum("(xdc_UInt)"), 16L, "w");
            po.addFld("tableSection", $$T_Str, null, "wh");
            po.addFld("rovViewInfo", (Proto)om.findStrict("xdc.rov.ViewInfo.Instance", "ti.sdo.io"), $$UNDEF, "wh");
            po.addFld("staticEntries", new Proto.Arr((Proto)om.findStrict("ti.sdo.io.Stream.Entry", "ti.sdo.io"), false), $$DEFAULT, "wh");
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.io.Stream$$create", "ti.sdo.io"), Global.get("ti$sdo$io$Stream$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.io.Stream$$construct", "ti.sdo.io"), Global.get("ti$sdo$io$Stream$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sdo.io.Stream$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.Stream$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sdo.io.Stream$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sdo.io.Stream$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sdo.io.Stream$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sdo.io.Stream$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
                po.addFxn("addMeta", (Proto.Fxn)om.findStrict("ti.sdo.io.Stream$$addMeta", "ti.sdo.io"), Global.get(cap, "addMeta"));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream.Instance", "ti.sdo.io");
        po.init("ti.sdo.io.Stream.Instance", $$Instance);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("INPUT", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "rh");
                po.addFld("OUTPUT", Proto.Elm.newCNum("(xdc_UInt)"), 1L, "rh");
                po.addFld("INOUT", Proto.Elm.newCNum("(xdc_UInt)"), 2L, "rh");
        if (isCFG) {
            po.addFld("maxIssues", Proto.Elm.newCNum("(xdc_UInt)"), 2L, "w");
            po.addFld("packetHeap", (Proto)om.findStrict("xdc.runtime.IHeap.Handle", "ti.sdo.io"), null, "w");
            po.addFld("packetSection", $$T_Str, null, "wh");
            po.addFld("sync", (Proto)om.findStrict("xdc.runtime.knl.ISync.Handle", "ti.sdo.io"), null, "w");
            po.addFld("chanParams", new Proto.Adr("xdc_UArg", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$Params", "ti.sdo.io");
        po.init("ti.sdo.io.Stream.Params", $$Params);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("INPUT", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "rh");
                po.addFld("OUTPUT", Proto.Elm.newCNum("(xdc_UInt)"), 1L, "rh");
                po.addFld("INOUT", Proto.Elm.newCNum("(xdc_UInt)"), 2L, "rh");
        if (isCFG) {
            po.addFld("maxIssues", Proto.Elm.newCNum("(xdc_UInt)"), 2L, "w");
            po.addFld("packetHeap", (Proto)om.findStrict("xdc.runtime.IHeap.Handle", "ti.sdo.io"), null, "w");
            po.addFld("packetSection", $$T_Str, null, "wh");
            po.addFld("sync", (Proto)om.findStrict("xdc.runtime.knl.ISync.Handle", "ti.sdo.io"), null, "w");
            po.addFld("chanParams", new Proto.Adr("xdc_UArg", "Pv"), null, "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sdo.io"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$Object", "ti.sdo.io");
        po.init("ti.sdo.io.Stream.Object", om.findStrict("ti.sdo.io.Stream.Instance", "ti.sdo.io"));
        // struct Stream.BasicView
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$BasicView", "ti.sdo.io");
        po.init("ti.sdo.io.Stream.BasicView", null);
                po.addFld("$hostonly", $$T_Num, 1, "r");
                po.addFld("label", $$T_Str, $$UNDEF, "w");
                po.addFld("maxIssues", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("issued", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("ready", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("mode", $$T_Str, $$UNDEF, "w");
                po.addFld("userSuppliedSync", $$T_Bool, $$UNDEF, "w");
        // struct Stream.Entry
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$Entry", "ti.sdo.io");
        po.init("ti.sdo.io.Stream.Entry", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("name", $$T_Str, $$UNDEF, "w");
                po.addFld("handle", (Proto)om.findStrict("ti.sdo.io.IConverter.Handle", "ti.sdo.io"), $$UNDEF, "w");
        // struct Stream.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$Instance_State", "ti.sdo.io");
        po.init("ti.sdo.io.Stream.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("name", $$T_Str, $$UNDEF, "w");
                po.addFld("chanParams", new Proto.Adr("xdc_UArg", "Pv"), $$UNDEF, "w");
                po.addFld("drvAdapHdl", $$T_Bool, $$UNDEF, "w");
                po.addFld("packets", new Proto.Arr((Proto)om.findStrict("ti.sdo.io.DriverTypes.Packet", "ti.sdo.io"), false), $$DEFAULT, "w");
                po.addFld("maxIssues", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("issued", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("ready", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("mode", Proto.Elm.newCNum("(xdc_UInt)"), $$UNDEF, "w");
                po.addFld("packetHeap", (Proto)om.findStrict("xdc.runtime.IHeap.Handle", "ti.sdo.io"), $$UNDEF, "w");
                po.addFld("complete", (Proto)om.findStrict("xdc.runtime.knl.ISync.Handle", "ti.sdo.io"), $$UNDEF, "w");
                po.addFld("userSync", $$T_Bool, $$UNDEF, "w");
                po.addFld("convHandle", (Proto)om.findStrict("ti.sdo.io.IConverter.Handle", "ti.sdo.io"), $$UNDEF, "w");
                po.addFldV("freeList", (Proto)om.findStrict("ti.sdo.utils.List.Object", "ti.sdo.io"), $$DEFAULT, "wh", $$objFldGet, $$objFldSet);
                po.addFld("Object_field_freeList", (Proto)om.findStrict("ti.sdo.utils.List.Object", "ti.sdo.io"), $$DEFAULT, "w");
        // struct Stream.Module_State
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$Module_State", "ti.sdo.io");
        po.init("ti.sdo.io.Stream.Module_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("convTable", (Proto)om.findStrict("ti.sdo.utils.NameServer.Handle", "ti.sdo.io"), $$UNDEF, "w");
    }

    void IDriver$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sdo.io.IDriver.Module", "ti.sdo.io");
        po.init("ti.sdo.io.IDriver.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.io"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.IDriver.Instance", "ti.sdo.io");
        po.init("ti.sdo.io.IDriver.Instance", $$Instance);
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.IDriver$$Params", "ti.sdo.io");
        po.init("ti.sdo.io.IDriver.Params", $$Params);
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
    }

    void IConverter$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sdo.io.IConverter.Module", "ti.sdo.io");
        po.init("ti.sdo.io.IConverter.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sdo.io"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.IConverter.Instance", "ti.sdo.io");
        po.init("ti.sdo.io.IConverter.Instance", $$Instance);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sdo.io.IConverter$$Params", "ti.sdo.io");
        po.init("ti.sdo.io.IConverter.Params", $$Params);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("Q_TERMINATING", Proto.Elm.newCNum("(xdc_Int)"), 1L, "rh");
        if (isCFG) {
        }//isCFG
        // typedef IConverter.DoneFxn
        om.bind("ti.sdo.io.IConverter.DoneFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"));
    }

    void Build$$ROV()
    {
    }

    void DriverTypes$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.DriverTypes", "ti.sdo.io");
        vo.bind("Packet$fetchDesc", Global.newObject("type", "ti.sdo.io.DriverTypes.Packet", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTypes$$Packet", "ti.sdo.io");
    }

    void DriverTable$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.DriverTable", "ti.sdo.io");
        vo.bind("Entry$fetchDesc", Global.newObject("type", "ti.sdo.io.DriverTable.Entry", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTable$$Entry", "ti.sdo.io");
        vo.bind("Module_State$fetchDesc", Global.newObject("type", "ti.sdo.io.DriverTable.Module_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTable$$Module_State", "ti.sdo.io");
    }

    void Stream$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.Stream", "ti.sdo.io");
        vo.bind("Entry$fetchDesc", Global.newObject("type", "ti.sdo.io.Stream.Entry", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$Entry", "ti.sdo.io");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sdo.io.Stream.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$Instance_State", "ti.sdo.io");
        po.bind("packets$fetchDesc", Global.newObject("type", "ti.sdo.io.DriverTypes.Packet", "isScalar", false));
        vo.bind("Module_State$fetchDesc", Global.newObject("type", "ti.sdo.io.Stream.Module_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream$$Module_State", "ti.sdo.io");
    }

    void IDriver$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.IDriver", "ti.sdo.io");
    }

    void IConverter$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.IConverter", "ti.sdo.io");
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sdo.io.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sdo.io"));
        Scriptable cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sdo/io/package.xs");
        om.bind("xdc.IPackage$$capsule", cap);
        Object fxn;
                fxn = Global.get(cap, "init");
                if (fxn != null) pkgP.addFxn("init", (Proto.Fxn)om.findStrict("xdc.IPackage$$init", "ti.sdo.io"), fxn);
                fxn = Global.get(cap, "close");
                if (fxn != null) pkgP.addFxn("close", (Proto.Fxn)om.findStrict("xdc.IPackage$$close", "ti.sdo.io"), fxn);
                fxn = Global.get(cap, "validate");
                if (fxn != null) pkgP.addFxn("validate", (Proto.Fxn)om.findStrict("xdc.IPackage$$validate", "ti.sdo.io"), fxn);
                fxn = Global.get(cap, "exit");
                if (fxn != null) pkgP.addFxn("exit", (Proto.Fxn)om.findStrict("xdc.IPackage$$exit", "ti.sdo.io"), fxn);
                fxn = Global.get(cap, "getLibs");
                if (fxn != null) pkgP.addFxn("getLibs", (Proto.Fxn)om.findStrict("xdc.IPackage$$getLibs", "ti.sdo.io"), fxn);
                fxn = Global.get(cap, "getSects");
                if (fxn != null) pkgP.addFxn("getSects", (Proto.Fxn)om.findStrict("xdc.IPackage$$getSects", "ti.sdo.io"), fxn);
        pkgP.bind("$capsule", cap);
        pkgV.init2(pkgP, "ti.sdo.io", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sdo.io");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sdo.io.");
        pkgV.bind("$vers", Global.newArray("1, 0, 0, 0"));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sdo.io'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/io/debug/ti.sdo.io.a28L',\n");
            sb.append("'lib/io/debug/ti.sdo.io.a28FP',\n");
            sb.append("'lib/io/debug/ti.sdo.io.a64P',\n");
            sb.append("'lib/io/debug/ti.sdo.io.a64Pe',\n");
            sb.append("'lib/io/debug/ti.sdo.io.a674',\n");
            sb.append("'lib/io/debug/ti.sdo.io.ae64P',\n");
            sb.append("'lib/io/debug/ti.sdo.io.ae64Pe',\n");
            sb.append("'lib/io/debug/ti.sdo.io.ae674',\n");
            sb.append("'lib/io/debug/ti.sdo.io.ae64T',\n");
            sb.append("'lib/io/debug/ti.sdo.io.ae66',\n");
            sb.append("'lib/io/debug/ti.sdo.io.ae66e',\n");
            sb.append("'lib/io/debug/ti.sdo.io.ae9',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aea8f',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aea8fnv',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aem3',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aem4',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aem4f',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aearp32',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aearp32F',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aer4te',\n");
            sb.append("'lib/io/debug/ti.sdo.io.aer4fte',\n");
            sb.append("'lib/smpio/debug/ti.sdo.io.aem3',\n");
            sb.append("'lib/smpio/debug/ti.sdo.io.aem4',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/io/debug/ti.sdo.io.a28L', {target: 'ti.targets.C28_large', suffix: '28L'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.a28FP', {target: 'ti.targets.C28_float', suffix: '28FP'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.a64P', {target: 'ti.targets.C64P', suffix: '64P'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.a64Pe', {target: 'ti.targets.C64P_big_endian', suffix: '64Pe'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.a674', {target: 'ti.targets.C674', suffix: '674'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.ae64P', {target: 'ti.targets.elf.C64P', suffix: 'e64P'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.ae64Pe', {target: 'ti.targets.elf.C64P_big_endian', suffix: 'e64Pe'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.ae64T', {target: 'ti.targets.elf.C64T', suffix: 'e64T'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aearp32', {target: 'ti.targets.arp32.elf.ARP32', suffix: 'earp32'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aearp32F', {target: 'ti.targets.arp32.elf.ARP32_far', suffix: 'earp32F'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aer4te', {target: 'ti.targets.arm.elf.R4t_big_endian', suffix: 'er4te'}],\n");
            sb.append("['lib/io/debug/ti.sdo.io.aer4fte', {target: 'ti.targets.arm.elf.R4Ft_big_endian', suffix: 'er4fte'}],\n");
            sb.append("['lib/smpio/debug/ti.sdo.io.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/smpio/debug/ti.sdo.io.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void Build$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.Build", "ti.sdo.io");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Build.Module", "ti.sdo.io");
        vo.init2(po, "ti.sdo.io.Build", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.Build$$capsule", "ti.sdo.io"));
        vo.bind("$package", om.findStrict("ti.sdo.io", "ti.sdo.io"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 0);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        Proto.Str ps = (Proto.Str)vo.find("Module_State");
        if (ps != null) vo.bind("$object", ps.newInstance());
        vo.bind("$$meta_iobj", om.has("ti.sdo.io.Build$$instance$static$init", null) ? 1 : 0);
        vo.bind("$$fxntab", Global.newArray());
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", "./Build.xdt");
        atmap.seal("length");
        vo.bind("TEMPLATE$", "./Build.xdt");
        pkgV.bind("Build", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Build");
    }

    void DriverTypes$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.DriverTypes", "ti.sdo.io");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTypes.Module", "ti.sdo.io");
        vo.init2(po, "ti.sdo.io.DriverTypes", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.DriverTypes$$capsule", "ti.sdo.io"));
        vo.bind("$package", om.findStrict("ti.sdo.io", "ti.sdo.io"));
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
        vo.bind("PacketCmdDesc", om.findStrict("ti.sdo.io.DriverTypes.PacketCmdDesc", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.DriverTypes.PacketCmdDesc", "ti.sdo.io"));
        vo.bind("PacketCmd", om.findStrict("ti.sdo.io.DriverTypes.PacketCmd", "ti.sdo.io"));
        vo.bind("ControlCmdDesc", om.findStrict("ti.sdo.io.DriverTypes.ControlCmdDesc", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.DriverTypes.ControlCmdDesc", "ti.sdo.io"));
        vo.bind("ControlCmd", om.findStrict("ti.sdo.io.DriverTypes.ControlCmd", "ti.sdo.io"));
        vo.bind("Packet", om.findStrict("ti.sdo.io.DriverTypes.Packet", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.DriverTypes.Packet", "ti.sdo.io"));
        vo.bind("DoneFxn", om.findStrict("ti.sdo.io.DriverTypes.DoneFxn", "ti.sdo.io"));
        vo.bind("IOMode", om.findStrict("ti.sdo.io.DriverTypes.IOMode", "ti.sdo.io"));
        mcfgs.add("READ");
        mcfgs.add("WRITE");
        mcfgs.add("CHAN_ABORT");
        mcfgs.add("CHAN_RESET");
        mcfgs.add("DEVICE_RESET");
        mcfgs.add("EBADIO");
        mcfgs.add("EBADMODE");
        mcfgs.add("ENOTIMPL");
        mcfgs.add("EBADARGS");
        mcfgs.add("EINUSE");
        mcfgs.add("EINVALIDDEV");
        mcfgs.add("EABORTED");
        mcfgs.add("LM_startIO");
        mcfgs.add("LM_ioComplete");
        vo.bind("INPUT", om.findStrict("ti.sdo.io.DriverTypes.INPUT", "ti.sdo.io"));
        vo.bind("OUTPUT", om.findStrict("ti.sdo.io.DriverTypes.OUTPUT", "ti.sdo.io"));
        vo.bind("INOUT", om.findStrict("ti.sdo.io.DriverTypes.INOUT", "ti.sdo.io"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io")).add(vo);
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
        vo.bind("$$fxntab", Global.newArray("ti_sdo_io_DriverTypes_Module__startupDone__E"));
        vo.bind("$$logEvtCfgs", Global.newArray("LM_startIO", "LM_ioComplete"));
        vo.bind("$$errorDescCfgs", Global.newArray("EBADIO", "EBADMODE", "ENOTIMPL", "EBADARGS", "EINUSE", "EINVALIDDEV", "EABORTED"));
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("DriverTypes", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("DriverTypes");
    }

    void DriverTable$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.DriverTable", "ti.sdo.io");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.DriverTable.Module", "ti.sdo.io");
        vo.init2(po, "ti.sdo.io.DriverTable", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.DriverTable$$capsule", "ti.sdo.io"));
        vo.bind("$package", om.findStrict("ti.sdo.io", "ti.sdo.io"));
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
        mcfgs.add("maxRuntimeEntries");
        mcfgs.add("gate");
        mcfgs.add("maxNameLen");
        vo.bind("Entry", om.findStrict("ti.sdo.io.DriverTable.Entry", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.DriverTable.Entry", "ti.sdo.io"));
        icfgs.add("staticEntries");
        vo.bind("Module_State", om.findStrict("ti.sdo.io.DriverTable.Module_State", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.DriverTable.Module_State", "ti.sdo.io"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io")).add(vo);
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
        vo.bind("add", om.findStrict("ti.sdo.io.DriverTable.add", "ti.sdo.io"));
        vo.bind("remove", om.findStrict("ti.sdo.io.DriverTable.remove", "ti.sdo.io"));
        vo.bind("match", om.findStrict("ti.sdo.io.DriverTable.match", "ti.sdo.io"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_io_DriverTable_Module__startupDone__E", "ti_sdo_io_DriverTable_add__E", "ti_sdo_io_DriverTable_remove__E", "ti_sdo_io_DriverTable_match__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "add", "entry", "\"%s\", %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "remove", "entry", "\"%s\", %p", "exit", ""));
        loggables.add(Global.newObject("name", "match", "entry", "\"%s\", %p, %p", "exit", "%d"));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("DriverTable", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("DriverTable");
    }

    void Stream$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.Stream", "ti.sdo.io");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.Stream.Module", "ti.sdo.io");
        vo.init2(po, "ti.sdo.io.Stream", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sdo.io.Stream$$capsule", "ti.sdo.io"));
        vo.bind("Instance", om.findStrict("ti.sdo.io.Stream.Instance", "ti.sdo.io"));
        vo.bind("Params", om.findStrict("ti.sdo.io.Stream.Params", "ti.sdo.io"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.Stream.Params", "ti.sdo.io")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.io.Stream.Handle", "ti.sdo.io"));
        vo.bind("$package", om.findStrict("ti.sdo.io", "ti.sdo.io"));
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
        mcfgs.add("E_notFound");
        mcfgs.add("E_noPackets");
        mcfgs.add("E_noBuffersIssued");
        mcfgs.add("E_timeout");
        mcfgs.add("A_badMode");
        mcfgs.add("A_pendingReclaims");
        mcfgs.add("A_syncNonBlocking");
        mcfgs.add("maxRuntimeEntries");
        mcfgs.add("gate");
        mcfgs.add("maxNameLen");
        vo.bind("BasicView", om.findStrict("ti.sdo.io.Stream.BasicView", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.Stream.BasicView", "ti.sdo.io"));
        vo.bind("Entry", om.findStrict("ti.sdo.io.Stream.Entry", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.Stream.Entry", "ti.sdo.io"));
        icfgs.add("staticEntries");
        vo.bind("Instance_State", om.findStrict("ti.sdo.io.Stream.Instance_State", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.Stream.Instance_State", "ti.sdo.io"));
        vo.bind("Module_State", om.findStrict("ti.sdo.io.Stream.Module_State", "ti.sdo.io"));
        tdefs.add(om.findStrict("ti.sdo.io.Stream.Module_State", "ti.sdo.io"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 0);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", om.has("ti.sdo.io.Stream$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sdo$io$Stream$$__initObject"));
        }//isCFG
        vo.bind("add", om.findStrict("ti.sdo.io.Stream.add", "ti.sdo.io"));
        vo.bind("remove", om.findStrict("ti.sdo.io.Stream.remove", "ti.sdo.io"));
        vo.bind("match", om.findStrict("ti.sdo.io.Stream.match", "ti.sdo.io"));
        vo.bind("completedLog", om.findStrict("ti.sdo.io.Stream.completedLog", "ti.sdo.io"));
        vo.bind("internalCallback", om.findStrict("ti.sdo.io.Stream.internalCallback", "ti.sdo.io"));
        vo.bind("postInit", om.findStrict("ti.sdo.io.Stream.postInit", "ti.sdo.io"));
        vo.bind("issueX", om.findStrict("ti.sdo.io.Stream.issueX", "ti.sdo.io"));
        vo.bind("$$fxntab", Global.newArray("ti_sdo_io_Stream_Handle__label__E", "ti_sdo_io_Stream_Module__startupDone__E", "ti_sdo_io_Stream_Object__create__E", "ti_sdo_io_Stream_Object__delete__E", "ti_sdo_io_Stream_Object__destruct__E", "ti_sdo_io_Stream_Object__get__E", "ti_sdo_io_Stream_Object__first__E", "ti_sdo_io_Stream_Object__next__E", "ti_sdo_io_Stream_Params__init__E", "ti_sdo_io_Stream_add__E", "ti_sdo_io_Stream_remove__E", "ti_sdo_io_Stream_match__E", "ti_sdo_io_Stream_completedLog__E", "ti_sdo_io_Stream_issue__E", "ti_sdo_io_Stream_reclaim__E", "ti_sdo_io_Stream_read__E", "ti_sdo_io_Stream_write__E", "ti_sdo_io_Stream_submit__E", "ti_sdo_io_Stream_control__E", "ti_sdo_io_Stream_abort__E", "ti_sdo_io_Stream_prime__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray("E_notFound", "E_noPackets", "E_noBuffersIssued", "E_timeout"));
        vo.bind("$$assertDescCfgs", Global.newArray("A_badMode", "A_pendingReclaims", "A_syncNonBlocking"));
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.io.Stream.Object", "ti.sdo.io"));
        vo.bind("MODULE_STARTUP$", 1);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "add", "entry", "\"%s\", %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "remove", "entry", "\"%s\", %p", "exit", ""));
        loggables.add(Global.newObject("name", "match", "entry", "\"%s\", %p, %p", "exit", "%d"));
        loggables.add(Global.newObject("name", "completedLog", "entry", "%p, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "issue", "entry", "%p, %p, 0x%x, %p, %p", "exit", ""));
        loggables.add(Global.newObject("name", "reclaim", "entry", "%p, %p, 0x%x, %p, %p", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "read", "entry", "%p, %p, 0x%x, 0x%x, %p", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "write", "entry", "%p, %p, 0x%x, 0x%x, %p", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "submit", "entry", "%p, %p, 0x%x", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "control", "entry", "%p", "exit", ""));
        loggables.add(Global.newObject("name", "abort", "entry", "%p, %p", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "prime", "entry", "%p, %p, %p, %p", "exit", ""));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("Stream", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Stream");
    }

    void IDriver$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.IDriver", "ti.sdo.io");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.IDriver.Module", "ti.sdo.io");
        vo.init2(po, "ti.sdo.io.IDriver", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Interface");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("Instance", om.findStrict("ti.sdo.io.IDriver.Instance", "ti.sdo.io"));
        vo.bind("Params", om.findStrict("ti.sdo.io.IDriver.Params", "ti.sdo.io"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.IDriver.Params", "ti.sdo.io")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.io.IDriver.Handle", "ti.sdo.io"));
        vo.bind("$package", om.findStrict("ti.sdo.io", "ti.sdo.io"));
        tdefs.clear();
        proxies.clear();
        inherits.clear();
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$interfaces")).add(vo);
        pkgV.bind("IDriver", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("IDriver");
        vo.seal(null);
    }

    void IConverter$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.IConverter", "ti.sdo.io");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.IConverter.Module", "ti.sdo.io");
        vo.init2(po, "ti.sdo.io.IConverter", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Interface");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("Instance", om.findStrict("ti.sdo.io.IConverter.Instance", "ti.sdo.io"));
        vo.bind("Params", om.findStrict("ti.sdo.io.IConverter.Params", "ti.sdo.io"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.IConverter.Params", "ti.sdo.io")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sdo.io.IConverter.Handle", "ti.sdo.io"));
        vo.bind("$package", om.findStrict("ti.sdo.io", "ti.sdo.io"));
        tdefs.clear();
        proxies.clear();
        inherits.clear();
        vo.bind("DoneFxn", om.findStrict("ti.sdo.io.IConverter.DoneFxn", "ti.sdo.io"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$interfaces")).add(vo);
        pkgV.bind("IConverter", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("IConverter");
        vo.seal(null);
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
            Object srcP = ((XScriptO)om.findStrict("xdc.runtime.IInstance", "ti.sdo.io")).findStrict("PARAMS", "ti.sdo.io");
            Scriptable dstP;

            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sdo.io.Stream", "ti.sdo.io")).findStrict("PARAMS", "ti.sdo.io");
            Global.put(dstP, "instance", srcP);
        }//isCFG
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.Build", "ti.sdo.io"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.DriverTypes", "ti.sdo.io"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.DriverTable", "ti.sdo.io"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.Stream", "ti.sdo.io"));
        if (isCFG) {
            vo = (Value.Obj)om.findStrict("ti.sdo.io.Stream", "ti.sdo.io");
            Global.put(vo, "rovViewInfo", Global.callFxn("create", (Scriptable)om.find("xdc.rov.ViewInfo"), Global.newObject("viewMap", Global.newArray(new Object[]{Global.newArray(new Object[]{"Basic", Global.newObject("type", om.find("xdc.rov.ViewInfo.INSTANCE"), "viewInitFxn", "viewInitBasic", "structName", "BasicView")})}))));
        }//isCFG
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sdo.io.Build")).bless();
        ((Value.Obj)om.getv("ti.sdo.io.DriverTypes")).bless();
        ((Value.Obj)om.getv("ti.sdo.io.DriverTable")).bless();
        ((Value.Obj)om.getv("ti.sdo.io.Stream")).bless();
        ((Value.Obj)om.getv("ti.sdo.io.IDriver")).bless();
        ((Value.Obj)om.getv("ti.sdo.io.IConverter")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sdo.io")).add(pkgV);
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
        Build$$OBJECTS();
        DriverTypes$$OBJECTS();
        DriverTable$$OBJECTS();
        Stream$$OBJECTS();
        IDriver$$OBJECTS();
        IConverter$$OBJECTS();
        Build$$CONSTS();
        DriverTypes$$CONSTS();
        DriverTable$$CONSTS();
        Stream$$CONSTS();
        IDriver$$CONSTS();
        IConverter$$CONSTS();
        Build$$CREATES();
        DriverTypes$$CREATES();
        DriverTable$$CREATES();
        Stream$$CREATES();
        IDriver$$CREATES();
        IConverter$$CREATES();
        Build$$FUNCTIONS();
        DriverTypes$$FUNCTIONS();
        DriverTable$$FUNCTIONS();
        Stream$$FUNCTIONS();
        IDriver$$FUNCTIONS();
        IConverter$$FUNCTIONS();
        Build$$SIZES();
        DriverTypes$$SIZES();
        DriverTable$$SIZES();
        Stream$$SIZES();
        IDriver$$SIZES();
        IConverter$$SIZES();
        Build$$TYPES();
        DriverTypes$$TYPES();
        DriverTable$$TYPES();
        Stream$$TYPES();
        IDriver$$TYPES();
        IConverter$$TYPES();
        if (isROV) {
            Build$$ROV();
            DriverTypes$$ROV();
            DriverTable$$ROV();
            Stream$$ROV();
            IDriver$$ROV();
            IConverter$$ROV();
        }//isROV
        $$SINGLETONS();
        Build$$SINGLETONS();
        DriverTypes$$SINGLETONS();
        DriverTable$$SINGLETONS();
        Stream$$SINGLETONS();
        IDriver$$SINGLETONS();
        IConverter$$SINGLETONS();
        $$INITIALIZATION();
    }
}
