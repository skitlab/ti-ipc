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

public class ti_sdo_io_driverTemplate
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
        Global.callFxn("loadPackage", xdcO, "xdc.tools.mkpkg");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sdo.io.driverTemplate.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sdo.io.driverTemplate", new Value.Obj("ti.sdo.io.driverTemplate", pkgP));
    }

    void Main$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sdo.io.driverTemplate.Main.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sdo.io.driverTemplate.Main", new Value.Obj("ti.sdo.io.driverTemplate.Main", po));
        pkgV.bind("Main", vo);
        // decls 
        // insts 
        Object insP = om.bind("ti.sdo.io.driverTemplate.Main.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sdo.io.driverTemplate.Main$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sdo.io.driverTemplate.Main.Object", new Proto.Str(po, true));
        po = (Proto.Obj)om.bind("ti.sdo.io.driverTemplate.Main$$Params", new Proto.Obj());
        om.bind("ti.sdo.io.driverTemplate.Main.Params", new Proto.Str(po, true));
    }

    void Main$$CONSTS()
    {
        // module Main
    }

    void Main$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        fxn = (Proto.Fxn)om.bind("ti.sdo.io.driverTemplate.Main$$create", new Proto.Fxn(om.findStrict("ti.sdo.io.driverTemplate.Main.Module", "ti.sdo.io.driverTemplate"), om.findStrict("ti.sdo.io.driverTemplate.Main.Instance", "ti.sdo.io.driverTemplate"), 1, 0, false));
                fxn.addArg(0, "__params", (Proto)om.findStrict("ti.sdo.io.driverTemplate.Main.Params", "ti.sdo.io.driverTemplate"), Global.newObject());
        sb = new StringBuilder();
        sb.append("ti$sdo$io$driverTemplate$Main$$create = function( __params ) {\n");
            sb.append("var __mod = xdc.om['ti.sdo.io.driverTemplate.Main'];\n");
            sb.append("var __inst = xdc.om['ti.sdo.io.driverTemplate.Main.Instance'].$$make();\n");
            sb.append("__inst.$$bind('$package', xdc.om['ti.sdo.io.driverTemplate']);\n");
            sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
            sb.append("__inst.$$bind('$category', 'Instance');\n");
            sb.append("__inst.$$bind('$args', {});\n");
            sb.append("__inst.$$bind('$module', __mod);\n");
            sb.append("__mod.$instances.$add(__inst);\n");
            sb.append("__inst.input = __mod.PARAMS.input;\n");
            sb.append("__inst.inputPath = __mod.PARAMS.inputPath;\n");
            sb.append("__inst.arguments = __mod.PARAMS.arguments;\n");
            sb.append("__inst.output = __mod.PARAMS.output;\n");
            sb.append("__inst.modName = __mod.PARAMS.modName;\n");
            sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
            sb.append("var save = xdc.om.$curpkg;\n");
            sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
            sb.append("__mod.instance$meta$init.$fxn.apply(__inst, []);\n");
            sb.append("xdc.om.$$bind('$curpkg', save);\n");
            sb.append("__inst.$$bless();\n");
            sb.append("return __inst;\n");
        sb.append("}\n");
        Global.eval(sb.toString());
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.driverTemplate.Main$$construct", new Proto.Fxn(om.findStrict("ti.sdo.io.driverTemplate.Main.Module", "ti.sdo.io.driverTemplate"), null, 2, 0, false));
                fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sdo.io.driverTemplate.Main$$Object", "ti.sdo.io.driverTemplate"), null);
                fxn.addArg(1, "__params", (Proto)om.findStrict("ti.sdo.io.driverTemplate.Main.Params", "ti.sdo.io.driverTemplate"), Global.newObject());
        sb = new StringBuilder();
        sb.append("ti$sdo$io$driverTemplate$Main$$construct = function( __obj, __params ) {\n");
            sb.append("var __mod = xdc.om['ti.sdo.io.driverTemplate.Main'];\n");
            sb.append("var __inst = __obj;\n");
            sb.append("__inst.$$bind('$args', {});\n");
            sb.append("__inst.$$bind('$module', __mod);\n");
            sb.append("__mod.$objects.$add(__inst);\n");
            sb.append("__inst.input = __mod.PARAMS.input;\n");
            sb.append("__inst.inputPath = __mod.PARAMS.inputPath;\n");
            sb.append("__inst.arguments = __mod.PARAMS.arguments;\n");
            sb.append("__inst.output = __mod.PARAMS.output;\n");
            sb.append("__inst.modName = __mod.PARAMS.modName;\n");
            sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
            sb.append("__inst.$$bless();\n");
            sb.append("return null;\n");
        sb.append("}\n");
        Global.eval(sb.toString());
    }

    void Main$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn Main.main
        fxn = (Proto.Fxn)om.bind("ti.sdo.io.driverTemplate.Main$$main", new Proto.Fxn(om.findStrict("ti.sdo.io.driverTemplate.Main.Module", "ti.sdo.io.driverTemplate"), Proto.Elm.newCNum("(xdc_Int)"), 1, 1, false));
                fxn.addArg(0, "arguments", new Proto.Arr($$T_Str, false), $$DEFAULT);
    }

    void Main$$SIZES()
    {
    }

    void Main$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sdo.io.driverTemplate.Main.Module", "ti.sdo.io.driverTemplate");
        po.init("ti.sdo.io.driverTemplate.Main.Module", om.findStrict("xdc.tools.mkpkg.ICmd.Module", "ti.sdo.io.driverTemplate"));
                po.addFld("$hostonly", $$T_Num, 1, "r");
        po.addFld("usage", new Proto.Arr($$T_Str, false), Global.newArray(new Object[]{"-m modName -o outputDir", "[--help]"}), "wh");
                po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sdo.io.driverTemplate.Main$$create", "ti.sdo.io.driverTemplate"), Global.get("ti$sdo$io$driverTemplate$Main$$create"));
                po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sdo.io.driverTemplate.Main$$construct", "ti.sdo.io.driverTemplate"), Global.get("ti$sdo$io$driverTemplate$Main$$construct"));
                po.addFxn("main", (Proto.Fxn)om.findStrict("xdc.tools.mkpkg.ICmd$$main", "ti.sdo.io.driverTemplate"), $$UNDEF);
        po = (Proto.Obj)om.findStrict("ti.sdo.io.driverTemplate.Main.Instance", "ti.sdo.io.driverTemplate");
        po.init("ti.sdo.io.driverTemplate.Main.Instance", om.findStrict("xdc.tools.mkpkg.ICmd.Instance", "ti.sdo.io.driverTemplate"));
                po.addFld("$hostonly", $$T_Num, 1, "r");
        po.addFld("modName", $$T_Str, $$UNDEF, "wh");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.driverTemplate.Main$$Params", "ti.sdo.io.driverTemplate");
        po.init("ti.sdo.io.driverTemplate.Main.Params", om.findStrict("xdc.tools.mkpkg.ICmd$$Params", "ti.sdo.io.driverTemplate"));
                po.addFld("$hostonly", $$T_Num, 1, "r");
        po.addFld("modName", $$T_Str, $$UNDEF, "wh");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.driverTemplate.Main$$Object", "ti.sdo.io.driverTemplate");
        po.init("ti.sdo.io.driverTemplate.Main.Object", om.findStrict("ti.sdo.io.driverTemplate.Main.Instance", "ti.sdo.io.driverTemplate"));
    }

    void Main$$ROV()
    {
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sdo.io.driverTemplate.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sdo.io.driverTemplate"));
        pkgP.bind("$capsule", $$UNDEF);
        pkgV.init2(pkgP, "ti.sdo.io.driverTemplate", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sdo.io.driverTemplate");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sdo.io.driverTemplate.");
        pkgV.bind("$vers", Global.newArray("0, 00, 00"));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sdo.io.driverTemplate'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void Main$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sdo.io.driverTemplate.Main", "ti.sdo.io.driverTemplate");
        po = (Proto.Obj)om.findStrict("ti.sdo.io.driverTemplate.Main.Module", "ti.sdo.io.driverTemplate");
        vo.init2(po, "ti.sdo.io.driverTemplate.Main", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("Instance", om.findStrict("ti.sdo.io.driverTemplate.Main.Instance", "ti.sdo.io.driverTemplate"));
        vo.bind("Params", om.findStrict("ti.sdo.io.driverTemplate.Main.Params", "ti.sdo.io.driverTemplate"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sdo.io.driverTemplate.Main.Params", "ti.sdo.io.driverTemplate")).newInstance());
        vo.bind("$package", om.findStrict("ti.sdo.io.driverTemplate", "ti.sdo.io.driverTemplate"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("xdc.tools.mkpkg");
        inherits.add("xdc.tools.mkpkg");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sdo.io.driverTemplate")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        Proto.Str ps = (Proto.Str)vo.find("Module_State");
        if (ps != null) vo.bind("$object", ps.newInstance());
        vo.bind("$$meta_iobj", om.has("ti.sdo.io.driverTemplate.Main$$instance$static$init", null) ? 1 : 0);
        vo.bind("$$fxntab", Global.newArray());
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sdo.io.driverTemplate.Main.Object", "ti.sdo.io.driverTemplate"));
        pkgV.bind("Main", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Main");
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
        }//isCFG
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sdo.io.driverTemplate.Main", "ti.sdo.io.driverTemplate"));
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sdo.io.driverTemplate.Main")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sdo.io.driverTemplate")).add(pkgV);
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
        Main$$OBJECTS();
        Main$$CONSTS();
        Main$$CREATES();
        Main$$FUNCTIONS();
        Main$$SIZES();
        Main$$TYPES();
        if (isROV) {
            Main$$ROV();
        }//isROV
        $$SINGLETONS();
        Main$$SINGLETONS();
        $$INITIALIZATION();
    }
}
