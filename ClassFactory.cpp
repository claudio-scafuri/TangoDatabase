static const char *RcsId = "$Header$";
//+=============================================================================
//
// file :        ClassFactory.cpp
//
// description : C++ source for the class_factory method of the DServer
//               device class. This method is responsible to create
//               all class singletin for a device server. It is called
//               at device server startup
//
// project :     TANGO Device Server
//
// $Author$
//
// $Revision$
//
// $Log$
// Revision 2.15  2003/01/16 14:30:40  goetz
// ported Makefile to omniorb
//
// Revision 2.14  2002/11/26 10:00:58  goetz
// added delete_class_attribute_property; changed Solaris to CC; added pid to import_device
//
// Revision 2.13  2002/09/16 08:39:36  goetz
// added GetObjectList and GetPropertyList commands
//
// Revision 2.12  2002/02/04 17:09:08  goetz
// updated Windows port
//
// Revision 2.10  2001/07/12 12:15:18  goetz
// changed db_get_class_list() and db_delete_device_attribute_property()
//
// Revision 2.9  2001/07/04 05:17:03  goetz
// dserver device domain,family,member corrected; wildcards for DbGetClassList
//
// Revision 2.8  2001/07/04 04:42:24  goetz
// delete all properties before updating them
//
// Revision 2.7  2001/06/11 15:38:13  goetz
// added check on no. of arguments in GetDeviceProperty
//
// Revision 2.6  2001/03/22 12:56:52  goetz
// fixed bug in DbAddDevice command, device name now unique in device table
//
// Revision 2.5  2001/03/06 12:05:43  goetz
// added DbGetDeviceExportedList; DbExportDevice updates host info in server table
//
// Revision 2.4  2001/03/06 11:01:55  goetz
// added DbGetDeviceExportedList command; DbExportDevice updates host in server table
//
// Revision 2.3  2001/03/05 12:10:52  goetz
// checking in before going to add new command(s)
//
// Revision 2.2  2001/01/03 11:58:28  goetz
// E.Taurel modified version for new TACO exception class
//
// Revision 2.1  2000/11/02 14:35:21  goetz
// added commands for server info
//
// Revision 2.0  2000/10/19 07:31:07  goetz
// changed major version number to 2
//
// Revision 1.16  2000/10/19 07:30:27  goetz
// ported Database to TANGO V2.0
//
//
// copyleft :    European Synchrotron Radiation Facility
//               BP 220, Grenoble 38043
//               FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//             (c) - Pascal Verdier - ESRF
//=============================================================================


#include <tango.h>
#include <DataBaseClass.h>

/**
 *	Create DataBaseClass singleton and store it in DServer object.
 *
 * @author	$Author$
 * @version	$Revision$
 */

void Tango::DServer::class_factory()
{

	add_class(DataBase_ns::DataBaseClass::init("DataBase"));

}
