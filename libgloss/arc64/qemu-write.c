/*
 * qemu-write.c -- write interface for default qemu simulator
 *
 *
 * The authors hereby grant permission to use, copy, modify,
 * distribute, and license this software and its documentation for any
 * purpose, provided that existing copyright notices are retained in
 * all copies and that this notice is included verbatim in any
 * distributions. No written agreement, license, or royalty fee is
 * required for any of the authorized uses.  Modifications to this
 * software may be copyrighted by their authors and need not follow
 * the licensing terms described here, provided that the new terms are
 * clearly indicated on the first page of each file where they apply.
 */

int _write (int fd, char *buf, int len)
{
  int i = 0;
  while (i < len)
    *(char *)0x90000000 = buf[i++];
  return len;
}
