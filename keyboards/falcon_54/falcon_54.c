
#include "falcon_54.h"


#ifdef POINTING_DEVICE_ENABLE
void pointing_device_init_kb(void) {
    pmw33xx_init(0);       
    pmw33xx_set_cpi(0, 800); 
    pointing_device_init_user();
}
#endif //POINTING_DEVICE_ENABLE