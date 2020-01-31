#ifndef __FFMPEG_MOVIES_H__
#define __FFMPEG_MOVIES_H__

#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#include <libswresample/swresample.h>
#include <windows.h>
#include <gl/glew.h>
#include <math.h>
#include <sys/timeb.h>
#include <dsound.h>
#include <dbghelp.h>

#include "../log.h"
#include "../types.h"

void ffmpeg_movie_init(void* plugin_draw_movie_quad_bgra, void* plugin_draw_movie_quad_yuv, bool plugin_skip_frames, bool plugin_movie_sync_debug);
void ffmpeg_release_movie_objects();
uint ffmpeg_prepare_movie(char* name);
void ffmpeg_stop_movie();
bool ffmpeg_update_movie_sample();
void ffmpeg_draw_current_frame();
void ffmpeg_loop();
uint ffmpeg_get_movie_frame();

#endif