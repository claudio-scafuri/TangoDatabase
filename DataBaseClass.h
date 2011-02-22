//=============================================================================
//
// file :         DataBaseClass.h
//
// description :  Include for the DataBaseClass root class.
//                This class is represents the singleton class for
//                the DataBase device class.
//                It contains all properties and methods which the 
//                DataBase requires only once e.g. the commands.
//			
// project :      TANGO Device Server
//
// $Author$
//
// $Revision$
//
// $Log$
// Revision 2.20  2004/06/21 12:20:12  pascal_verdier
// DbGetExportdDeviceListForClass and DbGetDeviceAlias commands added.
//
// Revision 2.19  2004/03/08 12:41:56  pascal_verdier
// Attribute alias management added.
//
// Revision 2.18  2004/01/26 13:24:57  pascal_verdier
// DbGetServerNameList and DbGetInstanceNameList commands added.
//
// Revision 2.17  2003/12/11 10:22:10  pascal_verdier
// DbGetHostServersInfo command added.
//
// Revision 2.16  2003/08/13 12:02:23  andy_gotz
// added DbPutAttributeAlias and DbGetAttributeAlias commands needed by
// the AttributeProxy object. Note this needs a new table attribute_alias
// in mysql.
//
// Revision 2.15  2003/03/20 14:55:15  andy_gotz
// added support for device aliases; fixed bug in updating server info; tagged server name onto end of import info; implemented support for importing and exporting events;
//
// Revision 2.14  2003/01/16 14:30:40  goetz
// ported Makefile to omniorb
//
// Revision 2.13  2002/11/26 10:00:58  goetz
// added delete_class_attribute_property; changed Solaris to CC; added pid to import_device
//
// Revision 2.12  2002/09/16 08:39:37  goetz
// added GetObjectList and GetPropertyList commands
//
// Revision 2.11  2002/02/04 17:09:09  goetz
// updated Windows port
//
// Revision 2.9  2001/07/12 12:15:19  goetz
// changed db_get_class_list() and db_delete_device_attribute_property()
//
// Revision 2.8  2001/07/04 05:17:03  goetz
// dserver device domain,family,member corrected; wildcards for DbGetClassList
//
// Revision 2.7  2001/07/04 04:42:25  goetz
// delete all properties before updating them
//
// Revision 2.6  2001/03/22 12:56:52  goetz
// fixed bug in DbAddDevice command, device name now unique in device table
//
// Revision 2.5  2001/03/06 12:05:44  goetz
// added DbGetDeviceExportedList; DbExportDevice updates host info in server table
//
// Revision 2.4  2001/03/06 11:01:56  goetz
// added DbGetDeviceExportedList command; DbExportDevice updates host in server table
//
//
// copyleft :     European Synchrotron Radiation Facility
//                BP 220, Grenoble 38043
//                FRANCE
//
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//             (c) - Pascal Verdier - ESRF
//=============================================================================

#ifndef _DATABASECLASS_H
#define _DATABASECLASS_H

#include <tango.h>

