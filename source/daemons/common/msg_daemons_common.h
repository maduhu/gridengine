#ifndef MSG_DAEMONS_COMMON_H
#define MSG_DAEMONS_COMMON_H
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



#define MSG_OBJ_UNKNOWNREASON         _MESSAGE(27000, _("<unknown reason>"))
/*
** global deamon messages
*/
#define MSG_MASTER    _MESSAGE(27001, _("master"))
#define MSG_STARTUP_STARTINGUP_SS          _MESSAGE(27002, _("starting up "SFN" ("SFN")"))
#define MSG_SHADOWD_CONTROLLEDSHUTDOWN_SS  _MESSAGE(27003, _("controlled shutdown "SFN" ("SFN")"))
#define MSG_ERROR_CANTSWITCHTOADMINUSER    _MESSAGE(27004, _("can't switch to amin_user"))

/*
** path_aliases.c
*/
#define MSG_ALIAS_INVALIDSYNTAXOFPATHALIASFILEX_S    _MESSAGE(27005, _("invalid syntax of path alias file "SFQ"\n"))
#define MSG_ALIAS_CANTREAD_SS                        _MESSAGE(27006, _("can't read path aliasing file "SFQ": "SFN"\n"))


/*
** unparse_job_cull.c
*/
#define MSG_LIST_ERRORFORMATINGJIDPREDECESSORLISTASHOLDJID       _MESSAGE(27007, _("Error formatting jid_predecessor_list as -hold_jid\n"))
#define MSG_LIST_ERRORFORMATINGJOBIDENTIFIERLISTASJID       _MESSAGE(27008, _("Error formatting job_identifier_list as -jid\n"))
#define MSG_PARSE_ERRORUNPARSINGMAILOPTIONS       _MESSAGE(27009, _("Error unparsing mail options\n"))
#define MSG_LIST_ERRORFORMATTINGMAILLISTASM       _MESSAGE(27010, _("Error formatting mail list as -M\n"))
#define MSG_PROC_INVALIDPROIRITYMUSTBELESSTHAN1025       _MESSAGE(27011, _("ERROR! invalid priority, priority must be less than 1025\n"))
#define MSG_PROC_INVALIDPRIORITYMUSTBEGREATERTHANMINUS1024       _MESSAGE(27012, _("ERROR! invalid priority, priority must be greater than -1024\n"))
#define MSG_LIST_ERRORFORMATINGHARDQUEUELISTASQ       _MESSAGE(27013, _("Error formatting hard_queue_list as -q\n"))
#define MSG_LIST_ERRORFORMATINGSOFTQUEUELISTASQ       _MESSAGE(27014, _("Error formatting soft_queue_list as -q\n"))
#define MSG_LIST_ERRORFORMATINGQSARGSLIST       _MESSAGE(27015, _("Error formatting qs_args list\n"))
#define MSG_LIST_ERRORFORMATINGSHELLLIST       _MESSAGE(27016, _("Error formatting shell_list\n"))
#define MSG_LIST_ERRORFORMATINGENVIRONMENTLISTASV       _MESSAGE(27017, _("Error formatting environment list as -v\n"))
#define MSG_LIST_ERRORFORMATINGJOBARGUMENTS       _MESSAGE(27018, _("Error formatting job argumentents\n"))
#define MSG_JOB_INVALIDVALUEFORCHECKPOINTATTRIBINJOB_U       _MESSAGE(27019, _("ERROR! invalid value for checkpoint attribute in job "U32CFormat"\n"))
#define MSG_LIST_ERRORFORMATINGHARDRESOURCELISTASL       _MESSAGE(27020, _("Error formatting hard_resource_list as -l\n"))
#define MSG_JOB_JOBHASPEWITHNORANGES       _MESSAGE(27021, _("Job has parallel environment with no ranges\n"))
#define MSG_LIST_ERRORFORMATINGRANGESINPE       _MESSAGE(27022, _("Error formatting ranges in -pe\n"))
#define MSG_LIST_ERRORFORMATINGPATHLIST       _MESSAGE(27023, _("Error formatting path_list\n"))
#define MSG_LIST_ERRORFORMATINGIDLIST       _MESSAGE(27024, _("Error formatting id list\n"))
#define MSG_LIST_ERRORFORMATINGACLLIST       _MESSAGE(27025, _("Error formatting acl list\n"))


/*
** startprog.c
*/
#define MSG_STARTUP_STARTINGPROGRAMMX_S       _MESSAGE(27026, _("starting program: "SFN))
#define MSG_PROC_CANTFORKPROCESSTOSTARTX_S       _MESSAGE(27027, _("can't fork process to start: "SFN))
#define MSG_PROC_CANTEXECPROCESSORPROCESSDIEDTHROUGHSIGNALX_S       _MESSAGE(27028, _("cannot exec process or process died through signal: "SFN))
#define MSG_PROC_CANTSTARTPROCESSX_S       _MESSAGE(27029, _("couldn't start process: "SFN))
#define MSG_PROC_WAITPIDRETURNEDUNKNOWNSTATUS       _MESSAGE(27030, _("waitpid() returned unknown status\n"))


