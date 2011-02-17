\NeedsTeXFormat{LaTeX2e}
\ProvidesClass{doc_nit}[2011/01/17 1.0 Format LaTeX pour doc NIT.]
\LoadClass{report}

% Chargement des extensions
\usepackage{color} % Gestion des couleurs
\usepackage{listings} % Gestion du code
\usepackage{multicol} % Gestion multi-colonne
\usepackage[pdfborder={0 0 0}, colorlinks=true]{hyperref} % Liens hyper texte
\usepackage{tabularx} % Tableaux améliorés
\usepackage[latin1]{inputenc} % Prise en compte de l'UTF-8
\usepackage[T1]{fontenc}
\usepackage[francais]{babel} %Traduction en français des éléments chapitres, sections...
%\usepackage[autolanguage]{numprint}
\usepackage{graphicx}
%\usepackage{textcomp}
%\usepackage[french]{varioref}
\usepackage{url}
%\usepackage{moreverb}

% Définition des couleurs
\definecolor{code_background}{RGB}{239, 255, 188}
\definecolor{code_border}{RGB}{122, 193, 39}

% Marges
\setlength{\oddsidemargin}{0cm}      % 4cm left margin
\setlength{\evensidemargin}{0cm}
\setlength{\topmargin}{0cm}           % 4cm top margin
\setlength{\textwidth}{16cm}          % 6.0in text - 1.25in rt margin
\setlength{\textheight}{21cm} % Body ht for 1in margins 

% Mise forme des paragraphes
\setlength{\parindent}{0.0in}
\setlength{\parskip}{0.1in}

% Mise en forme des chapitres

% Mise en forme des listings
\lstdefinelanguage{Nit}
{morekeywords={package,import, class,abstract,interface,universal,special,end,fun,type,init,redef,is,do,
      readable,writable,var,intern,extern,protected,private,intrude,if,then,else,while,loop,for,in,and,or,not,
      return,continue,break,abort,assert,new,isa,once,super,self,true,false,null,as,nullable,isset,label,print},
  sensitive=true,
  morecomment=[l]\#,
  morestring=[b]",
  morestring=[b]',
  basicstyle=\small,
}
\lstset{language=Nit,
  numbers=left,
  numberstyle=\tiny,    %font size
  stepnumber=1,
  numbersep=15pt,
  backgroundcolor=\color{code_background},
  rulecolor=\color{code_border},
  frame=leftline,
  framerule=3pt,  
  framexleftmargin=-5pt,
  xleftmargin=25pt,
  framesep=15pt,
  showspaces=false,
  showstringspaces=false, 
  showtabs=false,
  tabsize=2,                % sets default tabsize to 2 spaces
  breaklines=true,          % sets automatic line breaking
  breakatwhitespace=false   % sets if automatic breaks should only happen at whitespace
}

% Macro de lstinline
\lstMakeShortInline[language=Nit]|

% Environnement Warning TODO
\newenvironment{warn}
{\setlength{\parindent}{0.0in}}
{}

