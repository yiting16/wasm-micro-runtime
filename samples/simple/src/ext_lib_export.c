#include "lib_export.h"
#include "sensor_api.h"
#include "connection_api.h"

static NativeSymbol extended_native_symbol_defs[] = {
#include "runtime_sensor.inl"
#include "connection.inl"
        };

#include "ext_lib_export.h"
