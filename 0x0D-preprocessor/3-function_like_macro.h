#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) x
#if (x < 0)
printf("%d\n", -x);
#endif /* x < 0 */
#else
printf("%d\n", x);

#endif
