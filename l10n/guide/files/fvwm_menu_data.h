# return the wm-icons associated to a standard section. One can think that:
# 1 - it is better to use overread the /usr/lib/menu/menu file
# 2 - to add/replace some "ifeqelse lines" with parent($s) in the placs of $s
# both are bad ideas :o)

function ftGetSectionIcon($s)= \
  ifeqelse($s,rootsection()"/Configuration",\
	"configuration.xpm",\
  ifeqelse($s,rootsection()"/Configuration/Hardware",\
	"disk.xpm",\
  ifeqelse($s,rootsection()"/Configuration/Packaging",\
	"programs.xpm",\
  ifeqelse($s,rootsection()"/Configuration/Networking",\
	"network.xpm",\
  ifeqelse($s,rootsection()"/Configuration/Printing",\
	"printing.xpm",\
  ifeqelse($s,rootsection()"/Configuration/Boot and Init",\
	"linux.xpm",\
  ifeqelse($s,rootsection()"/Configuration/Other",\
	"configuration.xpm",\
  ifeqelse($s,rootsection()"/Applications",\
	"programs.xpm",\
  ifeqelse($s,rootsection()"/Applications/Development",\
	"development.xpm",\
  ifeqelse($s,rootsection()"/Applications/Development/Interpreters",\
	"development.xpm",\
  ifeqelse($s,rootsection()"/Applications/Development/Code generators",\
	"development.xpm",\
  ifeqelse($s,rootsection()"/Applications/Development/Development environments",\
	"development.xpm",\
  ifeqelse($s,rootsection()"/Applications/Development/Tools",\
	"development.xpm",\
  ifeqelse($s,rootsection()"/Applications/Sciences",\
	"science.xpm",\
  ifeqelse($s,rootsection()"/Applications/Archiving",\
	"file.xpm",\
  ifeqelse($s,rootsection()"/Applications/Archiving/Compression",\
	"file.xpm",\
  ifeqelse($s,rootsection()"/Applications/Archiving/Cd burning",\
	"disk-cd.xpm",\
  ifeqelse($s,rootsection()"/Applications/Archiving/Backup",\
	"folder.xpm",\
  ifeqelse($s,rootsection()"/Applications/Archiving/Other",\
	"file.xpm",\
  ifeqelse($s,rootsection()"/Applications/Communications",\
	"network.xpm",\	
  ifeqelse($s,rootsection()"/Applications/Editors",\
	"editor.xpm",\
  ifeqelse($s,rootsection()"/Applications/Publishing",\
	"word-processor.xpm",\
  ifeqelse($s,rootsection()"/Applications/Monitoring",\
	"monitoring.xpm",\
  ifeqelse($s,rootsection()"/Applications/Text tools",\
	"viewer.xpm",\
  ifeqelse($s,rootsection()"/Applications/File tools",\
	"file.xpm",\
  ifeqelse($s,rootsection()"/Applications/Shells",\
	"file.xpm",\
  ifeqelse($s,rootsection()"/Terminals",\
	"terminal.xpm",\
  ifeqelse($s,rootsection()"/Documentation",\
	"help.xpm",\
  ifeqelse($s,rootsection()"/Office",\
	"word-processor.xpm",\
  ifeqelse($s,rootsection()"/Networking",\
	"network.xpm",\
  ifeqelse($s,rootsection()"/Networking/File transfer",\
	"file.xpm",\
  ifeqelse($s,rootsection()"/Networking/ICQ",\
	"chat.xpm",\
  ifeqelse($s,rootsection()"/Networking/IRC",\
	"chat.xpm",\
  ifeqelse($s,rootsection()"/Networking/Chat",\
	"chat.xpm",\
  ifeqelse($s,rootsection()"/Networking/News",\
	"news.xpm",\
  ifeqelse($s,rootsection()"/Networking/Mail",\
	"mail.xpm",\
  ifeqelse($s,rootsection()"/Networking/WWW",\
	"www.xpm",\
  ifeqelse($s,rootsection()"/Networking/Remote access",\
	"network.xpm",\
  ifeqelse($s,rootsection()"/Networking/Other",\
	"network.xpm",\
  ifeqelse($s,rootsection()"/Amusement",\
	"game.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Adventure",\
	"game-action.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Arcade",\
	"game-action.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Boards",\
	"game-board.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Cards",\
	"game-cards.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Puzzles",\
	"game-logic.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Sports",\
	"game-action.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Strategy",\
	"game-action.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Other",\
	"game.xpm",\
  ifeqelse($s,rootsection()"/Amusement/Toys",\
	"amusement.xpm",\
  ifeqelse($s,rootsection()"/Multimedia",\
	"multimedia.xpm",\
  ifeqelse($s,rootsection()"/Multimedia/Sound",\
	"music.xpm",\
  ifeqelse($s,rootsection()"/Multimedia/Graphics",\
	"graphics.xpm",\
  ifeqelse($s,rootsection()"/Multimedia/Video",\
	"video.xpm",\
  ifeqelse($s,rootsection()"/Session",\
	"windows.xpm",\
  ifeqelse($s,rootsection()"/Session/Windowmanagers",\
	"windows.xpm",\
  "")))))))))))))))))))))))))))))))))))))))))))))))))))))))

