//
// i18n.h
//
// Description: This file is only used to extract the texts to be translated
//
//
// Author: Steffen Macke <sdteffen@sdteffen.de>, (C) 2008
//
// Copyright: See COPYING file that comes with this distribution
//
//

#define   t_ABOVE       _("above")
#define   t_BELOW       _("below")
#define   t_HW          _("Hazen-Williams")
#define   t_DW          _("Darcy-Weisbach")
#define   t_CM          _("Chezy-Manning")
#define   t_CHEMICAL    _("Chemical")
#define   t_XHEAD       _("closed because cannot deliver head")
#define   t_TEMPCLOSED  _("temporarily closed")
#define   t_CLOSED      _("closed")
#define   t_OPEN        _("open")
#define   t_ACTIVE      _("active")
#define   t_XFLOW       _("open but exceeds maximum flow")
#define   t_XFCV        _("open but cannot deliver flow")
#define   t_XPRESSURE   _("open but cannot deliver pressure")
#define   t_FILLING     _("filling")
#define   t_EMPTYING    _("emptying")

#define   t_ELEV        _("Elevation")
#define   t_DEMAND      _("Demand")
#define   t_HEAD        _("Head")
#define   t_PRESSURE    _("Pressure")
#define   t_QUALITY     _("Quality")
#define   t_LENGTH      _("Length")
#define   t_DIAM        _("Diameter")
#define   t_FLOW        _("Flow")
#define   t_VELOCITY    _("Velocity")
#define   t_HEADLOSS    _("Headloss")
#define   t_LINKQUAL    _("Quality")
#define   t_LINKSTATUS  _("State")
#define   t_SETTING     _("Setting")
#define   t_REACTRATE   _("Reaction")
#define   t_FRICTION    _("F-Factor")

#define   t_NODEID      _("Node")
#define   t_LINKID      _("Link")
#define   t_PERDAY      _("/day")

#define   t_JUNCTION    _("Junction")
#define   t_RESERVOIR   _("Reservoir")
#define   t_TANK        _("Tank")
#define   t_PIPE        _("Pipe")
#define   t_PUMP        _("Pump")
#define   t_VALVE       _("Valve")
#define   t_CONTROL     _("Control")
#define   t_RULE        _("Rule")
#define   t_DEMANDFOR   _("Demand for Node")
#define   t_SOURCE      _("Source")
#define   t_EMITTER     _("Emitter")
#define   t_PATTERN     _("Pattern")
#define   t_CURVE       _("Curve")
#define   t_STATUS      _("Status")
#define   t_ROUGHNESS   _("Roughness")
#define   t_ENERGY      _("Energy")
#define   t_REACTION    _("Reaction")
#define   t_MIXING      _("Mixing")
#define   t_REPORT      _("Report")
#define   t_TIME        _("Times")
#define   t_OPTION      _("Options")
#define   t_RULES_SECT  _("[RULES] section")
#define   t_HALTED      _(" EXECUTION HALTED.")
#define   t_FUNCCALL    _("function call")
#define   t_CONTINUED   _(" (continued)")
#define   t_perM3       _("  /m3")
#define   t_perMGAL     _("/Mgal")
#define   t_DIFFER      _("DIFFERENTIAL")


/* ------------------ Format Messages ------------------*/
#define LOGO1  \
_("******************************************************************")
#define LOGO2  \
_("*                           E P A N E T                          *")
#define LOGO3  \
_("*                   Hydraulic and Water Quality                  *")
#define LOGO4  \
_("*                   Analysis for Pipe Networks                   *")
#define LOGO5  \
_("*                         Version 2.00.12                        *")           //(2.00.12 - LR)
#define LOGO6  \
_("******************************************************************")
#define FMT01  _("\n... EPANET Version 2.0\n")
#define FMT02  _("\n  o Retrieving network data")
#define FMT03  _("\n Correct syntax is:\n epanet <input file> <output file>\n")
#define FMT04  _("\n    Cannot use duplicate file names.")
#define FMT05  _("\n    Cannot open input file ")
#define FMT06  _("\n    Cannot open report file ")
#define FMT07  _("\n    Cannot open output file ")
#define FMT08  _("\n    Cannot open temporary output file")
#define FMT09  _("\n\n... EPANET completed.\n")
#define FMT10  _("\n\n... EPANET completed. There are warnings.\n")
#define FMT11  _("\n\n... EPANET completed. There are errors.\n")
#define FMT14  _("\n  o Computing hydraulics at hour ")
#define FMT15  _("\n  o Computing water quality at hour ")
#define FMT16  _("\n  o Transferring results to file")
#define FMT17  _("\n  o Writing output report to ")
#define FMT18  _("  Page 1                                    ")
#define FMT19  _("    Input Data File ................... %s")
#define FMT20  _("    Number of Junctions................ %-d")
#define FMT21a _("    Number of Reservoirs............... %-d")
#define FMT21b _("    Number of Tanks ................... %-d")
#define FMT22  _("    Number of Pipes ................... %-d")
#define FMT23  _("    Number of Pumps ................... %-d")
#define FMT24  _("    Number of Valves .................. %-d")
#define FMT25  _("    Headloss Formula .................. %s")
#define FMT26  _("    Hydraulic Timestep ................ %-.2f %s")
#define FMT27  _("    Hydraulic Accuracy ................ %-.6f")

