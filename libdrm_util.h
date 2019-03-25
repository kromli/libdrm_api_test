#ifndef ARRAY_SIZE
#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#endif

const char *util_lookup_connector_status_name(unsigned int type);
const char *util_lookup_connector_type_name(unsigned int type);
