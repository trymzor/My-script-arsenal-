local Rayfield = loadstring(game:HttpGet('https://sirius.menu/rayfield'))()

local Window = Rayfield:CreateWindow({
    Name = "Sxlar.cc",
    LoadingTitle = "Sxlar.cc V2",
    LoadingSubtitle = "by Sxlar",
    Theme = "Amethyst", -- Check https://docs.sirius.menu/rayfield/configuration/themes
 
    DisableRayfieldPrompts = false,
    DisableBuildWarnings = false, -- Prevents Rayfield from warning when the script has a version mismatch with the interface
 
    ConfigurationSaving = {
       Enabled = true,
       FolderName = nil, -- Create a custom folder for your hub/game
       FileName = "Big Hub"
    },
 
    Discord = {
       Enabled = false, -- Prompt the user to join your Discord server if their executor supports it
       Invite = "noinvitelink", -- The Discord invite code, do not include discord.gg/. E.g. discord.gg/ABCD would be ABCD
       RememberJoins = true -- Set this to false to make them join the discord every time they load it up
    },
 
    KeySystem = false, -- Set this to true to use our key system
    KeySettings = {
       Title = "Untitled",
       Subtitle = "Key System",
       Note = "No method of obtaining the key is provided", -- Use this to tell the user how to get a key
       FileName = "Key", -- It is recommended to use something unique as other scripts using Rayfield may overwrite your key file
       SaveKey = true, -- The user's key will be saved, but if you change the key, they will be unable to use your script
       GrabKeyFromSite = false, -- If this is true, set Key below to the RAW site you would like Rayfield to get the key from
       Key = {"Hello"} -- List of keys that will be accepted by the system, can be RAW file links (pastebin, github etc) or simple strings ("hello","key22")
    }
 })

 local MainTab = Window:CreateTab("Aim", nil) -- Title, Image
 local MainSection = MainTab:CreateSection("Main")

 Rayfield:Notify({
    Title = "Sxlar.cc injected!",
    Content = "very good gui",
    Duration = 4,
    Image = nil,
    Actions = { -- Notification Buttons
 
       Ignore = { -- Duplicate this table (or remove it) to add and remove buttons to the notification.
          Name = "Aight broski!",
          Callback = function()
             print("The user tapped Okay!")
          end
       },
 
 },
 })

 local Button = MainTab:CreateButton({
    Name = "Aimbot",
    Callback = function()
        loadstring(game:HttpGet("https://raw.githubusercontent.com/trymzor/Arsenal-lua-aimbot/refs/heads/main/aimbot", true))()
    end,
 })

 local VisualTab = Window:CreateTab("Esp", nil) -- Title, Image
 local Section = VisualTab:CreateSection("Esp")

 local Button = VisualTab:CreateButton({
    Name = "Skeleton esp",
    Callback = function()
        loadstring(game:HttpGet("https://raw.githubusercontent.com/trymzor/skeleton-esp-lua-not-mine-/refs/heads/main/skeleton%20esp", true))()
    end,
 })

 local Button = VisualTab:CreateButton({
    Name = "Box esp",
    Callback = function()
        loadstring(game:HttpGet("https://raw.githubusercontent.com/Blissful4992/ESPs/refs/heads/main/Corner%202D%20Box%20ESP.lua", true))()
    end,
 })




