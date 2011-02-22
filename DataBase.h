//=============================================================================
//
// file :        DataBase.h
//
// description : Include for the DataBase class.
//
// project :	TANGO
//
// $Author$
//
// $Version$
//
//
// copyleft :    European Synchrotron Radiation Facility
//               BP 220, Grenoble 38043
//               FRANCE
//
//=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//             (c) - Pascal Verdier - ESRF
//=============================================================================
#ifndef _DATABASE_H
#define _DATABASE_H

#include <tango.h>
#include <mysql.h>
#include <update_starter.h>

//	Add your own constants definitions here.
//-----------------------------------------------
#define DB_SQLError 			"DB_SQLError"
#define DB_IncorrectArguments		"DB_IncorrectArguments"
#define DB_IncorrectDeviceName		"DB_IncorrectDeviceName"
#define DB_IncorrectServerName		"DB_IncorrectServerName"
#define DB_DeviceNotDefined		"DB_DeviceNotDefined"
#define DB_AliasNotDefined		"DB_AlaiasNotDefined"

#define	STARTER_DEVNAME_HEADER	"tango/admin/"


namespace DataBase {

/**
 * @author	$Author$
 * @version	$Revision$
 */

/**
 * Class Description:
 * This class manage the TANGO database.
 */

/*
 *	Device States Description:
 */


class DataBase: public Tango::Device_2Impl
{
public :
	//	Add your own data members here
	//-----------------------------------------
	/**
	 *	current incarnation of database
	 */
	static string db_name;

	/**
	 *	Will be set by property of Default object
	 */
	bool	fireToStarter;
	/**
	 *	Shared data for update starter thread
	 */
	UpdStarterData	*starter_shared;
	/**
	 *	update starter thread instance
	 */
	UpdateStarter	*upd_starter_thread;

