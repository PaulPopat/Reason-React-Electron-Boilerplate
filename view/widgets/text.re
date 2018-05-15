module Style = {
  type icon =
    | Home
    | Home2
    | Home3
    | Office
    | Newspaper
    | Pencil
    | Pencil2
    | Quill
    | Pen
    | Blog
    | Eyedropper
    | Droplet
    | PaintFormat
    | Image
    | Images
    | Camera
    | Headphones
    | Music
    | Play
    | Film
    | VideoCamera
    | Dice
    | Pacman
    | Spades
    | Clubs
    | Diamonds
    | Bullhorn
    | Connection
    | Podcast
    | Feed
    | Mic
    | Book
    | Books
    | Library
    | FileText
    | Profile
    | FileEmpty
    | FilesEmpty
    | FileText2
    | FilePicture
    | FileMusic
    | FilePlay
    | FileVideo
    | FileZip
    | Copy
    | Paste
    | Stack
    | Folder
    | FolderOpen
    | FolderPlus
    | FolderMinus
    | FolderDownload
    | FolderUpload
    | PriceTag
    | PriceTags
    | Barcode
    | Qrcode
    | Ticket
    | Cart
    | CoinDollar
    | CoinEuro
    | CoinPound
    | CoinYen
    | CreditCard
    | Calculator
    | Lifebuoy
    | Phone
    | PhoneHangUp
    | AddressBook
    | Envelop
    | Pushpin
    | Location
    | Location2
    | Compass
    | Compass2
    | Map
    | Map2
    | History
    | Clock
    | Clock2
    | Alarm
    | Bell
    | Stopwatch
    | Calendar
    | Printer
    | Keyboard
    | Display
    | Laptop
    | Mobile
    | Mobile2
    | Tablet
    | Tv
    | Drawer
    | Drawer2
    | BoxAdd
    | BoxRemove
    | Download
    | Upload
    | FloppyDisk
    | Drive
    | Database
    | Undo
    | Redo
    | Undo2
    | Redo2
    | Forward
    | Reply
    | Bubble
    | Bubbles
    | Bubbles2
    | Bubble2
    | Bubbles3
    | Bubbles4
    | User
    | Users
    | UserPlus
    | UserMinus
    | UserCheck
    | UserTie
    | QuotesLeft
    | QuotesRight
    | HourGlass
    | Spinner
    | Spinner2
    | Spinner3
    | Spinner4
    | Spinner5
    | Spinner6
    | Spinner7
    | Spinner8
    | Spinner9
    | Spinner10
    | Spinner11
    | Binoculars
    | Search
    | ZoomIn
    | ZoomOut
    | Enlarge
    | Shrink
    | Enlarge2
    | Shrink2
    | Key
    | Key2
    | Lock
    | Unlocked
    | Wrench
    | Equalizer
    | Equalizer2
    | Cog
    | Cogs
    | Hammer
    | MagicWand
    | AidKit
    | Bug
    | PieChart
    | StatsDots
    | StatsBars
    | StatsBars2
    | Trophy
    | Gift
    | Glass
    | Glass2
    | Mug
    | SpoonKnife
    | Leaf
    | Rocket
    | Meter
    | Meter2
    | Hammer2
    | Fire
    | Lab
    | Magnet
    | Bin
    | Bin2
    | Briefcase
    | Airplane
    | Truck
    | Road
    | Accessibility
    | Target
    | Shield
    | Power
    | Switch
    | PowerCord
    | Clipboard
    | ListNumbered
    | List
    | List2
    | Tree
    | Menu
    | Menu2
    | Menu3
    | Menu4
    | Cloud
    | CloudDownload
    | CloudUpload
    | CloudCheck
    | Download2
    | Upload2
    | Download3
    | Upload3
    | Sphere
    | Earth
    | Link
    | Flag
    | Attachment
    | Eye
    | EyePlus
    | EyeMinus
    | EyeBlocked
    | Bookmark
    | Bookmarks
    | Sun
    | Contrast
    | BrightnessContrast
    | StarEmpty
    | StarHalf
    | StarFull
    | Heart
    | HeartBroken
    | Man
    | Woman
    | ManWoman
    | Happy
    | Happy2
    | Smile
    | Smile2
    | Tongue
    | Tongue2
    | Sad
    | Sad2
    | Wink
    | Wink2
    | Grin
    | Grin2
    | Cool
    | Cool2
    | Angry
    | Angry2
    | Evil
    | Evil2
    | Shocked
    | Shocked2
    | Baffled
    | Baffled2
    | Confused
    | Confused2
    | Neutral
    | Neutral2
    | Hipster
    | Hipster2
    | Wondering
    | Wondering2
    | Sleepy
    | Sleepy2
    | Frustrated
    | Frustrated2
    | Crying
    | Crying2
    | PointUp
    | PointRight
    | PointDown
    | PointLeft
    | Warning
    | Notification
    | Question
    | Plus
    | Minus
    | Info
    | CancelCircle
    | Blocked
    | Cross
    | Checkmark
    | Checkmark2
    | SpellCheck
    | Enter
    | Exit
    | Play2
    | Pause
    | Stop
    | Previous
    | Next
    | Backward
    | Forward2
    | Play3
    | Pause2
    | Stop2
    | Backward2
    | Forward3
    | First
    | Last
    | Previous2
    | Next2
    | Eject
    | VolumeHigh
    | VolumeMedium
    | VolumeLow
    | VolumeMute
    | VolumeMute2
    | VolumeIncrease
    | VolumeDecrease
    | Loop
    | Loop2
    | Infinite
    | Shuffle
    | ArrowUpLeft
    | ArrowUp
    | ArrowUpRight
    | ArrowRight
    | ArrowDownRight
    | ArrowDown
    | ArrowDownLeft
    | ArrowLeft
    | ArrowUpLeft2
    | ArrowUp2
    | ArrowUpRight2
    | ArrowRight2
    | ArrowDownRight2
    | ArrowDown2
    | ArrowDownLeft2
    | ArrowLeft2
    | CircleUp
    | CircleRight
    | CircleDown
    | CircleLeft
    | Tab
    | MoveUp
    | MoveDown
    | SortAlphaAsc
    | SortAlphaDesc
    | SortNumericAsc
    | SortNumbericDesc
    | SortAmountAsc
    | SortAmountDesc
    | Command
    | Shift
    | Ctrl
    | Opt
    | CheckboxChecked
    | CheckboxUnchecked
    | RadioChecked
    | RadioChecked2
    | RadioUnchecked
    | Crop
    | MakeGroup
    | Ungroup
    | Scissors
    | Filter
    | Font
    | Ligature
    | Ligature2
    | TextHeight
    | TextWidth
    | FontSize
    | Bold
    | Underline
    | Italic
    | Strikethrough
    | Omega
    | Sigma
    | PageBreak
    | Superscript
    | Subscript
    | Superscript2
    | Subscript2
    | TextColor
    | Pagebreak
    | ClearFormatting
    | Table
    | Table2
    | InsertTemplate
    | Pilcrow
    | Ltr
    | Rtl
    | Section
    | ParagraphLeft
    | ParagraphCenter
    | ParagraphRight
    | ParagraphJustify
    | IndentIncrease
    | IndentDecrease
    | Share
    | NewTab
    | Embed
    | Embed2
    | Terminal
    | Share2
    | Mail
    | Mail2
    | Mail3
    | Mail4
    | Amazon
    | Google
    | Google2
    | Google3
    | GooglePlus
    | GooglePlus2
    | GooglePlus3
    | Hangouts
    | GoogleDrive
    | Facebook
    | Facebook2
    | Instagram
    | Whatsapp
    | Spotify
    | Telegram
    | Twitter
    | Vine
    | Vk
    | Renren
    | SinaWeibo
    | Rss
    | Rss2
    | Youtube
    | Youtube2
    | Twitch
    | Vimeo
    | Vimeo2
    | Lanyrd
    | Flickr
    | Flickr2
    | Flickr3
    | Flickr4
    | Dribbble
    | Behance
    | Behance2
    | Deviantart
    | Steam
    | Steam2
    | Dropbox
    | Onedrive
    | Github
    | Npm
    | Basecamp
    | Trello
    | Wordpress
    | Joomla
    | Ello
    | Blogger
    | Blogger2
    | Tumblr
    | Tumblr2
    | Yahoo
    | Yahoo2
    | Tux
    | Appleinc
    | Finder
    | Android
    | Windows
    | Windows8
    | Soundcloud
    | Soundcloud2
    | Skype
    | Reddit
    | Hackernews
    | Wikipedia
    | Linkedin
    | Linkedin2
    | Lastfm
    | Lastfm2
    | Delicious
    | Stumbleupon
    | Stumbleupon2
    | Stackoverflow
    | Pinterest
    | Pinterest2
    | Xing
    | Xing2
    | Flattr
    | Foursquare
    | Yelp
    | Paypal
    | Chrome
    | Firefox
    | IE
    | Edge
    | Safari
    | Opera
    | FilePdf
    | FileOpenoffice
    | FileWord
    | FileExcel
    | Libreoffice
    | HtmlFive
    | HtmlFive2
    | Css3
    | Git
    | Codepen
    | Svg
    | IcoMoon;
  let makeIcons = (icon: icon) =>
    "icon-"
    ++ (
      switch icon {
      | Home => "home"
      | Home2 => "home2"
      | Home3 => "home3"
      | Office => "office"
      | Newspaper => "newspaper"
      | Pencil => "pencil"
      | Pencil2 => "pencil2"
      | Quill => "quill"
      | Pen => "pen"
      | Blog => "blog"
      | Eyedropper => "eyedropper"
      | Droplet => "droplet"
      | PaintFormat => "paint-format"
      | Image => "image"
      | Images => "images"
      | Camera => "camera"
      | Headphones => "headphones"
      | Music => "music"
      | Play => "play"
      | Film => "film"
      | VideoCamera => "video-camera"
      | Dice => "dice"
      | Pacman => "pacman"
      | Spades => "spades"
      | Clubs => "clubs"
      | Diamonds => "diamonds"
      | Bullhorn => "bullhorn"
      | Connection => "connection"
      | Podcast => "podcast"
      | Feed => "feed"
      | Mic => "mic"
      | Book => "book"
      | Books => "books"
      | Library => "library"
      | FileText => "file-text"
      | Profile => "profile"
      | FileEmpty => "file-empty"
      | FilesEmpty => "files-empty"
      | FileText2 => "file-text2"
      | FilePicture => "file-picture"
      | FileMusic => "file-music"
      | FilePlay => "file-play"
      | FileVideo => "file-video"
      | FileZip => "file-zip"
      | Copy => "copy"
      | Paste => "paste"
      | Stack => "stack"
      | Folder => "folder"
      | FolderOpen => "folder-open"
      | FolderPlus => "folder-plus"
      | FolderMinus => "folder-minus"
      | FolderDownload => "folder-download"
      | FolderUpload => "folder-upload"
      | PriceTag => "price-tag"
      | PriceTags => "price-tags"
      | Barcode => "barcode"
      | Qrcode => "qrcode"
      | Ticket => "ticket"
      | Cart => "cart"
      | CoinDollar => "coin-dollar"
      | CoinEuro => "coin-euro"
      | CoinPound => "coin-pound"
      | CoinYen => "coin-yen"
      | CreditCard => "credit-card"
      | Calculator => "calculator"
      | Lifebuoy => "lifebuoy"
      | Phone => "phone"
      | PhoneHangUp => "phone-hang-up"
      | AddressBook => "address-book"
      | Envelop => "envelop"
      | Pushpin => "pushpin"
      | Location => "location"
      | Location2 => "location2"
      | Compass => "compass"
      | Compass2 => "compass2"
      | Map => "map"
      | Map2 => "map2"
      | History => "history"
      | Clock => "clock"
      | Clock2 => "clock2"
      | Alarm => "alarm"
      | Bell => "bell"
      | Stopwatch => "stopwatch"
      | Calendar => "calendar"
      | Printer => "printer"
      | Keyboard => "keyboard"
      | Display => "display"
      | Laptop => "laptop"
      | Mobile => "mobile"
      | Mobile2 => "mobile2"
      | Tablet => "tablet"
      | Tv => "tv"
      | Drawer => "drawer"
      | Drawer2 => "drawer2"
      | BoxAdd => "box-add"
      | BoxRemove => "box-remove"
      | Download => "download"
      | Upload => "upload"
      | FloppyDisk => "floppy-disk"
      | Drive => "drive"
      | Database => "database"
      | Undo => "undo"
      | Redo => "redo"
      | Undo2 => "undo2"
      | Redo2 => "redo2"
      | Forward => "forward"
      | Reply => "reply"
      | Bubble => "bubble"
      | Bubbles => "bubbles"
      | Bubbles2 => "bubbles2"
      | Bubble2 => "bubble2"
      | Bubbles3 => "bubbles3"
      | Bubbles4 => "bubbles4"
      | User => "user"
      | Users => "users"
      | UserPlus => "user-plus"
      | UserMinus => "user-minus"
      | UserCheck => "user-check"
      | UserTie => "user-tie"
      | QuotesLeft => "quotes-left"
      | QuotesRight => "quotes-right"
      | HourGlass => "hour-glass"
      | Spinner => "spinner"
      | Spinner2 => "spinner2"
      | Spinner3 => "spinner3"
      | Spinner4 => "spinner4"
      | Spinner5 => "spinner5"
      | Spinner6 => "spinner6"
      | Spinner7 => "spinner7"
      | Spinner8 => "spinner8"
      | Spinner9 => "spinner9"
      | Spinner10 => "spinner10"
      | Spinner11 => "spinner11"
      | Binoculars => "binoculars"
      | Search => "search"
      | ZoomIn => "zoom-in"
      | ZoomOut => "zoom-out"
      | Enlarge => "enlarge"
      | Shrink => "shrink"
      | Enlarge2 => "enlarge2"
      | Shrink2 => "shrink2"
      | Key => "key"
      | Key2 => "key2"
      | Lock => "lock"
      | Unlocked => "unlocked"
      | Wrench => "wrench"
      | Equalizer => "equalizer"
      | Equalizer2 => "equalizer2"
      | Cog => "cog"
      | Cogs => "cogs"
      | Hammer => "hammer"
      | MagicWand => "magic-wand"
      | AidKit => "aid-kit"
      | Bug => "bug"
      | PieChart => "pie-chart"
      | StatsDots => "stats-dots"
      | StatsBars => "stats-bars"
      | StatsBars2 => "stats-bars2"
      | Trophy => "trophy"
      | Gift => "gift"
      | Glass => "glass"
      | Glass2 => "glass2"
      | Mug => "mug"
      | SpoonKnife => "spoon-knife"
      | Leaf => "leaf"
      | Rocket => "rocket"
      | Meter => "meter"
      | Meter2 => "meter2"
      | Hammer2 => "hammer2"
      | Fire => "fire"
      | Lab => "lab"
      | Magnet => "magnet"
      | Bin => "bin"
      | Bin2 => "bin2"
      | Briefcase => "briefcase"
      | Airplane => "airplane"
      | Truck => "truck"
      | Road => "road"
      | Accessibility => "accessibility"
      | Target => "target"
      | Shield => "shield"
      | Power => "power"
      | Switch => "switch"
      | PowerCord => "power-cord"
      | Clipboard => "clipboard"
      | ListNumbered => "list-numbered"
      | List => "list"
      | List2 => "list2"
      | Tree => "tree"
      | Menu => "menu"
      | Menu2 => "menu2"
      | Menu3 => "menu3"
      | Menu4 => "menu4"
      | Cloud => "cloud"
      | CloudDownload => "cloud-download"
      | CloudUpload => "cloud-upload"
      | CloudCheck => "cloud-check"
      | Download2 => "download2"
      | Upload2 => "upload2"
      | Download3 => "download3"
      | Upload3 => "upload3"
      | Sphere => "sphere"
      | Earth => "earth"
      | Link => "link"
      | Flag => "flag"
      | Attachment => "attachment"
      | Eye => "eye"
      | EyePlus => "eye-plus"
      | EyeMinus => "eye-minus"
      | EyeBlocked => "eye-blocked"
      | Bookmark => "bookmark"
      | Bookmarks => "bookmarks"
      | Sun => "sun"
      | Contrast => "contrast"
      | BrightnessContrast => "brightness-contrast"
      | StarEmpty => "star-empty"
      | StarHalf => "star-half"
      | StarFull => "star-full"
      | Heart => "heart"
      | HeartBroken => "heart-broken"
      | Man => "man"
      | Woman => "woman"
      | ManWoman => "man-woman"
      | Happy => "happy"
      | Happy2 => "happy2"
      | Smile => "smile"
      | Smile2 => "smile2"
      | Tongue => "tongue"
      | Tongue2 => "tongue2"
      | Sad => "sad"
      | Sad2 => "sad2"
      | Wink => "wink"
      | Wink2 => "wink2"
      | Grin => "grin"
      | Grin2 => "grin2"
      | Cool => "cool"
      | Cool2 => "cool2"
      | Angry => "angry"
      | Angry2 => "angry2"
      | Evil => "evil"
      | Evil2 => "evil2"
      | Shocked => "shocked"
      | Shocked2 => "shocked2"
      | Baffled => "baffled"
      | Baffled2 => "baffled2"
      | Confused => "confused"
      | Confused2 => "confused2"
      | Neutral => "neutral"
      | Neutral2 => "neutral2"
      | Hipster => "hipster"
      | Hipster2 => "hipster2"
      | Wondering => "wondering"
      | Wondering2 => "wondering2"
      | Sleepy => "sleepy"
      | Sleepy2 => "sleepy2"
      | Frustrated => "frustrated"
      | Frustrated2 => "frustrated2"
      | Crying => "crying"
      | Crying2 => "crying2"
      | PointUp => "point-up"
      | PointRight => "point-right"
      | PointDown => "point-down"
      | PointLeft => "point-left"
      | Warning => "warning"
      | Notification => "notification"
      | Question => "question"
      | Plus => "plus"
      | Minus => "minus"
      | Info => "info"
      | CancelCircle => "cancel-circle"
      | Blocked => "blocked"
      | Cross => "cross"
      | Checkmark => "checkmark"
      | Checkmark2 => "checkmark2"
      | SpellCheck => "spell-check"
      | Enter => "enter"
      | Exit => "exit"
      | Play2 => "play2"
      | Pause => "pause"
      | Stop => "stop"
      | Previous => "previous"
      | Next => "next"
      | Backward => "backward"
      | Forward2 => "forward2"
      | Play3 => "play3"
      | Pause2 => "pause2"
      | Stop2 => "stop2"
      | Backward2 => "backward2"
      | Forward3 => "forward3"
      | First => "first"
      | Last => "last"
      | Previous2 => "previous2"
      | Next2 => "next2"
      | Eject => "eject"
      | VolumeHigh => "volume-high"
      | VolumeMedium => "volume-medium"
      | VolumeLow => "volume-low"
      | VolumeMute => "volume-mute"
      | VolumeMute2 => "volume-mute2"
      | VolumeIncrease => "volume-increase"
      | VolumeDecrease => "volume-decrease"
      | Loop => "loop"
      | Loop2 => "loop2"
      | Infinite => "infinite"
      | Shuffle => "shuffle"
      | ArrowUpLeft => "arrow-up-left"
      | ArrowUp => "arrow-up"
      | ArrowUpRight => "arrow-up-right"
      | ArrowRight => "arrow-right"
      | ArrowDownRight => "arrow-down-right"
      | ArrowDown => "arrow-down"
      | ArrowDownLeft => "arrow-down-left"
      | ArrowLeft => "arrow-left"
      | ArrowUpLeft2 => "arrow-up-left2"
      | ArrowUp2 => "arrow-up2"
      | ArrowUpRight2 => "arrow-up-right2"
      | ArrowRight2 => "arrow-right2"
      | ArrowDownRight2 => "arrow-down-right2"
      | ArrowDown2 => "arrow-down2"
      | ArrowDownLeft2 => "arrow-down-left2"
      | ArrowLeft2 => "arrow-left2"
      | CircleUp => "circle-up"
      | CircleRight => "circle-right"
      | CircleDown => "circle-down"
      | CircleLeft => "circle-left"
      | Tab => "tab"
      | MoveUp => "move-up"
      | MoveDown => "move-down"
      | SortAlphaAsc => "sort-alpha-asc"
      | SortAlphaDesc => "sort-alpha-desc"
      | SortNumericAsc => "sort-numeric-asc"
      | SortNumbericDesc => "sort-numberic-desc"
      | SortAmountAsc => "sort-amount-asc"
      | SortAmountDesc => "sort-amount-desc"
      | Command => "command"
      | Shift => "shift"
      | Ctrl => "ctrl"
      | Opt => "opt"
      | CheckboxChecked => "checkbox-checked"
      | CheckboxUnchecked => "checkbox-unchecked"
      | RadioChecked => "radio-checked"
      | RadioChecked2 => "radio-checked2"
      | RadioUnchecked => "radio-unchecked"
      | Crop => "crop"
      | MakeGroup => "make-group"
      | Ungroup => "ungroup"
      | Scissors => "scissors"
      | Filter => "filter"
      | Font => "font"
      | Ligature => "ligature"
      | Ligature2 => "ligature2"
      | TextHeight => "text-height"
      | TextWidth => "text-width"
      | FontSize => "font-size"
      | Bold => "bold"
      | Underline => "underline"
      | Italic => "italic"
      | Strikethrough => "strikethrough"
      | Omega => "omega"
      | Sigma => "sigma"
      | PageBreak => "page-break"
      | Superscript => "superscript"
      | Subscript => "subscript"
      | Superscript2 => "superscript2"
      | Subscript2 => "subscript2"
      | TextColor => "text-color"
      | Pagebreak => "pagebreak"
      | ClearFormatting => "clear-formatting"
      | Table => "table"
      | Table2 => "table2"
      | InsertTemplate => "insert-template"
      | Pilcrow => "pilcrow"
      | Ltr => "ltr"
      | Rtl => "rtl"
      | Section => "section"
      | ParagraphLeft => "paragraph-left"
      | ParagraphCenter => "paragraph-center"
      | ParagraphRight => "paragraph-right"
      | ParagraphJustify => "paragraph-justify"
      | IndentIncrease => "indent-increase"
      | IndentDecrease => "indent-decrease"
      | Share => "share"
      | NewTab => "new-tab"
      | Embed => "embed"
      | Embed2 => "embed2"
      | Terminal => "terminal"
      | Share2 => "share2"
      | Mail => "mail"
      | Mail2 => "mail2"
      | Mail3 => "mail3"
      | Mail4 => "mail4"
      | Amazon => "amazon"
      | Google => "google"
      | Google2 => "google2"
      | Google3 => "google3"
      | GooglePlus => "google-plus"
      | GooglePlus2 => "google-plus2"
      | GooglePlus3 => "google-plus3"
      | Hangouts => "hangouts"
      | GoogleDrive => "google-drive"
      | Facebook => "facebook"
      | Facebook2 => "facebook2"
      | Instagram => "instagram"
      | Whatsapp => "whatsapp"
      | Spotify => "spotify"
      | Telegram => "telegram"
      | Twitter => "twitter"
      | Vine => "vine"
      | Vk => "vk"
      | Renren => "renren"
      | SinaWeibo => "sina-weibo"
      | Rss => "rss"
      | Rss2 => "rss2"
      | Youtube => "youtube"
      | Youtube2 => "youtube2"
      | Twitch => "twitch"
      | Vimeo => "vimeo"
      | Vimeo2 => "vimeo2"
      | Lanyrd => "lanyrd"
      | Flickr => "flickr"
      | Flickr2 => "flickr2"
      | Flickr3 => "flickr3"
      | Flickr4 => "flickr4"
      | Dribbble => "dribbble"
      | Behance => "behance"
      | Behance2 => "behance2"
      | Deviantart => "deviantart"
      | Steam => "steam"
      | Steam2 => "steam2"
      | Dropbox => "dropbox"
      | Onedrive => "onedrive"
      | Github => "github"
      | Npm => "npm"
      | Basecamp => "basecamp"
      | Trello => "trello"
      | Wordpress => "wordpress"
      | Joomla => "joomla"
      | Ello => "ello"
      | Blogger => "blogger"
      | Blogger2 => "blogger2"
      | Tumblr => "tumblr"
      | Tumblr2 => "tumblr2"
      | Yahoo => "yahoo"
      | Yahoo2 => "yahoo2"
      | Tux => "tux"
      | Appleinc => "appleinc"
      | Finder => "finder"
      | Android => "android"
      | Windows => "windows"
      | Windows8 => "windows8"
      | Soundcloud => "soundcloud"
      | Soundcloud2 => "soundcloud2"
      | Skype => "skype"
      | Reddit => "reddit"
      | Hackernews => "hackernews"
      | Wikipedia => "wikipedia"
      | Linkedin => "linkedin"
      | Linkedin2 => "linkedin2"
      | Lastfm => "lastfm"
      | Lastfm2 => "lastfm2"
      | Delicious => "delicious"
      | Stumbleupon => "stumbleupon"
      | Stumbleupon2 => "stumbleupon2"
      | Stackoverflow => "stackoverflow"
      | Pinterest => "pinterest"
      | Pinterest2 => "pinterest2"
      | Xing => "xing"
      | Xing2 => "xing2"
      | Flattr => "flattr"
      | Foursquare => "foursquare"
      | Yelp => "yelp"
      | Paypal => "paypal"
      | Chrome => "chrome"
      | Firefox => "firefox"
      | IE => "IE"
      | Edge => "edge"
      | Safari => "safari"
      | Opera => "opera"
      | FilePdf => "file-pdf"
      | FileOpenoffice => "file-openoffice"
      | FileWord => "file-word"
      | FileExcel => "file-excel"
      | Libreoffice => "libreoffice"
      | HtmlFive => "html-five"
      | HtmlFive2 => "html-five2"
      | Css3 => "css3"
      | Git => "git"
      | Codepen => "codepen"
      | Svg => "svg"
      | IcoMoon => "IcoMoon"
      }
    );
  type align =
    | Center
    | Left
    | Right;
  let makeClasses = (base: string, colour: Colour.colour, align: align) =>
    base
    ++ " text fill "
    ++ (colour |> Colour.makeColour)
    ++ " "
    ++ (
      switch align {
      | Center => "center"
      | Left => "left"
      | Right => "right"
      }
    );
};

