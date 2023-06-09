//
// COMPONENT_FRAME_CLASS.hpp
//
// Created: COMPONENT_FRAME_DATE
//  Author:
//

// Override debug level.
// https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/log.html#_CPPv417esp_log_level_setPKc15esp_log_level_t
#define LOG_LOCAL_LEVEL ((esp_log_level_t)CONFIG_COMPONENT_FRAME_UPPER_DEBUG_LEVEL)
#include <esp_log.h>

#include "COMPONENT_FRAME.hpp"
#include "COMPONENT_FRAME_CLASS.hpp"

namespace COMPONENT_FRAME_NAMESPACE {

void COMPONENT_FRAME_CLASS::initialize()
{
	esp_log_level_set(COMPONENT_FRAME_NAMESPACE::debugTag(), (esp_log_level_t)CONFIG_COMPONENT_FRAME_UPPER_DEBUG_LEVEL);
	ESP_LOGD(COMPONENT_FRAME_NAMESPACE::debugTag(), "Debug log test");
	ESP_LOGV(COMPONENT_FRAME_NAMESPACE::debugTag(), "Verbose log test");
}

}  // namespace COMPONENT_FRAME_NAMESPACE