	//	Here is the Start of the automatic code generation part
	//-------------------------------------------------------------	
/**
 *	@name attributes
 *	Tango::Attributs menmber data.
 */
//@{
//@}

/**
 *	@name Device properties
 *	Device properties member data.
 */
//@{
//@}

/**@name Constructors
 * Miscellaneous constructors */
//@{
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	DataBase(Tango::DeviceClass *,string &);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device Name
 */
	DataBase(Tango::DeviceClass *,const char *);
/**
 * Constructs a newly allocated Command object.
 *
 *	@param cl	Class.
 *	@param s 	Device name
 *	@param d	Device description.
 */
	DataBase(Tango::DeviceClass *,const char *,const char *);
//@}

/**@name Destructor
 * Only one desctructor is defined for this class */
//@{
/**
 * The object desctructor.
 */	
	~DataBase() {};
//@}

	
/**@name Miscellaneous methods */
//@{
/**
 *	Initialize the device
 */
	virtual void init_device();
/**
 *	Read The devive state.
 *	<Br>Command DevState 
 *
 * @return the device state read.
 */
/**
 *	Read The devive status.
 *	<Br>Command DevStatus
 *
 * @return A String containing the device state read.
 */
	virtual const char* dev_status();
/**
 *	Always executed method befor execution command method.
 */
	virtual void always_executed_hook();

//@}

/**
 * @name DataBase methods prototypes
 */

//@{
/**
 * This command gets the device state (stored in its <i>device_state</i> data member) and returns it to the caller.
 *	@return	State Code
 *	@exception DevFailed
 */
	virtual Tango::DevState	dev_state();
/**
 * DataBase methods prototypes
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_property_list(const Tango::DevVarStringArray *);
/**
 * DataBase methods prototypes
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_put_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_delete_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_host_server_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_host_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_server_list(Tango::DevString);
/**
 * Returns the list of server names found for the wildcard specified.
 *	It returns only the server executable name without instance name as DbGetServerList.
 *	@param	argin	wildcard for server names.
 *	@return	server names found.
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_server_name_list(Tango::DevString);
/**
 * Returns the instance names found for specified server.
 *	@param	argin	server name
 *	@return	The instance names found for specified server.
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_instance_name_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_class_property_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_property_list(const Tango::DevVarStringArray *);
/**
 * Return alias for device name if found.
 *	@param	argin	The device name
 *	@return	The alias found
 *	@exception DevFailed
 */
	Tango::DevString	db_get_device_alias(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_alias_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_member_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_family_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_domain_list(Tango::DevString);
/**
 * 
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_info();
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_list(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_class_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_class_list(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_put_device_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_delete_device_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_attribute_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_put_device_attribute_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_class_attribute_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_put_class_attribute_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_class_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_put_class_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_delete_class_property(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_export_device(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarLongStringArray	*db_import_device(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_un_export_device(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_un_export_server(Tango::DevString);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_add_server(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_add_device(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_class_attribute_list(const Tango::DevVarStringArray *);
/**
 * return list of attributes for device which match the
 *	wildcard
 *	@param	argin	device name
 *	@return	attribute wildcard
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_attribute_list(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	device name
 *	@exception DevFailed
 */
	void	db_delete_device(Tango::DevString);
/**
 * delete server from the database, do not delete device properties
 *	@param	argin	server name
 *	@exception DevFailed
 */
	void	db_delete_server(Tango::DevString);
/**
 * delete a device attribute and all its properties from
 *	the database
 *	@param	argin	device
 *	@exception DevFailed
 */
	void	db_delete_device_attribute(const Tango::DevVarStringArray *);
/**
 * delete a device attribute property from the database
 *	@param	argin	device
 *	@exception DevFailed
 */
	void	db_delete_device_attribute_property(const Tango::DevVarStringArray *);
/**
 * delete a class attribute and all its properties from
 *	the database
 *	@param	argin	device
 *	@exception DevFailed
 */
	void	db_delete_class_attribute(const Tango::DevVarStringArray *);
/**
 * delete a class attribute property from the database
 *	@param	argin	device
 *	@exception DevFailed
 */
	void	db_delete_class_attribute_property(const Tango::DevVarStringArray *);
/**
 * return info about all servers running on specified host, name, mode and level
 *	@param	argin	host name
 *	@return	server info for all servers running on specified host
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_host_servers_info(Tango::DevString);
/**
 * return info about host, mode and level for specified server
 *	@param	argin	server name
 *	@return	server info
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*dev_get_server_info(Tango::DevString);
/**
 * update server info including host, mode and level
 *	@param	argin	server info
 *	@exception DevFailed
 */
	void	db_put_server_info(const Tango::DevVarStringArray *);
/**
 * delete info related to a server
 *	@param	argin	server name
 *	@exception DevFailed
 */
	void	db_delete_server_info(Tango::DevString);
/**
 * Get a list of exported devices whose names satisfy the filter (wildcard is
 *	@param	argin	filter
 *	@return	list of exported devices
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_exported_list(Tango::DevString);
/**
 * return list of device classes for a device server
 *	@param	argin	device server instance name
 *	@return	list of classes for this device server
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_server_class_list(Tango::DevString);
/**
 * DataBase methods prototypes
 *	@param	argin	wild card
 *	@return	list of object names
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_object_list(Tango::DevString);
/**
 * 
 *	@param	argin	attribute alias
 *	@return	attribute name
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_attribute_alias_list(Tango::DevString);
/**
 * 
 *	@param	argin	event channel or factory
 *	@exception DevFailed
 */
	void	db_export_event(const Tango::DevVarStringArray *);
/**
 * 
 *	@param	argin	name of event channel or factory
 *	@return	export information e.g. IOR
 *	@exception DevFailed
 */
	Tango::DevVarLongStringArray	*db_import_event(Tango::DevString);
/**
 * 
 *	@param	argin	name of event channel or factory to unexport
 *	@exception DevFailed
 */
	void	db_un_export_event(Tango::DevString);
/**
 * 
 *	@param	argin	device name
 *	@exception DevFailed
 */
	void	db_put_device_alias(const Tango::DevVarStringArray *);
/**
 * Define an alias for an attribute
 *	@param	argin	attribute name, alias
 *	@exception DevFailed
 */
	void	db_put_attribute_alias(const Tango::DevVarStringArray *);
/**
 * Get the device attribute name for the given alias. If no alias corresponds then return an empty string.
 *	@param	argin	alias
 *	@return	attribute name
 *	@exception DevFailed
 */
	Tango::DevString	db_get_attribute_alias(Tango::DevString);
/**
 * Return the device name for specified alias.
 *	@param	argin	specified alias.
 *	@return	Device name found.
 *	@exception DevFailed
 */
	Tango::DevString	db_get_alias_device(Tango::DevString);
/**
 * Delete a device alias.
 *	@param	argin	alias name
 *	@exception DevFailed
 */
	void	db_delete_device_alias(Tango::DevString);
/**
 * Delete an attribute alias.
 *	@param	argin	alias name.
 *	@exception DevFailed
 */
	void	db_delete_attribute_alias(Tango::DevString);
/**
 * Query the database for device exported for the specified class.
 *	@param	argin	Class name
 *	@return	Device exported list
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_exportd_device_list_for_class(Tango::DevString);
/**
 * Put device attribute property. This command adds the possibility to have attribute property
 *	which are arrays. Not possible with the old DbPutDeviceAttributeProperty command.
 *	This old command is not deleted for compatibility reasons.
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_put_device_attribute_property2(const Tango::DevVarStringArray *);
/**
 * Retrieve device attribute properties. This command has the possibility to retrieve
 *	device attribute properties which are arrays. It is not possible with the old
 *	DbGetDeviceAttributeProperty command. Nevertheless, the old command has not been
 *	deleted for compatibility reason
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_device_attribute_property2(const Tango::DevVarStringArray *);
/**
 * This command adds support for array properties compared to the previous one
 *	called DbPutClassAttributeProperty. The old comman is still there for compatibility reason
 *	@param	argin	
 *	@exception DevFailed
 */
	void	db_put_class_attribute_property2(const Tango::DevVarStringArray *);
/**
 * This command supports array property compared to the old command called
 *	DbGetClassAttributeProperty. The old command has not been deleted from the
 *	server for compatibility reasons.
 *	@param	argin	
 *	@return	
 *	@exception DevFailed
 */
	Tango::DevVarStringArray	*db_get_class_attribute_property2(const Tango::DevVarStringArray *);

//@}

	//	Here is the end of the automatic code generation part
	//-------------------------------------------------------------	



protected :	
	//	Add your own data members here
	//-----------------------------------------
	MYSQL mysql; 
	bool check_device_name(string &);
	bool device_name_to_dfm(string &device_name, char domain[], char family[], char member[]);
	string replace_wildcard(const char*);
	Tango::DevString db_get_device_host(Tango::DevString);
	string escape_string(const char *string_c_str);

};


}	//	namespace

#endif	// _DATABASE_H
