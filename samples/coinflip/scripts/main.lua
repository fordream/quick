
function __G__TRACKBACK__(errorMessage)
    print("----------------------------------------")
    print("LUA ERROR: " .. tostring(errorMessage) .. "\n")
    print(debug.traceback("", 2))
    print("----------------------------------------")
end
    CCFileUtils:sharedFileUtils():addSearchPath("res/")
CCDirector:sharedDirector():setDisplayStats(true)
require("app.MyApp").new():run()
