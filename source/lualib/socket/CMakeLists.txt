
set(files
    auxiliar.c
    except.c
    inet.c
    luasocket.c
    luasocket_buffer.c
    luasocket_io.c
    mime.c
    options.c
    select.c
    socket_scripts.c
    tcp.c
    timeout.c
    udp.c
)

if (WIN32)
    list(APPEND files
            wsocket.c
    )

else()
    list(APPEND files
            unix.c
            usocket.c
            serial.c
    )
endif()


lua_lib(luasocket ${files})