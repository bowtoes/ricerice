if exists('g:loaded_myfunctions')
  finish
endif
let g:loaded_myfunctions = 1

let s:cpo_save = &cpo
set cpo&vim
"big and ugly
let s:colorIDNames = {
\	'0': 'Black', '1': 'Red', '2': 'Green', '3': 'Yellow', '4': 'Blue',
\	'5': 'Magenta', '6': 'Cyan', '7': 'Grey', '8': 'Dark Grey', '9': 'Light Red',
\	'10': 'Light Green', '11': 'Light Yellow', '12': 'Light Blue', '13': 'Light Magenta', '14': 'Light Cyan',
\	'15': 'White', '16': 'Grey 0', '17': 'Navy Blue', '18': 'Dark Blue', '19': 'Blue 3',
\	'20': 'Blue 3', '21': 'Blue 1', '22': 'Dark Green', '23': 'Deep Sky Blue 4', '24': 'Deep Sky Blue 4',
\	'25': 'Deep Sky Blue 4', '26': 'Dodger Blue 3', '27': 'Dodger Blue 2', '28': 'Green 4', '29': 'Spring Green 4',
\	'30': 'Turquoise 4', '31': 'Deep Sky Blue 3', '32': 'Deep Sky Blue 3', '33': 'Dodger Blue 1', '34': 'Green 3',
\	'35': 'Spring Green 3', '36': 'Dark Cyan', '37': 'Light Sea Green', '38': 'Deep Sky Blue 2', '39': 'Deep Sky Blue 1',
\	'40': 'Green 3', '41': 'Spring Green 3', '42': 'Spring Green 2', '43': 'Cyan 3', '44': 'Dark Turquoise',
\	'45': 'Turquoise 2', '46': 'Green 1', '47': 'Spring Green 2', '48': 'Spring Green 1', '49': 'Medium Spring Green',
\	'50': 'Cyan 2', '51': 'Cyan 1', '52': 'Dark Red', '53': 'Deep Pink 4', '54': 'Purple 4',
\	'55': 'Purple 4', '56': 'Purple 3', '57': 'Blue Violet', '58': 'Orange 4', '59': 'Grey 37',
\	'60': 'Medium Purple 4', '61': 'Slate Blue 3', '62': 'Slate Blue 3', '63': 'Royal Blue 1', '64': 'Chartreuse 4',
\	'65': 'Dark Sea Green 4', '66': 'Pale Turquoise 4', '67': 'Steel Blue', '68': 'Steel Blue 3', '69': 'Cornflower Blue',
\	'70': 'Chartreuse 3', '71': 'Dark Sea Green 4', '72': 'Cadet Blue', '73': 'Cadet Blue', '74': 'Sky Blue 3',
\	'75': 'Steel Blue 1', '76': 'Chartreuse 3', '77': 'Pale Green 3', '78': 'Sea Green 3', '79': 'Aquamarine 3',
\	'80': 'Medium Turquoise', '81': 'Steel Blue 1', '82': 'Chartreuse 2', '83': 'Sea Green 2', '84': 'Sea Green 1',
\	'85': 'Sea Green 1', '86': 'Aquamarine 1', '87': 'Dark Slate Gray 2', '88': 'Dark Red', '89': 'Deep Pink 4',
\	'90': 'Dark Magenta', '91': 'Dark Magenta', '92': 'Dark Violet', '93': 'Purple', '94': 'Orange 4',
\	'95': 'Light Pink 4', '96': 'Plum 4', '97': 'Medium Purple 3', '98': 'Medium Purple 3', '99': 'Slate Blue 1',
\	'100': 'Yellow 4', '101': 'Wheat 4', '102': 'Grey 53', '103': 'Light Slate Grey', '104': 'Medium Purple',
\	'105': 'Light Slate Blue', '106': 'Yellow 4', '107': 'Dark Olive Green 3', '108': 'Dark Sea Green', '109': 'Light Sky Blue 3',
\	'110': 'Light Sky Blue 3', '111': 'Sky Blue 2', '112': 'Chartreuse 2', '113': 'Dark Olive Green 3', '114': 'Pale Green 3',
\	'115': 'Dark Sea Green 3', '116': 'Dark Slate Gray 3', '117': 'Sky Blue 1', '118': 'Chartreuse 1', '119': 'Light Green',
\	'120': 'Light Green', '121': 'Pale Green 1', '122': 'Aquamarine 1', '123': 'Dark Slate Gray 1', '124': 'Red 3',
\	'125': 'Deep Pink 4', '126': 'Medium Violet Red', '127': 'Magenta 3', '128': 'Dark Violet', '129': 'Purple',
\	'130': 'Dark Orange 3', '131': 'Indian Red', '132': 'Hot Pink 3', '133': 'Medium Orchid 3', '134': 'Medium Orchid',
\	'135': 'Medium Purple 2', '136': 'Dark Goldenrod', '137': 'Light Salmon 3', '138': 'Rosy Brown', '139': 'Grey 63',
\	'140': 'Medium Purple 2', '141': 'Medium Purple 1', '142': 'Gold 3', '143': 'Dark Khaki', '144': 'Navajo White 3',
\	'145': 'Grey 69', '146': 'Light Steel Blue 3', '147': 'Light Steel Blue', '148': 'Yellow 3', '149': 'Dark Olive Green 3',
\	'150': 'Dark Sea Green 3', '151': 'Dark Sea Green 2', '152': 'Light Cyan 3', '153': 'Light Sky Blue 1', '154': 'Green Yellow',
\	'155': 'Dark Olive Green 2', '156': 'Pale Green 1', '157': 'Dark Sea Green 2', '158': 'Dark Sea Green 1', '159': 'Pale Turquoise 1',
\	'160': 'Red 3', '161': 'Deep Pink 3', '162': 'Deep Pink 3', '163': 'Magenta 3', '164': 'Magenta 3',
\	'165': 'Magenta 2', '166': 'Dark Orange 3', '167': 'Indian Red', '168': 'Hot Pink 3', '169': 'Hot Pink 2',
\	'170': 'Orchid', '171': 'Medium Orchid 1', '172': 'Orange 3', '173': 'Light Salmon 3', '174': 'Light Pink 3',
\	'175': 'Pink 3', '176': 'Plum 3', '177': 'Violet', '178': 'Gold 3', '179': 'Light Goldenrod 3',
\	'180': 'Tan', '181': 'Misty Rose 3', '182': 'Thistle 3', '183': 'Plum 2', '184': 'Yellow 3',
\	'185': 'Khaki 3', '186': 'Light Goldenrod 2', '187': 'Light Yellow 3', '188': 'Grey 84', '189': 'Light Steel Blue 1',
\	'190': 'Yellow 2', '191': 'Dark Olive Green 1', '192': 'Dark Olive Green 1', '193': 'Dark Sea Green 1', '194': 'Honeydew 2',
\	'195': 'Light Cyan 1', '196': 'Red 1', '197': 'Deep Pink 2', '198': 'Deep Pink 1', '199': 'Deep Pink 1',
\	'200': 'Magenta 2', '201': 'Magenta 1', '202': 'Orange Red 1', '203': 'Indian Red 1', '204': 'Indian Red 1',
\	'205': 'Hot Pink', '206': 'Hot Pink', '207': 'Medium Orchid 1', '208': 'Dark Orange', '209': 'Salmon 1',
\	'210': 'Light Coral', '211': 'Pale Violet Red 1', '212': 'Orchid 2', '213': 'Orchid 1', '214': 'Orange 1',
\	'215': 'Sandy Brown', '216': 'Light Salmon 1', '217': 'Light Pink 1', '218': 'Pink 1', '219': 'Plum 1',
\	'220': 'Gold 1', '221': 'Light Goldenrod 2', '222': 'Light Goldenrod 2', '223': 'Navajo White 1', '224': 'Misty Rose 1',
\	'225': 'Thistle 1', '226': 'Yellow 1', '227': 'Light Goldenrod 1', '228': 'Khaki 1', '229': 'Wheat 1',
\	'230': 'Cornsilk 1', '231': 'Grey 100', '232': 'Grey 3', '233': 'Grey 7', '234': 'Grey 11',
\	'235': 'Grey 15', '236': 'Grey 19', '237': 'Grey 23', '238': 'Grey 27', '239': 'Grey 30',
\	'240': 'Grey 35', '241': 'Grey 39', '242': 'Grey 42', '243': 'Grey 46', '244': 'Grey 50',
\	'245': 'Grey 54', '246': 'Grey 58', '247': 'Grey 62', '248': 'Grey 66', '249': 'Grey 70',
\	'250': 'Grey 74', '251': 'Grey 78', '252': 'Grey 82', '253': 'Grey 85', '254': 'Grey 89',
\	'255': 'Grey 93',
\}

