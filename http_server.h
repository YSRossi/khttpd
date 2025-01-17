#ifndef KHTTPD_HTTP_SERVER_H
#define KHTTPD_HTTP_SERVER_H

#include <net/sock.h>

#define MODULE_NAME "khttpd"

struct http_server_param {
    struct socket *listen_socket;
};

struct httpd_service {
    bool is_stopped;
    struct list_head worker;
};

extern struct workqueue_struct *khttpd_wq;

extern int http_server_daemon(void *arg);

#endif
