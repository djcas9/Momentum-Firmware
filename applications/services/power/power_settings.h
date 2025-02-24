#include <toolbox/saved_struct.h>
#include <storage/storage.h>

#define POWER_SETTINGS_VER (1)

#define POWER_SETTINGS_PATH CFG_PATH("power.settings")
#define POWER_SETTINGS_MAGIC (0x21)

#ifdef __cplusplus
extern "C" {
#endif

bool SAVE_POWER_SETTINGS(uint32_t* x);

bool LOAD_POWER_SETTINGS(uint32_t* x);

#ifdef __cplusplus
}
#endif