namespace DataBase {
//
// Define classes for commands
//
class DbGetClassAttributeProperty2Cmd : public Tango::Command
{
public:
	DbGetClassAttributeProperty2Cmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetClassAttributeProperty2Cmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetClassAttributeProperty2Cmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutClassAttributeProperty2Cmd : public Tango::Command
{
public:
	DbPutClassAttributeProperty2Cmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutClassAttributeProperty2Cmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutClassAttributeProperty2Cmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceAttributeProperty2Cmd : public Tango::Command
{
public:
	DbGetDeviceAttributeProperty2Cmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceAttributeProperty2Cmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceAttributeProperty2Cmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutDeviceAttributeProperty2Cmd : public Tango::Command
{
public:
	DbPutDeviceAttributeProperty2Cmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutDeviceAttributeProperty2Cmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutDeviceAttributeProperty2Cmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetExportdDeviceListForClassCmd : public Tango::Command
{
public:
	DbGetExportdDeviceListForClassCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetExportdDeviceListForClassCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetExportdDeviceListForClassCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteAttributeAliasCmd : public Tango::Command
{
public:
	DbDeleteAttributeAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteAttributeAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteAttributeAliasCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteDeviceAliasCmd : public Tango::Command
{
public:
	DbDeleteDeviceAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteDeviceAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteDeviceAliasCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetAliasDeviceCmd : public Tango::Command
{
public:
	DbGetAliasDeviceCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetAliasDeviceCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetAliasDeviceCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetAttributeAliasCmd : public Tango::Command
{
public:
	DbGetAttributeAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetAttributeAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetAttributeAliasCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutAttributeAliasCmd : public Tango::Command
{
public:
	DbPutAttributeAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutAttributeAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutAttributeAliasCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutDeviceAliasCmd : public Tango::Command
{
public:
	DbPutDeviceAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutDeviceAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutDeviceAliasCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbUnExportEventCmd : public Tango::Command
{
public:
	DbUnExportEventCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbUnExportEventCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbUnExportEventCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbImportEventCmd : public Tango::Command
{
public:
	DbImportEventCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbImportEventCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbImportEventCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbExportEventCmd : public Tango::Command
{
public:
	DbExportEventCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbExportEventCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbExportEventCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetAttributeAliasList : public Tango::Command
{
public:
	DbGetAttributeAliasList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetAttributeAliasList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetAttributeAliasList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetObjectListCmd : public Tango::Command
{
public:
	DbGetObjectListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetObjectListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetObjectListCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceServerClassListCmd : public Tango::Command
{
public:
	DbGetDeviceServerClassListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceServerClassListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceServerClassListCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceExportedListCmd : public Tango::Command
{
public:
	DbGetDeviceExportedListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceExportedListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceExportedListCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteServerInfoCmd : public Tango::Command
{
public:
	DbDeleteServerInfoCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteServerInfoCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteServerInfoCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutServerInfoCmd : public Tango::Command
{
public:
	DbPutServerInfoCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutServerInfoCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutServerInfoCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetServerInfoCmd : public Tango::Command
{
public:
	DbGetServerInfoCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetServerInfoCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetServerInfoCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetHostServersInfoCmd : public Tango::Command
{
public:
	DbGetHostServersInfoCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetHostServersInfoCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetHostServersInfoCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteClassAttributePropertyCmd : public Tango::Command
{
public:
	DbDeleteClassAttributePropertyCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteClassAttributePropertyCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteClassAttributePropertyCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteClassAttributeCmd : public Tango::Command
{
public:
	DbDeleteClassAttributeCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteClassAttributeCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteClassAttributeCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteDeviceAttributePropertyCmd : public Tango::Command
{
public:
	DbDeleteDeviceAttributePropertyCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteDeviceAttributePropertyCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteDeviceAttributePropertyCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteDeviceAttributeCmd : public Tango::Command
{
public:
	DbDeleteDeviceAttributeCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteDeviceAttributeCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteDeviceAttributeCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteServerCmd : public Tango::Command
{
public:
	DbDeleteServerCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteServerCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteServerCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteDeviceCmd : public Tango::Command
{
public:
	DbDeleteDeviceCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteDeviceCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteDeviceCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceAttributeList : public Tango::Command
{
public:
	DbGetDeviceAttributeList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceAttributeList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceAttributeList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetClassAttributeList : public Tango::Command
{
public:
	DbGetClassAttributeList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetClassAttributeList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetClassAttributeList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbAddDevice : public Tango::Command
{
public:
	DbAddDevice(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbAddDevice(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbAddDevice() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbAddServer : public Tango::Command
{
public:
	DbAddServer(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbAddServer(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbAddServer() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbUnExportServer : public Tango::Command
{
public:
	DbUnExportServer(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbUnExportServer(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbUnExportServer() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbUnExportDevice : public Tango::Command
{
public:
	DbUnExportDevice(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbUnExportDevice(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbUnExportDevice() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbImportDevice : public Tango::Command
{
public:
	DbImportDevice(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbImportDevice(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbImportDevice() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbExportDevice : public Tango::Command
{
public:
	DbExportDevice(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbExportDevice(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbExportDevice() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteClassProperty : public Tango::Command
{
public:
	DbDeleteClassProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteClassProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteClassProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutClassProperty : public Tango::Command
{
public:
	DbPutClassProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutClassProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutClassProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetClassProperty : public Tango::Command
{
public:
	DbGetClassProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetClassProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetClassProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutClassAttributeProperty : public Tango::Command
{
public:
	DbPutClassAttributeProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutClassAttributeProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutClassAttributeProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetClassAttributeProperty : public Tango::Command
{
public:
	DbGetClassAttributeProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetClassAttributeProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetClassAttributeProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutDeviceAttributeProperty : public Tango::Command
{
public:
	DbPutDeviceAttributeProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutDeviceAttributeProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutDeviceAttributeProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceAttributeProperty : public Tango::Command
{
public:
	DbGetDeviceAttributeProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceAttributeProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceAttributeProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteDeviceProperty : public Tango::Command
{
public:
	DbDeleteDeviceProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteDeviceProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteDeviceProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutDeviceProperty : public Tango::Command
{
public:
	DbPutDeviceProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutDeviceProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutDeviceProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceProperty : public Tango::Command
{
public:
	DbGetDeviceProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceClassList : public Tango::Command
{
public:
	DbGetDeviceClassList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceClassList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceClassList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetClassList : public Tango::Command
{
public:
	DbGetClassList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetClassList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetClassList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceList : public Tango::Command
{
public:
	DbGetDeviceList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbInfo : public Tango::Command
{
public:
	DbInfo(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbInfo(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbInfo() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceDomainList : public Tango::Command
{
public:
	DbGetDeviceDomainList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceDomainList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceDomainList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceFamilyList : public Tango::Command
{
public:
	DbGetDeviceFamilyList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceFamilyList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceFamilyList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceMemberList : public Tango::Command
{
public:
	DbGetDeviceMemberList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceMemberList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceMemberList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceAliasList : public Tango::Command
{
public:
	DbGetDeviceAliasList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceAliasList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceAliasList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDeviceAliasCmd : public Tango::Command
{
public:
	DbGetDeviceAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDeviceAliasCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDeviceAliasCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetDevicePropertyList : public Tango::Command
{
public:
	DbGetDevicePropertyList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetDevicePropertyList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetDevicePropertyList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetClassPropertyList : public Tango::Command
{
public:
	DbGetClassPropertyList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetClassPropertyList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetClassPropertyList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetInstanceNameListCmd : public Tango::Command
{
public:
	DbGetInstanceNameListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetInstanceNameListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetInstanceNameListCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetServerNameListCmd : public Tango::Command
{
public:
	DbGetServerNameListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetServerNameListCmd(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetServerNameListCmd() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetServerList : public Tango::Command
{
public:
	DbGetServerList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetServerList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetServerList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetHostList : public Tango::Command
{
public:
	DbGetHostList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetHostList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetHostList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetHostServerList : public Tango::Command
{
public:
	DbGetHostServerList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetHostServerList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetHostServerList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbDeleteProperty : public Tango::Command
{
public:
	DbDeleteProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbDeleteProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbDeleteProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbPutProperty : public Tango::Command
{
public:
	DbPutProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbPutProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbPutProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetProperty : public Tango::Command
{
public:
	DbGetProperty(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetProperty(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetProperty() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};


class DbGetPropertyList : public Tango::Command
{
public:
	DbGetPropertyList(const char *,Tango::CmdArgType, Tango::CmdArgType,const char *,const char *, Tango::DispLevel);
	DbGetPropertyList(const char *,Tango::CmdArgType, Tango::CmdArgType);
	~DbGetPropertyList() {};
	
	virtual bool is_allowed (Tango::DeviceImpl *, const CORBA::Any &);
	virtual CORBA::Any *execute (Tango::DeviceImpl *, const CORBA::Any &);
};



//
// The DataBaseClass singleton definition
//

class DataBaseClass : public Tango::DeviceClass
{
public:

//	add your own data members here
//------------------------------------

public:

//	Method prototypes
	static DataBaseClass *init(const char *);
	static DataBaseClass *instance();
	~DataBaseClass();
	
protected:
	DataBaseClass(string &);
	static DataBaseClass *_instance;
	void command_factory();
	void write_class_property();

private:
	void device_factory(const Tango::DevVarStringArray *);
};


}	//	namespace DataBase

#endif // _DATABASECLASS_H
