#ifndef __MSG_GSS_H
#define __MSG_GSS_H
/*___INFO__MARK_BEGIN__*/
/*************************************************************************
 * 
 *  The Contents of this file are made available subject to the terms of
 *  the Sun Industry Standards Source License Version 1.2
 * 
 *  Sun Microsystems Inc., March, 2001
 * 
 * 
 *  Sun Industry Standards Source License Version 1.2
 *  =================================================
 *  The contents of this file are subject to the Sun Industry Standards
 *  Source License Version 1.2 (the "License"); You may not use this file
 *  except in compliance with the License. You may obtain a copy of the
 *  License at http://gridengine.sunsource.net/Gridengine_SISSL_license.html
 * 
 *  Software provided under this License is provided on an "AS IS" basis,
 *  WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING,
 *  WITHOUT LIMITATION, WARRANTIES THAT THE SOFTWARE IS FREE OF DEFECTS,
 *  MERCHANTABLE, FIT FOR A PARTICULAR PURPOSE, OR NON-INFRINGING.
 *  See the License for the specific provisions governing your rights and
 *  obligations concerning the Software.
 * 
 *   The Initial Developer of the Original Code is: Sun Microsystems, Inc.
 * 
 *   Copyright: 2001 by Sun Microsystems, Inc.
 * 
 *   All Rights Reserved.
 * 
 ************************************************************************/
/*___INFO__MARK_END__*/

#include "basis_types.h"
/* 
** gss/acquire_cred.c 
*/ 
#define MSG_GSS_ACQUIREX_USAGE_S        _MESSAGE(51000, _("Usage: "SFN" [-s service]\n"))
#define MSG_GSS_ACQUIREX_s_OPT_USAGE    _MESSAGE(51001, _("       -s service      Get credentials for service\n"))

