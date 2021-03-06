/***************************************************************************
 *                                                                         *
 *    LIBDSK: General floppy and diskimage access library                  *
 *    Copyright (C) 2005  John Elliott <seasip.webmaster@gmail.com>            *
 *                                                                         *
 *    This library is free software; you can redistribute it and/or        *
 *    modify it under the terms of the GNU Library General Public          *
 *    License as published by the Free Software Foundation; either         *
 *    version 2 of the License, or (at your option) any later version.     *
 *                                                                         *
 *    This library is distributed in the hope that it will be useful,      *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of       *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU    *
 *    Library General Public License for more details.                     *
 *                                                                         *
 *    You should have received a copy of the GNU Library General Public    *
 *    License along with this library; if not, write to the Free           *
 *    Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,      *
 *    MA 02111-1307, USA                                                   *
 *                                                                         *
 ***************************************************************************/

#include "stdafx.h"
#include "Atlibdsk.h"
#include "Reporter.h"

/////////////////////////////////////////////////////////////////////////////
// CReporter

/* This 'reporter' class is a dummy. It's here simply because ATL doesn't
 * seem happy having interfaces without implementations of them */

STDMETHODIMP CReporter::report(BSTR message)
{
	return S_OK;
}

STDMETHODIMP CReporter::endreport()
{
	return S_OK;
}
