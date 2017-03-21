#define _POSIX_SOURCE
#include <stdio.h>
#include <limits.h>
int main(){
#ifdef _POSIX_AIO_LISTIO_MAX 
 printf("_POSIX_AIO_LISTIO_MAX=%d\n",_POSIX_AIO_LISTIO_MAX);
#else
printf("_POSIX_AIO_LISTIO_MAX not defined\n");
#endif
#ifdef _POSIX_AIO_MAX 
 printf("_POSIX_AIO_MAX=%d\n",_POSIX_AIO_MAX);
#else
printf("_POSIX_AIO_MAX not defined\n");
#endif
#ifdef _POSIX_ARG_MAX 
 printf("_POSIX_ARG_MAX=%d\n",_POSIX_ARG_MAX);
#else
printf("_POSIX_ARG_MAX not defined\n");
#endif
#ifdef _POSIX_CHILD_MAX 
 printf("_POSIX_CHILD_MAX=%d\n",_POSIX_CHILD_MAX);
#else
printf("_POSIX_CHILD_MAX not defined\n");
#endif
#ifdef _POSIX_CHILD_MAX 
 printf("_POSIX_CHILD_MAX=%d\n",_POSIX_CHILD_MAX);
#else
printf("_POSIX_CHILD_MAX not defined\n");
#endif
#ifdef _POSIX_DELAYTIMER_MAX 
 printf("_POSIX_DELAYTIMER_MAX=%d\n",_POSIX_DELAYTIMER_MAX);
#else
printf("_POSIX_DELAYTIMER_MAX not defined\n");
#endif
#ifdef _POSIX_HOST_NAME_MAX 
 printf("_POSIX_HOST_NAME_MAX=%d\n",_POSIX_HOST_NAME_MAX);
#else
printf("_POSIX_HOST_NAME_MAX not defined\n");
#endif
#ifdef _POSIX_LINK_MAX 
 printf("_POSIX_LINK_MAX=%d\n",_POSIX_LINK_MAX);
#else
printf("_POSIX_LINK_MAX not defined\n");
#endif
#ifdef _POSIX_LOGIN_NAME_MAX 
 printf("_POSIX_LOGIN_NAME_MAX=%d\n",_POSIX_LOGIN_NAME_MAX);
#else
printf("_POSIX_LOGIN_NAME_MAX not defined\n");
#endif
#ifdef _POSIX_MAX_CANON 
 printf("_POSIX_MAX_CANON=%d\n",_POSIX_MAX_CANON);
#else
printf("_POSIX_MAX_CANON not defined\n");
#endif
#ifdef _POSIX_MAX_INPUT 
 printf("_POSIX_MAX_INPUT=%d\n",_POSIX_MAX_INPUT);
#else
printf("_POSIX_MAX_INPUT not defined\n");
#endif
#ifdef _POSIX_MQ_OPEN_MAX 
 printf("_POSIX_MQ_OPEN_MAX=%d\n",_POSIX_MQ_OPEN_MAX);
#else
printf("_POSIX_MQ_OPEN_MAX not defined\n");
#endif
#ifdef _POSIX_MQ_PRIO_MAX 
 printf("_POSIX_MQ_PRIO_MAX=%d\n",_POSIX_MQ_PRIO_MAX);
#else
printf("_POSIX_MQ_PRIO_MAX not defined\n");
#endif
#ifdef _POSIX_NAME_MAX 
 printf("_POSIX_NAME_MAX=%d\n",_POSIX_NAME_MAX);
#else
printf("_POSIX_NAME_MAX not defined\n");
#endif
#ifdef _POSIX_NGROUPS_MAX 
 printf("_POSIX_NGROUPS_MAX=%d\n",_POSIX_NGROUPS_MAX);
#else
printf("_POSIX_NGROUPS_MAX not defined\n");
#endif
#ifdef _POSIX_NGROUPS_MAX 
 printf("_POSIX_NGROUPS_MAX=%d\n",_POSIX_NGROUPS_MAX);
#else
printf("_POSIX_NGROUPS_MAX not defined\n");
#endif
#ifdef _POSIX_OPEN_MAX 
 printf("_POSIX_OPEN_MAX=%d\n",_POSIX_OPEN_MAX);
#else
printf("_POSIX_OPEN_MAX not defined\n");
#endif
#ifdef _POSIX_OPEN_MAX 
 printf("_POSIX_OPEN_MAX=%d\n",_POSIX_OPEN_MAX);
#else
printf("_POSIX_OPEN_MAX not defined\n");
#endif
#ifdef _POSIX_FD_SETSIZE 
 printf("_POSIX_FD_SETSIZE=%d\n",_POSIX_FD_SETSIZE);
#else
printf("_POSIX_FD_SETSIZE not defined\n");
#endif
#ifdef _POSIX_OPEN_MAX 
 printf("_POSIX_OPEN_MAX=%d\n",_POSIX_OPEN_MAX);
#else
printf("_POSIX_OPEN_MAX not defined\n");
#endif
#ifdef _POSIX_PATH_MAX 
 printf("_POSIX_PATH_MAX=%d\n",_POSIX_PATH_MAX);
#else
printf("_POSIX_PATH_MAX not defined\n");
#endif
#ifdef _POSIX_PIPE_BUF 
 printf("_POSIX_PIPE_BUF=%d\n",_POSIX_PIPE_BUF);
#else
printf("_POSIX_PIPE_BUF not defined\n");
#endif
#ifdef _POSIX_RE_DUP_MAX 
 printf("_POSIX_RE_DUP_MAX=%d\n",_POSIX_RE_DUP_MAX);
#else
printf("_POSIX_RE_DUP_MAX not defined\n");
#endif
#ifdef _POSIX_RTSIG_MAX 
 printf("_POSIX_RTSIG_MAX=%d\n",_POSIX_RTSIG_MAX);
#else
printf("_POSIX_RTSIG_MAX not defined\n");
#endif
#ifdef _POSIX_SEM_NSEMS_MAX 
 printf("_POSIX_SEM_NSEMS_MAX=%d\n",_POSIX_SEM_NSEMS_MAX);
#else
printf("_POSIX_SEM_NSEMS_MAX not defined\n");
#endif
#ifdef _POSIX_SEM_VALUE_MAX 
 printf("_POSIX_SEM_VALUE_MAX=%d\n",_POSIX_SEM_VALUE_MAX);
#else
printf("_POSIX_SEM_VALUE_MAX not defined\n");
#endif
#ifdef _POSIX_SIGQUEUE_MAX 
 printf("_POSIX_SIGQUEUE_MAX=%d\n",_POSIX_SIGQUEUE_MAX);
#else
printf("_POSIX_SIGQUEUE_MAX not defined\n");
#endif
#ifdef _POSIX_SSIZE_MAX 
 printf("_POSIX_SSIZE_MAX=%d\n",_POSIX_SSIZE_MAX);
#else
printf("_POSIX_SSIZE_MAX not defined\n");
#endif
#ifdef _POSIX_STREAM_MAX 
 printf("_POSIX_STREAM_MAX=%d\n",_POSIX_STREAM_MAX);
#else
printf("_POSIX_STREAM_MAX not defined\n");
#endif
#ifdef _POSIX_SYMLINK_MAX 
 printf("_POSIX_SYMLINK_MAX=%d\n",_POSIX_SYMLINK_MAX);
#else
printf("_POSIX_SYMLINK_MAX not defined\n");
#endif
#ifdef _POSIX_SYMLOOP_MAX 
 printf("_POSIX_SYMLOOP_MAX=%d\n",_POSIX_SYMLOOP_MAX);
#else
printf("_POSIX_SYMLOOP_MAX not defined\n");
#endif
#ifdef _POSIX_TIMER_MAX 
 printf("_POSIX_TIMER_MAX=%d\n",_POSIX_TIMER_MAX);
#else
printf("_POSIX_TIMER_MAX not defined\n");
#endif
#ifdef _POSIX_TTY_NAME_MAX 
 printf("_POSIX_TTY_NAME_MAX=%d\n",_POSIX_TTY_NAME_MAX);
#else
printf("_POSIX_TTY_NAME_MAX not defined\n");
#endif
#ifdef _POSIX_TZNAME_MAX 
 printf("_POSIX_TZNAME_MAX=%d\n",_POSIX_TZNAME_MAX);
#else
printf("_POSIX_TZNAME_MAX not defined\n");
#endif
#ifdef _POSIX_QLIMIT 
 printf("_POSIX_QLIMIT=%d\n",_POSIX_QLIMIT);
#else
printf("_POSIX_QLIMIT not defined\n");
#endif
#ifdef _POSIX_HIWAT 
 printf("_POSIX_HIWAT=%d\n",_POSIX_HIWAT);
#else
printf("_POSIX_HIWAT not defined\n");
#endif
#ifdef _POSIX_PIPE_BUF 
 printf("_POSIX_PIPE_BUF=%d\n",_POSIX_PIPE_BUF);
#else
printf("_POSIX_PIPE_BUF not defined\n");
#endif
#ifdef _POSIX_UIO_MAXIOV 
 printf("_POSIX_UIO_MAXIOV=%d\n",_POSIX_UIO_MAXIOV);
#else
printf("_POSIX_UIO_MAXIOV not defined\n");
#endif
#ifdef _POSIX_CLOCKRES_MIN 
 printf("_POSIX_CLOCKRES_MIN=%d\n",_POSIX_CLOCKRES_MIN);
#else
printf("_POSIX_CLOCKRES_MIN not defined\n");
#endif
#ifdef _POSIX_AIO_LISTIO_MAX 
 printf("_POSIX_AIO_LISTIO_MAX=%d\n",_POSIX_AIO_LISTIO_MAX);
#else
printf("_POSIX_AIO_LISTIO_MAX not defined\n");
#endif
#ifdef _POSIX_AIO_MAX 
 printf("_POSIX_AIO_MAX=%d\n",_POSIX_AIO_MAX);
#else
printf("_POSIX_AIO_MAX not defined\n");
#endif
#ifdef _POSIX_ARG_MAX 
 printf("_POSIX_ARG_MAX=%d\n",_POSIX_ARG_MAX);
#else
printf("_POSIX_ARG_MAX not defined\n");
#endif
#ifdef _POSIX_CHILD_MAX 
 printf("_POSIX_CHILD_MAX=%d\n",_POSIX_CHILD_MAX);
#else
printf("_POSIX_CHILD_MAX not defined\n");
#endif
#ifdef _POSIX_CHILD_MAX 
 printf("_POSIX_CHILD_MAX=%d\n",_POSIX_CHILD_MAX);
#else
printf("_POSIX_CHILD_MAX not defined\n");
#endif
#ifdef _POSIX_DELAYTIMER_MAX 
 printf("_POSIX_DELAYTIMER_MAX=%d\n",_POSIX_DELAYTIMER_MAX);
#else
printf("_POSIX_DELAYTIMER_MAX not defined\n");
#endif
#ifdef _POSIX_HOST_NAME_MAX 
 printf("_POSIX_HOST_NAME_MAX=%d\n",_POSIX_HOST_NAME_MAX);
#else
printf("_POSIX_HOST_NAME_MAX not defined\n");
#endif
#ifdef _POSIX_LINK_MAX 
 printf("_POSIX_LINK_MAX=%d\n",_POSIX_LINK_MAX);
#else
printf("_POSIX_LINK_MAX not defined\n");
#endif
#ifdef _POSIX_LOGIN_NAME_MAX 
 printf("_POSIX_LOGIN_NAME_MAX=%d\n",_POSIX_LOGIN_NAME_MAX);
#else
printf("_POSIX_LOGIN_NAME_MAX not defined\n");
#endif
#ifdef _POSIX_MAX_CANON 
 printf("_POSIX_MAX_CANON=%d\n",_POSIX_MAX_CANON);
#else
printf("_POSIX_MAX_CANON not defined\n");
#endif
#ifdef _POSIX_MAX_INPUT 
 printf("_POSIX_MAX_INPUT=%d\n",_POSIX_MAX_INPUT);
#else
printf("_POSIX_MAX_INPUT not defined\n");
#endif
#ifdef _POSIX_MQ_OPEN_MAX 
 printf("_POSIX_MQ_OPEN_MAX=%d\n",_POSIX_MQ_OPEN_MAX);
#else
printf("_POSIX_MQ_OPEN_MAX not defined\n");
#endif
#ifdef _POSIX_MQ_PRIO_MAX 
 printf("_POSIX_MQ_PRIO_MAX=%d\n",_POSIX_MQ_PRIO_MAX);
#else
printf("_POSIX_MQ_PRIO_MAX not defined\n");
#endif
#ifdef _POSIX_NAME_MAX 
 printf("_POSIX_NAME_MAX=%d\n",_POSIX_NAME_MAX);
#else
printf("_POSIX_NAME_MAX not defined\n");
#endif
#ifdef _POSIX_NGROUPS_MAX 
 printf("_POSIX_NGROUPS_MAX=%d\n",_POSIX_NGROUPS_MAX);
#else
printf("_POSIX_NGROUPS_MAX not defined\n");
#endif
#ifdef _POSIX_NGROUPS_MAX 
 printf("_POSIX_NGROUPS_MAX=%d\n",_POSIX_NGROUPS_MAX);
#else
printf("_POSIX_NGROUPS_MAX not defined\n");
#endif
#ifdef _POSIX_OPEN_MAX 
 printf("_POSIX_OPEN_MAX=%d\n",_POSIX_OPEN_MAX);
#else
printf("_POSIX_OPEN_MAX not defined\n");
#endif
#ifdef _POSIX_OPEN_MAX 
 printf("_POSIX_OPEN_MAX=%d\n",_POSIX_OPEN_MAX);
#else
printf("_POSIX_OPEN_MAX not defined\n");
#endif
#ifdef _POSIX_FD_SETSIZE 
 printf("_POSIX_FD_SETSIZE=%d\n",_POSIX_FD_SETSIZE);
#else
printf("_POSIX_FD_SETSIZE not defined\n");
#endif
#ifdef _POSIX_OPEN_MAX 
 printf("_POSIX_OPEN_MAX=%d\n",_POSIX_OPEN_MAX);
#else
printf("_POSIX_OPEN_MAX not defined\n");
#endif
#ifdef _POSIX_PATH_MAX 
 printf("_POSIX_PATH_MAX=%d\n",_POSIX_PATH_MAX);
#else
printf("_POSIX_PATH_MAX not defined\n");
#endif
#ifdef _POSIX_PIPE_BUF 
 printf("_POSIX_PIPE_BUF=%d\n",_POSIX_PIPE_BUF);
#else
printf("_POSIX_PIPE_BUF not defined\n");
#endif
#ifdef _POSIX_RE_DUP_MAX 
 printf("_POSIX_RE_DUP_MAX=%d\n",_POSIX_RE_DUP_MAX);
#else
printf("_POSIX_RE_DUP_MAX not defined\n");
#endif
#ifdef _POSIX_RTSIG_MAX 
 printf("_POSIX_RTSIG_MAX=%d\n",_POSIX_RTSIG_MAX);
#else
printf("_POSIX_RTSIG_MAX not defined\n");
#endif
#ifdef _POSIX_SEM_NSEMS_MAX 
 printf("_POSIX_SEM_NSEMS_MAX=%d\n",_POSIX_SEM_NSEMS_MAX);
#else
printf("_POSIX_SEM_NSEMS_MAX not defined\n");
#endif
#ifdef _POSIX_SEM_VALUE_MAX 
 printf("_POSIX_SEM_VALUE_MAX=%d\n",_POSIX_SEM_VALUE_MAX);
#else
printf("_POSIX_SEM_VALUE_MAX not defined\n");
#endif
#ifdef _POSIX_SIGQUEUE_MAX 
 printf("_POSIX_SIGQUEUE_MAX=%d\n",_POSIX_SIGQUEUE_MAX);
#else
printf("_POSIX_SIGQUEUE_MAX not defined\n");
#endif
#ifdef _POSIX_SSIZE_MAX 
 printf("_POSIX_SSIZE_MAX=%d\n",_POSIX_SSIZE_MAX);
#else
printf("_POSIX_SSIZE_MAX not defined\n");
#endif
#ifdef _POSIX_STREAM_MAX 
 printf("_POSIX_STREAM_MAX=%d\n",_POSIX_STREAM_MAX);
#else
printf("_POSIX_STREAM_MAX not defined\n");
#endif
#ifdef _POSIX_SYMLINK_MAX 
 printf("_POSIX_SYMLINK_MAX=%d\n",_POSIX_SYMLINK_MAX);
#else
printf("_POSIX_SYMLINK_MAX not defined\n");
#endif
#ifdef _POSIX_SYMLOOP_MAX 
 printf("_POSIX_SYMLOOP_MAX=%d\n",_POSIX_SYMLOOP_MAX);
#else
printf("_POSIX_SYMLOOP_MAX not defined\n");
#endif
#ifdef _POSIX_TIMER_MAX 
 printf("_POSIX_TIMER_MAX=%d\n",_POSIX_TIMER_MAX);
#else
printf("_POSIX_TIMER_MAX not defined\n");
#endif
#ifdef _POSIX_TTY_NAME_MAX 
 printf("_POSIX_TTY_NAME_MAX=%d\n",_POSIX_TTY_NAME_MAX);
#else
printf("_POSIX_TTY_NAME_MAX not defined\n");
#endif
#ifdef _POSIX_TZNAME_MAX 
 printf("_POSIX_TZNAME_MAX=%d\n",_POSIX_TZNAME_MAX);
#else
printf("_POSIX_TZNAME_MAX not defined\n");
#endif
#ifdef _POSIX_QLIMIT 
 printf("_POSIX_QLIMIT=%d\n",_POSIX_QLIMIT);
#else
printf("_POSIX_QLIMIT not defined\n");
#endif
#ifdef _POSIX_HIWAT 
 printf("_POSIX_HIWAT=%d\n",_POSIX_HIWAT);
#else
printf("_POSIX_HIWAT not defined\n");
#endif
#ifdef _POSIX_PIPE_BUF 
 printf("_POSIX_PIPE_BUF=%d\n",_POSIX_PIPE_BUF);
#else
printf("_POSIX_PIPE_BUF not defined\n");
#endif
#ifdef _POSIX_UIO_MAXIOV 
 printf("_POSIX_UIO_MAXIOV=%d\n",_POSIX_UIO_MAXIOV);
#else
printf("_POSIX_UIO_MAXIOV not defined\n");
#endif
#ifdef _POSIX_CLOCKRES_MIN 
 printf("_POSIX_CLOCKRES_MIN=%d\n",_POSIX_CLOCKRES_MIN);
#else
printf("_POSIX_CLOCKRES_MIN not defined\n");
#endif
return 0;
}