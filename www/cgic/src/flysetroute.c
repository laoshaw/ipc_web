/*
 ****************************************************************************
 *
 ** \file      setroute.c
 **
 ** \version   $Id: flysetroute.c 2417 2014-11-19 09:11:29Z houwentao $
 **
 ** \brief     
 **
 ** \attention THIS SAMPLE CODE IS PROVIDED AS IS. GOFORTUNE SEMICONDUCTOR
 **            ACCEPTS NO RESPONSIBILITY OR LIABILITY FOR ANY ERRORS OR 
 **            OMMISSIONS.
 **
 ** (C) Copyright 2012-2013 by GOKE MICROELECTRONICS CO.,LTD
 **
 ****************************************************************************
 */
#if 0
#define SERVER_NAME cgiServerName
#endif
#if 1
#define SERVER_NAME "bwcpn"
#endif

#include <include.h>

extern int fly_process_PostData();

int cgiMain() {
    int ret=-1;
    /* Send the content type, letting the browser know this is HTML */
    FUN_IN();
    cgiHeaderContentType("text/html");
    
    ret = fly_process_PostData();
//    ret = CamBasicPage_process_PostData(); 
    if (ret < 0) {
		fprintf(cgiOut,"1:set params failed");
        PRT_DBG("1:set params failed\n");
	} 
    else
    {
        if (ret == 0) 
        {
//			fprintf(cgiOut,"0:set params succeeded");
			fprintf(cgiOut,"succeeded\n");
            PRT_DBG("0:set params succeeded\n");
		}
    }

    return (GK_CGI_NO_ERROR);
}
