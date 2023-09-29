
/*
 * This file generated by D:/nRF/nsc/v2.4.0/zephyr/scripts/build/gen_strerror_table.py
 */

#include <errno.h>
#include <stdint.h>
#include <string.h>

#include <zephyr/sys/util.h>

#define sys_nerr 141
static const char *const sys_errlist[sys_nerr] = {
[0] = "Success",
[EPERM] = "Not owner",
[ENOENT] = "No such file or directory",
[ESRCH] = "No such context",
[EINTR] = "Interrupted system call",
[EIO] = "I/O error",
[ENXIO] = "No such device or address",
[ENOEXEC] = "Exec format error",
[EBADF] = "Bad file number",
[ECHILD] = "No children",
[EAGAIN] = "No more contexts",
[ENOMEM] = "Not enough core",
[EACCES] = "Permission denied",
[EFAULT] = "Bad address",
[ENOTBLK] = "Block device required",
[EBUSY] = "Mount device busy",
[EEXIST] = "File exists",
[EXDEV] = "Cross-device link",
[ENODEV] = "No such device",
[ENOTDIR] = "Not a directory",
[EISDIR] = "Is a directory",
[EINVAL] = "Invalid argument",
[ENFILE] = "File table overflow",
[EMFILE] = "Too many open files",
[ENOTTY] = "Not a typewriter",
[ETXTBSY] = "Text file busy",
[EFBIG] = "File too large",
[ENOSPC] = "No space left on device",
[ESPIPE] = "Illegal seek",
[EROFS] = "Read-only file system",
[EMLINK] = "Too many links",
[EPIPE] = "Broken pipe",
[EDOM] = "Argument too large",
[ERANGE] = "Result too large",
[ENOMSG] = "Unexpected message type",
[EDEADLK] = "Resource deadlock avoided",
[ENOLCK] = "No locks available",
[ENOSTR] = "STREAMS device required",
[ENODATA] = "Missing expected message data",
[ETIME] = "STREAMS timeout occurred",
[ENOSR] = "Insufficient memory",
[EPROTO] = "Generic STREAMS error",
[EBADMSG] = "Invalid STREAMS message",
[ENOSYS] = "Function not implemented",
[ENOTEMPTY] = "Directory not empty",
[ENAMETOOLONG] = "File name too long",
[ELOOP] = "Too many levels of symbolic links",
[EOPNOTSUPP] = "Operation not supported on socket",
[EPFNOSUPPORT] = "Protocol family not supported",
[ECONNRESET] = "Connection reset by peer",
[ENOBUFS] = "No buffer space available",
[EAFNOSUPPORT] = "Addr family not supported",
[EPROTOTYPE] = "Protocol wrong type for socket",
[ENOTSOCK] = "Socket operation on non-socket",
[ENOPROTOOPT] = "Protocol not available",
[ESHUTDOWN] = "Can't send after socket shutdown",
[ECONNREFUSED] = "Connection refused",
[EADDRINUSE] = "Address already in use",
[ECONNABORTED] = "Software caused connection abort",
[ENETUNREACH] = "Network is unreachable",
[ENETDOWN] = "Network is down",
[ETIMEDOUT] = "Connection timed out",
[EHOSTDOWN] = "Host is down",
[EHOSTUNREACH] = "No route to host",
[EINPROGRESS] = "Operation now in progress",
[EALREADY] = "Operation already in progress",
[EDESTADDRREQ] = "Destination address required",
[EMSGSIZE] = "Message size",
[EPROTONOSUPPORT] = "Protocol not supported",
[ESOCKTNOSUPPORT] = "Socket type not supported",
[EADDRNOTAVAIL] = "Can't assign requested address",
[ENETRESET] = "Network dropped connection on reset",
[EISCONN] = "Socket is already connected",
[ENOTCONN] = "Socket is not connected",
[ETOOMANYREFS] = "Too many references: can't splice",
[ENOTSUP] = "Unsupported value",
[EILSEQ] = "Illegal byte sequence",
[EOVERFLOW] = "Value overflow",
[ECANCELED] = "Operation canceled",
};
static const uint8_t sys_errlen[sys_nerr] = {
[0] = 8,
[EPERM] = 10,
[ENOENT] = 26,
[ESRCH] = 16,
[EINTR] = 24,
[EIO] = 10,
[ENXIO] = 26,
[ENOEXEC] = 18,
[EBADF] = 16,
[ECHILD] = 12,
[EAGAIN] = 17,
[ENOMEM] = 16,
[EACCES] = 18,
[EFAULT] = 12,
[ENOTBLK] = 22,
[EBUSY] = 18,
[EEXIST] = 12,
[EXDEV] = 18,
[ENODEV] = 15,
[ENOTDIR] = 16,
[EISDIR] = 15,
[EINVAL] = 17,
[ENFILE] = 20,
[EMFILE] = 20,
[ENOTTY] = 17,
[ETXTBSY] = 15,
[EFBIG] = 15,
[ENOSPC] = 24,
[ESPIPE] = 13,
[EROFS] = 22,
[EMLINK] = 15,
[EPIPE] = 12,
[EDOM] = 19,
[ERANGE] = 17,
[ENOMSG] = 24,
[EDEADLK] = 26,
[ENOLCK] = 19,
[ENOSTR] = 24,
[ENODATA] = 30,
[ETIME] = 25,
[ENOSR] = 20,
[EPROTO] = 22,
[EBADMSG] = 24,
[ENOSYS] = 25,
[ENOTEMPTY] = 20,
[ENAMETOOLONG] = 19,
[ELOOP] = 34,
[EOPNOTSUPP] = 34,
[EPFNOSUPPORT] = 30,
[ECONNRESET] = 25,
[ENOBUFS] = 26,
[EAFNOSUPPORT] = 26,
[EPROTOTYPE] = 31,
[ENOTSOCK] = 31,
[ENOPROTOOPT] = 23,
[ESHUTDOWN] = 33,
[ECONNREFUSED] = 19,
[EADDRINUSE] = 23,
[ECONNABORTED] = 33,
[ENETUNREACH] = 23,
[ENETDOWN] = 16,
[ETIMEDOUT] = 21,
[EHOSTDOWN] = 13,
[EHOSTUNREACH] = 17,
[EINPROGRESS] = 26,
[EALREADY] = 30,
[EDESTADDRREQ] = 29,
[EMSGSIZE] = 13,
[EPROTONOSUPPORT] = 23,
[ESOCKTNOSUPPORT] = 26,
[EADDRNOTAVAIL] = 31,
[ENETRESET] = 36,
[EISCONN] = 28,
[ENOTCONN] = 24,
[ETOOMANYREFS] = 34,
[ENOTSUP] = 18,
[EILSEQ] = 22,
[EOVERFLOW] = 15,
[ECANCELED] = 19,
};
