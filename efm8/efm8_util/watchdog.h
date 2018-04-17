// Copyright 2018 jem@seethis.link
// Licensed under the MIT license (http://opensource.org/licenses/MIT)

#include "efm8_sfr.h"

// Disable the watchdog timer
static inline
void disable_watchdog(void) {
    PCA0MD &= ~PCA0MD_WDTE__BMASK;
}