#define FMT27a _("    Status Check Frequency ............ %-d")                   //(2.00.12 - LR)
#define FMT27b _("    Maximum Trials Checked ............ %-d")                   //(2.00.12 - LR)
#define FMT27c _("    Damping Limit Threshold ........... %-.6f")                 //(2.00.12 - LR)

#define FMT28  _("    Maximum Trials .................... %-d")
#define FMT29  _("    Quality Analysis .................. None")
#define FMT30  _("    Quality Analysis .................. %s")
#define FMT31  _("    Quality Analysis .................. Trace From Node %s")
#define FMT32  _("    Quality Analysis .................. Age")
#define FMT33  _("    Water Quality Time Step ........... %-.2f min")
#define FMT34  _("    Water Quality Tolerance ........... %-.2f %s")
#define FMT36  _("    Specific Gravity .................. %-.2f")
#define FMT37a _("    Relative Kinematic Viscosity ...... %-.2f")
#define FMT37b _("    Relative Chemical Diffusivity ..... %-.2f")
#define FMT38  _("    Demand Multiplier ................. %-.2f")
#define FMT39  _("    Total Duration .................... %-.2f %s")
#define FMT40  _("    Reporting Criteria:")
#define FMT41  _("       No Nodes")
#define FMT42  _("       All Nodes")
#define FMT43  _("       Selected Nodes")
#define FMT44  _("       No Links")
#define FMT45  _("       All Links")
#define FMT46  _("       Selected Links")
#define FMT47  _("       with %s below %-.2f %s")
#define FMT48  _8"       with %s above %-.2f %s")

/* ---------- Status Report Format Strings ------------ */
#define FMT49  _("Hydraulic Status:")

/*** Updated 6/24/02 ***/
#define FMT50  _("%10s: Tank %s is %s at %-.2f %s")
#define FMT51  _("%10s: Reservoir %s is %s")
#define FMT52  _("%10s: %s %s %s")
#define FMT53  _("%10s: %s %s changed from %s to %s")
#define FMT54  _("%10s: %s %s changed by %s %s control")
#define FMT55  _("%10s: %s %s changed by timer control")
#define FMT56  _("            %s %s setting changed to %-.2f")
#define FMT57  _("            %s %s switched from %s to %s")
#define FMT58  _("%10s: Balanced after %-d trials")
#define FMT59  _("%10s: Unbalanced after %-d trials (flow change = %-.6f)")

#define FMT60a _("            Max. flow imbalance is %.4f %s at Node %s")         //(2.00.12 - LR)
#define FMT60b _("            Max. head imbalance is %.4f %s at Link %s")         //(2.00.12 - LR)

#define FMT61  _("%10s: Valve %s caused ill-conditioning")
#define FMT62  _("%10s: System ill-conditioned at node %s")
#define FMT63  _("%10s: %s %s changed by rule %s")
#define FMT64  _("%10s: Balancing the network:")
#define FMT65  _("            Trial %2d: relative flow change = %-.6f")
/*** End of update ***/

/* -------------------- Energy Report Table ------------------- */
#define FMT71  _("Energy Usage:")
#define FMT72  \
        _("           Usage   Avg.     Kw-hr      Avg.      Peak      Cost")
#define FMT73  \
        _("Pump      Factor Effic.     %s        Kw        Kw      /day")
#define FMT74  _("%38s Demand Charge: %9.2f")
#define FMT75  _("%38s Total Cost:    %9.2f")

/* -------------------- Node Report Table --------------------- */
#define FMT76  _("%s Node Results:")
#define FMT77  _("Node Results:")
#define FMT78  _("Node Results at %s hrs:")

/* -------------------- Link Report Table --------------------- */
#define FMT79  _("%s Link Results:")
#define FMT80  _("Link Results:")
#define FMT81  _("Link Results at %s hrs:")
#define FMT82  _("\n\f\n  Page %-d    %60.60s\n")

/* ------------------- Progress Messages ---------------------- */
#define FMT100 _("Retrieving network data...")
#define FMT101 _("Computing hydraulics at hour %s")
#define FMT102 _("Computing water quality at hour %s")
#define FMT103 _("Saving results to file...")
#define FMT104 _("Analysis begun %s")
#define FMT105 _("Analysis ended %s")

/*------------------- Error Messages --------------------*/
#define ERR101 _("System Error 101: insufficient memory available.")
#define ERR102 _("System Error 102: no network data available.")
#define ERR103 _("System Error 103: hydraulics not initialized.")
#define ERR104 _("System Error 104: no hydraulics for water quality analysis.")
#define ERR105 _("System Error 105: water quality not initialized.")
#define ERR106 _("System Error 106: no results saved to report on.")
#define ERR107 _("System Error 107: hydraulics supplied from external file.")
#define ERR108 _("System Error 108: cannot use external file while hydraulics solver is active.")
#define ERR109 _("System Error 109: cannot change time parameter when solver is active.")
#define ERR110 _("System Error 110: cannot solve network hydraulic equations.")
#define ERR120 _("System Error 120: cannot solve water quality transport equations.")

