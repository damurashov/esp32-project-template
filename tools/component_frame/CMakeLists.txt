file(GLOB SOURCE_FILES
		"COMPONENT_FRAME/*.c"
		"COMPONENT_FRAME/*.cpp"
		)

idf_component_register(
	SRCS ${SOURCE_FILES}
	INCLUDE_DIRS .
	PRIV_REQUIRES
		esp_common
)