function! EchoSyntaxInfo(x, y)
    let l:id = synID(a:x, a:y, 0)
	let l:idtr = l:id->synIDtrans()
	let l:hg = l:idtr->synIDattr('name')
    let l:sy = l:id->synIDattr('name')
    echo 'syntax<'.l:sy.'> highlight<'.l:hg.'>'
endfunction

function! ColorIDToName(x)
	if a:x
		return s:colorIDNames[a:x]
	else
		return "None"
	endif
endfunction

function! EchoStyleInfo(x, y)
    let l:id = synID(a:x, a:y, 0)
	let l:idtr = l:id->synIDtrans()
    let l:fg = l:idtr->synIDattr('fg#')
    let l:bg = l:idtr->synIDattr('bg#')
	let l:sp = l:idtr->synIDattr('sp#')
    let l:fn = ColorIDToName(l:fg)
    let l:bn = ColorIDToName(l:bg)
    let l:sn = ColorIDToName(l:sp)
	let l:stylestr = 'FG <'.l:fg.':'.l:fn.'> BG <'.l:bg.':'.l:bn.'> Special <'.l:sp.':'.l:sn.'> Style <'

	if l:idtr->synIDattr('bold')
		let l:stylestr = l:stylestr.'Bold'
	endif
	if l:idtr->synIDattr('italic')
		let l:stylestr = l:stylestr.',Italic'
	endif
	if l:idtr->synIDattr('reverse')
		let l:stylestr = l:stylestr.',Reverse'
	endif
	if l:idtr->synIDattr('standout')
		let l:stylestr = l:stylestr.',Standout'
	endif
	if l:idtr->synIDattr('underline')
		let l:stylestr = l:stylestr.',Underline'
	endif
	if l:idtr->synIDattr('undercurl')
		let l:stylestr = l:stylestr.',Undercurl'
	endif
	if l:idtr->synIDattr('strike')
		let l:stylestr = l:stylestr.',Strikethrough'
	endif

	echo l:stylestr.'>'
endfunction
"""" ---- FUNCTIONS ----
