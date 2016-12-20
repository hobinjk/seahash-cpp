#include <stdint.h>
#include <stdio.h>
#include <sys/types.h>

#ifndef SEAHASH_H_
#define SEAHASH_H_

namespace seahash {
  uint64_t hash(uint8_t* buf, size_t size);
}

#endif // SEAHASH_H_
