//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	/* {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-tasks",	10,	26}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-music",	0,	11}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-pacpackages",	0,	8}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-news",		0,	6}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-price lbc \"LBRY Token\" 📚",			9000,	22}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-price bat \"Basic Attention Token\" 🦁",	9000,	20}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-price link \"Chainlink\" 🔗",			300,	25}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-price xmr \"Monero\" 🔒",			9000,	24}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-price eth Ethereum 🍸",	9000,	23}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-price btc Bitcoin 💰",				9000,	21}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-torrent",	20,	7}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-memory",	10,	14}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-cpu",		10,	18}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-moonphase",	18000,	17}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-forecast",	18000,	5}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-mailbox",	180,	12}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-nettraf",	1,	16}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-volume",	0,	10}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-battery",	5,	3}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-clock",	60,	1}, */
	/* {"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-internet",	5,	4}, */
	{"",	"/home/coffee/.scripts/dwmstatusbar/statusbar/sb-terminal",	5,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
