let s:b00 = [ 'black'       , 'black'        ]
let s:b01 = [ 'darkred'     , 'darkred'      ]
let s:b02 = [ 'darkgreen'   , 'darkgreen'    ]
let s:b03 = [ 'darkyellow'  , 'darkyellow'   ]
let s:b04 = [ 'darkblue'    , 'darkblue'     ]
let s:b05 = [ 'darkmagenta' , 'darkmagenta'  ]
let s:b06 = [ 'darkcyan'    , 'darkcyan'     ]
let s:b07 = [ 'darkgrey'    , 'darkgrey'     ]

let s:b08 = [ 'darkgrey'    , 'darkgrey'     ]
let s:b09 = [ 'red'         , 'red'          ]
let s:b0a = [ 'green'       , 'green'        ]
let s:b0b = [ 'yellow'      , 'yellow'       ]
let s:b0c = [ 'blue'        , 'blue'         ]
let s:b0d = [ 'magenta'     , 'magenta'      ]
let s:b0e = [ 'cyan'        , 'cyan'         ]
let s:b0f = [ 'lightgrey'   , 'lightgrey'    ]

let s:b10 = [ 'lightgrey'   , 'lightgrey'    ]
let s:b11 = [ 'lightred'    , 'lightred'     ]
let s:b12 = [ 'lightgreen'  , 'lightgreen'   ]
let s:b13 = [ 'lightyellow' , 'lightyellow'  ]
let s:b14 = [ 'lightblue'   , 'lightblue'    ]
let s:b15 = [ 'lightmagenta', 'lightmagenta' ]
let s:b16 = [ 'lightcyan'   , 'lightcyan'    ]
let s:b17 = [ 'white'       , 'white'        ]

let s:b18 = [ 'NONE', 'NONE' ] " for transparent terminals

let s:p = {'normal': {}, 'inactive': {}, 'insert': {}, 'replace': {}, 'visual': {}, 'tabline': {}}

let s:p.normal.left = [
	\ [ s:b17, s:b01, 'bold' ],
	\ [ s:b11, s:b00, 'bolditalic' ],
	\ ]
let s:p.normal.middle = [
	\ [ s:b0c, s:b00, 'bolditalic' ],
	\ ]
let s:p.normal.right = [
	\ [ s:b01, s:b00, 'bolditalic' ],
	\ [ s:b03, s:b00, 'bolditalic' ],
	\ ]
let s:p.normal.error = [
	\ [ s:b00, s:b0d ],
	\ ]
let s:p.normal.warning = [
	\ [ s:b00, s:b0b ],
	\ ]

let s:p.insert.left = [
	\ [ s:b17, s:b04, 'bold' ],
	\ [ s:b11, s:b00, 'bolditalic' ],
	\ ]
let s:p.visual.left = [
	\ [ s:b12, s:b06, 'bold' ],
	\ [ s:b11, s:b00, 'bolditalic' ],
	\ ]
let s:p.replace.left = [
	\ [ s:b0b, s:b08, 'boldunderline' ],
	\ [ s:b11, s:b00, 'bolditalic' ],
	\ ]

let s:p.inactive.left = [
	\ [ s:b0f, s:b07, 'italicunderline' ],
	\ ]
let s:p.inactive.middle = [
	\ [ s:b0f, s:b07, 'italicunderline' ],
	\ ]
let s:p.inactive.right = [
	\ [ s:b0f, s:b07, 'italicunderline' ],
	\ ]

let s:p.tabline.left = [
	\ [ s:b05, s:b02 ],
	\ ]
let s:p.tabline.middle = [
	\ [ s:b05, s:b01 ],
	\ ]
let s:p.tabline.right = [
	\ [ s:b05, s:b02 ],
	\ ]
let s:p.tabline.tabsel = [
	\ [ s:b02, s:b0a ],
	\ ]

let g:lightline#colorscheme#terminal#palette = lightline#colorscheme#flatten(s:p)
