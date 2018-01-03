#pragma once

#include "rdp.h"

#include <stdint.h>
#include <stdbool.h>

void screen_init(struct rdp_config* config);
void screen_swap(void);
void screen_upload(struct rdp_frame_buffer* fb, int32_t output_height);
void screen_download(struct rdp_frame_buffer* fb);
void screen_set_fullscreen(bool fullscreen);
bool screen_get_fullscreen(void);
void screen_toggle_fullscreen(void);
void screen_close(void);
