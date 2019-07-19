/*
	common.h
*/

#ifndef COMMON_H
#define COMMON_H

/* $Id: common.h,v 7.1 2000/05/03 04:41:24 sgifford Exp $ */

#define max(x,y)	((x) > (y) ? (x) : (y))
#define strncopy(x,y)	strncpy (x, y, sizeof(x))

void errorf (const char *fmt, ...)  __attribute__ ((noreturn));
int fdprintf (int fd, const char *fmt, ...);
char *leafname (char *path);
void stty_initstore (void);
int  stty_raw (int fd);
void stty_orig (void);

#endif /* COMMON_H */