#define ERR200 _("Input Error 200: one or more errors in input file.")
#define ERR201 \
 _("Input Error 201: syntax error in following line of [%s] section:")
#define ERR202 _("Input Error 202: %s %s contains illegal numeric value.")
#define ERR203 _("Input Error 203: %s %s refers to undefined node.")
#define ERR204 _("Input Error 204: %s %s refers to undefined link.")
#define ERR205 _("Input Error 205: %s %s refers to undefined time pattern.")
#define ERR206 _("Input Error 206: %s %s refers to undefined curve.")
#define ERR207 _("Input Error 207: %s %s attempts to control a CV.")

#define ERR208 _("Input Error 208: %s specified for undefined Node %s.")
#define ERR209 _("Input Error 209: illegal %s value for Node %s.")
#define ERR210 _("Input Error 210: %s specified for undefined Link %s.")
#define ERR211 _("Input Error 211: illegal %s value for Link %s.")
#define ERR212 _("Input Error 212: trace node %.0s %s is undefined.")
#define ERR213 _("Input Error 213: illegal option value in [%s] section:")
#define ERR214 \
 _("Input Error 214: following line of [%s] section contains too many characters:")
#define ERR215 _("Input Error 215: %s %s is a duplicate ID.")
#define ERR216 _("Input Error 216: %s data specified for undefined Pump %s.")
#define ERR217 _("Input Error 217: invalid %s data for Pump %s.")
#define ERR219 _("Input Error 219: %s %s illegally connected to a tank.")
#define ERR220 _("Input Error 220: %s %s illegally connected to another valve.")

/*** Updated on 10/25/00 ***/
#define ERR222 "Input Error 222: %s %s has same start and end nodes."

#define ERR223 _("Input Error 223: not enough nodes in network")
#define ERR224 _("Input Error 224: no tanks or reservoirs in network.")
#define ERR225 _("Input Error 225: invalid lower/upper levels for Tank %s.")
#define ERR226 _("Input Error 226: no head curve supplied for Pump %s.")
#define ERR227 _("Input Error 227: invalid head curve for Pump %s.")
#define ERR230 _("Input Error 230: Curve %s has nonincreasing x-values.")
#define ERR233 _("Input Error 233: Node %s is unconnected.")
#define ERR240 _("Input Error 240: %s %s refers to undefined source.")
#define ERR241 _("Input Error 241: %s %s refers to undefined control.")
#define ERR250 _("Input Error 250: function call contains invalid format.")
#define ERR251 _("Input Error 251: function call contains invalid parameter code.")

#define ERR301 _("File Error 301: identical file names.")
#define ERR302 _("File Error 302: cannot open input file.")
#define ERR303 _("File Error 303: cannot open report file.")
#define ERR304 _("File Error 304: cannot open binary output file.")
#define ERR305 _("File Error 305: cannot open hydraulics file.")
#define ERR306 _("File Error 306: hydraulics file does not match network data.")
#define ERR307 _("File Error 307: cannot read hydraulics file.")
#define ERR308 _("File Error 308: cannot save results to file.")
#define ERR309 _("File Error 309: cannot save results to report file.")

#define R_ERR201 _("Input Error 201: syntax error in following line of ")
#define R_ERR202 _("Input Error 202: illegal numeric value in following line of ")
#define R_ERR203 _("Input Error 203: undefined node in following line of ")
#define R_ERR204 _("Input Error 204: undefined link in following line of ")
#define R_ERR207 _("Input Error 207: attempt to control a CV in following line of ")

#define R_ERR221 _("Input Error 221: mis-placed clause in following line of ")

/*-------------------- Specific Warning Messages -------------------------*/
#define WARN01 _("WARNING: System unbalanced at %s hrs.")
#define WARN02 \
_("WARNING: Maximum trials exceeded at %s hrs. System may be unstable.")
#define WARN03a _("WARNING: Node %s disconnected at %s hrs")
#define WARN03b _("WARNING: %d additional nodes disconnected at %s hrs")
#define WARN03c _("WARNING: System disconnected because of Link %s") 
#define WARN04  _("WARNING: Pump %s %s at %s hrs.")
#define WARN05  _("WARNING: %s %s %s at %s hrs.")
#define WARN06  _("WARNING: Negative pressures at %s hrs.")

/*-------------------- General Warning Messages -------------------------*/
#define WARN1 _("WARNING: System hydraulically unbalanced.")
#define WARN2 _("WARNING: System may be hydraulically unstable.")
#define WARN3 _("WARNING: System disconnected.")
#define WARN4 _("WARNING: Pumps cannot deliver enough flow or head.")
#define WARN5 _("WARNING: Valves cannot deliver enough flow.")
#define WARN6 _("WARNING: System has negative pressures.")