/*
** qmaster_running.c
*/
#define MSG_QMASTER_FOUNDRUNNINGQMASTERWITHPIDXNOTSTARTING_I    _MESSAGE(27031, _("found running qmaster with pid %d - not starting"))
#define MSG_QMASTER_ALREADYENROLLEDSHOULDNOTHAPPEN    _MESSAGE(27032, _("already enrolled - should not happen"))
#define MSG_QMASTER_CANTRESOLVEHOSTNAMEXFROMACTQMASTERFILE_S    _MESSAGE(27033, _("can't resolve hostname "SFQ" from act_qmaster file"))
#define MSG_QMASTER_CANTRESOLVESERVEICESGECOMMDTCP    _MESSAGE(27034, _("can't resolve service \"sge_commd/tcp\""))
#define MSG_QMASTER_COMMDONHOSTXEXPECTSRESERVEDPORT_S    _MESSAGE(27035, _("commd on host "SFQ" expects reserved port"))
#define MSG_QMASTER_COMMDONHOSTXCANTRESOLVEOURHOSTNAME_S    _MESSAGE(27036, _("commd on host "SFQ" can't resolve our hostname verify your resolving (reverse mapping) or start commd with an alias file"))
#define MSG_QMASTER_COMMUNICATIONPROBLEONHOSTX_SS    _MESSAGE(27037, _("communication problem with commd on host "SFQ": "SFN))
#define MSG_QMASTER_FOUNDRUNNINGQMASTERONHOSTXNOTSTARTING_S    _MESSAGE(27038, _("found running qmaster on host "SFQ"- not starting"))
#define MSG_QMASTER_CANTCHECKFORRUNNINGQMASTERX_S    _MESSAGE(27039, _("can't check for running qmaster: "SFN))
#define MSG_COMMD_CANTCONTACTCOMMDX_S    _MESSAGE(27040, _("can't contact commd: "SFN))



/* 
** qmaster_heartbeat.c 
*/
#define MSG_HEART_CANNOTOPEN _MESSAGE(27041, _("can't open file "SFN": "SFN"\n"))

/*
** mail.c
*/
#define MSG_MAIL_EMPTYUSERHOST         _MESSAGE(27042, _("sending mail is not possible since user and host are empty"))
#define MSG_MAIL_MAILUSER_SSSS         _MESSAGE(27043, _("sending "SFN" mail to user "SFQ"|mailer "SFQ"|"SFQ))
#define MSG_MAIL_MAILUSERHOST_SSSSS    _MESSAGE(27044, _("sending "SFN" mail to user \""SFN"@"SFN"\"|mailer "SFQ"|"SFQ))
#define MSG_MAIL_NOPIPE                _MESSAGE(27045, _("pipe() for mail failed\n"))
#define MSG_MAIL_NOFORK                _MESSAGE(27046, _("fork() for mail failed\n"))
#define MSG_MAIL_NODUP                 _MESSAGE(27047, _("dup() failed\n"))
#define MSG_MAIL_NOEXEC_S              _MESSAGE(27048, _("exec of mailer "SFQ" failed\n"))
#define MSG_MAIL_NOMAIL1               _MESSAGE(27049, _("wait for mailer returned 0 - killing\n") ) 
#define MSG_MAIL_NOMAIL2               _MESSAGE(27050, _("mailer had timeout - killing"))
#define MSG_MAIL_NOMAIL3_I             _MESSAGE(27051, _("mailer was stopped due to signal %d - killing"))
#define MSG_MAIL_NOSUBJ                _MESSAGE(27052, _("<no subject>"))


/*
** admin_mail.c 
*/
#define MSG_MAIL_PARSE_S           _MESSAGE(27053, _("Error parsing mail list "SFQ"\n"))
#define MSG_MAIL_SUBJECT_SUU       SFN": Job-array task "U32CFormat"."U32CFormat" failed"
#define MSG_MAIL_SUBJECT_SU        SFN": Job " U32CFormat " failed"
#define MSG_MAIL_BODY_USSSSSSSS    "Job " U32CFormat " caused action: "SFN"\n User        = "SFN"\n Queue       = "SFN"\n Host        = "SFN"\n Start Time  = "SFN"\n End Time    = "SFN"\nfailed "SFN":"SFN
#define MSG_GFSTATE_QUEUE_S        _MESSAGE(27055, _("Queue "SFQ" set to ERROR"))
#define MSG_GFSTATE_HOST_S         _MESSAGE(27056, _("All Queues on host "SFQ" set to ERROR"))
#define MSG_GFSTATE_JOB_UU         _MESSAGE(27057, _("Job-array task "U32CFormat"."U32CFormat" set to ERROR"))
#define MSG_GFSTATE_JOB_U          _MESSAGE(27058, _("Job "U32CFormat" set to ERROR"))

/*
** config_file.c
*/
#define MSG_CONF_NOCONFVALUE_S        _MESSAGE(27059, _("can't get configuration value for "SFQ))
#define MSG_CONF_ATLEASTONECHAR       _MESSAGE(27060, _("variables need at least one character"))
#define MSG_CONF_REFVAR_S             _MESSAGE(27061, _("referenced variable %20.20s... expands max. length"))
#define MSG_CONF_UNKNOWNVAR_S         _MESSAGE(27062, _("unknown variable "SFQ))

/* 
 * sge_category.c
 */ 
#define MSG_CATEGORY_BUILDINGCATEGORYFORJOBXFAILED_U  _MESSAGE(27063, _("failed building category string for job "U32CFormat"\n"))

#endif /* MSG_DAEMONS_COMMON_H */

