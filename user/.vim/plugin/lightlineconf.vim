let g:lightline = {}
let g:lightline.enable = { 'statusline': 1, 'tabline': 1 }
let g:lightline.separator = { 'left': '', 'right': '' }
let g:lightline.subseparator = { 'left': '|', 'right': '|' }
let g:lightline.tabline_separator = g:lightline.separator
let g:lightline.tabline_subseparator = g:lightline.subseparator
let g:lightline.active = {
	\ 'left':  [[ 'mode', 'paste' ],
	\           [ 'readonly', 'filename', 'modified' ],
	\           ['synwarn', 'synstatus', 'relativepath']],
	\ 'right': [[ 'lineinfo', 'charinfo' ],
	\           [ 'percent', 'foldlevel' ],
	\           [ 'fileformat', 'fileencoding', 'filetype' ]],
	\ }
let g:lightline.inactive = {
	\ 'left':  [[ 'filename' ]],
	\ 'right': [[ 'lineinfo' ],
	\           [ 'percent' ]],
	\ }
let g:lightline.tabline = {
	\ 'left': [ [ 'tabs' ] ],
	\ 'right': [ [ 'close' ] ] }
let g:lightline.tab = {
	\ 'active': [ 'tabnum', 'filename', 'modified' ],
	\ 'inactive': [ 'tabnum', 'filename', 'modified' ] }

" Statusline/tabline components.
let g:lightline.component = {
	\ 'synwarn': '%warningmsg',
	\ 'mode': '%{lightline#mode()}',
	\ 'absolutepath': '%F',
	\ 'relativepath': '%f',
	\ 'filename': '%t',
	\ 'modified': '%M',
	\ 'bufnum': '%n',
	\ 'paste': '%{&paste ? "PASTE" : ""}',
	\ 'readonly': '%R',
	\ 'charvalue': '%b',
	\ 'charvaluehex': '%B',
	\ 'foldlevel': '%{&foldlevel}',
	\ 'fileencoding': '%{&fenc != "" ? &fenc : &enc}',
	\ 'fileformat': '%{&ff}',
	\ 'filetype': '%{&ft!=#""?&ft:"no ft"}',
	\ 'percent': '%p%%',
	\ 'percentwin': '%P',
	\ 'spell': '%{&spell?&spelllang:""}',
	\ 'lineinfo': '%l/%-L',
	\ 'charinfo': '%2c-%-2v:%03b:%03B',
	\ 'line': '%l',
	\ 'column': '%c',
	\ 'close': '%999X X ',
	\ 'winnr': '%{winnr()}',
	\ }
let g:lightline.component_visible_condition = {
	\ 'modified': '&modified||!&modifiable',
	\ 'readonly': '&readonly',
	\ 'paste': '&paste',
	\ 'spell': '&spell',
	\ }
let g:lightline.component_expand = {
	\ 'synstatus': 'SyntasticStatuslineFlag',
	\ 'tabs': 'lightline#tabs',
	\ }
let g:lightline.component_function_visible_condition = {}
let g:lightline.component_type = {
	\ 'tabs': 'tabsel',
	\ 'close': 'raw',
	\ 'synstatus': 'error',
	\ }
let g:lightline.component_raw = {}
let g:lightline.tab_component = {}
let g:lightline.tab_component_function = {
		\ 'filename': 'lightline#tab#filename',
		\ 'modified': 'lightline#tab#modified',
		\ 'readonly': 'lightline#tab#readonly',
		\ 'tabnum': 'lightline#tab#tabnum'
		\ }
let g:lightline.mode_map = {
	\      'n': 'N ',
	\      'i': 'I ',
	\      'R': 'R ',
	\      'v': 'V ',
	\      'V': 'v ',
	\ "\<C-v>": 'VB',
	\     'c' : 'c',
	\     's' : 's',
	\     'S' : 'S',
	\ "\<C-s>": 'SB',
	\      't': 't',
	\ }
let g:lightline.colorscheme = 'century'
