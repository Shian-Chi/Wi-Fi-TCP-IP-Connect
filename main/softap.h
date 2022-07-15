#ifndef __SOFTAP_H__
#define __SOFTAP_H__

#ifdef __cplusplus
extern "C"
{
#endif

    void do_retransmit(const int sock);
    void tcp_server_task(void *pvParameters);
    void wifi_init_softap(void);
    void wifi_set(void);

#ifdef __cplusplu
}
#endif

#endif