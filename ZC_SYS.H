//--------------------------------------------------------
//  Zelda Classic
//  by Jeremy Craner, 1999-2000
//
//  zc_sys.h
//
//  System functions, input handlers, GUI stuff, etc.
//  for Zelda Classic.
//
//--------------------------------------------------------

#ifndef _ZC_SYS_H_
#define _ZC_SYS_H_

#include "zdefs.h"
extern MENU the_menu[];

void large_dialog(DIALOG *d);
void large_dialog(DIALOG *d, float RESIZE_AMT);

bool game_vid_mode(int mode,int wait);
int Z_init_timers();
void Z_remove_timers();
void Z_init_sound();

void load_game_configs();
void save_game_configs();

void draw_lens_under(BITMAP *dest, bool layer);
void draw_lens_over();
void fix_menu();
int onFullscreenMenu();
void f_Quit(int type);
void advanceframe(bool allowwavy, bool sfxcleaup = true);
void updatescr(bool allowwavy);
void syskeys();
void System();
void system_pal();
void switch_out_callback();
void switch_in_callback();
void game_pal();
int  onSave();
int  onQuit();
int  onReset();
int  onExit();
void fix_dialogs();

int onCheatBombs();
int onCheatArrows();

int  next_press_key();
int  next_press_btn();
bool joybtn(int b);
bool ReadKey(int k);
void eat_buttons();

extern bool control_state[18];
extern bool button_press[18];

void load_control_state();

bool Up();
bool Down();
bool Left();
bool Right();
bool DrunkUp();
bool DrunkDown();
bool DrunkLeft();
bool DrunkRight();

bool rUp();
bool rDown();
bool rLeft();
bool rRight();
bool DrunkrUp();
bool DrunkrDown();
bool DrunkrLeft();
bool DrunkrRight();

bool cAbtn();
bool cBbtn();
bool cSbtn();
bool cMbtn();
bool cLbtn();
bool cRbtn();
bool cPbtn();
bool cEx1btn();
bool cEx2btn();
bool cEx3btn();
bool cEx4btn();
bool AxisUp();
bool AxisDown();
bool AxisLeft();
bool AxisRight();
bool DrunkcAbtn();
bool DrunkcBbtn();
bool DrunkcSbtn();
bool DrunkcMbtn();
bool DrunkcLbtn();
bool DrunkcRbtn();
bool DrunkcPbtn();

bool rAbtn();
bool rBbtn();
bool rSbtn();
bool rMbtn();
bool rLbtn();
bool rRbtn();
bool rPbtn();
bool rEx1btn();
bool rEx2btn();
bool rEx3btn();
bool rEx4btn();
bool rAxisUp();
bool rAxisDown();
bool rAxisLeft();
bool rAxisRight();
bool DrunkrAbtn();
bool DrunkrBbtn();
bool DrunkrSbtn();
bool DrunkrMbtn();
bool DrunkrLbtn();
bool DrunkrRbtn();
bool DrunkrPbtn();

int after_time();

void go();
void comeback();
void dump_pal(BITMAP *dest);
void show_paused(BITMAP *target);
void show_fps(BITMAP *target);
void show_saving(BITMAP *target);
bool game_vid_mode(int mode,int wait);
void init_NES_mode();

void zapout();
void zapin();
void wavyout(bool showlink);
void wavyin();
void blackscr(int fcnt,bool showsubscr);
void openscreen();
int  TriforceCount();

bool item_disabled(int item);
bool can_use_item(int item_type, int item);
bool has_item(int item_type, int item);
//int high_item(int jmax, int item_type, bool consecutive, int itemcluster, bool usecluster);
int current_item(int item_type);
int current_item(int item_type, bool checkenabled);
int current_item_power(int item_type);
int current_item_id(int item_type, bool checkmagic = true);
int high_flag(int i, int item_type, bool consecutive);
int item_tile_mod(bool unusedArg=true);
int dmap_tile_mod();

int  onSetSnapshotFormat();
void zc_putpixel(int layer, int x, int y, int cset, int color, int timer);
int onKeyboardEntry();
int onLetterGridEntry();
int onExtLetterGridEntry();

#ifdef ALLEGRO_LINUX_GP2X
extern int midi_strict;
#endif
#ifdef ALLEGRO_MACOSX
extern int midi_strict; //L
#endif
#endif                                                      // _ZC_SYS_H_

