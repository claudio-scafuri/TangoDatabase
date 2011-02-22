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
// Copyright (C) :      2004,2005,2006,2007,2008,2009,2010
//						European Synchrotron Radiation Facility
//                      BP 220, Grenoble 38043
//                      FRANCE
//
// This file is part of Tango.
//
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
//
// $Revision$
//
// $Log$
// Revision 2.19  2007/11/06 07:24:05  taurel
// - Added the DbGetDataForServerCache command (with timing stats)
// - Add timing stats for the DbPutClassProperty command
//
// Revision 2.18  2006/07/31 12:19:49  jlpons
// Correction
//
// Revision 2.17  2006/06/22 15:25:32  jlpons
// Added history commands
//
// Revision 2.16  2005/07/21 20:12:23  andy_gotz
// added attributes to return timing information for the DbImportDevice command
//
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
