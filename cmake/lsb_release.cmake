


macro(CODENAME RESULT)
    find_program(LSB_RELEASE_CMD lsb_release)
    mark_as_advanced(LSB_RELEASE_CMD)
    if (LSB_RELEASE_CMD)
        execute_process(COMMAND "${LSB_RELEASE_CMD}" --codename --short
            OUTPUT_VARIABLE ${RESULT}
            OUTPUT_STRIP_TRAILING_WHITESPACE)
    else()
        message(SEND_ERROR "Unable to detect lsb_release")
        set(${RESULT} UNKNOWN)
    endif ()
endmacro()


macro(ID RESULT)
    find_program(LSB_RELEASE_CMD lsb_release)
    mark_as_advanced(LSB_RELEASE_CMD)
    if (LSB_RELEASE_CMD)
        execute_process(COMMAND "${LSB_RELEASE_CMD}" --id --short
            OUTPUT_VARIABLE ${RESULT}
            OUTPUT_STRIP_TRAILING_WHITESPACE)
    else()
        message(SEND_ERROR "Unable to detect lsb_release")
        set(${RESULT} UNKNOWN)
    endif ()
endmacro()