module P = {
  let component = ReasonReact.statelessComponent("P");
  let make = (~colour: Colour.colour=Complement(Dark), ~align: Style.align=Left, children) => {
    ...component,
    render: _self =>
      <div className=(Style.makeClasses("paragraph", colour, align))>
        (children |> ReasonReact.array)
      </div>
  };
};

module Icon = {
  let component = ReasonReact.statelessComponent("ButtonIcon");
  let make = (~colour: Colour.colour=Complement(Dark), ~icon: Style.icon, children) => {
    ...component,
    render: _self =>
      <div
        className=(
          Style.makeClasses("paragraph", colour, Center)
          ++ " "
          ++ Style.makeIcons(icon)
        )>
        (children |> ReasonReact.array)
      </div>
  };
};

module H2 = {
  let component = ReasonReact.statelessComponent("H2");
  let make =
      (~colour: Colour.colour=Complement(Dark), ~align: Style.align=Center, children) => {
    ...component,
    render: _self =>
      <div className=(Style.makeClasses("header-2", colour, align))>
        (children |> ReasonReact.array)
      </div>
  };
};

module H1 = {
  let component = ReasonReact.statelessComponent("H1");
  let make =
      (~colour: Colour.colour=Complement(Dark), ~align: Style.align=Center, children) => {
    ...component,
    render: _self =>
      <div className=(Style.makeClasses("header-1", colour, align))>
        (children |> ReasonReact.array)
      </div>
  };
};