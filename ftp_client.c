#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <sys/stat.h>

#include "ftplib.h"


/* exit values */

#define EX_SYNTAX 2     /* command syntax errors */
#define EX_NETDB 3      /* network database errors */
#define EX_CONNECT 4    /* network connect errors */
#define EX_LOGIN 5      /* remote login errors */
#define EX_REMCMD 6     /* remote command errors */
#define EX_SYSERR 7     /* system call errors */

static int logged_in = 0;
static char *host = NULL;
static char *user = NULL;
static char *pass = NULL;
static char mode = 'I';
static netbuf *conn = NULL;


void ftp_connect(void){
    if (conn) return;

    if (host == NULL){
        fprintf(stderr,"Host name not specified\n");
        exit(EX_SYNTAX);

    }

    if (!logged_in){
        if (user == NULL){
            user = "u684951512";
            if (pass == NULL) pass = "1982049";
        }else if (pass == NULL) pass = "1982049";

        if (!FtpConnect(host,&conn)){
            fprintf(stderr,"Unable to connect to host %s\n%s", host, ftplib_lastresp);
            exit(EX_CONNECT);
        }

        if (!FtpLogin(user,pass,conn)){
            fprintf(stderr,"Login failure\n%s",FtpLastResponse(conn));
            exit(EX_LOGIN);
        }

        logged_in = 1;
    }
}

int main()
{

    printf("FTP Connection\n");
    host = "31.170.165.196";
    printf("ARGUMENT:%s\n",host);

    char *ks;
    char comand[100];
    ks = malloc( sizeof(*ks) );
    sprintf(ks,"%s.ls",host);
    printf("LSFile=%s\n",ks);
    FtpInit();
    printf("FTP initialised\n");
    ftp_connect();
    printf("FTP connected\n");
    if(conn)
    {
        //FtpChdir("system",conn);
        FtpDir(NULL,"-1 -F",conn);

        scanf("%s",comand);

        if (comand){
        //printf("%s",comand);
            system("clear");
            FtpChdir(comand,conn);
            FtpDir(NULL,"-1 -F",conn);
            scanf("%s",comand);

        }

        if(comand == "exit" ){
        FtpQuit(conn);
        FtpClose(conn);

        }

    }
    else
    {
    printf("can't connect\n");
    }
    //printf("Done\n\n");
free( ks );

    return 0;
}