/* 
** gss/sge_gsslib.c 
*/ 
#define MSG_GSS_APIERRORXY_SS          _MESSAGE(51002, _("GSS-API error "SFN": "SFN"\n"))
#define MSG_GSS_CONTEXTFLAG_GSS_C_DELEG_FLAG       _MESSAGE(51003, _("context flag: GSS_C_DELEG_FLAG\n"             ))
#define MSG_GSS_CONTEXTFLAG_GSS_C_MUTUAL_FLAG      _MESSAGE(51004, _("context flag: GSS_C_MUTUAL_FLAG\n"))
#define MSG_GSS_CONTEXTFLAG_GSS_C_REPLAY_FLAG      _MESSAGE(51005, _("context flag: GSS_C_REPLAY_FLAG\n"))
#define MSG_GSS_CONTEXTFLAG_GSS_C_SEQUENCE_FLAG    _MESSAGE(51006, _("context flag: GSS_C_SEQUENCE_FLAG\n"))
#define MSG_GSS_CONTEXTFLAG_GSS_C_CONF_FLAG        _MESSAGE(51007, _("context flag: GSS_C_CONF_FLAG \n"))
#define MSG_GSS_CONTEXTFLAG_GSS_C_INTEG_FLAG       _MESSAGE(51008, _("context flag: GSS_C_INTEG_FLAG \n"))
#define MSG_GSS_ACCEPTSECCONTEXTREQUIRESTOKENTOBESENTBACK  _MESSAGE(51009, _("accept_sec_context requires token to be sent back\n" ))
#define MSG_GSS_CLIENTNAMEXDOESNOTMATCHUNAMEY_SS   _MESSAGE(51010, _("client name \"%.*s\" does not match user name "SFQ"\n"))
#define MSG_GSS_DISPLAYSTATUS_PARSINGNAME          _MESSAGE(51011, _("parsing name"))
#define MSG_GSS_DISPLAYSTATUS_INITIALIZINGCONTEXT  _MESSAGE(51012, _("initializing context"))
#define MSG_GSS_DISPLAYSTATUS_ACQUIRINGCREDENTIALS _MESSAGE(51013, _("acquiring credentials"))
#define MSG_GSS_DISPLAYSTATUS_IMPORTINGNAME        _MESSAGE(51014, _("importing name"))
#define MSG_GSS_DISPLAYSTATUS_REGISTERINGIDENTITY  _MESSAGE(51015, _("registering identity"))
#define MSG_GSS_DISPLAYSTATUS_ACCEPTINGCONTEXT     _MESSAGE(51016, _("accepting context"))
#define MSG_GSS_DISPLAYSTATUS_DISPLAYINGNAME       _MESSAGE(51017, _("displaying name"))
#define MSG_GSS_DISPLAYSTATUS_COMPARINGNAME       _MESSAGE(51018, _("comparing name"))
#define MSG_GSS_DISPLAYSTATUS_RELEASINGNAME        _MESSAGE(51019, _("releasing name"))
#define MSG_GSS_DISPLAYSTATUS_GETTINGKRB5CONTEXT   _MESSAGE(51020, _("getting krb5 context"))
#define MSG_GSS_DISPLAYSTATUS_GSSDCESETCREDCONTEXTOWNERSHIP _MESSAGE(51021, _("gssdce_set_cred_context_ownership"))
#define MSG_GSS_DISPLAYSTATUS_GSSDCECREDTOLOGINCONTEXT      _MESSAGE(51022, _("gssdce_cred_to_login_context"))
#define MSG_GSS_PRINTERROR_CREDENTIALBUFFERLENGTHISZERO  _MESSAGE(51023, _("credential buffer length is zero\n"))
#define MSG_GSS_PRINTERROR_CREDENTIALDUMP          _MESSAGE(51024, _("Credential dump\n"))
#define MSG_GSS_PRINTERROR_COULDNOTDISABLEDELEGATIONX_S  _MESSAGE(51025, _("Could not disable delegation - "SFN"\n"))
#define MSG_GSS_PRINTERROR_COULDNOTCERTIFYIDENTITYX_S    _MESSAGE(51026, _("Could not certify identity - "SFN"\n"))
#define MSG_GSS_PRINTERROR_COULDNOTSETUPLOGINCONTEXTX_S  _MESSAGE(51027, _("Could not set up login context - "SFN"\n"))
#define MSG_GSS_PRINTERROR_NEWKRB5CCNAMEISX_S            _MESSAGE(51028, _("New KRB5CCNAME="SFN"\n"))
#define MSG_GSS_PRINTERROR_KRB5CCNAMENOTFOUND            _MESSAGE(51029, _("KRB5CCNAME not found\n"))
#define MSG_GSS_PRINTERROR_GETTINGKRB5CONTEXT            _MESSAGE(51030, _("getting krb5 context"))
#define MSG_GSS_PRINTERROR_KRB5PARSENAMERETURNEDX_I      _MESSAGE(51031, _("krb5_parse_name returned %d\n"))
#define MSG_GSS_PRINTERROR_KRB5CCDEFAULTRETURNEDX_I      _MESSAGE(51032, _("krb5_cc_default returned %d\n"))
#define MSG_GSS_PRINTERROR_KRB5CCINITIALIZERETURNEDX_I   _MESSAGE(51033, _("krb5_cc_initialize returned %d\n"))
#define MSG_GSS_PRINTERROR_COPYINGDELEGATEDCREDSTOCC     _MESSAGE(51034, _("copying delegated creds to ccache"))



/* 
** gss/delete_cred.c
*/ 
#define MSG_GSS_PERROR_UNLINK             _MESSAGE(51035, _("unlink"))
#define MSG_GSS_PERROR_GETTINGFILESTATUS  _MESSAGE(51036, _("getting file status"))
#define MSG_GSS_PERROR_GETTINGLINK        _MESSAGE(51037, _("getting link"   ))
#define MSG_GSS_DELETECREDKRB5CCNAMEENVVARHASINVALIDFORMAT  _MESSAGE(51038, _("delete_cred: KRB5CCNAME environment variable has an invalid format\n"))
#define MSG_GSS_DELETECREDKRB5CCNAMEENVVARNOTSET  _MESSAGE(51039, _("delete_cred: KRB5CCNAME environment variable not set\n" ))
#define MSG_GSS_DELETECREDCOULDNOTDELCREDENTIALS   _MESSAGE(51040, _("delete_cred: could not delete credentials\n"))


