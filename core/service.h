#ifndef _SERVICE_H
#define _SERVICE_H

// 服务
typedef struct service_s
{
    char    service_code[7];
    char    txn_date[9];
    char    txn_time[7];
    char    txn_logno[7];
    
} service_t;

#endif