function ftGetSectionIconForApp($s,$f) =\
  ifeqelse(ftGetSectionIcon(parent($s)),"",\
  ifeqelse(ftGetSectionIcon(parent(parent($s))),"",\
  ifeqelse(ftGetSectionIcon(parent(parent(parent($s)))),"","",\
    $f ftGetSectionIcon(parent(parent(parent($s))))),\
    $f ftGetSectionIcon(parent(parent($s)))),\
    $f ftGetSectionIcon(parent($s)))

# return a wm-icons associated to a package or a command
# this function should be automatically generated:
# only needed if we want a wmIcons which is != to the section icons
function ftWmIconsByListTable($n) = \
  ifeqelse($n,"xcalc","calculator.xpm",\
  ifeqelse($n,"xclock","clock.xpm",\
  ifeqelse($n,"rclock","clock.xpm",\
  ifeqelse($n,"xdaliclock","clock.xpm",\
  ifeqelse($n,"xfclock","clock.xpm",\
  ifeqelse($n,"xfontsel","font.xpm",\
  ifeqelse($n,"xcolorsel","colors.xpm",\
  ifeqelse($n,"xcolormap","colors.xpm",\
  ifeqelse($n,"xgrab","display.xpm",\
  ifeqelse($n,"ghostview","ghostview.xpm",\
  ifeqelse($n,"acroread","viewer.xpm",\
  ifeqelse($n,"Xemacs","gnu.xpm",\
  ifeqelse($n,"Emacs","gnu.xpm",\
  ifeqelse($n,"gqview","image-viewer.xpm",\
  ifeqelse($n,"xbmbrowser","image-viewer.xpm",\
  ifeqelse($n,"xfig","image-processor.xpm",\
  ifeqelse($n,"xpaint","image-processor.xpm",\
  ifeqelse($n,"gimp","gimp.xpm",\
  ifeqelse($n,"gvim","editor.xpm",\
  ifeqelse($n,"xv","image-viewer.xpm",\
  ifeqelse($n,"mutt","mail.xpm",\
	   "")))))))))))))))))))))

function ftFindIconByList($p,$c,$t,$f) = \
  ifeqelse(ftWmIconsByListTable($p),"",\
  ifeqelse(ftWmIconsByListTable($t),"",\
  ifeqelse(ftWmIconsByListTable($c),"","",\
   $f ftWmIconsByListTable($c)),\
   $f ftWmIconsByListTable($t)),\
   $f ftWmIconsByListTable($p))

# check if we have a wm-icons and return it

