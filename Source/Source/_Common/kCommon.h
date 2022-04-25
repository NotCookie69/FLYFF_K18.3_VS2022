//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-
/*
															`.-`
													   .:/+oo++oo+/:-
													.+sso++++///+++oss+-
						 .                       `./yysooo++o--o+++oosyh+:-..``             ``.-://.
						 shysoo+/:--..--:/++oshdmmmhyso/.-+syhhhs+-.:osyhdmmddhyysoo+////+osyyyhmmmy`
						sdmmdyo+ooo+++++ooossssyyyhhy/. `:oshddhso:` `:syhossoooo+++++///////ohhydsyy`
					  `sy+sh+syy+/:------::::://::hys/-` .:+osso+/- `-/syh:.::::::--....--/oys//ho//oy.
					 `ys///ss///ss+:-.....---:::`+hhyyss+///+++++//+ssyyhhs `:::--.....-:os+::/so/::/oy:
					.yo/:::/s+::::+s+:.....--:-  /hhhyyyssoooooooosssyyhhho  `-:--....-+o/---:/s/----:+s+.
				   :s+:----:+s/--..-/o/-...--:`   ohhhyyyyssssysssyyyyhhhs`   `:--..-/o/.....-s/-..`...-/o+-
				 :o+:-..``..-oo-.....-/+/:--::    `shhhhhhhhhyyhhhhyhhhhy`     ::::/+/-..```./o-.````...-://::.
			   -++/-...````..:o:.```...-/+///:     `/yhhhhhhyyyyhhhhhhh+.      ://++:--.....-o:......--..``  `.
			 :/--------......./+.....--::/+++:       `/yhhhhhhyhhhhhy/`        :++/:::------/+-----.`
			``       ``..-----:+:-::-.....--:-          .:/yhhhhy/:.           `.````   .-::+/::.`
						  `.-::++::.                       hNmmm.                         `:+-`
							  .:+.                         mmmmo
														  `mmmd`
														  -mmm+
														   yhs
														  `hh/
														  `hh-
														  `yy`
														   os.
														  :s-
														  .o-
														   o:
														   -+.`-`
															`//so:`
															  .++:-`
															   .o+:-`
																os+/
																 -/-
*/
//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

/*

Contributors & Testers:
 - Special thanks to the following people on RageZone.com for testing and(or) contributing privately:
 -> Sand, Groxy, Percuflex, johansete, lovepapa123.

*/

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define	NEUZ_TITLE	"[VS22] Ketchup V18.3"				//: Window title of the client.
#define	NEUZ_BHASH	"sunkist"							//: String to boot the client.
#define	NEUZ_IPSET	"127.0.0.1"							//: Ip of the server, must match AccountServer.ini & LoginServer.ini.
#define	NEUZ_CPORT	"5400"								//: Cache port, must match CacheServer.ini.
#define	NEUZ_PHASH	"kikugalanet"						//: Md5 password salt.
#define	NEUZ_MSGVR	"20100412"							//: Ver of the server, must match AccountServer.ini & LoginServer.ini.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define COLOR_ADMINISTRATOR     0xFFFF4500				//: Name coloring of admin characters.
#define	TITLE_ADMINISTRATOR		"[Admin]"				//: Title for admin characters.

#define COLOR_GAMEMASTER        0xFFFF4500				//: Name coloring of gm characters.
#define	TITLE_GAMEMASTER		"[Gm]"					//: Title for gm characters.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

enum { ENCHANT_TIME = 1 };								//: Adjust the time of upgrading.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define __ADDMENU2										//: Adds the ability to add text to mmi in character.inc.
#define	__FIX_STAT_BUFF									//: Fixes some issues present with the v19 spec_item.
#define __INVENTORY_168									//: Inventory has 168 slots of space.
#define __INVENTORY_SORTING								//: Button added to the inventory to allow basic item sorting within.
#define __LOOKCHANGE									//: Model Transmutation like on retail.
#define __NEW_EXCHANGE_V19								//: New exchange windows with arrow icons.
#define __RANDOMOPTION_RETRY							//: Scroll of Awakening Augmentation.
#define __SLEEPING_FIX									//: Fixes the stun/sleeping bug present with Echoes of Weary.
#define	__SPEEDY_NEUZ									//: Fastest launch time.
#define __SYS_SCR_CANCELLATION							//: Scroll of Unbinding.
#define	__SYS_SCR_NEWACTIVITION							//: Enhanced Activition.
#define __SYS_SCR_NOR_SMELTING01						//: Scroll of Weapon Smelting (S).
#define __SYS_SCR_NOR_SMELTING02						//: Scroll of Weapon Smelting (V).
#define	__SYS_SCR_NOR_SMELTING03						//: Scroll of Weapon Smelting (P).
#define __SYS_SCR_PARTYPOINTFREE						//: Scroll of Party Amplification.
#define __SYS_SCR_PARTYSPEEDLEVELUP						//: Scroll of Party Growth.
#define __SYS_SYS_ARMOREFFECTCHANGE						//: Aura (7 days / 15 days).
#define __SYS_SYS_ITEMMODELRETURN						//: Revert Transmutation Scroll.
#define __TREASUREBOX									//: Retail like treasure box system.
#define __V21_GM_COMMANDS								//: Adds 2 brand new commands from the v21.2 retail source.
#define __V21_LEVELUP_SFX								//: The new updated look from v19+ level up sfx.
#define __V21_PREMIUM_BATTERY							//: This item allows you to have seperate collecting batteries with different results.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-