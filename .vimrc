" I like dark theme
set background=dark 

" that makes the theme more cool
set termguicolors 

set nocompatible
filetype off
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'VundleVim/Vundle.vim'
Plugin 'neoclide/coc.nvim', {'branch': 'release'}
Plugin 'preservim/nerdtree'
Plugin '907th/vim-auto-save'
Plugin 'itchyny/lightline.vim'
Plugin 'morhetz/gruvbox'
Plugin 'octol/vim-cpp-enhanced-highlight'
Plugin 'mhinz/vim-startify'
Plugin 'cdelledonne/vim-cmake'

call vundle#end()

" line number
set number

" enabling mouse
set mouse=a

" syntax highlighting
syntax on

" auto indentation
filetype plugin indent on

map <F9> :!./runcpp.sh
map <C-B> :CMakeBuild
map <C-I> :CMakeInstall

" indentation related stuffs 
set smartindent
set tabstop=4
set softtabstop=4
set shiftwidth=4
set expandtab

" Lightline configuration
set laststatus=2

" enabling autosave
let g:auto_save=1

" Gruvbox Configuration 
let g:gruvbox_contrast_dark = 'hard'
colorscheme gruvbox