function ftIsWmIconsTable($n) = \
  ifeqelse($n,"amusement.xpm","amusement.xpm",\
  ifeqelse($n,"calculator.xpm","calculator.xpm",\
  ifeqelse($n,"cd-player.xpm","cd-player.xpm",\
  ifeqelse($n,"chat.xpm","chat.xpm",\
  ifeqelse($n,"choice-no.xpm","choice-no.xpm",\
  ifeqelse($n,"choice-yes.xpm","choice-yes.xpm",\
  ifeqelse($n,"clock.xpm","clock.xpm",\
  ifeqelse($n,"colors.xpm","colors.xpm",\
  ifeqelse($n,"configuration.xpm","configuration.xpm",\
  ifeqelse($n,"development.xpm","development.xpm",\
  ifeqelse($n,"disk.xpm","disk.xpm",\
  ifeqelse($n,"disk-cd.xpm","disk-cd.xpm",\
  ifeqelse($n,"disk-floppy.xpm","disk-floppy.xpm",\
  ifeqelse($n,"display.xpm","display.xpm",\
  ifeqelse($n,"editor.xpm","editor.xpm",\
  ifeqelse($n,"file.xpm","file.xpm",\
  ifeqelse($n,"file-manager.xpm","file-manager.xpm",\
  ifeqelse($n,"folder.xpm","folder.xpm",\
  ifeqelse($n,"folder-open.xpm","folder-open.xpm",\
  ifeqelse($n,"font.xpm","font.xpm",\
  ifeqelse($n,"game.xpm","game.xpm",\
  ifeqelse($n,"game-action.xpm","game-action.xpm",\
  ifeqelse($n,"game-board.xpm","game-board.xpm",\
  ifeqelse($n,"game-cards.xpm","game-cards.xpm",\
  ifeqelse($n,"game-logic.xpm","game-logic.xpm",\
  ifeqelse($n,"ghostview.xpm","ghostview.xpm",\
  ifeqelse($n,"gimp.xpm","gimp.xpm",\
  ifeqelse($n,"gnome.xpm","gnome.xpm",\
  ifeqelse($n,"gnu.xpm","gnu.xpm",\
  ifeqelse($n,"graphics.xpm","graphics.xpm",\
  ifeqelse($n,"help.xpm","help.xpm",\
  ifeqelse($n,"home.xpm","home.xpm",\
  ifeqelse($n,"image-processor.xpm","image-processor.xpm",\
  ifeqelse($n,"image-viewer.xpm","image-viewer.xpm",\
  ifeqelse($n,"information.xpm","information.xpm",\
  ifeqelse($n,"item.xpm","item.xpm",\
  ifeqelse($n,"kde.xpm","kde.xpm",\
  ifeqelse($n,"keyboard.xpm","keyboard.xpm",\
  ifeqelse($n,"linux.xpm","linux.xpm",\
  ifeqelse($n,"lock.xpm","lock.xpm",\
  ifeqelse($n,"mail.xpm","mail.xpm",\
  ifeqelse($n,"modules.xpm","modules.xpm",\
  ifeqelse($n,"monitoring.xpm","monitoring.xpm",\
  ifeqelse($n,"mouse.xpm","mouse.xpm",\
  ifeqelse($n,"multimedia.xpm","multimedia.xpm",\
  ifeqelse($n,"music.xpm","music.xpm",\
  ifeqelse($n,"netscape.xpm","netscape.xpm",\
  ifeqelse($n,"network.xpm","network.xpm",\
  ifeqelse($n,"news.xpm","news.xpm",\
  ifeqelse($n,"printing.xpm","printing.xpm",\
  ifeqelse($n,"programs.xpm","programs.xpm",\
  ifeqelse($n,"quit.xpm","quit.xpm",\
  ifeqelse($n,"refresh.xpm","refresh.xpm",\
  ifeqelse($n,"restart.xpm","restart.xpm",\
  ifeqelse($n,"science.xpm","science.xpm",\
  ifeqelse($n,"sound.xpm","sound.xpm",\
  ifeqelse($n,"system.xpm","system.xpm",\
  ifeqelse($n,"terminal.xpm","terminal.xpm",\
  ifeqelse($n,"terminal-remote.xpm","terminal-remote.xpm",\
  ifeqelse($n,"terminal-special.xpm","terminal-special.xpm",\
  ifeqelse($n,"themes.xpm","themes.xpm",\
  ifeqelse($n,"todo.xpm","todo.xpm",\
  ifeqelse($n,"unknown.xpm","unknown.xpm",\
  ifeqelse($n,"utility.xpm","utility.xpm",\
  ifeqelse($n,"video.xpm","video.xpm",\
  ifeqelse($n,"viewer.xpm","viewer.xpm",\
  ifeqelse($n,"window.xpm","window.xpm",\
  ifeqelse($n,"window-close.xpm","window-close.xpm",\
  ifeqelse($n,"window-delete.xpm","window-delete.xpm",\
  ifeqelse($n,"window-destroy.xpm","window-destroy.xpm",\
  ifeqelse($n,"window-iconify.xpm","window-iconify.xpm",\
  ifeqelse($n,"window-identify.xpm","window-identify.xpm",\
  ifeqelse($n,"window-lower.xpm","window-lower.xpm",\
  ifeqelse($n,"window-maximize.xpm","window-maximize.xpm",\
  ifeqelse($n,"window-move.xpm","window-move.xpm",\
  ifeqelse($n,"window-raise.xpm","window-raise.xpm",\
  ifeqelse($n,"window-resize.xpm","window-resize.xpm",\
  ifeqelse($n,"window-shade.xpm","window-shade.xpm",\
  ifeqelse($n,"window-stick.xpm","window-stick.xpm",\
  ifeqelse($n,"windows.xpm","windows.xpm",\
  ifeqelse($n,"word-processor.xpm","word-processor.xpm",\
  ifeqelse($n,"www.xpm","www.xpm",\
  ifeqelse($n,"xv.xpm","xv.xpm",\
  ifeqelse($n,"empty.xpm","empty.xpm",\
""))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))

#
function ftIsWmIcons($i,$f) = \
  ifeqelse(ftIsWmIconsTable($i),"",\
  ifeqelse(ftIsWmIconsTable(stripdir($i)),"","",\
   $f ftIsWmIconsTable(stripdir($i))),\
   $f ftIsWmIconsTable($i))
