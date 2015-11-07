
local function doCmd(...)
    local cmd = string.format(...)
    print('run', cmd)
    os.execute(cmd)
end


local target_platform = string.lower(arg[1])

local build_dir = 'build'

if target_platform then
    build_dir = 'build-' .. target_platform
end

doCmd('cmake -E make_directory %s', build_dir)

local cmake_arg = ''

if target_platform == 'android' then
---DANDROID_ABI=armeabi
    cmake_arg = '-G"Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=cmake/android.toolchain.cmake '
elseif target_platform == 'vs2013' then
    cmake_arg = '-G"Visual Studio 12 2013"'
end

local cwd = io.popen('echo %cd%'):read "*a"

doCmd('cmake -E chdir %s cmake %s %s',  build_dir, cmake_arg, cwd)
--

