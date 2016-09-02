/*
 * Copyright (c) 2004, 2007 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef _SHARED_DNS_INFO_TYPES_H
#define _SHARED_DNS_INFO_TYPES_H

/*
 * Keep IPC functions private to the framework
 */
#ifdef mig_external
#undef mig_external
#endif
#define mig_external __private_extern__

/* Turn MIG type checking on by default */
#ifdef __MigTypeCheck
#undef __MigTypeCheck
#endif
#define __MigTypeCheck	1

/*
 * Mach server port name
 */
#define DNS_SERVER	"com.apple.SystemConfiguration.configd"

/*
 * Input arguments: DNS configuration
 *	(sent as out-of-line data in a message)
 */
typedef const char * dnsData_t;

/* Output arguments: DNS configuration
 *	(sent as out-of-line data in a message)
 */
typedef char * dnsDataOut_t;

#endif	/* !_SHARED_DNS_INFO_TYPES_H */