/* 
** gss/get_cred.c
*/ 
#define MSG_GSS_WRITINGXBYTESTOSTDOUT_I   _MESSAGE(51041, _("writing %d bytes to stdout\n"))
#define MSG_GSS_GETCREDNOCREDENTIALSFOUND _MESSAGE(51042, _("get_cred: no credentials found"))

/* 
** gss/put_cred.c
*/ 
#define MSG_GSS_GETCRED_USAGE       _( \
"Usage: "SFN" [-v] service\n" \
"   -v          verbose output\n" \
"   service     Get credentials for service\n" )

#define MSG_GSS_PUTCRED_USAGE       _( \
"Usage: "SFN" [-u user] [-b user] [-s service] [-c cmd]\n" \
"   -b user     Become user before storing credentials and/or executing cmd\n" \
"   -o user     Change ownership of credentials cache files to user\n" \
"   -u user     Authenticate user\n" \
"   -s service  Get credentials for service\n" \
"   -c cmd      Run command as user\n" \
"   -e cmd      Execute command as user\n" )

#define MSG_GSS_PUTCRED_ARGUMENTS   _MESSAGE(51043, _("Arguments: "))
#define MSG_GSS_FAILEDREADINGCREDENTIALLENGTHFROMSTDIN   _MESSAGE(51044, _("failed reading credential length from stdin\n"))
#define MSG_GSS_COULDNOTALLOCATEXBYTESFORCREDENTIALS_I   _MESSAGE(51045, _("could not allocate %d bytes for credentials\n"))
#define MSG_GSS_FAILEDREADINGCREDENTIALFROMSTDIN         _MESSAGE(51046, _("failed reading credential from stdin\n"))
#define MSG_GSS_COULDNOTGETUSERIDFORXY_SS                _MESSAGE(51047, _("could not get user ID for "SFN" - "SFN"\n"))
#define MSG_GSS_COULDNOTCHANGEOWNERSHIPOFCREDENTIALSCACHETOXINVALIDKRB5CCNAME_S _MESSAGE(51048, _("could not change ownership of credentials cache to "SFN" - invalid KRB5CCNAME\n" ))
#define MSG_GSS_COULDNOTCHANGEOWNERSHIPOFXTOYZ_SSS       _MESSAGE(51049, _("could not change ownership of "SFN" to "SFN" - "SFN"\n"))
#define MSG_GSS_PERROR_SETGID                            _MESSAGE(51050, _("setgid"))
#define MSG_GSS_PERROR_SETUID                            _MESSAGE(51051, _("setuid"))
#define MSG_GSS_PERROR_EXECFAILED                        _MESSAGE(51052, _("exec failed"))
#define MSG_GSS_COULDNOTLINKXTODCECREDENTIALSCACHEFILEYZ_SSS   _MESSAGE(51053, _("Could not link "SFN" to DCE credentials cache file "SFN" - "SFN"\n"))
#define MSG_GSS_COULDNOTLINKXTODCECREDENTIALSCACHEFILEYINVALIDKRB5CCNAMEENVIRONMENTVARIABLEFORMAT_SS  _MESSAGE(51054, _("Could not link "SFN" to DCE credentials cache file "SFN" - invalid KRB5CCNAME environment variable format\n"))


/* 
** gss/write_cred.c
*/ 
#define MSG_GSS_WRITECRED_USAGE_S         _MESSAGE(51055, _("Usage: "SFN" file\n"))
#define MSG_GSS_COULDNOTOPENXY_SS         _MESSAGE(51056, _("could not open "SFN" - "SFN"\n"))
#define MSG_GSS_READINGCREDENTIALLENGTH   _MESSAGE(51057, _("reading credential length\n"))
#define MSG_GSS_READLENGTHOFX_I           _MESSAGE(51058, _("read length of %d\n"))
#define MSG_GSS_READXBYTES_I              _MESSAGE(51059, _("read %d bytes\n"))
#define MSG_GSS_WROTEXBYTES_I             _MESSAGE(51060, _("wrote %d bytes\n"))
#define MSG_GSS_WRITECREDNOCREDENTIALSFOUND  _MESSAGE(51061, _("write_cred: no credentials found"))
#endif /* __MSG_GSS_H */
