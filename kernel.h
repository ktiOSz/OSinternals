Building and Debugging Kernels:

OPTIONS/mach_foo    optional mach_foo
osfmk/foo/foo_main.c            optional mach_foo
osfmk/foo/foo_bar.c             optional mach_foo
osfmk/crud/mandatory_file.c     standard
options MACH_FOO
pseudo-device   mach_foo
pseudo-device   ppp 2
#include <mach_foo.h>
#if (MACH_FOO > 0)
#endif /* MACH_FOO */


